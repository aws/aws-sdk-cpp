/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/devops-agent/DevOpsAgentErrorMarshaller.h>
#include <aws/devops-agent/model/SendMessageHandler.h>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws {
namespace DevOpsAgent {
namespace Model {
using namespace Aws::Client;

static const char SENDMESSAGE_HANDLER_CLASS_TAG[] = "SendMessageHandler";

SendMessageHandler::SendMessageHandler() : EventStreamHandler() {
  m_onInitialResponse = [&](const SendMessageInitialResponse&, const Utils::Event::InitialResponseType eventType) {
    AWS_LOGSTREAM_TRACE(SENDMESSAGE_HANDLER_CLASS_TAG,
                        "SendMessage initial response received from "
                            << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
  };

  m_onSendMessageResponseCreatedEvent = [&](const SendMessageResponseCreatedEvent&) {
    AWS_LOGSTREAM_TRACE(SENDMESSAGE_HANDLER_CLASS_TAG, "SendMessageResponseCreatedEvent received.");
  };

  m_onSendMessageResponseInProgressEvent = [&](const SendMessageResponseInProgressEvent&) {
    AWS_LOGSTREAM_TRACE(SENDMESSAGE_HANDLER_CLASS_TAG, "SendMessageResponseInProgressEvent received.");
  };

  m_onSendMessageResponseCompletedEvent = [&](const SendMessageResponseCompletedEvent&) {
    AWS_LOGSTREAM_TRACE(SENDMESSAGE_HANDLER_CLASS_TAG, "SendMessageResponseCompletedEvent received.");
  };

  m_onSendMessageResponseFailedEvent = [&](const SendMessageResponseFailedEvent&) {
    AWS_LOGSTREAM_TRACE(SENDMESSAGE_HANDLER_CLASS_TAG, "SendMessageResponseFailedEvent received.");
  };

  m_onSendMessageSummaryEvent = [&](const SendMessageSummaryEvent&) {
    AWS_LOGSTREAM_TRACE(SENDMESSAGE_HANDLER_CLASS_TAG, "SendMessageSummaryEvent received.");
  };

  m_onSendMessageHeartbeatEvent = [&]() { AWS_LOGSTREAM_TRACE(SENDMESSAGE_HANDLER_CLASS_TAG, "SendMessageHeartbeatEvent received."); };

  m_onSendMessageContentBlockStartEvent = [&](const SendMessageContentBlockStartEvent&) {
    AWS_LOGSTREAM_TRACE(SENDMESSAGE_HANDLER_CLASS_TAG, "SendMessageContentBlockStartEvent received.");
  };

  m_onSendMessageContentBlockDeltaEvent = [&](const SendMessageContentBlockDeltaEvent&) {
    AWS_LOGSTREAM_TRACE(SENDMESSAGE_HANDLER_CLASS_TAG, "SendMessageContentBlockDeltaEvent received.");
  };

  m_onSendMessageContentBlockStopEvent = [&](const SendMessageContentBlockStopEvent&) {
    AWS_LOGSTREAM_TRACE(SENDMESSAGE_HANDLER_CLASS_TAG, "SendMessageContentBlockStopEvent received.");
  };

  m_onError = [&](const AWSError<DevOpsAgentErrors>& error) {
    AWS_LOGSTREAM_TRACE(SENDMESSAGE_HANDLER_CLASS_TAG, "DevOpsAgent Errors received, " << error);
  };
}

void SendMessageHandler::OnEvent() {
  // Handler internal error during event stream decoding.
  if (!*this) {
    AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
    error.SetMessage(GetEventPayloadAsString());
    m_onError(AWSError<DevOpsAgentErrors>(error));
    return;
  }

  const auto& headers = GetEventHeaders();
  auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
  if (messageTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
      AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG,
                         "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void SendMessageHandler::HandleEventInMessage() {
  const auto& headers = GetEventHeaders();
  auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
  if (eventTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
    return;
  }
  switch (SendMessageEventMapper::GetSendMessageEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString())) {
    case SendMessageEventType::INITIAL_RESPONSE: {
      SendMessageInitialResponse event(GetEventHeadersAsHttpHeaders());
      m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
      break;
    }

    case SendMessageEventType::RESPONSECREATED: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper SendMessageResponseCreatedEvent object from the response in JSON format.");
        break;
      }

      m_onSendMessageResponseCreatedEvent(SendMessageResponseCreatedEvent{json.View()});
      break;
    }
    case SendMessageEventType::RESPONSEINPROGRESS: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper SendMessageResponseInProgressEvent object from the response in JSON format.");
        break;
      }

