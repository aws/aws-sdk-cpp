/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolErrorMarshaller.h>
#include <aws/rest-json-protocol/model/DuplexStreamHandler.h>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
using namespace Aws::Client;

static const char DUPLEXSTREAM_HANDLER_CLASS_TAG[] = "DuplexStreamHandler";

DuplexStreamHandler::DuplexStreamHandler() : EventStreamHandler() {
  m_onInitialResponse = [&](const DuplexStreamInitialResponse&, const Utils::Event::InitialResponseType eventType) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAM_HANDLER_CLASS_TAG,
                        "DuplexStream initial response received from "
                            << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
  };

  m_onHeadersEvent = [&](const HeadersEvent&) { AWS_LOGSTREAM_TRACE(DUPLEXSTREAM_HANDLER_CLASS_TAG, "HeadersEvent received."); };

  m_onBlobPayloadEvent = [&](const BlobPayloadEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAM_HANDLER_CLASS_TAG, "BlobPayloadEvent received.");
  };

  m_onStringPayloadEvent = [&](const StringPayloadEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAM_HANDLER_CLASS_TAG, "StringPayloadEvent received.");
  };

  m_onStructurePayloadEvent = [&](const StructurePayloadEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAM_HANDLER_CLASS_TAG, "StructurePayloadEvent received.");
  };

  m_onUnionPayloadEvent = [&](const UnionPayloadEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAM_HANDLER_CLASS_TAG, "UnionPayloadEvent received.");
  };

  m_onHeadersAndExplicitPayloadEvent = [&](const HeadersAndExplicitPayloadEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAM_HANDLER_CLASS_TAG, "HeadersAndExplicitPayloadEvent received.");
  };

  m_onHeadersAndImplicitPayloadEvent = [&](const HeadersAndImplicitPayloadEvent&) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAM_HANDLER_CLASS_TAG, "HeadersAndImplicitPayloadEvent received.");
  };

  m_onError = [&](const AWSError<RestJsonProtocolErrors>& error) {
    AWS_LOGSTREAM_TRACE(DUPLEXSTREAM_HANDLER_CLASS_TAG, "RestJsonProtocol Errors received, " << error);
  };
}

