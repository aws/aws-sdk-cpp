/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/RestJsonProtocolErrorMarshaller.h>
#include <aws/rest-json-protocol/model/DuplexStreamWithInitialMessagesHandler.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
using namespace Aws::Client;

static const char DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG[] = "DuplexStreamWithInitialMessagesHandler";

DuplexStreamWithInitialMessagesHandler::DuplexStreamWithInitialMessagesHandler() : EventStreamHandler() {
  m_onInitialResponse = [&](const DuplexStreamWithInitialMessagesInitialResponse&, const Utils::Event::InitialResponseType eventType) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG,
                        "DuplexStreamWithInitialMessages initial response received from "
                            << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
  };
  m_onHeadersEvent = [&](const HeadersEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG, "HeadersEvent received.");
  };
  m_onBlobPayloadEvent = [&](const BlobPayloadEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG, "BlobPayloadEvent received.");
  };
  m_onStringPayloadEvent = [&](const StringPayloadEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG, "StringPayloadEvent received.");
  };
  m_onStructurePayloadEvent = [&](const StructurePayloadEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG, "StructurePayloadEvent received.");
  };
  m_onUnionPayloadEvent = [&](const UnionPayloadEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG, "UnionPayloadEvent received.");
  };
  m_onHeadersAndExplicitPayloadEvent = [&](const HeadersAndExplicitPayloadEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG, "HeadersAndExplicitPayloadEvent received.");
  };
  m_onHeadersAndImplicitPayloadEvent = [&](const HeadersAndImplicitPayloadEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG, "HeadersAndImplicitPayloadEvent received.");
  };
  m_onError = [&](const AWSError<RestJsonProtocolErrors>& error) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG, "RestJsonProtocol Errors received, " << error);
  };
}

