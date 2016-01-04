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
                AWS_UNREFERENCED_PARAM(hint);

                return reinterpret_cast<typename Base::pointer>(Malloc("AWSSTL", n * sizeof(T)));
            }

            void deallocate(typename Base::pointer p, size_type n)
            {
                AWS_UNREFERENCED_PARAM(n);

                Free(p);
            }

    };

#ifdef __ANDROID__

    template< typename T >
    bool operator ==( const Allocator< T >& lhs, const Allocator< T >& rhs )
    {
        return false;
    }
#endif // __ANDROID__

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