void DuplexStreamHandler::OnEvent() {
  // Handler internal error during event stream decoding.
  if (!*this) {
    AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
    error.SetMessage(GetEventPayloadAsString());
    m_onError(AWSError<RestJsonProtocolErrors>(error));
    return;
  }

  const auto& headers = GetEventHeaders();
  auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
  if (messageTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(DUPLEXSTREAM_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
      AWS_LOGSTREAM_WARN(DUPLEXSTREAM_HANDLER_CLASS_TAG,
                         "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void DuplexStreamHandler::HandleEventInMessage() {
  const auto& headers = GetEventHeaders();
  auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
  if (eventTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(DUPLEXSTREAM_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
    return;
  }
  switch (DuplexStreamEventMapper::GetDuplexStreamEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString())) {
    case DuplexStreamEventType::INITIAL_RESPONSE: {
      DuplexStreamInitialResponse event(GetEventHeadersAsHttpHeaders());
      m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
      break;
    }

    case DuplexStreamEventType::HEADERS: {
      HeadersEvent event;
      const auto booleanHeaderHeader = headers.find("booleanHeader");
      if (booleanHeaderHeader != headers.end()) {
        event.SetBooleanHeader(booleanHeaderHeader->second.GetEventHeaderValueAsBoolean());
      }
      const auto byteHeaderHeader = headers.find("byteHeader");
      if (byteHeaderHeader != headers.end()) {
        event.SetByteHeader(byteHeaderHeader->second.GetEventHeaderValueAsInt32());
      }
      const auto shortHeaderHeader = headers.find("shortHeader");
      if (shortHeaderHeader != headers.end()) {
        event.SetShortHeader(shortHeaderHeader->second.GetEventHeaderValueAsInt32());
      }
      const auto intHeaderHeader = headers.find("intHeader");
      if (intHeaderHeader != headers.end()) {
        event.SetIntHeader(intHeaderHeader->second.GetEventHeaderValueAsInt32());
      }
      const auto longHeaderHeader = headers.find("longHeader");
      if (longHeaderHeader != headers.end()) {
        event.SetLongHeader(longHeaderHeader->second.GetEventHeaderValueAsInt64());
      }
      const auto blobHeaderHeader = headers.find("blobHeader");
      if (blobHeaderHeader != headers.end()) {
        event.SetBlobHeader(blobHeaderHeader->second.GetEventHeaderValueAsBytebuf());
      }
      const auto stringHeaderHeader = headers.find("stringHeader");
      if (stringHeaderHeader != headers.end()) {
        event.SetStringHeader(stringHeaderHeader->second.GetEventHeaderValueAsString());
      }
      const auto timestampHeaderHeader = headers.find("timestampHeader");
      if (timestampHeaderHeader != headers.end()) {
        event.SetTimestampHeader(Aws::Utils::DateTime(timestampHeaderHeader->second.GetEventHeaderValueAsTimestamp()));
      }
      m_onHeadersEvent(event);
      break;
    }
    case DuplexStreamEventType::BLOBPAYLOAD: {
      BlobPayloadEvent event(GetEventPayloadWithOwnership());
      m_onBlobPayloadEvent(event);
      break;
    }
    case DuplexStreamEventType::STRINGPAYLOAD: {
      StringPayloadEvent event;
      event.SetPayload(GetEventPayloadAsString());
      m_onStringPayloadEvent(event);
      break;
    }
    case DuplexStreamEventType::STRUCTUREPAYLOAD: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(DUPLEXSTREAM_HANDLER_CLASS_TAG,
                           "Unable to generate a proper StructurePayloadEvent object from the response in JSON format.");
        break;
      }
      StructurePayloadEvent event;
      event.SetPayload(PayloadStructure{json.View()});
      m_onStructurePayloadEvent(event);
      break;
    }
    case DuplexStreamEventType::UNIONPAYLOAD: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(DUPLEXSTREAM_HANDLER_CLASS_TAG,
                           "Unable to generate a proper UnionPayloadEvent object from the response in JSON format.");
        break;
      }
      UnionPayloadEvent event;
      event.SetPayload(PayloadUnion{json.View()});
      m_onUnionPayloadEvent(event);
      break;
    }
    case DuplexStreamEventType::HEADERSANDEXPLICITPAYLOAD: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(DUPLEXSTREAM_HANDLER_CLASS_TAG,
                           "Unable to generate a proper HeadersAndExplicitPayloadEvent object from the response in JSON format.");
        break;
      }
      HeadersAndExplicitPayloadEvent event;
      event.SetPayload(PayloadStructure{json.View()});
      const auto headerHeader = headers.find("header");
      if (headerHeader != headers.end()) {
        event.SetHeader(headerHeader->second.GetEventHeaderValueAsString());
      }
      m_onHeadersAndExplicitPayloadEvent(event);
      break;
    }
    case DuplexStreamEventType::HEADERSANDIMPLICITPAYLOAD: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(DUPLEXSTREAM_HANDLER_CLASS_TAG,
                           "Unable to generate a proper HeadersAndImplicitPayloadEvent object from the response in JSON format.");
        break;
      }
      HeadersAndImplicitPayloadEvent event{json.View()};
      const auto headerHeader = headers.find("header");
      if (headerHeader != headers.end()) {
        event.SetHeader(headerHeader->second.GetEventHeaderValueAsString());
      }
      m_onHeadersAndImplicitPayloadEvent(event);
      break;
    }
    default:
      AWS_LOGSTREAM_WARN(DUPLEXSTREAM_HANDLER_CLASS_TAG,
                         "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void DuplexStreamHandler::HandleErrorInMessage() {
  const auto& headers = GetEventHeaders();
  Aws::String errorCode;
  Aws::String errorMessage;
  auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_WARN(DUPLEXSTREAM_HANDLER_CLASS_TAG, "Error type was not found in the event message.");
      return;
    }
  }

  errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();
  errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_ERROR(DUPLEXSTREAM_HANDLER_CLASS_TAG, "Error description was not found in the event message.");
      return;
    }

    JsonValue exceptionPayload(GetEventPayloadAsString());
    if (!exceptionPayload.WasParseSuccessful()) {
      AWS_LOGSTREAM_ERROR(DUPLEXSTREAM_HANDLER_CLASS_TAG,
                          "Unable to generate a proper ErrorEvent object from the response in JSON format.");
      auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
      if (contentTypeIter != headers.end()) {
        AWS_LOGSTREAM_DEBUG(DUPLEXSTREAM_HANDLER_CLASS_TAG,
                            "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
      }
      return;
    }

    JsonView payloadView(exceptionPayload);
    errorMessage = payloadView.ValueExists(MESSAGE_CAMEL_CASE)   ? payloadView.GetString(MESSAGE_CAMEL_CASE)
                   : payloadView.ValueExists(MESSAGE_LOWER_CASE) ? payloadView.GetString(MESSAGE_LOWER_CASE)
                                                                 : "";

  } else {
    errorMessage = errorHeaderIter->second.GetEventHeaderValueAsString();
  }
  MarshallError(errorCode, errorMessage);
}

void DuplexStreamHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage) {
  RestJsonProtocolErrorMarshaller errorMarshaller;
  AWSError<CoreErrors> error;

  if (errorCode.empty()) {
    error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
  } else {
    error = errorMarshaller.FindErrorByName(errorCode.c_str());
    if (error.GetErrorType() != CoreErrors::UNKNOWN) {
      AWS_LOGSTREAM_WARN(DUPLEXSTREAM_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error.SetExceptionName(errorCode);
      error.SetMessage(errorMessage);
    } else {
      AWS_LOGSTREAM_WARN(DUPLEXSTREAM_HANDLER_CLASS_TAG,
                         "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode,
                                   "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
    }
  }

  m_onError(AWSError<RestJsonProtocolErrors>(error));
}

namespace DuplexStreamEventMapper {
static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
static const int HEADERS_HASH = Aws::Utils::HashingUtils::HashString("headers");
static const int BLOBPAYLOAD_HASH = Aws::Utils::HashingUtils::HashString("blobPayload");
static const int STRINGPAYLOAD_HASH = Aws::Utils::HashingUtils::HashString("stringPayload");
static const int STRUCTUREPAYLOAD_HASH = Aws::Utils::HashingUtils::HashString("structurePayload");
static const int UNIONPAYLOAD_HASH = Aws::Utils::HashingUtils::HashString("unionPayload");
static const int HEADERSANDEXPLICITPAYLOAD_HASH = Aws::Utils::HashingUtils::HashString("headersAndExplicitPayload");
static const int HEADERSANDIMPLICITPAYLOAD_HASH = Aws::Utils::HashingUtils::HashString("headersAndImplicitPayload");

DuplexStreamEventType GetDuplexStreamEventTypeForName(const Aws::String& name) {
  int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

  if (hashCode == INITIAL_RESPONSE_HASH) {
    return DuplexStreamEventType::INITIAL_RESPONSE;
  } else if (hashCode == HEADERS_HASH) {
    return DuplexStreamEventType::HEADERS;
  } else if (hashCode == BLOBPAYLOAD_HASH) {
    return DuplexStreamEventType::BLOBPAYLOAD;
  } else if (hashCode == STRINGPAYLOAD_HASH) {
    return DuplexStreamEventType::STRINGPAYLOAD;
  } else if (hashCode == STRUCTUREPAYLOAD_HASH) {
    return DuplexStreamEventType::STRUCTUREPAYLOAD;
  } else if (hashCode == UNIONPAYLOAD_HASH) {
    return DuplexStreamEventType::UNIONPAYLOAD;
  } else if (hashCode == HEADERSANDEXPLICITPAYLOAD_HASH) {
    return DuplexStreamEventType::HEADERSANDEXPLICITPAYLOAD;
  } else if (hashCode == HEADERSANDIMPLICITPAYLOAD_HASH) {
    return DuplexStreamEventType::HEADERSANDIMPLICITPAYLOAD;
  }
  return DuplexStreamEventType::UNKNOWN;
}

Aws::String GetNameForDuplexStreamEventType(DuplexStreamEventType value) {
  switch (value) {
    case DuplexStreamEventType::INITIAL_RESPONSE:
      return "initial-response";
    case DuplexStreamEventType::HEADERS:
      return "headers";
    case DuplexStreamEventType::BLOBPAYLOAD:
      return "blobPayload";
    case DuplexStreamEventType::STRINGPAYLOAD:
      return "stringPayload";
    case DuplexStreamEventType::STRUCTUREPAYLOAD:
      return "structurePayload";
    case DuplexStreamEventType::UNIONPAYLOAD:
      return "unionPayload";
    case DuplexStreamEventType::HEADERSANDEXPLICITPAYLOAD:
      return "headersAndExplicitPayload";
    case DuplexStreamEventType::HEADERSANDIMPLICITPAYLOAD:
      return "headersAndImplicitPayload";
    default:
      return "Unknown";
  }
}
}  // namespace DuplexStreamEventMapper
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
