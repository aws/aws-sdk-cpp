/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/BedrockAgentCoreErrorMarshaller.h>
#include <aws/bedrock-agentcore/model/InvokeHarnessHandler.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
using namespace Aws::Client;

static const char INVOKEHARNESS_HANDLER_CLASS_TAG[] = "InvokeHarnessHandler";

InvokeHarnessHandler::InvokeHarnessHandler() : EventStreamHandler() {
  m_onInitialResponse = [&](const InvokeHarnessInitialResponse&, const Utils::Event::InitialResponseType eventType) {
    AWS_LOGSTREAM_TRACE(INVOKEHARNESS_HANDLER_CLASS_TAG,
                        "InvokeHarness initial response received from "
                            << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
  };

  m_onHarnessMessageStartEvent = [&](const HarnessMessageStartEvent&) {
    AWS_LOGSTREAM_TRACE(INVOKEHARNESS_HANDLER_CLASS_TAG, "HarnessMessageStartEvent received.");
  };

  m_onHarnessContentBlockStartEvent = [&](const HarnessContentBlockStartEvent&) {
    AWS_LOGSTREAM_TRACE(INVOKEHARNESS_HANDLER_CLASS_TAG, "HarnessContentBlockStartEvent received.");
  };

  m_onHarnessContentBlockDeltaEvent = [&](const HarnessContentBlockDeltaEvent&) {
    AWS_LOGSTREAM_TRACE(INVOKEHARNESS_HANDLER_CLASS_TAG, "HarnessContentBlockDeltaEvent received.");
  };

  m_onHarnessContentBlockStopEvent = [&](const HarnessContentBlockStopEvent&) {
    AWS_LOGSTREAM_TRACE(INVOKEHARNESS_HANDLER_CLASS_TAG, "HarnessContentBlockStopEvent received.");
  };

  m_onHarnessMessageStopEvent = [&](const HarnessMessageStopEvent&) {
    AWS_LOGSTREAM_TRACE(INVOKEHARNESS_HANDLER_CLASS_TAG, "HarnessMessageStopEvent received.");
  };

  m_onHarnessMetadataEvent = [&](const HarnessMetadataEvent&) {
    AWS_LOGSTREAM_TRACE(INVOKEHARNESS_HANDLER_CLASS_TAG, "HarnessMetadataEvent received.");
  };

  m_onError = [&](const AWSError<BedrockAgentCoreErrors>& error) {
    AWS_LOGSTREAM_TRACE(INVOKEHARNESS_HANDLER_CLASS_TAG, "BedrockAgentCore Errors received, " << error);
  };
}

void InvokeHarnessHandler::OnEvent() {
  // Handler internal error during event stream decoding.
  if (!*this) {
    AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
    error.SetMessage(GetEventPayloadAsString());
    m_onError(AWSError<BedrockAgentCoreErrors>(error));
    return;
  }

  const auto& headers = GetEventHeaders();
  auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
  if (messageTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
      AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG,
                         "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void InvokeHarnessHandler::HandleEventInMessage() {
  const auto& headers = GetEventHeaders();
  auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
  if (eventTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
    return;
  }
  switch (InvokeHarnessEventMapper::GetInvokeHarnessEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString())) {
    case InvokeHarnessEventType::INITIAL_RESPONSE: {
      InvokeHarnessInitialResponse event(GetEventHeadersAsHttpHeaders());
      m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
      break;
    }

    case InvokeHarnessEventType::MESSAGESTART: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG,
                           "Unable to generate a proper HarnessMessageStartEvent object from the response in JSON format.");
        break;
      }

      m_onHarnessMessageStartEvent(HarnessMessageStartEvent{json.View()});
      break;
    }
    case InvokeHarnessEventType::CONTENTBLOCKSTART: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG,
                           "Unable to generate a proper HarnessContentBlockStartEvent object from the response in JSON format.");
        break;
      }

      m_onHarnessContentBlockStartEvent(HarnessContentBlockStartEvent{json.View()});
      break;
    }
    case InvokeHarnessEventType::CONTENTBLOCKDELTA: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG,
                           "Unable to generate a proper HarnessContentBlockDeltaEvent object from the response in JSON format.");
        break;
      }

      m_onHarnessContentBlockDeltaEvent(HarnessContentBlockDeltaEvent{json.View()});
      break;
    }
    case InvokeHarnessEventType::CONTENTBLOCKSTOP: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG,
                           "Unable to generate a proper HarnessContentBlockStopEvent object from the response in JSON format.");
        break;
      }

      m_onHarnessContentBlockStopEvent(HarnessContentBlockStopEvent{json.View()});
      break;
    }
    case InvokeHarnessEventType::MESSAGESTOP: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG,
                           "Unable to generate a proper HarnessMessageStopEvent object from the response in JSON format.");
        break;
      }

      m_onHarnessMessageStopEvent(HarnessMessageStopEvent{json.View()});
      break;
    }
    case InvokeHarnessEventType::METADATA: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG,
                           "Unable to generate a proper HarnessMetadataEvent object from the response in JSON format.");
        break;
      }

      m_onHarnessMetadataEvent(HarnessMetadataEvent{json.View()});
      break;
    }
    default:
      AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG,
                         "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void InvokeHarnessHandler::HandleErrorInMessage() {
  const auto& headers = GetEventHeaders();
  Aws::String errorCode;
  Aws::String errorMessage;
  auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG, "Error type was not found in the event message.");
      return;
    }
  }

  errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();
  errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_ERROR(INVOKEHARNESS_HANDLER_CLASS_TAG, "Error description was not found in the event message.");
      return;
    }

    JsonValue exceptionPayload(GetEventPayloadAsString());
    if (!exceptionPayload.WasParseSuccessful()) {
      AWS_LOGSTREAM_ERROR(INVOKEHARNESS_HANDLER_CLASS_TAG,
                          "Unable to generate a proper RuntimeClientError object from the response in JSON format.");
      auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
      if (contentTypeIter != headers.end()) {
        AWS_LOGSTREAM_DEBUG(INVOKEHARNESS_HANDLER_CLASS_TAG,
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

void InvokeHarnessHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage) {
  BedrockAgentCoreErrorMarshaller errorMarshaller;
  AWSError<CoreErrors> error;

  if (errorCode.empty()) {
    error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
  } else {
    error = errorMarshaller.FindErrorByName(errorCode.c_str());
    if (error.GetErrorType() != CoreErrors::UNKNOWN) {
      AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error.SetExceptionName(errorCode);
      error.SetMessage(errorMessage);
    } else {
      AWS_LOGSTREAM_WARN(INVOKEHARNESS_HANDLER_CLASS_TAG,
                         "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode,
                                   "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
    }
  }

  m_onError(AWSError<BedrockAgentCoreErrors>(error));
}

namespace InvokeHarnessEventMapper {
static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
static const int MESSAGESTART_HASH = Aws::Utils::HashingUtils::HashString("messageStart");
static const int CONTENTBLOCKSTART_HASH = Aws::Utils::HashingUtils::HashString("contentBlockStart");
static const int CONTENTBLOCKDELTA_HASH = Aws::Utils::HashingUtils::HashString("contentBlockDelta");
static const int CONTENTBLOCKSTOP_HASH = Aws::Utils::HashingUtils::HashString("contentBlockStop");
static const int MESSAGESTOP_HASH = Aws::Utils::HashingUtils::HashString("messageStop");
static const int METADATA_HASH = Aws::Utils::HashingUtils::HashString("metadata");

InvokeHarnessEventType GetInvokeHarnessEventTypeForName(const Aws::String& name) {
  int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

  if (hashCode == INITIAL_RESPONSE_HASH) {
    return InvokeHarnessEventType::INITIAL_RESPONSE;
  } else if (hashCode == MESSAGESTART_HASH) {
    return InvokeHarnessEventType::MESSAGESTART;
  } else if (hashCode == CONTENTBLOCKSTART_HASH) {
    return InvokeHarnessEventType::CONTENTBLOCKSTART;
  } else if (hashCode == CONTENTBLOCKDELTA_HASH) {
    return InvokeHarnessEventType::CONTENTBLOCKDELTA;
  } else if (hashCode == CONTENTBLOCKSTOP_HASH) {
    return InvokeHarnessEventType::CONTENTBLOCKSTOP;
  } else if (hashCode == MESSAGESTOP_HASH) {
    return InvokeHarnessEventType::MESSAGESTOP;
  } else if (hashCode == METADATA_HASH) {
    return InvokeHarnessEventType::METADATA;
  }
  return InvokeHarnessEventType::UNKNOWN;
}

Aws::String GetNameForInvokeHarnessEventType(InvokeHarnessEventType value) {
  switch (value) {
    case InvokeHarnessEventType::INITIAL_RESPONSE:
      return "initial-response";
    case InvokeHarnessEventType::MESSAGESTART:
      return "messageStart";
    case InvokeHarnessEventType::CONTENTBLOCKSTART:
      return "contentBlockStart";
    case InvokeHarnessEventType::CONTENTBLOCKDELTA:
      return "contentBlockDelta";
    case InvokeHarnessEventType::CONTENTBLOCKSTOP:
      return "contentBlockStop";
    case InvokeHarnessEventType::MESSAGESTOP:
      return "messageStop";
    case InvokeHarnessEventType::METADATA:
      return "metadata";
    default:
      return "Unknown";
  }
}
}  // namespace InvokeHarnessEventMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
