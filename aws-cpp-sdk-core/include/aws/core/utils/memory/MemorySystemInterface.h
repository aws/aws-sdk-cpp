#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <cstdlib>

namespace Aws
{
namespace Utils
{
namespace Memory
{

class AWS_CORE_API MemorySystemInterface
{
    public:
        
        virtual ~MemorySystemInterface() {}

        virtual void Begin() = 0;
        virtual void End() = 0;

        virtual void* AllocateMemory(std::size_t blockSize, std::size_t alignment, const char *allocationTag = nullptr) = 0;
        virtual void FreeMemory(void* memoryPtr) = 0;

};

} // namespace Memory
} // namespace Utils
} // namespace Aws
