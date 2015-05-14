#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/MemorySystemInterface.h>

#include <memory>
#include <cstdlib>

namespace Aws
{
namespace Utils
{
namespace Memory
{

// InitializeAWSMemory should be called at the very start of your program
AWS_CORE_API void InitializeAWSMemorySystem(MemorySystemInterface& memorySystem);

// ShutdownAWSMemory should be called the very end of your program
AWS_CORE_API void ShutdownAWSMemorySystem(void);

AWS_CORE_API MemorySystemInterface* GetMemorySystem();

} // namespace Memory
} // namespace Utils

// ::new, ::delete, ::malloc, ::free, std::make_shared, and std::make_unique should not be used in SDK code
// use these functions instead or Aws::MakeShared
void* Malloc(const char* allocationTag, size_t allocationSize);
void Free(void* memoryPtr);

template<typename T, typename ...ArgTypes>
T* New(const char* allocationTag, ArgTypes&&... args)
{
    Aws::Utils::Memory::MemorySystemInterface* memorySystem = Aws::Utils::Memory::GetMemorySystem();
    if(memorySystem != nullptr)
    {
        void *rawMemory = memorySystem->AllocateMemory(sizeof(T), 1, allocationTag);
        T *constructedMemory = new (rawMemory) T(std::forward<ArgTypes>(args)...);
        return constructedMemory;
    }
    else
    {
        return new T(std::forward<ArgTypes>(args)...);
    }
}

template<typename T>
void Delete(T* pointerToT)
{
    if(pointerToT == nullptr)
    {
        return;
    }

    Aws::Utils::Memory::MemorySystemInterface* memorySystem = Aws::Utils::Memory::GetMemorySystem();
    if(memorySystem != nullptr)
    {
        pointerToT->~T();
        memorySystem->FreeMemory(pointerToT);
    }
    else
    {
        delete pointerToT;
    }
}

template<typename T>
bool ShouldConstructArrayMembers()
{
    return std::is_class<T>::value;
}

template<typename T>
bool ShouldDestroyArrayMembers()
{
    return !std::is_trivially_destructible<T>::value;
}

template<typename T>
T* NewArray(std::size_t amount, const char* allocationTag)
{
    if(amount > 0)
    {
        Aws::Utils::Memory::MemorySystemInterface* memorySystem = Aws::Utils::Memory::GetMemorySystem();
        if(memorySystem != nullptr)
        {
            bool constructMembers = ShouldConstructArrayMembers<T>();
            bool trackMemberCount = ShouldDestroyArrayMembers<T>();

            // if we need to remember the # of items in the array (because we need to call their destructors) then allocate extra memory and keep the # of items in the extra slot
            std::size_t allocationSize = amount * sizeof(T);
            if(trackMemberCount)
            {
                allocationSize += sizeof(std::size_t);
            }

            void* rawMemory = memorySystem->AllocateMemory(allocationSize, 1, allocationTag);
            T* pointerToT = nullptr;

            if(trackMemberCount)
            {
                std::size_t* pointerToAmount = reinterpret_cast<std::size_t*>(rawMemory);
                *pointerToAmount = amount;
                pointerToT = reinterpret_cast<T*>(reinterpret_cast<void*>(pointerToAmount + 1));
            }
            else
            {
                pointerToT = reinterpret_cast<T*>(rawMemory);
            } 
            
            if(constructMembers)
            {
                for(std::size_t i = 0; i < amount; ++i)
                {
                    new (pointerToT + i) T;
                }
            }

            return pointerToT;
        }
        else
        {
            return new T[amount];
        }
    }
    
    return nullptr;
}

template<typename T>
void DeleteArray(T* pointerToTArray)
{
    if(pointerToTArray == nullptr)
    {
        return;
    }

    Aws::Utils::Memory::MemorySystemInterface* memorySystem = Aws::Utils::Memory::GetMemorySystem();
    if(memorySystem != nullptr)
    {
        bool destroyMembers = ShouldDestroyArrayMembers<T>();
        void* rawMemory = nullptr;

        if(destroyMembers)
        {
            std::size_t *pointerToAmount = reinterpret_cast<std::size_t *>(reinterpret_cast<void *>(pointerToTArray)) - 1;
            std::size_t amount = *pointerToAmount;

            for(std::size_t i = amount; i > 0; --i)
            {
                (pointerToTArray + i - 1)->~T();
            }
            rawMemory = reinterpret_cast<void *>(pointerToAmount);
        }
        else
        {
            rawMemory = reinterpret_cast<void *>(pointerToTArray);
        }

        memorySystem->FreeMemory(rawMemory);
    }
    else
    {
        delete []pointerToTArray;
    }
}

// modeled from std::default_delete
template<typename T>
struct Deleter
{	
		Deleter() {}

		template<class U, class = typename std::enable_if<std::is_convertible<U *, T *>::value, void>::type>
		Deleter(const Deleter<U>&)
		{
		}

		void operator()(T *pointerToT) const
		{	
	  	  static_assert(0 < sizeof (T), "can't delete an incomplete type");
	  	  Aws::Delete(pointerToT);
		}
};

template< typename T > using UniquePtr = std::unique_ptr< T, Deleter< T > >;

template<typename T, typename ...ArgTypes>
UniquePtr<T> MakeUnique(const char* allocationTag, ArgTypes&&... args)
{
    return UniquePtr<T>(Aws::New<T>(allocationTag, std::forward<ArgTypes>(args)...));
}

template<typename T>
struct ArrayDeleter
{	
		ArrayDeleter() {}

		template<class U, class = typename std::enable_if<std::is_convertible<U *, T *>::value, void>::type>
		ArrayDeleter(const ArrayDeleter<U>&)
		{
		}

		void operator()(T *pointerToTArray) const
		{	
	  	  static_assert(0 < sizeof (T), "can't delete an incomplete type");
	  	  Aws::DeleteArray(pointerToTArray);
		}
};

template< typename T > using UniqueArrayPtr = std::unique_ptr< T, ArrayDeleter< T > >;

template<typename T, typename ...ArgTypes>
UniqueArrayPtr<T> MakeUniqueArray(std::size_t amount, const char* allocationTag, ArgTypes&&... args)
{
    return UniqueArrayPtr<T>(Aws::NewArray<T>(amount, allocationTag, std::forward<ArgTypes>(args)...));
}

} // namespace Aws
