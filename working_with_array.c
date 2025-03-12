#include<stdio.h>
int main()
{
	int numbers[100];
	for (int i = 0; i < 100; i++){
		numbers[i] = i + 1;
	}
	for(int i = 0; i < 100; i++){
		printf("%d \n", numbers[i]);
	}
	return 0;
}