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
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/testing/mocks/event/MockEventStreamHandler.h>
#include <aws/testing/mocks/event/MockEventStreamDecoder.h>
#include <aws/core/utils/memory/AWSMemory.h>

namespace
{
    using namespace Aws::Utils;
    using namespace Aws::Utils::Event;

    void GenerateEventStreamMessage(aws_event_stream_message* message, const Aws::Http::HeaderValueCollection& headers, const char* payload = "") {
        aws_array_list eventStreamHeaders;

        // Assemble Records Message
        // Headers
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_headers_list_init(&eventStreamHeaders, Aws::get_aws_allocator()));
        for (const auto& header : headers)
        {
            ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_add_string_header(&eventStreamHeaders, header.first.c_str(), static_cast<uint8_t>(header.first.size()),
                header.second.c_str(), static_cast<uint16_t>(header.second.size()), 1/*copy*/));
        }

        // Payload
        aws_byte_buf payloadBuf = aws_byte_buf_from_array(reinterpret_cast<const uint8_t*>(payload), strlen(payload));
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_message_init(message, aws_default_allocator(), &eventStreamHeaders, &payloadBuf));
        // It's safe to delete headers, since everything is copied to message.
        aws_event_stream_headers_list_cleanup(&eventStreamHeaders);
    }

    TEST(EventStreamDecoderTest, EventStreamHeaderValueTest)
    {
        aws_array_list headers;
        aws_event_stream_header_value_pair eventHeader;

        // BOOL_TRUE
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_headers_list_init(&headers, Aws::get_aws_allocator()));
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_add_bool_header(&headers, "foo", 3, 1/*true*/));
        ASSERT_EQ(1u, headers.length);
        ASSERT_EQ(AWS_OP_SUCCESS, aws_array_list_front(&headers, &eventHeader));
        ASSERT_TRUE(EventHeaderValue(&eventHeader).GetEventHeaderValueAsBoolean());
        aws_event_stream_headers_list_cleanup(&headers);

        // BOOL_FALSE
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_headers_list_init(&headers, Aws::get_aws_allocator()));
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_add_bool_header(&headers, "foo", 3, 0/*false*/));
        ASSERT_EQ(1u, headers.length);
        ASSERT_EQ(AWS_OP_SUCCESS, aws_array_list_front(&headers, &eventHeader));
        ASSERT_FALSE(EventHeaderValue(&eventHeader).GetEventHeaderValueAsBoolean());
        aws_event_stream_headers_list_cleanup(&headers);

        // BYTE
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_headers_list_init(&headers, Aws::get_aws_allocator()));
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_add_byte_header(&headers, "foo", 3, static_cast<uint8_t>(100)));
        ASSERT_EQ(1u, headers.length);
        ASSERT_EQ(AWS_OP_SUCCESS, aws_array_list_front(&headers, &eventHeader));
        ASSERT_EQ(static_cast<uint8_t>(100), EventHeaderValue(&eventHeader).GetEventHeaderValueAsByte());
        aws_event_stream_headers_list_cleanup(&headers);

        // INT16
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_headers_list_init(&headers, Aws::get_aws_allocator()));
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_add_int16_header(&headers, "foo", 3, static_cast<int16_t>(1000)));
        ASSERT_EQ(1u, headers.length);
        ASSERT_EQ(AWS_OP_SUCCESS, aws_array_list_front(&headers, &eventHeader));
        ASSERT_EQ(static_cast<int16_t>(1000), EventHeaderValue(&eventHeader).GetEventHeaderValueAsInt16());
        aws_event_stream_headers_list_cleanup(&headers);

        // INT32
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_headers_list_init(&headers, Aws::get_aws_allocator()));
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_add_int32_header(&headers, "foo", 3, static_cast<int32_t>(10000)));
        ASSERT_EQ(1u, headers.length);
        ASSERT_EQ(AWS_OP_SUCCESS, aws_array_list_front(&headers, &eventHeader));
        ASSERT_EQ(static_cast<int32_t>(10000), EventHeaderValue(&eventHeader).GetEventHeaderValueAsInt32());
        aws_event_stream_headers_list_cleanup(&headers);

        // INT64
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_headers_list_init(&headers, Aws::get_aws_allocator()));
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_add_int64_header(&headers, "foo", 3, static_cast<int64_t>(100000)));
        ASSERT_EQ(1u, headers.length);
        ASSERT_EQ(AWS_OP_SUCCESS, aws_array_list_front(&headers, &eventHeader));
        ASSERT_EQ(static_cast<int64_t>(100000), EventHeaderValue(&eventHeader).GetEventHeaderValueAsInt64());
        aws_event_stream_headers_list_cleanup(&headers);

        // BYTE_BUF
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_headers_list_init(&headers, Aws::get_aws_allocator()));
        uint8_t value[] = {1, 2, 3};
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_add_bytebuf_header(&headers, "foo", 3, value, 3, 0/*no copy*/));
        ASSERT_EQ(1u, headers.length);
        ASSERT_EQ(AWS_OP_SUCCESS, aws_array_list_front(&headers, &eventHeader));
        ByteBuffer expectedBuf = ByteBuffer(value, 3);
        ASSERT_EQ(expectedBuf, EventHeaderValue(&eventHeader).GetEventHeaderValueAsBytebuf());
        aws_event_stream_headers_list_cleanup(&headers);

        // STRING
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_headers_list_init(&headers, Aws::get_aws_allocator()));
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_add_string_header(&headers, "foo", 3, "test", 4, 0/*no copy*/));
        ASSERT_EQ(1u, headers.length);
        ASSERT_EQ(AWS_OP_SUCCESS, aws_array_list_front(&headers, &eventHeader));
        ASSERT_EQ("test", EventHeaderValue(&eventHeader).GetEventHeaderValueAsString());
        aws_event_stream_headers_list_cleanup(&headers);

        // TIMESTAMP
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_headers_list_init(&headers, Aws::get_aws_allocator()));
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_add_timestamp_header(&headers, "foo", 3, static_cast<int64_t>(1000000)));
        ASSERT_EQ(1u, headers.length);
        ASSERT_EQ(AWS_OP_SUCCESS, aws_array_list_front(&headers, &eventHeader));
        ASSERT_EQ(static_cast<int64_t>(1000000), EventHeaderValue(&eventHeader).GetEventHeaderValueAsTimestamp());
        aws_event_stream_headers_list_cleanup(&headers);

        // UUID
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_headers_list_init(&headers, Aws::get_aws_allocator()));
        uint8_t uuid[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
        ASSERT_EQ(AWS_OP_SUCCESS, aws_event_stream_add_uuid_header(&headers, "foo", 3, uuid));
        ASSERT_EQ(1u, headers.length);
        ASSERT_EQ(AWS_OP_SUCCESS, aws_array_list_front(&headers, &eventHeader));
        Aws::String expectedUuidStr = Aws::String(Aws::Utils::UUID(uuid));
        ASSERT_EQ(expectedUuidStr, Aws::String(EventHeaderValue(&eventHeader).GetEventHeaderValueAsUuid()));
        aws_event_stream_headers_list_cleanup(&headers);
    }

    TEST(EventStreamDecoderTest, RecordsEventMessageTest)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        aws_event_stream_message recordsMessage;
        Aws::Http::HeaderValueCollection headers;
        headers.insert(Aws::Http::HeaderValuePair(":event-type", "Records"));
        headers.insert(Aws::Http::HeaderValuePair(":content-type", "application/octet-stream"));
        headers.insert(Aws::Http::HeaderValuePair(":message-type", "event"));
        Aws::String payload = "Records";
        GenerateEventStreamMessage(&recordsMessage, headers, payload.c_str());

        const uint8_t* data_raw = aws_event_stream_message_buffer(&recordsMessage);
        ByteBuffer data(data_raw, static_cast<size_t>(aws_event_stream_message_total_length(&recordsMessage)));
        decoder.Pump(data);

        ASSERT_EQ(1u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(1u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(1u, handler.m_onRecordsCount);
        ASSERT_EQ(0u, handler.m_onContCount);
        ASSERT_EQ(0u, handler.m_onProgressCount);
        ASSERT_EQ(0u, handler.m_onStatsCount);
        ASSERT_EQ(0u, handler.m_onEndCount);

        aws_event_stream_message_clean_up(&recordsMessage);
    }

    TEST(EventStreamDecoderTest, ContEventMessageTest)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        aws_event_stream_message contMessage;
        Aws::Http::HeaderValueCollection headers;
        headers.insert(Aws::Http::HeaderValuePair(":event-type", "Cont"));
        headers.insert(Aws::Http::HeaderValuePair(":message-type", "event"));
        GenerateEventStreamMessage(&contMessage, headers);

        const uint8_t* data_raw = aws_event_stream_message_buffer(&contMessage);
        ByteBuffer data(data_raw, static_cast<size_t>(aws_event_stream_message_total_length(&contMessage)));
        decoder.Pump(data);

        ASSERT_EQ(0u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(0u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(2u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(0u, handler.m_onRecordsCount);
        ASSERT_EQ(1u, handler.m_onContCount);
        ASSERT_EQ(0u, handler.m_onProgressCount);
        ASSERT_EQ(0u, handler.m_onStatsCount);
        ASSERT_EQ(0u, handler.m_onEndCount);

        aws_event_stream_message_clean_up(&contMessage);
    }

    TEST(EventStreamDecoderTest, ProgressEventMessageTest)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        aws_event_stream_message progressMessage;
        Aws::Http::HeaderValueCollection headers;
        headers.insert(Aws::Http::HeaderValuePair(":event-type", "Progress"));
        headers.insert(Aws::Http::HeaderValuePair(":content-type", "text/xml"));
        headers.insert(Aws::Http::HeaderValuePair(":message-type", "event"));
        Aws::String progressPayload =
            "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
            <Progress>\
                <BytesScanned>512</BytesScanned>\
                <BytesProcessed>1024</BytesProcessed>\
                <BytesReturned>1024</BytesReturned>\
            </Progress>";
        GenerateEventStreamMessage(&progressMessage, headers, progressPayload.c_str());

        const uint8_t* data_raw = aws_event_stream_message_buffer(&progressMessage);
        ByteBuffer data(data_raw, aws_event_stream_message_total_length(&progressMessage));
        decoder.Pump(data);

        ASSERT_EQ(1u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(1u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(0u, handler.m_onRecordsCount);
        ASSERT_EQ(0u, handler.m_onContCount);
        ASSERT_EQ(1u, handler.m_onProgressCount);
        ASSERT_EQ(0u, handler.m_onStatsCount);
        ASSERT_EQ(0u, handler.m_onEndCount);

        aws_event_stream_message_clean_up(&progressMessage);
    }

    TEST(EventStreamDecoderTest, StatsEventMessageTest)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        aws_event_stream_message statsMessage;
        Aws::Http::HeaderValueCollection headers;
        headers.insert(Aws::Http::HeaderValuePair(":event-type", "Stats"));
        headers.insert(Aws::Http::HeaderValuePair(":content-type", "text/xml"));
        headers.insert(Aws::Http::HeaderValuePair(":message-type", "event"));
        Aws::String statsPayload =
            "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
            <Stats>\
                <BytesScanned>512</BytesScanned>\
                <BytesProcessed>1024</BytesProcessed>\
                <BytesReturned>1024</BytesReturned>\
            </Stats>";
        GenerateEventStreamMessage(&statsMessage, headers, statsPayload.c_str());

        const uint8_t* data_raw = aws_event_stream_message_buffer(&statsMessage);
        ByteBuffer data(data_raw, aws_event_stream_message_total_length(&statsMessage));
        decoder.Pump(data);

        ASSERT_EQ(1u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(1u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(0u, handler.m_onRecordsCount);
        ASSERT_EQ(0u, handler.m_onContCount);
        ASSERT_EQ(0u, handler.m_onProgressCount);
        ASSERT_EQ(1u, handler.m_onStatsCount);
        ASSERT_EQ(0u, handler.m_onEndCount);

        aws_event_stream_message_clean_up(&statsMessage);
    }

    TEST(EventStreamDecoderTest, EndEventMessageTest)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        aws_event_stream_message endMessage;
        Aws::Http::HeaderValueCollection headers;
        headers.insert(Aws::Http::HeaderValuePair(":event-type", "End"));
        headers.insert(Aws::Http::HeaderValuePair(":message-type", "event"));
        GenerateEventStreamMessage(&endMessage, headers);

        const uint8_t* data_raw = aws_event_stream_message_buffer(&endMessage);
        ByteBuffer data(data_raw, aws_event_stream_message_total_length(&endMessage));
        decoder.Pump(data);

        ASSERT_EQ(0u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(0u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(2u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(0u, handler.m_onRecordsCount);
        ASSERT_EQ(0u, handler.m_onContCount);
        ASSERT_EQ(0u, handler.m_onProgressCount);
        ASSERT_EQ(0u, handler.m_onStatsCount);
        ASSERT_EQ(1u, handler.m_onEndCount);

        aws_event_stream_message_clean_up(&endMessage);
    }

    TEST(EventStreamDecoderTest, RequestLevelErrorMessageTest)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        aws_event_stream_message requestLevelErrorMessage;
        Aws::Http::HeaderValueCollection headers;
        headers.insert(Aws::Http::HeaderValuePair(":error-code", "InternalError"));
        headers.insert(Aws::Http::HeaderValuePair(":error-message", "We encountered an internal error. Please try again."));
        headers.insert(Aws::Http::HeaderValuePair(":message-type", "error"));
        GenerateEventStreamMessage(&requestLevelErrorMessage, headers);

        const uint8_t* data_raw = aws_event_stream_message_buffer(&requestLevelErrorMessage);
        ByteBuffer data(data_raw, aws_event_stream_message_total_length(&requestLevelErrorMessage));
        decoder.Pump(data);

        ASSERT_EQ(0u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(0u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(1u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(0u, handler.m_onRecordsCount);
        ASSERT_EQ(0u, handler.m_onContCount);
        ASSERT_EQ(0u, handler.m_onProgressCount);
        ASSERT_EQ(0u, handler.m_onStatsCount);
        ASSERT_EQ(0u, handler.m_onEndCount);

        aws_event_stream_message_clean_up(&requestLevelErrorMessage);
    }

    TEST(EventStreamDecoderTest, RequestLevelExceptionTest)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        aws_event_stream_message requestLevelExceptionMessage;
        Aws::Http::HeaderValueCollection headers;
        headers.insert(Aws::Http::HeaderValuePair(":message-type", "exception"));
        headers.insert(Aws::Http::HeaderValuePair(":exception-type", "NotFeelWellException"));
        headers.insert(Aws::Http::HeaderValuePair(":content-type", "application/json"));
        auto payload = R"({"message":"Service is under the weather."})";
        GenerateEventStreamMessage(&requestLevelExceptionMessage, headers, payload);

        const uint8_t* data_raw = aws_event_stream_message_buffer(&requestLevelExceptionMessage);
        ByteBuffer data(data_raw, aws_event_stream_message_total_length(&requestLevelExceptionMessage));
        decoder.Pump(data);

        ASSERT_EQ(1u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(1u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(1u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(0u, handler.m_onRecordsCount);
        ASSERT_EQ(0u, handler.m_onContCount);
        ASSERT_EQ(0u, handler.m_onProgressCount);
        ASSERT_EQ(0u, handler.m_onStatsCount);
        ASSERT_EQ(0u, handler.m_onEndCount);

        aws_event_stream_message_clean_up(&requestLevelExceptionMessage);
    }

    TEST(EventStreamDecoderTest, IncompleteAndMultipleMessagesTest)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        aws_event_stream_message recordsMessage;
        Aws::Http::HeaderValueCollection headers;
        headers.insert(Aws::Http::HeaderValuePair(":event-type", "Records"));
        headers.insert(Aws::Http::HeaderValuePair(":content-type", "application/octet-stream"));
        headers.insert(Aws::Http::HeaderValuePair(":message-type", "event"));
        Aws::String payload = "Records";
        GenerateEventStreamMessage(&recordsMessage, headers, payload.c_str());

        aws_event_stream_message endMessage;
        headers.clear();
        headers.insert(Aws::Http::HeaderValuePair(":event-type", "End"));
        headers.insert(Aws::Http::HeaderValuePair(":message-type", "event"));
        GenerateEventStreamMessage(&endMessage, headers);

        // Pass prelude to decoder
        const uint8_t* data_raw = aws_event_stream_message_buffer(&recordsMessage);
        size_t partialMessageLength = 4/*total byte-length*/ + 4/*headers byte-length*/
            + 4/*prelude crc*/ + 1/*need extra byte to trigger prelude received callback function*/;
        ByteBuffer data(data_raw, partialMessageLength);
        decoder.Pump(data);

        ASSERT_EQ(0u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(0u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(0u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(0u, handler.m_onRecordsCount);
        ASSERT_EQ(0u, handler.m_onContCount);
        ASSERT_EQ(0u, handler.m_onProgressCount);
        ASSERT_EQ(0u, handler.m_onStatsCount);
        ASSERT_EQ(0u, handler.m_onEndCount);

        // Pass headers to decoder
        data_raw += partialMessageLength;
        partialMessageLength = aws_event_stream_message_headers_len(&recordsMessage) - 1;
        data = ByteBuffer(data_raw, partialMessageLength);
        decoder.Pump(data);

        ASSERT_EQ(0u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(0u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(0u, handler.m_onRecordsCount);
        ASSERT_EQ(0u, handler.m_onContCount);
        ASSERT_EQ(0u, handler.m_onProgressCount);
        ASSERT_EQ(0u, handler.m_onStatsCount);
        ASSERT_EQ(0u, handler.m_onEndCount);

        // Pass incomplete payload to decoder.
        data_raw += partialMessageLength;
        partialMessageLength = 1 + aws_event_stream_message_payload_len(&recordsMessage)/2;
        data = ByteBuffer(data_raw, partialMessageLength);
        decoder.Pump(data);

        ASSERT_EQ(1u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(0u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(0u, handler.m_onRecordsCount);
        ASSERT_EQ(0u, handler.m_onContCount);
        ASSERT_EQ(0u, handler.m_onProgressCount);
        ASSERT_EQ(0u, handler.m_onStatsCount);
        ASSERT_EQ(0u, handler.m_onEndCount);

        // Pass complete payload to decoder.
        data_raw += partialMessageLength;
        partialMessageLength = aws_event_stream_message_payload_len(&recordsMessage) - partialMessageLength + 4/*message crc*/;
        data = ByteBuffer(data_raw, partialMessageLength);
        decoder.Pump(data);

        ASSERT_EQ(2u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(1u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(0u, handler.m_internalErrorsCount);

        ASSERT_EQ(1u, handler.m_onRecordsCount);
        ASSERT_EQ(0u, handler.m_onContCount);
        ASSERT_EQ(0u, handler.m_onProgressCount);
        ASSERT_EQ(0u, handler.m_onStatsCount);
        ASSERT_EQ(0u, handler.m_onEndCount);

        // Pass the second message to decoder.
        data_raw = aws_event_stream_message_buffer(&endMessage);
        partialMessageLength = aws_event_stream_message_total_length(&endMessage);
        data = ByteBuffer(data_raw, partialMessageLength);
        decoder.Pump(data);

        ASSERT_EQ(2u + 0u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(1u + 0u, handler.m_onCompletePayloadCount);
        ASSERT_EQ(1u + 1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(3u + 2u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u + 0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u + 0u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(0u + 0u, handler.m_internalErrorsCount);

        ASSERT_EQ(1u + 0u, handler.m_onRecordsCount);
        ASSERT_EQ(0u + 0u, handler.m_onContCount);
        ASSERT_EQ(0u + 0u, handler.m_onProgressCount);
        ASSERT_EQ(0u + 0u, handler.m_onStatsCount);
        ASSERT_EQ(0u + 1u, handler.m_onEndCount);

        aws_event_stream_message_clean_up(&recordsMessage);
        aws_event_stream_message_clean_up(&endMessage);
    }

    TEST(EventStreamDecoderTest, BadInternalPayloadTest)
    {
        MockEventStreamHandler handler;
        MockEventStreamDecoder decoder(&handler);

        const uint8_t data_raw[] = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
                                    <Error>\
                                    <Code>Exception</Code>\
                                    <Message>Message</Message>\
                                    <Resource>Resource</Resource>\
                                    <RequestId>RequestId</RequestId>\
                                    </Error>";
        ByteBuffer data(data_raw, sizeof(data_raw));
        decoder.Pump(data);

        ASSERT_EQ(0u, handler.m_onPayloadSegmentCount);
        ASSERT_EQ(0u, handler.m_onCompletePayloadCount);
        // Underlying Event Stream Decoder will parse xml error unsuccessfully, and take it as a prelude with CRC mismatch error.
        ASSERT_EQ(1u, handler.m_onPreludeReceivedCount);
        ASSERT_EQ(0u, handler.m_onHeaderReceivedCount);
        ASSERT_EQ(0u, handler.m_requestLevelErrorsCount);
        ASSERT_EQ(0u, handler.m_requestLevelExceptionsCount);
        ASSERT_EQ(1u, handler.m_internalErrorsCount);

        ASSERT_EQ(0u, handler.m_onRecordsCount);
        ASSERT_EQ(0u, handler.m_onContCount);
        ASSERT_EQ(0u, handler.m_onProgressCount);
        ASSERT_EQ(0u, handler.m_onStatsCount);
        ASSERT_EQ(0u, handler.m_onEndCount);
        ASSERT_EQ(EventStreamErrors::EVENT_STREAM_PRELUDE_CHECKSUM_FAILURE, handler.m_error);
        ASSERT_TRUE(handler.m_errorMessage.find("CRC Mismatch.") == 0);
    }
}
