/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/stream/HttpWriteDataStreamBuf.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/BlobPayloadEvent.h>
#include <aws/rest-json-protocol/model/HeadersAndExplicitPayloadEvent.h>
#include <aws/rest-json-protocol/model/HeadersAndImplicitPayloadEvent.h>
#include <aws/rest-json-protocol/model/HeadersEvent.h>
#include <aws/rest-json-protocol/model/StringPayloadEvent.h>
#include <aws/rest-json-protocol/model/StructurePayloadEvent.h>
#include <aws/rest-json-protocol/model/UnionPayloadEvent.h>

#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

class AWS_RESTJSONPROTOCOL_API EventStream : public Aws::Utils::Event::EventEncoderStream {
 public:
  EventStream() = default;
  explicit EventStream(std::shared_ptr<Aws::Utils::Stream::HttpWriteDataStreamBuf> streambuf)
      : Aws::Utils::Event::EventEncoderStream(std::move(streambuf)) {}
  EventStream& WriteHeadersEvent(const HeadersEvent& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("headers"));
    AWS_UNREFERENCED_PARAM(value);
    WriteEvent(msg);
    return *this;
  }
  EventStream& WriteBlobPayloadEvent(const BlobPayloadEvent& value) {
    Aws::Utils::Event::Message msg;
    if (!value.GetPayload().empty()) {
      msg.InsertEventHeader(":message-type", Aws::String("event"));
      msg.InsertEventHeader(":event-type", Aws::String("blobPayload"));
      msg.InsertEventHeader(":content-type", Aws::String("application/octet-stream"));
      msg.WriteEventPayload(value.GetPayload());
    }
    WriteEvent(msg);
    return *this;
  }
  EventStream& WriteStringPayloadEvent(const StringPayloadEvent& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("stringPayload"));
    msg.InsertEventHeader(":content-type", Aws::String("text/plain"));
    msg.WriteEventPayload(value.GetPayload());
    WriteEvent(msg);
    return *this;
  }
  EventStream& WriteStructurePayloadEvent(const StructurePayloadEvent& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("structurePayload"));
    msg.InsertEventHeader(":content-type", Aws::String("application/json"));
    msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
    WriteEvent(msg);
    return *this;
  }
  EventStream& WriteUnionPayloadEvent(const UnionPayloadEvent& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("unionPayload"));
    msg.InsertEventHeader(":content-type", Aws::String("application/json"));
    msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
    WriteEvent(msg);
    return *this;
  }
  EventStream& WriteHeadersAndExplicitPayloadEvent(const HeadersAndExplicitPayloadEvent& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("headersAndExplicitPayload"));
    msg.InsertEventHeader(":content-type", Aws::String("application/json"));
    msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
    WriteEvent(msg);
    return *this;
  }
  EventStream& WriteHeadersAndImplicitPayloadEvent(const HeadersAndImplicitPayloadEvent& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("headersAndImplicitPayload"));
    msg.InsertEventHeader(":content-type", Aws::String("application/json"));
    msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
    WriteEvent(msg);
    return *this;
  }
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