void DuplexStreamWithInitialMessagesHandler::OnEvent() {
  if (!*this) {
    AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
    error.SetMessage(GetEventPayloadAsString());
    m_onError(AWSError<RestJsonProtocolErrors>(error));
    return;
  }
  const auto& headers = GetEventHeaders();
  auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
  if (messageTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG,
                       "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
    return;
  }
  switch (Aws::Utils::Event::Message::GetMessageTypeForName(messageTypeHeaderIter->second.GetEventHeaderValueAsString())) {
    case Aws::Utils::Event::Message::MessageType::EVENT:
      HandleEventInMessage();
      break;
    case Aws::Utils::Event::Message::MessageType::REQUEST_LEVEL_ERROR:
    case Aws::Utils::Event::Message::MessageType::REQUEST_LEVEL_EXCEPTION: {
      HandleErrorInMessage();
      break;
    }
    default:
      AWS_LOGSTREAM_WARN(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG,
                         "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void DuplexStreamWithInitialMessagesHandler::HandleEventInMessage() {
  const auto& headers = GetEventHeaders();
  auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
  if (eventTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
    return;
  }
  switch (DuplexStreamWithInitialMessagesEventMapper::GetDuplexStreamWithInitialMessagesEventTypeForName(
      eventTypeHeaderIter->second.GetEventHeaderValueAsString())) {
    case DuplexStreamWithInitialMessagesEventType::INITIAL_RESPONSE: {
      DuplexStreamWithInitialMessagesInitialResponse event(GetEventHeadersAsHttpHeaders());
      m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
      break;
    }
    case DuplexStreamWithInitialMessagesEventType::HEADERS: {
      // TODO: protocol-specific event payload deserialization
      m_onHeadersEvent(HeadersEvent{});
      break;
    }
    case DuplexStreamWithInitialMessagesEventType::BLOBPAYLOAD: {
      // TODO: protocol-specific event payload deserialization
      m_onBlobPayloadEvent(BlobPayloadEvent{});
      break;
    }
    case DuplexStreamWithInitialMessagesEventType::STRINGPAYLOAD: {
      // TODO: protocol-specific event payload deserialization
      m_onStringPayloadEvent(StringPayloadEvent{});
      break;
    }
    case DuplexStreamWithInitialMessagesEventType::STRUCTUREPAYLOAD: {
      // TODO: protocol-specific event payload deserialization
      m_onStructurePayloadEvent(StructurePayloadEvent{});
      break;
    }
    case DuplexStreamWithInitialMessagesEventType::UNIONPAYLOAD: {
      // TODO: protocol-specific event payload deserialization
      m_onUnionPayloadEvent(UnionPayloadEvent{});
      break;
    }
    case DuplexStreamWithInitialMessagesEventType::HEADERSANDEXPLICITPAYLOAD: {
      // TODO: protocol-specific event payload deserialization
      m_onHeadersAndExplicitPayloadEvent(HeadersAndExplicitPayloadEvent{});
      break;
    }
    case DuplexStreamWithInitialMessagesEventType::HEADERSANDIMPLICITPAYLOAD: {
      // TODO: protocol-specific event payload deserialization
      m_onHeadersAndImplicitPayloadEvent(HeadersAndImplicitPayloadEvent{});
      break;
    }
    default:
      AWS_LOGSTREAM_WARN(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG,
                         "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void DuplexStreamWithInitialMessagesHandler::HandleErrorInMessage() {
  const auto& headers = GetEventHeaders();
  Aws::String errorCode;
  Aws::String errorMessage;
  auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_WARN(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG, "Error type was not found in the event message.");
      return;
    }
  }
  errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();
  errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
  if (errorHeaderIter == headers.end()) {
    // TODO: read error message from payload once protocol-specific serde lands
    // TODO: protocol-specific error payload deserialization
  } else {
    errorMessage = errorHeaderIter->second.GetEventHeaderValueAsString();
  }
  MarshallError(errorCode, errorMessage);
}

void DuplexStreamWithInitialMessagesHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage) {
  RestJsonProtocolErrorMarshaller errorMarshaller;
  AWSError<CoreErrors> error;
  if (errorCode.empty()) {
    error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
  } else {
    error = errorMarshaller.FindErrorByName(errorCode.c_str());
    if (error.GetErrorType() != CoreErrors::UNKNOWN) {
      AWS_LOGSTREAM_WARN(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG,
                         "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error.SetExceptionName(errorCode);
      error.SetMessage(errorMessage);
    } else {
      AWS_LOGSTREAM_WARN(DUPLEXSTREAMWITHINITIALMESSAGES_HANDLER_CLASS_TAG,
                         "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode,
                                   "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
    }
  }
  m_onError(AWSError<RestJsonProtocolErrors>(error));
}

namespace DuplexStreamWithInitialMessagesEventMapper {
static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
static const int HEADERS_HASH = Aws::Utils::HashingUtils::HashString("headers");
static const int BLOBPAYLOAD_HASH = Aws::Utils::HashingUtils::HashString("blobPayload");
static const int STRINGPAYLOAD_HASH = Aws::Utils::HashingUtils::HashString("stringPayload");
static const int STRUCTUREPAYLOAD_HASH = Aws::Utils::HashingUtils::HashString("structurePayload");
static const int UNIONPAYLOAD_HASH = Aws::Utils::HashingUtils::HashString("unionPayload");
static const int HEADERSANDEXPLICITPAYLOAD_HASH = Aws::Utils::HashingUtils::HashString("headersAndExplicitPayload");
static const int HEADERSANDIMPLICITPAYLOAD_HASH = Aws::Utils::HashingUtils::HashString("headersAndImplicitPayload");

DuplexStreamWithInitialMessagesEventType GetDuplexStreamWithInitialMessagesEventTypeForName(const Aws::String& name) {
  int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());
  if (hashCode == INITIAL_RESPONSE_HASH) {
    return DuplexStreamWithInitialMessagesEventType::INITIAL_RESPONSE;
  } else if (hashCode == HEADERS_HASH) {
    return DuplexStreamWithInitialMessagesEventType::HEADERS;
  } else if (hashCode == BLOBPAYLOAD_HASH) {
    return DuplexStreamWithInitialMessagesEventType::BLOBPAYLOAD;
  } else if (hashCode == STRINGPAYLOAD_HASH) {
    return DuplexStreamWithInitialMessagesEventType::STRINGPAYLOAD;
  } else if (hashCode == STRUCTUREPAYLOAD_HASH) {
    return DuplexStreamWithInitialMessagesEventType::STRUCTUREPAYLOAD;
  } else if (hashCode == UNIONPAYLOAD_HASH) {
    return DuplexStreamWithInitialMessagesEventType::UNIONPAYLOAD;
  } else if (hashCode == HEADERSANDEXPLICITPAYLOAD_HASH) {
    return DuplexStreamWithInitialMessagesEventType::HEADERSANDEXPLICITPAYLOAD;
  } else if (hashCode == HEADERSANDIMPLICITPAYLOAD_HASH) {
    return DuplexStreamWithInitialMessagesEventType::HEADERSANDIMPLICITPAYLOAD;
  }
  return DuplexStreamWithInitialMessagesEventType::UNKNOWN;
}

Aws::String GetNameForDuplexStreamWithInitialMessagesEventType(DuplexStreamWithInitialMessagesEventType value) {
  switch (value) {
    case DuplexStreamWithInitialMessagesEventType::INITIAL_RESPONSE:
      return "initial-response";
    case DuplexStreamWithInitialMessagesEventType::HEADERS:
      return "headers";
    case DuplexStreamWithInitialMessagesEventType::BLOBPAYLOAD:
      return "blobPayload";
    case DuplexStreamWithInitialMessagesEventType::STRINGPAYLOAD:
      return "stringPayload";
    case DuplexStreamWithInitialMessagesEventType::STRUCTUREPAYLOAD:
      return "structurePayload";
    case DuplexStreamWithInitialMessagesEventType::UNIONPAYLOAD:
      return "unionPayload";
    case DuplexStreamWithInitialMessagesEventType::HEADERSANDEXPLICITPAYLOAD:
      return "headersAndExplicitPayload";
    case DuplexStreamWithInitialMessagesEventType::HEADERSANDIMPLICITPAYLOAD:
      return "headersAndImplicitPayload";
    default:
      return "Unknown";
  }
}
}  // namespace DuplexStreamWithInitialMessagesEventMapper
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
