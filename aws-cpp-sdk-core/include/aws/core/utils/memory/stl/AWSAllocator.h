#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/MemorySystemInterface.h>

#include <memory>
#include <cstdlib>

namespace Aws
{

#ifdef AWS_CUSTOM_MEMORY_MANAGEMENT

    template <typename T>
    class Allocator: public std::allocator<T>
    {
        public:

            typedef std::allocator<T> Base;

            Allocator() throw() : 
                Base()
            {}

            Allocator(const Allocator<T>& a) throw() :
                Base(a)
            {}

            template <class U>                    
            Allocator(const Allocator<U>& a) throw() :
                Base(a) 
            {}

            ~Allocator() throw() {}

            typedef std::size_t size_type;

            template<typename U>
            struct rebind
            {
                typedef Allocator<U> other;
            };

            typename Base::pointer allocate(size_type n, const void *hint = nullptr)
            {
                Aws::Utils::Memory::MemorySystemInterface* memorySystem = Aws::Utils::Memory::GetMemorySystem();
                if(memorySystem != nullptr)
                {
                    return reinterpret_cast<typename Base::pointer>(memorySystem->AllocateMemory(n * sizeof(T), 1, "AWSSTL"));
                }
                else
                {
                    return Base::allocate(n, hint);
                }
            }

            void deallocate(typename Base::pointer p, size_type n)
            {
                Aws::Utils::Memory::MemorySystemInterface* memorySystem = Aws::Utils::Memory::GetMemorySystem();
                if(memorySystem != nullptr)
                {
                    memorySystem->FreeMemory(p);
                }
                else
                {
                    Base::deallocate(p, n);
                }
            }

    };

#else

    template< typename T > using Allocator = std::allocator<T>;

#endif // AWS_CUSTOM_MEMORY_MANAGEMENT

template<typename T, typename ...ArgTypes>
std::shared_ptr<T> MakeShared(const char* allocationTag, ArgTypes&&... args)
{
    AWS_UNREFERENCED_PARAM(allocationTag);

    return std::allocate_shared<T, Aws::Allocator<T>>(Aws::Allocator<T>(), std::forward<ArgTypes>(args)...);
}

} // namespace Aws
