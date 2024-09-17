/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ConverseStreamHandler.h>
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

    static const char CONVERSESTREAM_HANDLER_CLASS_TAG[] = "ConverseStreamHandler";

    ConverseStreamHandler::ConverseStreamHandler() : EventStreamHandler()
    {
        m_onInitialResponse = [&](const ConverseStreamInitialResponse&, const Utils::Event::InitialResponseType eventType)
        {
            AWS_LOGSTREAM_TRACE(CONVERSESTREAM_HANDLER_CLASS_TAG,
                "ConverseStream initial response received from "
                << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
        };

        m_onMessageStartEvent = [&](const MessageStartEvent&)
        {
            AWS_LOGSTREAM_TRACE(CONVERSESTREAM_HANDLER_CLASS_TAG, "MessageStartEvent received.");
        };

        m_onContentBlockStartEvent = [&](const ContentBlockStartEvent&)
        {
            AWS_LOGSTREAM_TRACE(CONVERSESTREAM_HANDLER_CLASS_TAG, "ContentBlockStartEvent received.");
        };

        m_onContentBlockDeltaEvent = [&](const ContentBlockDeltaEvent&)
        {
            AWS_LOGSTREAM_TRACE(CONVERSESTREAM_HANDLER_CLASS_TAG, "ContentBlockDeltaEvent received.");
        };

        m_onContentBlockStopEvent = [&](const ContentBlockStopEvent&)
        {
            AWS_LOGSTREAM_TRACE(CONVERSESTREAM_HANDLER_CLASS_TAG, "ContentBlockStopEvent received.");
        };

        m_onMessageStopEvent = [&](const MessageStopEvent&)
        {
            AWS_LOGSTREAM_TRACE(CONVERSESTREAM_HANDLER_CLASS_TAG, "MessageStopEvent received.");
        };

        m_onConverseStreamMetadataEvent = [&](const ConverseStreamMetadataEvent&)
        {
            AWS_LOGSTREAM_TRACE(CONVERSESTREAM_HANDLER_CLASS_TAG, "ConverseStreamMetadataEvent received.");
        };

        m_onError = [&](const AWSError<BedrockRuntimeErrors>& error)
        {
            AWS_LOGSTREAM_TRACE(CONVERSESTREAM_HANDLER_CLASS_TAG, "BedrockRuntime Errors received, " << error);
        };
    }

    void ConverseStreamHandler::OnEvent()
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
            AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
            AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG,
                "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void ConverseStreamHandler::HandleEventInMessage()
    {
        const auto& headers = GetEventHeaders();
        auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
        if (eventTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
            return;
        }
        switch (ConverseStreamEventMapper::GetConverseStreamEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {

        case ConverseStreamEventType::INITIAL_RESPONSE:
        {
            ConverseStreamInitialResponse event(GetEventHeadersAsHttpHeaders());
            m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
            break;
        }   

        case ConverseStreamEventType::MESSAGESTART:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG, "Unable to generate a proper MessageStartEvent object from the response in JSON format.");
                break;
            }

            m_onMessageStartEvent(MessageStartEvent{json.View()});
            break;
        }
        case ConverseStreamEventType::CONTENTBLOCKSTART:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG, "Unable to generate a proper ContentBlockStartEvent object from the response in JSON format.");
                break;
            }

            m_onContentBlockStartEvent(ContentBlockStartEvent{json.View()});
            break;
        }
        case ConverseStreamEventType::CONTENTBLOCKDELTA:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG, "Unable to generate a proper ContentBlockDeltaEvent object from the response in JSON format.");
                break;
            }

            m_onContentBlockDeltaEvent(ContentBlockDeltaEvent{json.View()});
            break;
        }
        case ConverseStreamEventType::CONTENTBLOCKSTOP:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG, "Unable to generate a proper ContentBlockStopEvent object from the response in JSON format.");
                break;
            }

            m_onContentBlockStopEvent(ContentBlockStopEvent{json.View()});
            break;
        }
        case ConverseStreamEventType::MESSAGESTOP:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG, "Unable to generate a proper MessageStopEvent object from the response in JSON format.");
                break;
            }

            m_onMessageStopEvent(MessageStopEvent{json.View()});
            break;
        }
        case ConverseStreamEventType::METADATA:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG, "Unable to generate a proper ConverseStreamMetadataEvent object from the response in JSON format.");
                break;
            }

            m_onConverseStreamMetadataEvent(ConverseStreamMetadataEvent{json.View()});
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG,
                "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void ConverseStreamHandler::HandleErrorInMessage()
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
                AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG,
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
                AWS_LOGSTREAM_ERROR(CONVERSESTREAM_HANDLER_CLASS_TAG,
                        "Error description was not found in the event message.");
                return;
            }

            JsonValue exceptionPayload(GetEventPayloadAsString());
            if (!exceptionPayload.WasParseSuccessful())
            {
                AWS_LOGSTREAM_ERROR(CONVERSESTREAM_HANDLER_CLASS_TAG, "Unable to generate a proper ServiceUnavailableException object from the response in JSON format.");
                auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
                if (contentTypeIter != headers.end())
                {
                    AWS_LOGSTREAM_DEBUG(CONVERSESTREAM_HANDLER_CLASS_TAG, "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
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

    void ConverseStreamHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage)
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
                AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error.SetExceptionName(errorCode);
                error.SetMessage(errorMessage);
            }
            else
            {
                AWS_LOGSTREAM_WARN(CONVERSESTREAM_HANDLER_CLASS_TAG, "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode, "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
            }
        }

        m_onError(AWSError<BedrockRuntimeErrors>(error));
    }

