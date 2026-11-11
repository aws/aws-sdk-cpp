/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTestsErrorMarshaller.h>
#include <aws/rpcv2cborcorpustests/model/EventStreamResponseHandler.h>

using namespace Aws::RpcV2CborCorpusTests::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Cbor;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws {
namespace RpcV2CborCorpusTests {
namespace Model {
using namespace Aws::Client;

static const char EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG[] = "EventStreamResponseHandler";

EventStreamResponseHandler::EventStreamResponseHandler() : EventStreamHandler() {
  m_onInitialResponse = [&](const EventStreamResponseInitialResponse&, const Utils::Event::InitialResponseType eventType) {
    AWS_LOGSTREAM_TRACE(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG,
                        "EventStreamResponse initial response received from "
                            << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
  };

  m_onScalarsEvent = [&](const ScalarsEvent&) { AWS_LOGSTREAM_TRACE(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG, "ScalarsEvent received."); };

  m_onListEvent = [&](const ListEvent&) { AWS_LOGSTREAM_TRACE(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG, "ListEvent received."); };

  m_onMapEvent = [&](const MapEvent&) { AWS_LOGSTREAM_TRACE(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG, "MapEvent received."); };

  m_onStructEvent = [&](const StructEvent&) { AWS_LOGSTREAM_TRACE(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG, "StructEvent received."); };

  m_onUnionEvent = [&](const UnionEvent&) { AWS_LOGSTREAM_TRACE(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG, "UnionEvent received."); };

  m_onHeartbeatEvent = [&]() { AWS_LOGSTREAM_TRACE(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG, "HeartbeatEvent received."); };

  m_onError = [&](const AWSError<RpcV2CborCorpusTestsErrors>& error) {
    AWS_LOGSTREAM_TRACE(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG, "RpcV2CborCorpusTests Errors received, " << error);
  };
}

void EventStreamResponseHandler::OnEvent() {
  // Handler internal error during event stream decoding.
  if (!*this) {
    AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
    error.SetMessage(GetEventPayloadAsString());
    m_onError(AWSError<RpcV2CborCorpusTestsErrors>(error));
    return;
  }

  const auto& headers = GetEventHeaders();
  auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
  if (messageTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
      AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG,
                         "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void EventStreamResponseHandler::HandleEventInMessage() {
  const auto& headers = GetEventHeaders();
  auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
  if (eventTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
    return;
  }
  switch (
      EventStreamResponseEventMapper::GetEventStreamResponseEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString())) {
    case EventStreamResponseEventType::INITIAL_RESPONSE: {
      const Aws::String initialResponsePayload = GetEventPayloadAsString();
      if (initialResponsePayload.empty()) {
        EventStreamResponseInitialResponse event(GetEventHeadersAsHttpHeaders());
        m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
        break;
      }
      CborValue cbor(initialResponsePayload);
      EventStreamResponseInitialResponse event(cbor.GetDecoder());
      if (!cbor.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper EventStreamResponseInitialResponse object from the response in CBOR format.");
      }
      m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
      break;
    }

    case EventStreamResponseEventType::SCALARSEVENT: {
      CborValue cbor(GetEventPayloadAsString());
      m_onScalarsEvent(ScalarsEvent{cbor.GetDecoder()});
      if (!cbor.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper ScalarsEvent object from the response in CBOR format.");
      }
      break;
    }
    case EventStreamResponseEventType::LISTEVENT: {
      CborValue cbor(GetEventPayloadAsString());
      m_onListEvent(ListEvent{cbor.GetDecoder()});
      if (!cbor.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper ListEvent object from the response in CBOR format.");
      }
      break;
    }
    case EventStreamResponseEventType::MAPEVENT: {
      CborValue cbor(GetEventPayloadAsString());
      m_onMapEvent(MapEvent{cbor.GetDecoder()});
      if (!cbor.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper MapEvent object from the response in CBOR format.");
      }
      break;
    }
    case EventStreamResponseEventType::STRUCTEVENT: {
      CborValue cbor(GetEventPayloadAsString());
      m_onStructEvent(StructEvent{cbor.GetDecoder()});
      if (!cbor.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper StructEvent object from the response in CBOR format.");
      }
      break;
    }
    case EventStreamResponseEventType::UNIONEVENT: {
      CborValue cbor(GetEventPayloadAsString());
      m_onUnionEvent(UnionEvent{cbor.GetDecoder()});
      if (!cbor.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper UnionEvent object from the response in CBOR format.");
      }
      break;
    }
    case EventStreamResponseEventType::HEARTBEATEVENT: {
      m_onHeartbeatEvent();
      break;
    }
    default:
      AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG,
                         "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void EventStreamResponseHandler::HandleErrorInMessage() {
  const auto& headers = GetEventHeaders();
  Aws::String errorCode;
  Aws::String errorMessage;
  auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG, "Error type was not found in the event message.");
      return;
    }
  }

  errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();
  errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_ERROR(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG, "Error description was not found in the event message.");
      return;
    }

    CborValue exceptionPayload(GetEventPayloadAsString());
    if (!exceptionPayload.WasParseSuccessful()) {
      AWS_LOGSTREAM_ERROR(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG, "Unable to parse CBOR error payload");
      return;
    }

    auto decoder = exceptionPayload.GetDecoder();
    if (decoder != nullptr) {
      auto initialMapType = decoder->PeekType();
      if (initialMapType.has_value() && (initialMapType.value() == Aws::Crt::Cbor::CborType::MapStart ||
                                         initialMapType.value() == Aws::Crt::Cbor::CborType::IndefMapStart)) {
        if (initialMapType.value() == Aws::Crt::Cbor::CborType::MapStart) {
          auto mapSize = decoder->PopNextMapStart();
          if (mapSize.has_value()) {
            for (size_t i = 0; i < mapSize.value(); ++i) {
              auto key = decoder->PopNextTextVal();
              if (key.has_value()) {
                Aws::String keyStr(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
                if (keyStr == MESSAGE_LOWER_CASE || keyStr == MESSAGE_CAMEL_CASE) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    errorMessage = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextWholeDataItem();
                }
              }
              if (decoder->LastError() != AWS_ERROR_UNKNOWN) break;
            }
          }
        } else {
          decoder->ConsumeNextSingleElement();
          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
            auto nextType = decoder->PeekType();
            if (!nextType.has_value() || nextType.value() == Aws::Crt::Cbor::CborType::Break) {
              if (nextType.has_value()) decoder->ConsumeNextSingleElement();
              break;
            }
            auto key = decoder->PopNextTextVal();
            if (key.has_value()) {
              const Aws::String keyStr(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
              if (keyStr == MESSAGE_LOWER_CASE || keyStr == MESSAGE_CAMEL_CASE) {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  errorMessage = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                }
              } else {
                decoder->ConsumeNextWholeDataItem();
              }
            }
          }
        }
      }
    }

  } else {
    errorMessage = errorHeaderIter->second.GetEventHeaderValueAsString();
  }
  MarshallError(errorCode, errorMessage);
}

void EventStreamResponseHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage) {
  RpcV2CborCorpusTestsErrorMarshaller errorMarshaller;
  AWSError<CoreErrors> error;

  if (errorCode.empty()) {
    error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
  } else {
    error = errorMarshaller.FindErrorByName(errorCode.c_str());
    if (error.GetErrorType() != CoreErrors::UNKNOWN) {
      AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG,
                         "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error.SetExceptionName(errorCode);
      error.SetMessage(errorMessage);
    } else {
      AWS_LOGSTREAM_WARN(EVENTSTREAMRESPONSE_HANDLER_CLASS_TAG,
                         "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode,
                                   "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
    }
  }

  m_onError(AWSError<RpcV2CborCorpusTestsErrors>(error));
}

namespace EventStreamResponseEventMapper {
static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
static const int SCALARSEVENT_HASH = Aws::Utils::HashingUtils::HashString("scalarsEvent");
static const int LISTEVENT_HASH = Aws::Utils::HashingUtils::HashString("listEvent");
static const int MAPEVENT_HASH = Aws::Utils::HashingUtils::HashString("mapEvent");
static const int STRUCTEVENT_HASH = Aws::Utils::HashingUtils::HashString("structEvent");
static const int UNIONEVENT_HASH = Aws::Utils::HashingUtils::HashString("unionEvent");
static const int HEARTBEATEVENT_HASH = Aws::Utils::HashingUtils::HashString("heartbeatEvent");

EventStreamResponseEventType GetEventStreamResponseEventTypeForName(const Aws::String& name) {
  int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

  if (hashCode == INITIAL_RESPONSE_HASH) {
    return EventStreamResponseEventType::INITIAL_RESPONSE;
  } else if (hashCode == SCALARSEVENT_HASH) {
    return EventStreamResponseEventType::SCALARSEVENT;
  } else if (hashCode == LISTEVENT_HASH) {
    return EventStreamResponseEventType::LISTEVENT;
  } else if (hashCode == MAPEVENT_HASH) {
    return EventStreamResponseEventType::MAPEVENT;
  } else if (hashCode == STRUCTEVENT_HASH) {
    return EventStreamResponseEventType::STRUCTEVENT;
  } else if (hashCode == UNIONEVENT_HASH) {
    return EventStreamResponseEventType::UNIONEVENT;
  } else if (hashCode == HEARTBEATEVENT_HASH) {
    return EventStreamResponseEventType::HEARTBEATEVENT;
  }
  return EventStreamResponseEventType::UNKNOWN;
}

Aws::String GetNameForEventStreamResponseEventType(EventStreamResponseEventType value) {
  switch (value) {
    case EventStreamResponseEventType::INITIAL_RESPONSE:
      return "initial-response";
    case EventStreamResponseEventType::SCALARSEVENT:
      return "scalarsEvent";
    case EventStreamResponseEventType::LISTEVENT:
      return "listEvent";
    case EventStreamResponseEventType::MAPEVENT:
      return "mapEvent";
    case EventStreamResponseEventType::STRUCTEVENT:
      return "structEvent";
    case EventStreamResponseEventType::UNIONEVENT:
      return "unionEvent";
    case EventStreamResponseEventType::HEARTBEATEVENT:
      return "heartbeatEvent";
    default:
      return "Unknown";
  }
}
}  // namespace EventStreamResponseEventMapper
}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws