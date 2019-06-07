/*
* Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/external/gtest.h>
#include <aws/event-stream/event_stream.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/testing/mocks/event/MockEventStreamHandler.h>
#include <aws/testing/mocks/event/MockEventStreamDecoder.h>
#include <aws/core/utils/memory/AWSMemory.h>

namespace
{
    using namespace Aws::Utils;
    using namespace Aws::Utils::Event;
    using namespace Aws::Utils::Stream;
    using namespace Aws::Http;
    using namespace Aws::Http::Standard;
    using namespace Aws::Client;

    const static char ALLOCATION_TAG[] = "EventStreamTests";
    const static char ERROR_RAW[] = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
                                    "<Error>"
                                    "<Code>IncompleteSignatureException</Code>"
                                    "<Message>Message</Message>"
                                    "<Resource>Resource</Resource>"
                                    "<RequestId>RequestId</RequestId>"
                                    "</Error>";

    class EventStreamTest : public ::testing::Test
    {
    public:
        static aws_event_stream_message eventStreamMessage;
        static aws_array_list eventStreamHeaders;

    protected:
        static void SetUpTestCase()
        {
            // Assemble Records Message
            // Headers
            ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_headers_list_init(&eventStreamHeaders, Aws::get_aws_allocator()));
            Aws::Http::HeaderValueCollection headers;
            headers.insert(Aws::Http::HeaderValuePair(":event-type", "Records"));
            headers.insert(Aws::Http::HeaderValuePair(":content-type", "application/octet-stream"));
            headers.insert(Aws::Http::HeaderValuePair(":message-type", "event"));
            for (const auto& header : headers)
            {
                ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_add_string_header(&eventStreamHeaders, header.first.c_str(),
                            static_cast<uint8_t>(header.first.size()),
                            header.second.c_str(), static_cast<uint16_t>(header.second.size()), false/*copy*/));
            }
            // Payload
            const char* payload = "Records";
            aws_byte_buf payloadBuf = aws_byte_buf_from_array(reinterpret_cast<const uint8_t*>(payload), strlen(payload));
            ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_message_init(&eventStreamMessage, Aws::get_aws_allocator(), &eventStreamHeaders, &payloadBuf));
        }

        static void TearDownTestCase()
        {
            aws_event_stream_message_clean_up(&eventStreamMessage);
            aws_event_stream_headers_list_cleanup(&eventStreamHeaders);
        }
    };

    aws_event_stream_message EventStreamTest::eventStreamMessage;
    aws_array_list EventStreamTest::eventStreamHeaders;

    TEST_F(EventStreamTest, TestEventStreamDestructor)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        const uint8_t* data_raw = aws_event_stream_message_buffer(&eventStreamMessage);
        {
            EventDecoderStream stream(decoder);
            stream.write(reinterpret_cast<const char*>(data_raw), aws_event_stream_message_total_length(&eventStreamMessage));
        }

        ASSERT_EQ(1u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(1u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(1u, handler.m_onRecordsCount);
    }

    TEST_F(EventStreamTest, TestEventStreamFlush)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        const uint8_t* data_raw = aws_event_stream_message_buffer(&eventStreamMessage);
        EventDecoderStream stream(decoder);

        size_t preludeLength = 4/*total byte-length*/ + 4/*headers byte-length*/ + 4/*prelude crc*/;
        size_t headersLength = aws_event_stream_message_headers_len(&eventStreamMessage);
        size_t payloadLength = aws_event_stream_message_payload_len(&eventStreamMessage);

        // Write prelude and headers to stream.
        size_t partialLength = preludeLength + headersLength;

        stream.write(reinterpret_cast<const char*>(data_raw), partialLength);
        stream.flush();

        ASSERT_EQ(0u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(0u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(0u, handler.m_onRecordsCount);

        // Write payload to stream.
        data_raw += partialLength;
        partialLength = payloadLength + 4/*message crc*/;

        stream.write(reinterpret_cast<const char*>(data_raw), partialLength);
        stream.flush();

        ASSERT_EQ(1u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(1u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(1u, handler.m_onRecordsCount);
    }

    TEST_F(EventStreamTest, TestEventStreamLargePayload)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        const uint8_t* data_raw = aws_event_stream_message_buffer(&eventStreamMessage);
        size_t totalLength = aws_event_stream_message_total_length(&eventStreamMessage);
        EventDecoderStream stream(decoder, totalLength / 2);

        stream.write(reinterpret_cast<const char*>(data_raw), totalLength);
        stream.flush();

        ASSERT_EQ(1u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(1u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(1u, handler.m_onRecordsCount);
    }

    TEST_F(EventStreamTest, TestXmlErrorPayloadWithAwsString)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        EventDecoderStream stream(decoder);
        stream.write(ERROR_RAW, sizeof(ERROR_RAW));
        stream.flush();

        Aws::StringStream ss;
        ss << stream.rdbuf();
        ASSERT_STREQ(ERROR_RAW, ss.str().c_str());

        ASSERT_EQ(0u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(0u, handler.m_onCompletePayloadCount);
        // Underlying Event Stream Decoder will parse xml error unsuccessfully, and take it as a prelude with CRC mismatch error.
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(0u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(1u, handler.m_internalErrorsCount);
        ASSERT_EQ(EventStreamErrors::EVENT_STREAM_PRELUDE_CHECKSUM_FAILURE, handler.m_error);
        ASSERT_TRUE(handler.m_errorMessage.find("CRC Mismatch.") == 0);
    }

    TEST_F(EventStreamTest, TestXmlErrorPayloadWithAwsErrorMarshaller)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        auto stream = Aws::New<EventDecoderStream>(ALLOCATION_TAG, decoder);
        stream->write(ERROR_RAW, sizeof(ERROR_RAW));
        stream->flush();

        auto fakeRequest = Aws::MakeShared<StandardHttpRequest>(ALLOCATION_TAG,
            "/some/uri", Aws::Http::HttpMethod::HTTP_POST);
        fakeRequest->SetResponseStreamFactory([=] { return stream; });

        StandardHttpResponse response(fakeRequest);

        XmlErrorMarshaller awsErrorMarshaller;
        AWSError<CoreErrors> error = awsErrorMarshaller.Marshall(response);

        ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
        ASSERT_STREQ("IncompleteSignatureException", error.GetExceptionName().c_str());
        ASSERT_STREQ("Message", error.GetMessage().c_str());
        ASSERT_FALSE(error.ShouldRetry());

        ASSERT_EQ(0u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(0u, handler.m_onCompletePayloadCount);
        // Underlying Event Stream Decoder will parse xml error unsuccessfully, and take it as a prelude with CRC mismatch error.
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(0u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(1u, handler.m_internalErrorsCount);
        ASSERT_EQ(EventStreamErrors::EVENT_STREAM_PRELUDE_CHECKSUM_FAILURE, handler.m_error);
        ASSERT_TRUE(handler.m_errorMessage.find("CRC Mismatch.") == 0);
    }

    TEST_F(EventStreamTest, TestEncodingEvents)
    {
        Aws::Client::AWSNullSigner nullSigner;
        EventEncoderStream io;
        io.SetSigner(&nullSigner);
        const char payloadString[] = "Amazon Web Services, Inc.";
        io.SetSignatureSeed("deadbeef");
        constexpr long iterations = 5;
        for (int i = 0; i < iterations; i++)
        {
            io.write(payloadString, sizeof(payloadString));
        }

        io.flush();
        io.Close();
        ASSERT_TRUE(io);

        char output[1024];
        io.read(output, sizeof(output));
        ASSERT_GE(io.gcount(), static_cast<long>(sizeof(payloadString) * iterations));
        ASSERT_TRUE(io.eof());
    }

    TEST_F(EventStreamTest, EncodingEventsDecodesCorrectly)
    {
        struct MockHandler : Aws::Utils::Event::EventStreamHandler
        {
            void OnEvent() override { m_payloads.push_back(GetEventPayloadAsString()); }

            Aws::Vector<Aws::String> GetPayload() const { return m_payloads; }

            Aws::Vector<Aws::String> m_payloads;
        };

        // write the payload to the stream and create an event out of it
        Aws::Client::AWSNullSigner nullSigner;
        EventEncoderStream io;
        io.SetSigner(&nullSigner);
        io.SetSignatureSeed("deadbeef");
        const char payloadString[] = "Amazon Web Services, Inc.";
        Event::Message msg;
        msg.InsertEventHeader(":message-type", Aws::String("event"));
        msg.WriteEventPayload(payloadString);
        io.WriteEvent(msg);

        io.flush();
        io.Close();
        ASSERT_TRUE(io);

        // read the event bits and attempt to deserialize them
        char output[1024];
        io.read(output, sizeof(output));
        ASSERT_TRUE(io.eof());

        // verify that we get the same message out
        MockHandler handler;
        EventStreamDecoder decoder(&handler);
        EventDecoderStream s(decoder);
        s.write(output, io.gcount());
        s.flush();
        ASSERT_EQ(1u, handler.m_payloads.size()); // this verifies we received the signed message
        s.write(handler.m_payloads[0].data(), handler.m_payloads[0].length()); // unwrap the signed message to get the
                                                                               // actual message
        s.flush();
        ASSERT_EQ(2u, handler.m_payloads.size());
        ASSERT_STREQ(payloadString, handler.m_payloads[1].c_str());
    }
}
