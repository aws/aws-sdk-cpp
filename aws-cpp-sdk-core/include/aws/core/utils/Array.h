/*
  * Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <memory>
#include <cassert>

#ifdef _WIN32

#include <iterator>

#endif // _WIN32

namespace Aws
{
    namespace Utils
    {
        static const char* ARRAY_ALLOCATION_TAG = "Aws::Array";

        /**
         * Safe array class with move and copy semantics.
         */
        template<typename T>
        class Array
        {

        public:
            Array(size_t arraySize = 0) :
                m_size(arraySize),
                m_data(Aws::MakeUniqueArray<T>(arraySize, ARRAY_ALLOCATION_TAG))
            {
            }

            Array(const T* arrayToCopy, size_t arraySize) :
                m_size(arraySize),
                m_data(nullptr)
            {
                if (arrayToCopy != nullptr && m_size > 0)
                {
                    m_data.reset(Aws::NewArray<T>(m_size, ARRAY_ALLOCATION_TAG));

#ifdef _WIN32
                    std::copy(arrayToCopy, arrayToCopy + arraySize, stdext::checked_array_iterator< T * >(m_data.get(), m_size));
#else
                    std::copy(arrayToCopy, arrayToCopy + arraySize, m_data.get());
#endif // MSVC
                }
            }

            Array(const Array& other)
            {
                m_size = other.m_size;
                m_data = nullptr;

                if (m_size > 0)
                {
                    m_data.reset(Aws::NewArray<T>(m_size, ARRAY_ALLOCATION_TAG));

#ifdef _WIN32
                    std::copy(other.m_data.get(), other.m_data.get() + other.m_size, stdext::checked_array_iterator< T * >(m_data.get(), m_size));
#else
                    std::copy(other.m_data.get(), other.m_data.get() + other.m_size, m_data.get());
#endif // MSVC
                }
            }

            //move c_tor
            Array(Array&& other) :
                m_size(other.m_size),
                m_data(std::move(other.m_data))
            {
            }


            Array& operator=(const Array& other)
            {
                if (this == &other)
                {
                    return *this;
                }

                m_size = other.m_size;
                m_data = nullptr;

                if (m_size > 0)
                {
                    m_data.reset(Aws::NewArray<T>(m_size, ARRAY_ALLOCATION_TAG));

#ifdef _WIN32
                    std::copy(other.m_data.get(), other.m_data.get() + other.m_size, stdext::checked_array_iterator< T * >(m_data.get(), m_size));
#else
                    std::copy(other.m_data.get(), other.m_data.get() + other.m_size, m_data.get());
#endif // MSVC
                }

                return *this;
            }

            Array& operator=(Array&& other)
            {
                m_size = other.m_size;
                m_data = std::move(other.m_data);

                return *this;
            }

            bool operator==(const Array& other) const
            {
                if (this == &other)
                    return true;

                if (m_size == 0 && other.m_size == 0)
                {
                    return true;
                }

                if (m_size == other.m_size && m_data && other.m_data)
                {
                    for (unsigned i = 0; i < m_size; ++i)
                    {
                        if (m_data.get()[i] != other.m_data.get()[i])
                            return false;
                    }

                    return true;
                }

                return false;
            }

            bool operator!=(const Array& other) const
            {
                return !(*this == other);
            }

            T const& GetItem(size_t index) const
            {
                assert(index < m_size);
                return m_data.get()[index];
            }

            T& GetItem(size_t index)
            {
                assert(index < m_size);
                return m_data.get()[index];
            }

            T& operator[](size_t index)
            {
                return GetItem(index);
            }

            T const& operator[](size_t index) const
            {
                return GetItem(index);
            }

            inline size_t GetLength() const
            {
                return m_size;
            }

            inline T* GetUnderlyingData() const
            {
                return m_data.get();
            }

        private:
            size_t m_size;

            Aws::UniqueArrayPtr<T> m_data;
        };

        typedef Array<unsigned char> ByteBuffer;

    } // namespace Utils
} // namespace Aws
