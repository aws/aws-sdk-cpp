/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 * 
 *  http://aws.amazon.com/apache2.0
 * 
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

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