      m_onSendMessageResponseInProgressEvent(SendMessageResponseInProgressEvent{json.View()});
      break;
    }
    case SendMessageEventType::RESPONSECOMPLETED: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper SendMessageResponseCompletedEvent object from the response in JSON format.");
        break;
      }

      m_onSendMessageResponseCompletedEvent(SendMessageResponseCompletedEvent{json.View()});
      break;
    }
    case SendMessageEventType::RESPONSEFAILED: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper SendMessageResponseFailedEvent object from the response in JSON format.");
        break;
      }

      m_onSendMessageResponseFailedEvent(SendMessageResponseFailedEvent{json.View()});
      break;
    }
    case SendMessageEventType::SUMMARY: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper SendMessageSummaryEvent object from the response in JSON format.");
        break;
      }

      m_onSendMessageSummaryEvent(SendMessageSummaryEvent{json.View()});
      break;
    }
    case SendMessageEventType::HEARTBEAT: {
      m_onSendMessageHeartbeatEvent();
      break;
    }
    case SendMessageEventType::CONTENTBLOCKSTART: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper SendMessageContentBlockStartEvent object from the response in JSON format.");
        break;
      }

      m_onSendMessageContentBlockStartEvent(SendMessageContentBlockStartEvent{json.View()});
      break;
    }
    case SendMessageEventType::CONTENTBLOCKDELTA: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper SendMessageContentBlockDeltaEvent object from the response in JSON format.");
        break;
      }

      m_onSendMessageContentBlockDeltaEvent(SendMessageContentBlockDeltaEvent{json.View()});
      break;
    }
    case SendMessageEventType::CONTENTBLOCKSTOP: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG,
                           "Unable to generate a proper SendMessageContentBlockStopEvent object from the response in JSON format.");
        break;
      }

      m_onSendMessageContentBlockStopEvent(SendMessageContentBlockStopEvent{json.View()});
      break;
    }
    default:
      AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG,
                         "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void SendMessageHandler::HandleErrorInMessage() {
  const auto& headers = GetEventHeaders();
  Aws::String errorCode;
  Aws::String errorMessage;
  auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG, "Error type was not found in the event message.");
      return;
    }
  }

  errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();
  errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_ERROR(SENDMESSAGE_HANDLER_CLASS_TAG, "Error description was not found in the event message.");
      return;
    }

    JsonValue exceptionPayload(GetEventPayloadAsString());
    if (!exceptionPayload.WasParseSuccessful()) {
      AWS_LOGSTREAM_ERROR(SENDMESSAGE_HANDLER_CLASS_TAG,
                          "Unable to generate a proper SendMessageContentBlockStopEvent object from the response in JSON format.");
      auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
      if (contentTypeIter != headers.end()) {
        AWS_LOGSTREAM_DEBUG(SENDMESSAGE_HANDLER_CLASS_TAG, "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
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

void SendMessageHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage) {
  DevOpsAgentErrorMarshaller errorMarshaller;
  AWSError<CoreErrors> error;

  if (errorCode.empty()) {
    error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
  } else {
    error = errorMarshaller.FindErrorByName(errorCode.c_str());
    if (error.GetErrorType() != CoreErrors::UNKNOWN) {
      AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error.SetExceptionName(errorCode);
      error.SetMessage(errorMessage);
    } else {
      AWS_LOGSTREAM_WARN(SENDMESSAGE_HANDLER_CLASS_TAG,
                         "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode,
                                   "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
    }
  }

  m_onError(AWSError<DevOpsAgentErrors>(error));
}

namespace SendMessageEventMapper {
static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
static const int RESPONSECREATED_HASH = Aws::Utils::HashingUtils::HashString("responseCreated");
static const int RESPONSEINPROGRESS_HASH = Aws::Utils::HashingUtils::HashString("responseInProgress");
static const int RESPONSECOMPLETED_HASH = Aws::Utils::HashingUtils::HashString("responseCompleted");
static const int RESPONSEFAILED_HASH = Aws::Utils::HashingUtils::HashString("responseFailed");
static const int SUMMARY_HASH = Aws::Utils::HashingUtils::HashString("summary");
static const int HEARTBEAT_HASH = Aws::Utils::HashingUtils::HashString("heartbeat");
static const int CONTENTBLOCKSTART_HASH = Aws::Utils::HashingUtils::HashString("contentBlockStart");
static const int CONTENTBLOCKDELTA_HASH = Aws::Utils::HashingUtils::HashString("contentBlockDelta");
static const int CONTENTBLOCKSTOP_HASH = Aws::Utils::HashingUtils::HashString("contentBlockStop");

SendMessageEventType GetSendMessageEventTypeForName(const Aws::String& name) {
  int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

  if (hashCode == INITIAL_RESPONSE_HASH) {
    return SendMessageEventType::INITIAL_RESPONSE;
  } else if (hashCode == RESPONSECREATED_HASH) {
    return SendMessageEventType::RESPONSECREATED;
  } else if (hashCode == RESPONSEINPROGRESS_HASH) {
    return SendMessageEventType::RESPONSEINPROGRESS;
  } else if (hashCode == RESPONSECOMPLETED_HASH) {
    return SendMessageEventType::RESPONSECOMPLETED;
  } else if (hashCode == RESPONSEFAILED_HASH) {
    return SendMessageEventType::RESPONSEFAILED;
  } else if (hashCode == SUMMARY_HASH) {
    return SendMessageEventType::SUMMARY;
  } else if (hashCode == HEARTBEAT_HASH) {
    return SendMessageEventType::HEARTBEAT;
  } else if (hashCode == CONTENTBLOCKSTART_HASH) {
    return SendMessageEventType::CONTENTBLOCKSTART;
  } else if (hashCode == CONTENTBLOCKDELTA_HASH) {
    return SendMessageEventType::CONTENTBLOCKDELTA;
  } else if (hashCode == CONTENTBLOCKSTOP_HASH) {
    return SendMessageEventType::CONTENTBLOCKSTOP;
  }
  return SendMessageEventType::UNKNOWN;
}

Aws::String GetNameForSendMessageEventType(SendMessageEventType value) {
  switch (value) {
    case SendMessageEventType::INITIAL_RESPONSE:
      return "initial-response";
    case SendMessageEventType::RESPONSECREATED:
      return "responseCreated";
    case SendMessageEventType::RESPONSEINPROGRESS:
      return "responseInProgress";
    case SendMessageEventType::RESPONSECOMPLETED:
      return "responseCompleted";
    case SendMessageEventType::RESPONSEFAILED:
      return "responseFailed";
    case SendMessageEventType::SUMMARY:
      return "summary";
    case SendMessageEventType::HEARTBEAT:
      return "heartbeat";
    case SendMessageEventType::CONTENTBLOCKSTART:
      return "contentBlockStart";
    case SendMessageEventType::CONTENTBLOCKDELTA:
      return "contentBlockDelta";
    case SendMessageEventType::CONTENTBLOCKSTOP:
      return "contentBlockStop";
    default:
      return "Unknown";
  }
}
}  // namespace SendMessageEventMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
