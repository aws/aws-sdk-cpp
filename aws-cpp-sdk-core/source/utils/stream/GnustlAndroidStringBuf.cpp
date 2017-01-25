
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

#include <aws/core/utils/stream/GnustlAndroidStringBuf.h>
#include <cassert>

namespace Aws
{
namespace Utils
{
namespace Stream
{

static const uint32_t DEFAULT_BUFFER_SIZE = 100;
static const char* GNU_ANDROID_ALLOCATION_TAG = "GnustlAndroidStringBufTag";

GnustlAndroidStringBuf::GnustlAndroidStringBuf() :
    m_buffer(nullptr),
    m_bufferSize(0)
{
    m_buffer = Aws::NewArray<char>(DEFAULT_BUFFER_SIZE, GNU_ANDROID_ALLOCATION_TAG);
    m_bufferSize = DEFAULT_BUFFER_SIZE;

    char* begin = m_buffer;
    char* end = begin + m_bufferSize;

    setp(begin, end);
    setg(begin, begin, begin);
}

GnustlAndroidStringBuf::~GnustlAndroidStringBuf()
{
    if(m_buffer)
    {
        Aws::DeleteArray<char>(m_buffer);
        m_buffer = nullptr;
    }

    m_bufferSize = 0;
}

GnustlAndroidStringBuf::pos_type GnustlAndroidStringBuf::seekoff(off_type off, std::ios_base::seekdir dir, std::ios_base::openmode which)
{
    if (dir == std::ios_base::beg)
    {
        return seekpos(off, which);
    }
    else if (dir == std::ios_base::end)
    {
        return seekpos((pptr() - m_buffer) - off, which);
    }
    else if (dir == std::ios_base::cur)
    {
        if(which == std::ios_base::in)
        { 
            return seekpos((gptr() - m_buffer) + off, which);
        }
        else
        {
            return seekpos((pptr() - m_buffer) + off, which);
        }
    }

    return off_type(-1);
}

GnustlAndroidStringBuf::pos_type GnustlAndroidStringBuf::seekpos(pos_type pos, std::ios_base::openmode which)
{
    size_t maxSeek = pptr() - m_buffer;
    assert(static_cast<size_t>(pos) <= maxSeek);
    if (static_cast<size_t>(pos) > maxSeek)
    {
        return pos_type(off_type(-1));
    }

    char* begin = m_buffer;
    char* end = begin + maxSeek;

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

bool GnustlAndroidStringBuf::GrowBuffer()
{
    size_t currentSize = m_bufferSize;
    size_t newSize = currentSize + currentSize / 2 + 1;

    char* newBuffer = Aws::NewArray<char>(newSize, GNU_ANDROID_ALLOCATION_TAG);
    if(newBuffer == nullptr)
    {
        return false;
    }

    if(currentSize > 0)
    {
        memcpy(newBuffer, m_buffer, currentSize);
    }

    if(m_buffer)
    {
        Aws::DeleteArray<char>(m_buffer);
    }

    m_buffer = newBuffer;
    m_bufferSize = newSize;

    return true;
}

int GnustlAndroidStringBuf::overflow (int c)
{
    auto endOfFile = std::char_traits< char >::eof();
    if(c == endOfFile)
    {
        return endOfFile;
    }

    char* old_begin = m_buffer;

    char *old_pptr = pptr();
    char *old_gptr = gptr();
    char *old_egptr = egptr();

    size_t currentWritePosition = m_bufferSize;

    if(!GrowBuffer())
    {
        return endOfFile;
    }

    char* new_begin = m_buffer;
    char* new_end = new_begin + m_bufferSize;

    setp(new_begin + (old_pptr - old_begin) + 1, new_end);
    setg(new_begin, new_begin + (old_gptr - old_begin), new_begin + (old_egptr - old_begin));

    auto val = std::char_traits< char >::to_char_type(c);
    *(new_begin + currentWritePosition) = val;

    return c;
}

Aws::String GnustlAndroidStringBuf::str()
{
    return Aws::String(m_buffer, pptr());
}

int GnustlAndroidStringBuf::underflow()
{
    if(egptr() != pptr())
    {
        setg(m_buffer, gptr(), pptr());
    }

    if(gptr() != egptr())
    {
        return std::char_traits< char >::to_int_type(*gptr());
    }
    else
    {
        return std::char_traits< char >::eof();
    }
}

}
}
}