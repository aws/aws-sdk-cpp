
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
#include <aws/core/utils/Array.h>
#include <streambuf>

namespace Aws
{
    namespace Utils
    {
        namespace Stream
        {
            class AWS_CORE_API PreallocatedStreamBuf : std::streambuf
            {
            public:
                PreallocatedStreamBuf(Aws::Utils::Array<uint8_t>* buffer, std::size_t lengthToRead);

                PreallocatedStreamBuf(const PreallocatedStreamBuf&) = delete;
                PreallocatedStreamBuf& operator=(const PreallocatedStreamBuf&) = delete;

                PreallocatedStreamBuf(PreallocatedStreamBuf&& toMove) = delete;
                PreallocatedStreamBuf& operator=(PreallocatedStreamBuf&&) = delete;

                Aws::Utils::Array<uint8_t>* GetBuffer() { return m_underlyingBuffer; }

            protected:
                pos_type seekoff(off_type off, std::ios_base::seekdir dir, std::ios_base::openmode which = std::ios_base::in | std::ios_base::out) override;
                pos_type seekpos(pos_type pos, std::ios_base::openmode which = std::ios_base::in | std::ios_base::out) override;

            private:
                Aws::Utils::Array<uint8_t>* m_underlyingBuffer;
                std::size_t m_lengthToRead;
            };
        }
    }
}
