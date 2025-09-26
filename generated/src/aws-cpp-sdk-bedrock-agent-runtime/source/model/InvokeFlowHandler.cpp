/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvokeFlowHandler.h>
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

    static const char INVOKEFLOW_HANDLER_CLASS_TAG[] = "InvokeFlowHandler";

    InvokeFlowHandler::InvokeFlowHandler() : EventStreamHandler()
    {
        m_onInitialResponse = [&](const InvokeFlowInitialResponse&, const Utils::Event::InitialResponseType eventType)
        {
            AWS_LOGSTREAM_TRACE(INVOKEFLOW_HANDLER_CLASS_TAG,
                "InvokeFlow initial response received from "
                << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
        };

        m_onFlowOutputEvent = [&](const FlowOutputEvent&)
        {
            AWS_LOGSTREAM_TRACE(INVOKEFLOW_HANDLER_CLASS_TAG, "FlowOutputEvent received.");
        };

        m_onFlowCompletionEvent = [&](const FlowCompletionEvent&)
        {
            AWS_LOGSTREAM_TRACE(INVOKEFLOW_HANDLER_CLASS_TAG, "FlowCompletionEvent received.");
        };

        m_onFlowTraceEvent = [&](const FlowTraceEvent&)
        {
            AWS_LOGSTREAM_TRACE(INVOKEFLOW_HANDLER_CLASS_TAG, "FlowTraceEvent received.");
        };

        m_onFlowMultiTurnInputRequestEvent = [&](const FlowMultiTurnInputRequestEvent&)
        {
            AWS_LOGSTREAM_TRACE(INVOKEFLOW_HANDLER_CLASS_TAG, "FlowMultiTurnInputRequestEvent received.");
        };

        m_onError = [&](const AWSError<BedrockAgentRuntimeErrors>& error)
        {
            AWS_LOGSTREAM_TRACE(INVOKEFLOW_HANDLER_CLASS_TAG, "BedrockAgentRuntime Errors received, " << error);
        };
    }

    void InvokeFlowHandler::OnEvent()
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
            AWS_LOGSTREAM_WARN(INVOKEFLOW_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
            AWS_LOGSTREAM_WARN(INVOKEFLOW_HANDLER_CLASS_TAG,
                "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void InvokeFlowHandler::HandleEventInMessage()
    {
        const auto& headers = GetEventHeaders();
        auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
        if (eventTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(INVOKEFLOW_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
            return;
        }
        switch (InvokeFlowEventMapper::GetInvokeFlowEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {

        case InvokeFlowEventType::INITIAL_RESPONSE:
        {
            InvokeFlowInitialResponse event(GetEventHeadersAsHttpHeaders());
            m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
            break;
        }   

        case InvokeFlowEventType::FLOWOUTPUTEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(INVOKEFLOW_HANDLER_CLASS_TAG, "Unable to generate a proper FlowOutputEvent object from the response in JSON format.");
                break;
            }

            m_onFlowOutputEvent(FlowOutputEvent{json.View()});
            break;
        }
        case InvokeFlowEventType::FLOWCOMPLETIONEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(INVOKEFLOW_HANDLER_CLASS_TAG, "Unable to generate a proper FlowCompletionEvent object from the response in JSON format.");
                break;
            }

            m_onFlowCompletionEvent(FlowCompletionEvent{json.View()});
            break;
        }
        case InvokeFlowEventType::FLOWTRACEEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(INVOKEFLOW_HANDLER_CLASS_TAG, "Unable to generate a proper FlowTraceEvent object from the response in JSON format.");
                break;
            }

            m_onFlowTraceEvent(FlowTraceEvent{json.View()});
            break;
        }
        case InvokeFlowEventType::FLOWMULTITURNINPUTREQUESTEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(INVOKEFLOW_HANDLER_CLASS_TAG, "Unable to generate a proper FlowMultiTurnInputRequestEvent object from the response in JSON format.");
                break;
            }

            m_onFlowMultiTurnInputRequestEvent(FlowMultiTurnInputRequestEvent{json.View()});
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(INVOKEFLOW_HANDLER_CLASS_TAG,
                "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void InvokeFlowHandler::HandleErrorInMessage()
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
                AWS_LOGSTREAM_WARN(INVOKEFLOW_HANDLER_CLASS_TAG,
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
                AWS_LOGSTREAM_ERROR(INVOKEFLOW_HANDLER_CLASS_TAG,
                        "Error description was not found in the event message.");
                return;
            }

            JsonValue exceptionPayload(GetEventPayloadAsString());
            if (!exceptionPayload.WasParseSuccessful())
            {
                AWS_LOGSTREAM_ERROR(INVOKEFLOW_HANDLER_CLASS_TAG, "Unable to generate a proper FlowMultiTurnInputRequestEvent object from the response in JSON format.");
                auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
                if (contentTypeIter != headers.end())
                {
                    AWS_LOGSTREAM_DEBUG(INVOKEFLOW_HANDLER_CLASS_TAG, "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
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

    void InvokeFlowHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage)
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
                AWS_LOGSTREAM_WARN(INVOKEFLOW_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error.SetExceptionName(errorCode);
                error.SetMessage(errorMessage);
            }
            else
            {
                AWS_LOGSTREAM_WARN(INVOKEFLOW_HANDLER_CLASS_TAG, "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode, "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
            }
        }

        m_onError(AWSError<BedrockAgentRuntimeErrors>(error));
    }

namespace InvokeFlowEventMapper
{
    static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
    static const int FLOWOUTPUTEVENT_HASH = Aws::Utils::HashingUtils::HashString("flowOutputEvent");
    static const int FLOWCOMPLETIONEVENT_HASH = Aws::Utils::HashingUtils::HashString("flowCompletionEvent");
    static const int FLOWTRACEEVENT_HASH = Aws::Utils::HashingUtils::HashString("flowTraceEvent");
    static const int FLOWMULTITURNINPUTREQUESTEVENT_HASH = Aws::Utils::HashingUtils::HashString("flowMultiTurnInputRequestEvent");

    InvokeFlowEventType GetInvokeFlowEventTypeForName(const Aws::String& name)
    {
        int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

        if (hashCode == INITIAL_RESPONSE_HASH) 
        {
            return InvokeFlowEventType::INITIAL_RESPONSE;
        }
        else if (hashCode == FLOWOUTPUTEVENT_HASH)
        {
            return InvokeFlowEventType::FLOWOUTPUTEVENT;
        }
        else if (hashCode == FLOWCOMPLETIONEVENT_HASH)
        {
            return InvokeFlowEventType::FLOWCOMPLETIONEVENT;
        }
        else if (hashCode == FLOWTRACEEVENT_HASH)
        {
            return InvokeFlowEventType::FLOWTRACEEVENT;
        }
        else if (hashCode == FLOWMULTITURNINPUTREQUESTEVENT_HASH)
        {
            return InvokeFlowEventType::FLOWMULTITURNINPUTREQUESTEVENT;
        }
        return InvokeFlowEventType::UNKNOWN;
    }

    Aws::String GetNameForInvokeFlowEventType(InvokeFlowEventType value)
    {
        switch (value)
        {
        case InvokeFlowEventType::INITIAL_RESPONSE:
            return "initial-response";
        case InvokeFlowEventType::FLOWOUTPUTEVENT:
            return "flowOutputEvent";
        case InvokeFlowEventType::FLOWCOMPLETIONEVENT:
            return "flowCompletionEvent";
        case InvokeFlowEventType::FLOWTRACEEVENT:
            return "flowTraceEvent";
        case InvokeFlowEventType::FLOWMULTITURNINPUTREQUESTEVENT:
            return "flowMultiTurnInputRequestEvent";
        default:
            return "Unknown";
        }
    }
} // namespace InvokeFlowEventMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
