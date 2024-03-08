/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvokeAgentHandler.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeErrorMarshaller.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/json/JsonSerializer.h>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
    using namespace Aws::Client;

    static const char INVOKEAGENT_HANDLER_CLASS_TAG[] = "InvokeAgentHandler";

    InvokeAgentHandler::InvokeAgentHandler() : EventStreamHandler()
    {
        m_onInitialResponse = [&](const InvokeAgentInitialResponse&)
        {
            AWS_LOGSTREAM_TRACE(INVOKEAGENT_HANDLER_CLASS_TAG,
                "InvokeAgent initial response received.");
        };

        m_onPayloadPart = [&](const PayloadPart&)
        {
            AWS_LOGSTREAM_TRACE(INVOKEAGENT_HANDLER_CLASS_TAG, "PayloadPart received.");
        };

        m_onTracePart = [&](const TracePart&)
        {
            AWS_LOGSTREAM_TRACE(INVOKEAGENT_HANDLER_CLASS_TAG, "TracePart received.");
        };

        m_onError = [&](const AWSError<BedrockAgentRuntimeErrors>& error)
        {
            AWS_LOGSTREAM_TRACE(INVOKEAGENT_HANDLER_CLASS_TAG, "BedrockAgentRuntime Errors received, " << error);
        };
    }

    void InvokeAgentHandler::OnEvent()
    {
        // Handler internal error during event stream decoding.
        if (!*this)
        {
            AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
            error.SetMessage(GetEventPayloadAsString());
            m_onError(AWSError<BedrockAgentRuntimeErrors>(error));
            return;
        }

        const auto& headers = GetEventHeaders();
        auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
        if (messageTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(INVOKEAGENT_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
            return;
        }

        switch (Aws::Utils::Event::Message::GetMessageTypeForName(messageTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {
        case Aws::Utils::Event::Message::MessageType::EVENT:
            HandleEventInMessage();
            break;
        case Aws::Utils::Event::Message::MessageType::REQUEST_LEVEL_ERROR:
        case Aws::Utils::Event::Message::MessageType::REQUEST_LEVEL_EXCEPTION:
        {
            HandleErrorInMessage();
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(INVOKEAGENT_HANDLER_CLASS_TAG,
                "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void InvokeAgentHandler::HandleEventInMessage()
    {
        const auto& headers = GetEventHeaders();
        auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
        if (eventTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(INVOKEAGENT_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
            return;
        }
        switch (InvokeAgentEventMapper::GetInvokeAgentEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {
        
        case InvokeAgentEventType::INITIAL_RESPONSE: 
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(INVOKEAGENT_HANDLER_CLASS_TAG, "Unable to generate a proper InvokeAgentInitialResponse object from the response in JSON format.");
                break;
            }

            InvokeAgentInitialResponse event(json.View());
            m_onInitialResponse(event);
            break;
        }   

        case InvokeAgentEventType::CHUNK:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(INVOKEAGENT_HANDLER_CLASS_TAG, "Unable to generate a proper PayloadPart object from the response in JSON format.");
                break;
            }

            m_onPayloadPart(PayloadPart{json.View()});
            break;
        }
        case InvokeAgentEventType::TRACE:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(INVOKEAGENT_HANDLER_CLASS_TAG, "Unable to generate a proper TracePart object from the response in JSON format.");
                break;
            }

            m_onTracePart(TracePart{json.View()});
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(INVOKEAGENT_HANDLER_CLASS_TAG,
                "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void InvokeAgentHandler::HandleErrorInMessage()
    {
        const auto& headers = GetEventHeaders();
        Aws::String errorCode;
        Aws::String errorMessage;
        auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);
        if (errorHeaderIter == headers.end())
        {
            errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
            if (errorHeaderIter == headers.end())
            {
                AWS_LOGSTREAM_WARN(INVOKEAGENT_HANDLER_CLASS_TAG,
                        "Error type was not found in the event message.");
                return;
            }
        }

        errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();
        errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
        if (errorHeaderIter == headers.end())
        {
            errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
            if (errorHeaderIter == headers.end())
            {
                AWS_LOGSTREAM_ERROR(INVOKEAGENT_HANDLER_CLASS_TAG,
                        "Error description was not found in the event message.");
                return;
            }

            JsonValue exceptionPayload(GetEventPayloadAsString());
            if (!exceptionPayload.WasParseSuccessful())
            {
                AWS_LOGSTREAM_ERROR(INVOKEAGENT_HANDLER_CLASS_TAG, "Unable to generate a proper ValidationException object from the response in JSON format.");
                auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
                if (contentTypeIter != headers.end())
                {
                    AWS_LOGSTREAM_DEBUG(INVOKEAGENT_HANDLER_CLASS_TAG, "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
                }
                return;
            }

            JsonView payloadView(exceptionPayload);
            errorMessage = payloadView.ValueExists(MESSAGE_CAMEL_CASE) ?
                           payloadView.GetString(MESSAGE_CAMEL_CASE) :
                           payloadView.ValueExists(MESSAGE_LOWER_CASE) ?
                           payloadView.GetString(MESSAGE_LOWER_CASE) : "";

        }
        else
        {
            errorMessage = errorHeaderIter->second.GetEventHeaderValueAsString();
        }
        MarshallError(errorCode, errorMessage);
    }

    void InvokeAgentHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage)
    {
        BedrockAgentRuntimeErrorMarshaller errorMarshaller;
        AWSError<CoreErrors> error;

        if (errorCode.empty())
        {
            error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
        }
        else
        {
            error = errorMarshaller.FindErrorByName(errorCode.c_str());
            if (error.GetErrorType() != CoreErrors::UNKNOWN)
            {
                AWS_LOGSTREAM_WARN(INVOKEAGENT_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error.SetExceptionName(errorCode);
                error.SetMessage(errorMessage);
            }
            else
            {
                AWS_LOGSTREAM_WARN(INVOKEAGENT_HANDLER_CLASS_TAG, "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode, "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
            }
        }

        m_onError(AWSError<BedrockAgentRuntimeErrors>(error));
    }

namespace InvokeAgentEventMapper
{
    static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
    static const int CHUNK_HASH = Aws::Utils::HashingUtils::HashString("chunk");
    static const int TRACE_HASH = Aws::Utils::HashingUtils::HashString("trace");

    InvokeAgentEventType GetInvokeAgentEventTypeForName(const Aws::String& name)
    {
        int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

        if (hashCode == INITIAL_RESPONSE_HASH) 
        {
            return InvokeAgentEventType::INITIAL_RESPONSE;
        }
        else if (hashCode == CHUNK_HASH)
        {
            return InvokeAgentEventType::CHUNK;
        }
        else if (hashCode == TRACE_HASH)
        {
            return InvokeAgentEventType::TRACE;
        }
        return InvokeAgentEventType::UNKNOWN;
    }

    Aws::String GetNameForInvokeAgentEventType(InvokeAgentEventType value)
    {
        switch (value)
        {
        case InvokeAgentEventType::INITIAL_RESPONSE:
            return "initial-response";
        case InvokeAgentEventType::CHUNK:
            return "chunk";
        case InvokeAgentEventType::TRACE:
            return "trace";
        default:
            return "Unknown";
        }
    }
} // namespace InvokeAgentEventMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
