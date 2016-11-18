
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

#include <aws/core/utils/stream/PreallocatedStreamBuf.h>
#include <cassert>

namespace Aws
{
    namespace Utils
    {
        namespace Stream
        {
            PreallocatedStreamBuf::PreallocatedStreamBuf(Aws::Utils::Array<uint8_t>* buffer, std::size_t lengthToRead) :
                m_underlyingBuffer(buffer), m_lengthToRead(lengthToRead)
            {
                assert(m_lengthToRead <= m_underlyingBuffer->GetLength());
                char* end = reinterpret_cast<char*>(m_underlyingBuffer->GetUnderlyingData() + m_lengthToRead);
                char* begin = reinterpret_cast<char*>(m_underlyingBuffer->GetUnderlyingData());
                setp(begin, end);
                setg(begin, begin, end);
            }

            PreallocatedStreamBuf::pos_type PreallocatedStreamBuf::seekoff(off_type off, std::ios_base::seekdir dir, std::ios_base::openmode which)
            {
                if (dir == std::ios_base::beg)
                {
                    return seekpos(off, which);
                }
                else if (dir == std::ios_base::end)
                {
                    return seekpos(m_lengthToRead - off, which);
                }
                else if (dir == std::ios_base::cur)
                {
                    if(which == std::ios_base::in)
                    { 
                        return seekpos((gptr() - (char*)m_underlyingBuffer->GetUnderlyingData()) + off, which);
                    }
                    else
                    {
                        return seekpos((pptr() - (char*)m_underlyingBuffer->GetUnderlyingData()) + off, which);
                    }
                }

                return off_type(-1);
            }

            PreallocatedStreamBuf::pos_type PreallocatedStreamBuf::seekpos(pos_type pos, std::ios_base::openmode which)
            {
                assert(static_cast<size_t>(pos) <= m_lengthToRead);
                if (static_cast<size_t>(pos) > m_lengthToRead)
                {
                    return pos_type(off_type(-1));
                }

                char* end = reinterpret_cast<char*>(m_underlyingBuffer->GetUnderlyingData() + m_lengthToRead);
                char* begin = reinterpret_cast<char*>(m_underlyingBuffer->GetUnderlyingData());

                if (which == std::ios_base::in)
                {
                    setg(begin, begin + static_cast<size_t>(pos), end);                    
                }

                if (which == std::ios_base::out)
                {
                    setp(begin + static_cast<size_t>(pos), end);
                }

                return pos;
            }
        }
    }
}