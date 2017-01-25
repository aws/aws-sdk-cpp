
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <streambuf>

namespace Aws
{
namespace Utils
{
namespace Stream
{
    /**
    * A replacement for std::stringbuf when using Android and gnustl together
    */
    class AWS_CORE_API GnustlAndroidStringBuf : public std::streambuf
    {
        public:
            /**
            * Initialize the stream buffer with a pointer to your buffer. This class never takes ownership
            * of the buffer. It is your responsibility to delete it once the stream is no longer in use.
            * @param buffer buffer to initialize from.
            * @param lengthToRead length in bytes to actually use in the buffer (e.g. you have a 1kb buffer, but only want the stream
            * to see 500 b of it.
            */
            GnustlAndroidStringBuf();

            GnustlAndroidStringBuf(const GnustlAndroidStringBuf&) = delete;
            GnustlAndroidStringBuf& operator=(const GnustlAndroidStringBuf&) = delete;

            GnustlAndroidStringBuf(GnustlAndroidStringBuf&& toMove) = delete;
            GnustlAndroidStringBuf& operator=(GnustlAndroidStringBuf&&) = delete;

            virtual ~GnustlAndroidStringBuf();

            Aws::String str();

        protected:
            virtual pos_type seekoff(off_type off, std::ios_base::seekdir dir, std::ios_base::openmode which = std::ios_base::in | std::ios_base::out) override;
            virtual pos_type seekpos(pos_type pos, std::ios_base::openmode which = std::ios_base::in | std::ios_base::out) override;

            virtual int overflow (int c = EOF) override;
            virtual int underflow() override;

        private:

            bool GrowBuffer();

            char* m_buffer;
            size_t m_bufferSize;
    };

}
}
}
