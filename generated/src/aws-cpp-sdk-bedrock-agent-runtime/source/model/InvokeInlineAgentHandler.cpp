﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeErrorMarshaller.h>
#include <aws/bedrock-agent-runtime/model/InvokeInlineAgentHandler.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
using namespace Aws::Client;

static const char INVOKEINLINEAGENT_HANDLER_CLASS_TAG[] = "InvokeInlineAgentHandler";

InvokeInlineAgentHandler::InvokeInlineAgentHandler() : EventStreamHandler() {
  m_onInitialResponse = [&](const InvokeInlineAgentInitialResponse&, const Utils::Event::InitialResponseType eventType) {
    AWS_LOGSTREAM_TRACE(INVOKEINLINEAGENT_HANDLER_CLASS_TAG,
                        "InvokeInlineAgent initial response received from "
                            << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
  };

  m_onInlineAgentPayloadPart = [&](const InlineAgentPayloadPart&) {
    AWS_LOGSTREAM_TRACE(INVOKEINLINEAGENT_HANDLER_CLASS_TAG, "InlineAgentPayloadPart received.");
  };

  m_onInlineAgentTracePart = [&](const InlineAgentTracePart&) {
    AWS_LOGSTREAM_TRACE(INVOKEINLINEAGENT_HANDLER_CLASS_TAG, "InlineAgentTracePart received.");
  };

  m_onInlineAgentReturnControlPayload = [&](const InlineAgentReturnControlPayload&) {
    AWS_LOGSTREAM_TRACE(INVOKEINLINEAGENT_HANDLER_CLASS_TAG, "InlineAgentReturnControlPayload received.");
  };

  m_onInlineAgentFilePart = [&](const InlineAgentFilePart&) {
    AWS_LOGSTREAM_TRACE(INVOKEINLINEAGENT_HANDLER_CLASS_TAG, "InlineAgentFilePart received.");
  };

  m_onError = [&](const AWSError<BedrockAgentRuntimeErrors>& error) {
    AWS_LOGSTREAM_TRACE(INVOKEINLINEAGENT_HANDLER_CLASS_TAG, "BedrockAgentRuntime Errors received, " << error);
  };
}

void InvokeInlineAgentHandler::OnEvent() {
  // Handler internal error during event stream decoding.
  if (!*this) {
    AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
    error.SetMessage(GetEventPayloadAsString());
    m_onError(AWSError<BedrockAgentRuntimeErrors>(error));
    return;
  }

  const auto& headers = GetEventHeaders();
  auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
  if (messageTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(INVOKEINLINEAGENT_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
      AWS_LOGSTREAM_WARN(INVOKEINLINEAGENT_HANDLER_CLASS_TAG,
                         "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void InvokeInlineAgentHandler::HandleEventInMessage() {
  const auto& headers = GetEventHeaders();
  auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
  if (eventTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(INVOKEINLINEAGENT_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
    return;
  }
  switch (InvokeInlineAgentEventMapper::GetInvokeInlineAgentEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString())) {
    case InvokeInlineAgentEventType::INITIAL_RESPONSE: {
      InvokeInlineAgentInitialResponse event(GetEventHeadersAsHttpHeaders());
      m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
      break;
    }

    case InvokeInlineAgentEventType::CHUNK: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(INVOKEINLINEAGENT_HANDLER_CLASS_TAG,
                           "Unable to generate a proper InlineAgentPayloadPart object from the response in JSON format.");
        break;
      }

      m_onInlineAgentPayloadPart(InlineAgentPayloadPart{json.View()});
      break;
    }
    case InvokeInlineAgentEventType::TRACE: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(INVOKEINLINEAGENT_HANDLER_CLASS_TAG,
                           "Unable to generate a proper InlineAgentTracePart object from the response in JSON format.");
        break;
      }

      m_onInlineAgentTracePart(InlineAgentTracePart{json.View()});
      break;
    }
    case InvokeInlineAgentEventType::RETURNCONTROL: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(INVOKEINLINEAGENT_HANDLER_CLASS_TAG,
                           "Unable to generate a proper InlineAgentReturnControlPayload object from the response in JSON format.");
        break;
      }

      m_onInlineAgentReturnControlPayload(InlineAgentReturnControlPayload{json.View()});
      break;
    }
    case InvokeInlineAgentEventType::FILES: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(INVOKEINLINEAGENT_HANDLER_CLASS_TAG,
                           "Unable to generate a proper InlineAgentFilePart object from the response in JSON format.");
        break;
      }

      m_onInlineAgentFilePart(InlineAgentFilePart{json.View()});
      break;
    }
    default:
      AWS_LOGSTREAM_WARN(INVOKEINLINEAGENT_HANDLER_CLASS_TAG,
                         "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void InvokeInlineAgentHandler::HandleErrorInMessage() {
  const auto& headers = GetEventHeaders();
  Aws::String errorCode;
  Aws::String errorMessage;
  auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_WARN(INVOKEINLINEAGENT_HANDLER_CLASS_TAG, "Error type was not found in the event message.");
      return;
    }
  }

  errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();
  errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_ERROR(INVOKEINLINEAGENT_HANDLER_CLASS_TAG, "Error description was not found in the event message.");
      return;
    }

    JsonValue exceptionPayload(GetEventPayloadAsString());
    if (!exceptionPayload.WasParseSuccessful()) {
      AWS_LOGSTREAM_ERROR(INVOKEINLINEAGENT_HANDLER_CLASS_TAG,
                          "Unable to generate a proper InlineAgentFilePart object from the response in JSON format.");
      auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
      if (contentTypeIter != headers.end()) {
        AWS_LOGSTREAM_DEBUG(INVOKEINLINEAGENT_HANDLER_CLASS_TAG,
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

void InvokeInlineAgentHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage) {
  BedrockAgentRuntimeErrorMarshaller errorMarshaller;
  AWSError<CoreErrors> error;

  if (errorCode.empty()) {
    error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
  } else {
    error = errorMarshaller.FindErrorByName(errorCode.c_str());
    if (error.GetErrorType() != CoreErrors::UNKNOWN) {
      AWS_LOGSTREAM_WARN(INVOKEINLINEAGENT_HANDLER_CLASS_TAG,
                         "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error.SetExceptionName(errorCode);
      error.SetMessage(errorMessage);
    } else {
      AWS_LOGSTREAM_WARN(INVOKEINLINEAGENT_HANDLER_CLASS_TAG,
                         "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode,
                                   "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
    }
  }

  m_onError(AWSError<BedrockAgentRuntimeErrors>(error));
}

namespace InvokeInlineAgentEventMapper {
static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
static const int CHUNK_HASH = Aws::Utils::HashingUtils::HashString("chunk");
static const int TRACE_HASH = Aws::Utils::HashingUtils::HashString("trace");
static const int RETURNCONTROL_HASH = Aws::Utils::HashingUtils::HashString("returnControl");
static const int FILES_HASH = Aws::Utils::HashingUtils::HashString("files");

InvokeInlineAgentEventType GetInvokeInlineAgentEventTypeForName(const Aws::String& name) {
  int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

  if (hashCode == INITIAL_RESPONSE_HASH) {
    return InvokeInlineAgentEventType::INITIAL_RESPONSE;
  } else if (hashCode == CHUNK_HASH) {
    return InvokeInlineAgentEventType::CHUNK;
  } else if (hashCode == TRACE_HASH) {
    return InvokeInlineAgentEventType::TRACE;
  } else if (hashCode == RETURNCONTROL_HASH) {
    return InvokeInlineAgentEventType::RETURNCONTROL;
  } else if (hashCode == FILES_HASH) {
    return InvokeInlineAgentEventType::FILES;
  }
  return InvokeInlineAgentEventType::UNKNOWN;
}

Aws::String GetNameForInvokeInlineAgentEventType(InvokeInlineAgentEventType value) {
  switch (value) {
    case InvokeInlineAgentEventType::INITIAL_RESPONSE:
      return "initial-response";
    case InvokeInlineAgentEventType::CHUNK:
      return "chunk";
    case InvokeInlineAgentEventType::TRACE:
      return "trace";
    case InvokeInlineAgentEventType::RETURNCONTROL:
      return "returnControl";
    case InvokeInlineAgentEventType::FILES:
      return "files";
    default:
      return "Unknown";
  }
}
}  // namespace InvokeInlineAgentEventMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
