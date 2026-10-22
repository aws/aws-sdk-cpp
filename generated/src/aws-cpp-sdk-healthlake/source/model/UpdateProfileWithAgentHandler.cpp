/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/healthlake/HealthLakeErrorMarshaller.h>
#include <aws/healthlake/model/UpdateProfileWithAgentHandler.h>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws {
namespace HealthLake {
namespace Model {
using namespace Aws::Client;

static const char UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG[] = "UpdateProfileWithAgentHandler";

UpdateProfileWithAgentHandler::UpdateProfileWithAgentHandler() : EventStreamHandler() {
  m_onInitialResponse = [&](const UpdateProfileWithAgentInitialResponse&, const Utils::Event::InitialResponseType eventType) {
    AWS_LOGSTREAM_TRACE(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG,
                        "UpdateProfileWithAgent initial response received from "
                            << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
  };

  m_onTextMessageEvent = [&](const TextMessageEvent&) {
    AWS_LOGSTREAM_TRACE(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG, "TextMessageEvent received.");
  };

  m_onProgressEvent = [&](const ProgressEvent&) {
    AWS_LOGSTREAM_TRACE(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG, "ProgressEvent received.");
  };

  m_onHeartbeatEvent = [&]() { AWS_LOGSTREAM_TRACE(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG, "HeartbeatEvent received."); };

  m_onErrorEvent = [&](const ErrorEvent&) { AWS_LOGSTREAM_TRACE(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG, "ErrorEvent received."); };

  m_onEndOfOutputEvent = [&](const EndOfOutputEvent&) {
    AWS_LOGSTREAM_TRACE(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG, "EndOfOutputEvent received.");
  };

  m_onError = [&](const AWSError<HealthLakeErrors>& error) {
    AWS_LOGSTREAM_TRACE(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG, "HealthLake Errors received, " << error);
  };
}

void UpdateProfileWithAgentHandler::OnEvent() {
  // Handler internal error during event stream decoding.
  if (!*this) {
    AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
    error.SetMessage(GetEventPayloadAsString());
    m_onError(AWSError<HealthLakeErrors>(error));
    return;
  }

  const auto& headers = GetEventHeaders();
  auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
  if (messageTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
      AWS_LOGSTREAM_WARN(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG,
                         "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void UpdateProfileWithAgentHandler::HandleEventInMessage() {
  const auto& headers = GetEventHeaders();
  auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
  if (eventTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
    return;
  }
  switch (UpdateProfileWithAgentEventMapper::GetUpdateProfileWithAgentEventTypeForName(
      eventTypeHeaderIter->second.GetEventHeaderValueAsString())) {
    case UpdateProfileWithAgentEventType::INITIAL_RESPONSE: {
      UpdateProfileWithAgentInitialResponse event(GetEventHeadersAsHttpHeaders());
      m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
      break;
    }

    case UpdateProfileWithAgentEventType::TEXTMESSAGEEVENT: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG,
                           "Unable to generate a proper TextMessageEvent object from the response in JSON format.");
        break;
      }

      m_onTextMessageEvent(TextMessageEvent{json.View()});
      break;
    }
    case UpdateProfileWithAgentEventType::PROGRESSEVENT: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG,
                           "Unable to generate a proper ProgressEvent object from the response in JSON format.");
        break;
      }

      m_onProgressEvent(ProgressEvent{json.View()});
      break;
    }
    case UpdateProfileWithAgentEventType::HEARTBEATEVENT: {
      m_onHeartbeatEvent();
      break;
    }
    case UpdateProfileWithAgentEventType::ERROREVENT: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG,
                           "Unable to generate a proper ErrorEvent object from the response in JSON format.");
        break;
      }

      m_onErrorEvent(ErrorEvent{json.View()});
      break;
    }
    case UpdateProfileWithAgentEventType::ENDOFOUTPUTEVENT: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG,
                           "Unable to generate a proper EndOfOutputEvent object from the response in JSON format.");
        break;
      }

      m_onEndOfOutputEvent(EndOfOutputEvent{json.View()});
      break;
    }
    default:
      AWS_LOGSTREAM_WARN(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG,
                         "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void UpdateProfileWithAgentHandler::HandleErrorInMessage() {
  const auto& headers = GetEventHeaders();
  Aws::String errorCode;
  Aws::String errorMessage;
  auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_WARN(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG, "Error type was not found in the event message.");
      return;
    }
  }

  errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();
  errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_ERROR(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG, "Error description was not found in the event message.");
      return;
    }

    JsonValue exceptionPayload(GetEventPayloadAsString());
    if (!exceptionPayload.WasParseSuccessful()) {
      AWS_LOGSTREAM_ERROR(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG,
                          "Unable to generate a proper EndOfOutputEvent object from the response in JSON format.");
      auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
      if (contentTypeIter != headers.end()) {
        AWS_LOGSTREAM_DEBUG(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG,
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

void UpdateProfileWithAgentHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage) {
  HealthLakeErrorMarshaller errorMarshaller;
  AWSError<CoreErrors> error;

  if (errorCode.empty()) {
    error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
  } else {
    error = errorMarshaller.FindErrorByName(errorCode.c_str());
    if (error.GetErrorType() != CoreErrors::UNKNOWN) {
      AWS_LOGSTREAM_WARN(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG,
                         "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error.SetExceptionName(errorCode);
      error.SetMessage(errorMessage);
    } else {
      AWS_LOGSTREAM_WARN(UPDATEPROFILEWITHAGENT_HANDLER_CLASS_TAG,
                         "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode,
                                   "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
    }
  }

  m_onError(AWSError<HealthLakeErrors>(error));
}

namespace UpdateProfileWithAgentEventMapper {
static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
static const int TEXTMESSAGEEVENT_HASH = Aws::Utils::HashingUtils::HashString("TextMessageEvent");
static const int PROGRESSEVENT_HASH = Aws::Utils::HashingUtils::HashString("ProgressEvent");
static const int HEARTBEATEVENT_HASH = Aws::Utils::HashingUtils::HashString("HeartbeatEvent");
static const int ERROREVENT_HASH = Aws::Utils::HashingUtils::HashString("ErrorEvent");
static const int ENDOFOUTPUTEVENT_HASH = Aws::Utils::HashingUtils::HashString("EndOfOutputEvent");

UpdateProfileWithAgentEventType GetUpdateProfileWithAgentEventTypeForName(const Aws::String& name) {
  int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

  if (hashCode == INITIAL_RESPONSE_HASH) {
    return UpdateProfileWithAgentEventType::INITIAL_RESPONSE;
  } else if (hashCode == TEXTMESSAGEEVENT_HASH) {
    return UpdateProfileWithAgentEventType::TEXTMESSAGEEVENT;
  } else if (hashCode == PROGRESSEVENT_HASH) {
    return UpdateProfileWithAgentEventType::PROGRESSEVENT;
  } else if (hashCode == HEARTBEATEVENT_HASH) {
    return UpdateProfileWithAgentEventType::HEARTBEATEVENT;
  } else if (hashCode == ERROREVENT_HASH) {
    return UpdateProfileWithAgentEventType::ERROREVENT;
  } else if (hashCode == ENDOFOUTPUTEVENT_HASH) {
    return UpdateProfileWithAgentEventType::ENDOFOUTPUTEVENT;
  }
  return UpdateProfileWithAgentEventType::UNKNOWN;
}

Aws::String GetNameForUpdateProfileWithAgentEventType(UpdateProfileWithAgentEventType value) {
  switch (value) {
    case UpdateProfileWithAgentEventType::INITIAL_RESPONSE:
      return "initial-response";
    case UpdateProfileWithAgentEventType::TEXTMESSAGEEVENT:
      return "TextMessageEvent";
    case UpdateProfileWithAgentEventType::PROGRESSEVENT:
      return "ProgressEvent";
    case UpdateProfileWithAgentEventType::HEARTBEATEVENT:
      return "HeartbeatEvent";
    case UpdateProfileWithAgentEventType::ERROREVENT:
      return "ErrorEvent";
    case UpdateProfileWithAgentEventType::ENDOFOUTPUTEVENT:
      return "EndOfOutputEvent";
    default:
      return "Unknown";
  }
}
}  // namespace UpdateProfileWithAgentEventMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
