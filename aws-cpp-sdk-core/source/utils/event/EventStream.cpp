/*
 * Copyright 2010-2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/event/EventStream.h>
#include <iostream>

namespace Aws
{
    namespace Utils
    {
        namespace Event
        {
            EventStream::EventStream(EventStreamDecoder& decoder, size_t bufferSize) :
                Aws::IOStream(&m_eventStreamBuf),
                m_eventStreamBuf(decoder, bufferSize)

            {
            }

            EventEncoderStream::EventEncoderStream(size_t bufferSize) :
                Aws::IOStream(&m_streambuf),
                m_streambuf(bufferSize)
            {
            }

            EventEncoderStream& EventEncoderStream::WriteEvent(const Aws::Utils::Event::Message& msg)
            {
                auto bits = m_encoder.EncodeAndSign(msg);
                write(reinterpret_cast<char*>(bits.data()), bits.size());
                return *this;
            }
        }
    }
}
