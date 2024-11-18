/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/InvokeAssistantHandler.h>
#include <aws/iotsitewise/IoTSiteWiseErrorMarshaller.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/json/JsonSerializer.h>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
    using namespace Aws::Client;

    static const char INVOKEASSISTANT_HANDLER_CLASS_TAG[] = "InvokeAssistantHandler";

    InvokeAssistantHandler::InvokeAssistantHandler() : EventStreamHandler()
    {
        m_onInitialResponse = [&](const InvokeAssistantInitialResponse&, const Utils::Event::InitialResponseType eventType)
        {
            AWS_LOGSTREAM_TRACE(INVOKEASSISTANT_HANDLER_CLASS_TAG,
                "InvokeAssistant initial response received from "
                << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
        };

        m_onTrace = [&](const Trace&)
        {
            AWS_LOGSTREAM_TRACE(INVOKEASSISTANT_HANDLER_CLASS_TAG, "Trace received.");
        };

        m_onInvocationOutput = [&](const InvocationOutput&)
        {
            AWS_LOGSTREAM_TRACE(INVOKEASSISTANT_HANDLER_CLASS_TAG, "InvocationOutput received.");
        };

        m_onError = [&](const AWSError<IoTSiteWiseErrors>& error)
        {
            AWS_LOGSTREAM_TRACE(INVOKEASSISTANT_HANDLER_CLASS_TAG, "IoTSiteWise Errors received, " << error);
        };
    }

    void InvokeAssistantHandler::OnEvent()
    {
        // Handler internal error during event stream decoding.
        if (!*this)
        {
            AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
            error.SetMessage(GetEventPayloadAsString());
            m_onError(AWSError<IoTSiteWiseErrors>(error));
            return;
        }

        const auto& headers = GetEventHeaders();
        auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
        if (messageTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(INVOKEASSISTANT_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
            AWS_LOGSTREAM_WARN(INVOKEASSISTANT_HANDLER_CLASS_TAG,
                "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void InvokeAssistantHandler::HandleEventInMessage()
    {
        const auto& headers = GetEventHeaders();
        auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
        if (eventTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(INVOKEASSISTANT_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
            return;
        }
        switch (InvokeAssistantEventMapper::GetInvokeAssistantEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {

        case InvokeAssistantEventType::INITIAL_RESPONSE:
        {
            InvokeAssistantInitialResponse event(GetEventHeadersAsHttpHeaders());
            m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
            break;
        }   

        case InvokeAssistantEventType::TRACE:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(INVOKEASSISTANT_HANDLER_CLASS_TAG, "Unable to generate a proper Trace object from the response in JSON format.");
                break;
            }

            m_onTrace(Trace{json.View()});
            break;
        }
        case InvokeAssistantEventType::OUTPUT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(INVOKEASSISTANT_HANDLER_CLASS_TAG, "Unable to generate a proper InvocationOutput object from the response in JSON format.");
                break;
            }

            m_onInvocationOutput(InvocationOutput{json.View()});
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(INVOKEASSISTANT_HANDLER_CLASS_TAG,
                "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void InvokeAssistantHandler::HandleErrorInMessage()
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
                AWS_LOGSTREAM_WARN(INVOKEASSISTANT_HANDLER_CLASS_TAG,
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
                AWS_LOGSTREAM_ERROR(INVOKEASSISTANT_HANDLER_CLASS_TAG,
                        "Error description was not found in the event message.");
                return;
            }

            JsonValue exceptionPayload(GetEventPayloadAsString());
            if (!exceptionPayload.WasParseSuccessful())
            {
                AWS_LOGSTREAM_ERROR(INVOKEASSISTANT_HANDLER_CLASS_TAG, "Unable to generate a proper ThrottlingException object from the response in JSON format.");
                auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
                if (contentTypeIter != headers.end())
                {
                    AWS_LOGSTREAM_DEBUG(INVOKEASSISTANT_HANDLER_CLASS_TAG, "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
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

    void InvokeAssistantHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage)
    {
        IoTSiteWiseErrorMarshaller errorMarshaller;
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
                AWS_LOGSTREAM_WARN(INVOKEASSISTANT_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error.SetExceptionName(errorCode);
                error.SetMessage(errorMessage);
            }
            else
            {
                AWS_LOGSTREAM_WARN(INVOKEASSISTANT_HANDLER_CLASS_TAG, "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode, "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
            }
        }

        m_onError(AWSError<IoTSiteWiseErrors>(error));
    }

namespace InvokeAssistantEventMapper
{
    static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
    static const int TRACE_HASH = Aws::Utils::HashingUtils::HashString("trace");
    static const int OUTPUT_HASH = Aws::Utils::HashingUtils::HashString("output");

    InvokeAssistantEventType GetInvokeAssistantEventTypeForName(const Aws::String& name)
    {
        int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

        if (hashCode == INITIAL_RESPONSE_HASH) 
        {
            return InvokeAssistantEventType::INITIAL_RESPONSE;
        }
        else if (hashCode == TRACE_HASH)
        {
            return InvokeAssistantEventType::TRACE;
        }
        else if (hashCode == OUTPUT_HASH)
        {
            return InvokeAssistantEventType::OUTPUT;
        }
        return InvokeAssistantEventType::UNKNOWN;
    }

    Aws::String GetNameForInvokeAssistantEventType(InvokeAssistantEventType value)
    {
        switch (value)
        {
        case InvokeAssistantEventType::INITIAL_RESPONSE:
            return "initial-response";
        case InvokeAssistantEventType::TRACE:
            return "trace";
        case InvokeAssistantEventType::OUTPUT:
            return "output";
        default:
            return "Unknown";
        }
    }
} // namespace InvokeAssistantEventMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
