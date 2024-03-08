/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/StartConversationHandler.h>
#include <aws/lexv2-runtime/LexRuntimeV2ErrorMarshaller.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/json/JsonSerializer.h>

using namespace Aws::LexRuntimeV2::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{
    using namespace Aws::Client;

    static const char STARTCONVERSATION_HANDLER_CLASS_TAG[] = "StartConversationHandler";

    StartConversationHandler::StartConversationHandler() : EventStreamHandler()
    {
        m_onInitialResponse = [&](const StartConversationInitialResponse&)
        {
            AWS_LOGSTREAM_TRACE(STARTCONVERSATION_HANDLER_CLASS_TAG,
                "StartConversation initial response received.");
        };

        m_onPlaybackInterruptionEvent = [&](const PlaybackInterruptionEvent&)
        {
            AWS_LOGSTREAM_TRACE(STARTCONVERSATION_HANDLER_CLASS_TAG, "PlaybackInterruptionEvent received.");
        };

        m_onTranscriptEvent = [&](const TranscriptEvent&)
        {
            AWS_LOGSTREAM_TRACE(STARTCONVERSATION_HANDLER_CLASS_TAG, "TranscriptEvent received.");
        };

        m_onIntentResultEvent = [&](const IntentResultEvent&)
        {
            AWS_LOGSTREAM_TRACE(STARTCONVERSATION_HANDLER_CLASS_TAG, "IntentResultEvent received.");
        };

        m_onTextResponseEvent = [&](const TextResponseEvent&)
        {
            AWS_LOGSTREAM_TRACE(STARTCONVERSATION_HANDLER_CLASS_TAG, "TextResponseEvent received.");
        };

        m_onAudioResponseEvent = [&](const AudioResponseEvent&)
        {
            AWS_LOGSTREAM_TRACE(STARTCONVERSATION_HANDLER_CLASS_TAG, "AudioResponseEvent received.");
        };

        m_onHeartbeatEvent = [&](const HeartbeatEvent&)
        {
            AWS_LOGSTREAM_TRACE(STARTCONVERSATION_HANDLER_CLASS_TAG, "HeartbeatEvent received.");
        };

        m_onError = [&](const AWSError<LexRuntimeV2Errors>& error)
        {
            AWS_LOGSTREAM_TRACE(STARTCONVERSATION_HANDLER_CLASS_TAG, "LexRuntimeV2 Errors received, " << error);
        };
    }

    void StartConversationHandler::OnEvent()
    {
        // Handler internal error during event stream decoding.
        if (!*this)
        {
            AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
            error.SetMessage(GetEventPayloadAsString());
            m_onError(AWSError<LexRuntimeV2Errors>(error));
            return;
        }

        const auto& headers = GetEventHeaders();
        auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
        if (messageTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
            AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG,
                "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void StartConversationHandler::HandleEventInMessage()
    {
        const auto& headers = GetEventHeaders();
        auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
        if (eventTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
            return;
        }
        switch (StartConversationEventMapper::GetStartConversationEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {
        
        case StartConversationEventType::INITIAL_RESPONSE: 
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG, "Unable to generate a proper StartConversationInitialResponse object from the response in JSON format.");
                break;
            }

            StartConversationInitialResponse event(json.View());
            m_onInitialResponse(event);
            break;
        }   

        case StartConversationEventType::PLAYBACKINTERRUPTIONEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG, "Unable to generate a proper PlaybackInterruptionEvent object from the response in JSON format.");
                break;
            }

            m_onPlaybackInterruptionEvent(PlaybackInterruptionEvent{json.View()});
            break;
        }
        case StartConversationEventType::TRANSCRIPTEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG, "Unable to generate a proper TranscriptEvent object from the response in JSON format.");
                break;
            }

            m_onTranscriptEvent(TranscriptEvent{json.View()});
            break;
        }
        case StartConversationEventType::INTENTRESULTEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG, "Unable to generate a proper IntentResultEvent object from the response in JSON format.");
                break;
            }

            m_onIntentResultEvent(IntentResultEvent{json.View()});
            break;
        }
        case StartConversationEventType::TEXTRESPONSEEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG, "Unable to generate a proper TextResponseEvent object from the response in JSON format.");
                break;
            }

            m_onTextResponseEvent(TextResponseEvent{json.View()});
            break;
        }
        case StartConversationEventType::AUDIORESPONSEEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG, "Unable to generate a proper AudioResponseEvent object from the response in JSON format.");
                break;
            }

            m_onAudioResponseEvent(AudioResponseEvent{json.View()});
            break;
        }
        case StartConversationEventType::HEARTBEATEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG, "Unable to generate a proper HeartbeatEvent object from the response in JSON format.");
                break;
            }

            m_onHeartbeatEvent(HeartbeatEvent{json.View()});
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG,
                "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void StartConversationHandler::HandleErrorInMessage()
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
                AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG,
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
                AWS_LOGSTREAM_ERROR(STARTCONVERSATION_HANDLER_CLASS_TAG,
                        "Error description was not found in the event message.");
                return;
            }

            JsonValue exceptionPayload(GetEventPayloadAsString());
            if (!exceptionPayload.WasParseSuccessful())
            {
                AWS_LOGSTREAM_ERROR(STARTCONVERSATION_HANDLER_CLASS_TAG, "Unable to generate a proper BadGatewayException object from the response in JSON format.");
                auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
                if (contentTypeIter != headers.end())
                {
                    AWS_LOGSTREAM_DEBUG(STARTCONVERSATION_HANDLER_CLASS_TAG, "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
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

    void StartConversationHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage)
    {
        LexRuntimeV2ErrorMarshaller errorMarshaller;
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
                AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error.SetExceptionName(errorCode);
                error.SetMessage(errorMessage);
            }
            else
            {
                AWS_LOGSTREAM_WARN(STARTCONVERSATION_HANDLER_CLASS_TAG, "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode, "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
            }
        }

        m_onError(AWSError<LexRuntimeV2Errors>(error));
    }

namespace StartConversationEventMapper
{
    static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
    static const int PLAYBACKINTERRUPTIONEVENT_HASH = Aws::Utils::HashingUtils::HashString("PlaybackInterruptionEvent");
    static const int TRANSCRIPTEVENT_HASH = Aws::Utils::HashingUtils::HashString("TranscriptEvent");
    static const int INTENTRESULTEVENT_HASH = Aws::Utils::HashingUtils::HashString("IntentResultEvent");
    static const int TEXTRESPONSEEVENT_HASH = Aws::Utils::HashingUtils::HashString("TextResponseEvent");
    static const int AUDIORESPONSEEVENT_HASH = Aws::Utils::HashingUtils::HashString("AudioResponseEvent");
    static const int HEARTBEATEVENT_HASH = Aws::Utils::HashingUtils::HashString("HeartbeatEvent");

    StartConversationEventType GetStartConversationEventTypeForName(const Aws::String& name)
    {
        int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

        if (hashCode == INITIAL_RESPONSE_HASH) 
        {
            return StartConversationEventType::INITIAL_RESPONSE;
        }
        else if (hashCode == PLAYBACKINTERRUPTIONEVENT_HASH)
        {
            return StartConversationEventType::PLAYBACKINTERRUPTIONEVENT;
        }
        else if (hashCode == TRANSCRIPTEVENT_HASH)
        {
            return StartConversationEventType::TRANSCRIPTEVENT;
        }
        else if (hashCode == INTENTRESULTEVENT_HASH)
        {
            return StartConversationEventType::INTENTRESULTEVENT;
        }
        else if (hashCode == TEXTRESPONSEEVENT_HASH)
        {
            return StartConversationEventType::TEXTRESPONSEEVENT;
        }
        else if (hashCode == AUDIORESPONSEEVENT_HASH)
        {
            return StartConversationEventType::AUDIORESPONSEEVENT;
        }
        else if (hashCode == HEARTBEATEVENT_HASH)
        {
            return StartConversationEventType::HEARTBEATEVENT;
        }
        return StartConversationEventType::UNKNOWN;
    }

    Aws::String GetNameForStartConversationEventType(StartConversationEventType value)
    {
        switch (value)
        {
        case StartConversationEventType::INITIAL_RESPONSE:
            return "initial-response";
        case StartConversationEventType::PLAYBACKINTERRUPTIONEVENT:
            return "PlaybackInterruptionEvent";
        case StartConversationEventType::TRANSCRIPTEVENT:
            return "TranscriptEvent";
        case StartConversationEventType::INTENTRESULTEVENT:
            return "IntentResultEvent";
        case StartConversationEventType::TEXTRESPONSEEVENT:
            return "TextResponseEvent";
        case StartConversationEventType::AUDIORESPONSEEVENT:
            return "AudioResponseEvent";
        case StartConversationEventType::HEARTBEATEVENT:
            return "HeartbeatEvent";
        default:
            return "Unknown";
        }
    }
} // namespace StartConversationEventMapper
} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
