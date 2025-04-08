/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/InvokeModelWithBidirectionalStreamHandler.h>
#include <aws/bedrock-runtime/BedrockRuntimeErrorMarshaller.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/json/JsonSerializer.h>

using namespace Aws::BedrockRuntime::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{
    using namespace Aws::Client;

    static const char INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG[] = "InvokeModelWithBidirectionalStreamHandler";

    InvokeModelWithBidirectionalStreamHandler::InvokeModelWithBidirectionalStreamHandler() : EventStreamHandler()
    {
        m_onInitialResponse = [&](const InvokeModelWithBidirectionalStreamInitialResponse&, const Utils::Event::InitialResponseType eventType)
        {
            AWS_LOGSTREAM_TRACE(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                "InvokeModelWithBidirectionalStream initial response received from "
                << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
        };

        m_onBidirectionalOutputPayloadPart = [&](const BidirectionalOutputPayloadPart&)
        {
            AWS_LOGSTREAM_TRACE(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "BidirectionalOutputPayloadPart received.");
        };

        m_onError = [&](const AWSError<BedrockRuntimeErrors>& error)
        {
            AWS_LOGSTREAM_TRACE(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "BedrockRuntime Errors received, " << error);
        };
    }

    void InvokeModelWithBidirectionalStreamHandler::OnEvent()
    {
        // Handler internal error during event stream decoding.
        if (!*this)
        {
            AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
            error.SetMessage(GetEventPayloadAsString());
            m_onError(AWSError<BedrockRuntimeErrors>(error));
            return;
        }

        const auto& headers = GetEventHeaders();
        auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
        if (messageTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
            AWS_LOGSTREAM_WARN(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void InvokeModelWithBidirectionalStreamHandler::HandleEventInMessage()
    {
        const auto& headers = GetEventHeaders();
        auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
        if (eventTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
            return;
        }
        switch (InvokeModelWithBidirectionalStreamEventMapper::GetInvokeModelWithBidirectionalStreamEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {

        case InvokeModelWithBidirectionalStreamEventType::INITIAL_RESPONSE:
        {
            InvokeModelWithBidirectionalStreamInitialResponse event(GetEventHeadersAsHttpHeaders());
            m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
            break;
        }   

        case InvokeModelWithBidirectionalStreamEventType::CHUNK:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "Unable to generate a proper BidirectionalOutputPayloadPart object from the response in JSON format.");
                break;
            }

            m_onBidirectionalOutputPayloadPart(BidirectionalOutputPayloadPart{json.View()});
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void InvokeModelWithBidirectionalStreamHandler::HandleErrorInMessage()
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
                AWS_LOGSTREAM_WARN(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
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
                AWS_LOGSTREAM_ERROR(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                        "Error description was not found in the event message.");
                return;
            }

            JsonValue exceptionPayload(GetEventPayloadAsString());
            if (!exceptionPayload.WasParseSuccessful())
            {
                AWS_LOGSTREAM_ERROR(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "Unable to generate a proper ServiceUnavailableException object from the response in JSON format.");
                auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
                if (contentTypeIter != headers.end())
                {
                    AWS_LOGSTREAM_DEBUG(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
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

    void InvokeModelWithBidirectionalStreamHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage)
    {
        BedrockRuntimeErrorMarshaller errorMarshaller;
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
                AWS_LOGSTREAM_WARN(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error.SetExceptionName(errorCode);
                error.SetMessage(errorMessage);
            }
            else
            {
                AWS_LOGSTREAM_WARN(INVOKEMODELWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode, "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
            }
        }

        m_onError(AWSError<BedrockRuntimeErrors>(error));
    }

namespace InvokeModelWithBidirectionalStreamEventMapper
{
    static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
    static const int CHUNK_HASH = Aws::Utils::HashingUtils::HashString("chunk");

    InvokeModelWithBidirectionalStreamEventType GetInvokeModelWithBidirectionalStreamEventTypeForName(const Aws::String& name)
    {
        int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

        if (hashCode == INITIAL_RESPONSE_HASH) 
        {
            return InvokeModelWithBidirectionalStreamEventType::INITIAL_RESPONSE;
        }
        else if (hashCode == CHUNK_HASH)
        {
            return InvokeModelWithBidirectionalStreamEventType::CHUNK;
        }
        return InvokeModelWithBidirectionalStreamEventType::UNKNOWN;
    }

    Aws::String GetNameForInvokeModelWithBidirectionalStreamEventType(InvokeModelWithBidirectionalStreamEventType value)
    {
        switch (value)
        {
        case InvokeModelWithBidirectionalStreamEventType::INITIAL_RESPONSE:
            return "initial-response";
        case InvokeModelWithBidirectionalStreamEventType::CHUNK:
            return "chunk";
        default:
            return "Unknown";
        }
    }
} // namespace InvokeModelWithBidirectionalStreamEventMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