namespace ConverseStreamEventMapper
{
    static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
    static const int MESSAGESTART_HASH = Aws::Utils::HashingUtils::HashString("messageStart");
    static const int CONTENTBLOCKSTART_HASH = Aws::Utils::HashingUtils::HashString("contentBlockStart");
    static const int CONTENTBLOCKDELTA_HASH = Aws::Utils::HashingUtils::HashString("contentBlockDelta");
    static const int CONTENTBLOCKSTOP_HASH = Aws::Utils::HashingUtils::HashString("contentBlockStop");
    static const int MESSAGESTOP_HASH = Aws::Utils::HashingUtils::HashString("messageStop");
    static const int METADATA_HASH = Aws::Utils::HashingUtils::HashString("metadata");

    ConverseStreamEventType GetConverseStreamEventTypeForName(const Aws::String& name)
    {
        int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

        if (hashCode == INITIAL_RESPONSE_HASH) 
        {
            return ConverseStreamEventType::INITIAL_RESPONSE;
        }
        else if (hashCode == MESSAGESTART_HASH)
        {
            return ConverseStreamEventType::MESSAGESTART;
        }
        else if (hashCode == CONTENTBLOCKSTART_HASH)
        {
            return ConverseStreamEventType::CONTENTBLOCKSTART;
        }
        else if (hashCode == CONTENTBLOCKDELTA_HASH)
        {
            return ConverseStreamEventType::CONTENTBLOCKDELTA;
        }
        else if (hashCode == CONTENTBLOCKSTOP_HASH)
        {
            return ConverseStreamEventType::CONTENTBLOCKSTOP;
        }
        else if (hashCode == MESSAGESTOP_HASH)
        {
            return ConverseStreamEventType::MESSAGESTOP;
        }
        else if (hashCode == METADATA_HASH)
        {
            return ConverseStreamEventType::METADATA;
        }
        return ConverseStreamEventType::UNKNOWN;
    }

    Aws::String GetNameForConverseStreamEventType(ConverseStreamEventType value)
    {
        switch (value)
        {
        case ConverseStreamEventType::INITIAL_RESPONSE:
            return "initial-response";
        case ConverseStreamEventType::MESSAGESTART:
            return "messageStart";
        case ConverseStreamEventType::CONTENTBLOCKSTART:
            return "contentBlockStart";
        case ConverseStreamEventType::CONTENTBLOCKDELTA:
            return "contentBlockDelta";
        case ConverseStreamEventType::CONTENTBLOCKSTOP:
            return "contentBlockStop";
        case ConverseStreamEventType::MESSAGESTOP:
            return "messageStop";
        case ConverseStreamEventType::METADATA:
            return "metadata";
        default:
            return "Unknown";
        }
    }
} // namespace ConverseStreamEventMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
