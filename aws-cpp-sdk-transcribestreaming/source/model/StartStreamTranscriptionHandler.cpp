/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/transcribestreaming/model/StartStreamTranscriptionHandler.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceErrorMarshaller.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/json/JsonSerializer.h>

using namespace Aws::TranscribeStreamingService::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
    using namespace Aws::Client;

    static const char STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG[] = "StartStreamTranscriptionHandler";

    StartStreamTranscriptionHandler::StartStreamTranscriptionHandler() : EventStreamHandler()
    {
        m_onTranscriptEvent = [&](const TranscriptEvent&)
        {
            AWS_LOGSTREAM_TRACE(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "TranscriptEvent received.");
        };

        m_onError = [&](const AWSError<TranscribeStreamingServiceErrors>& error)
        {
            AWS_LOGSTREAM_TRACE(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "TranscribeStreamingService Errors received, " << error);
        };
    }

    void StartStreamTranscriptionHandler::OnEvent()
    {
        using namespace Aws::Utils::Event;

        // Handler internal error during event stream decoding.
        if (!*this)
        {
            AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
            error.SetMessage(GetEventPayloadAsString());
            m_onError(AWSError<TranscribeStreamingServiceErrors>(error));
            return;
        }

        const auto& headers = GetEventHeaders();
        auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
        if (messageTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
            return;
        }

        switch (Message::GetMessageTypeForName(messageTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {
        case Message::MessageType::EVENT:
            HandleEventInMessage();
            break;
        case Message::MessageType::REQUEST_LEVEL_ERROR:
        case Message::MessageType::REQUEST_LEVEL_EXCEPTION:
        {
            HandleErrorInMessage();
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG,
                "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void StartStreamTranscriptionHandler::HandleEventInMessage()
    {
        const auto& headers = GetEventHeaders();
        auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
        if (eventTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
            return;
        }
        switch (StartStreamTranscriptionEventMapper::GetStartStreamTranscriptionEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {
        case StartStreamTranscriptionEventType::TRANSCRIPTEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Unable to generate a proper TranscriptEvent object from the response in JSON format.");
                break;
            }

            m_onTranscriptEvent(TranscriptEvent{json.View()});
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG,
                "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void StartStreamTranscriptionHandler::HandleErrorInMessage()
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
                AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG,
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
                AWS_LOGSTREAM_ERROR(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG,
                        "Error description was not found in the event message.");
                return;
            }

            JsonValue exceptionPayload(GetEventPayloadAsString());
            if (!exceptionPayload.WasParseSuccessful())
            {
                AWS_LOGSTREAM_ERROR(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Unable to generate a proper ConflictException object from the response in JSON format.");
                auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
                if (contentTypeIter != headers.end())
                {
                    AWS_LOGSTREAM_DEBUG(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
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

    void StartStreamTranscriptionHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage)
    {
        TranscribeStreamingServiceErrorMarshaller errorMarshaller;
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
                AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error.SetExceptionName(errorCode);
                error.SetMessage(errorMessage);
            }
            else
            {
                AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode, "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
            }
        }

        m_onError(AWSError<TranscribeStreamingServiceErrors>(error));
    }

namespace StartStreamTranscriptionEventMapper
{
    static const int TRANSCRIPTEVENT_HASH = Aws::Utils::HashingUtils::HashString("TranscriptEvent");

    StartStreamTranscriptionEventType GetStartStreamTranscriptionEventTypeForName(const Aws::String& name)
    {
        int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());
        if (hashCode == TRANSCRIPTEVENT_HASH)
        {
            return StartStreamTranscriptionEventType::TRANSCRIPTEVENT;
        }
        return StartStreamTranscriptionEventType::UNKNOWN;
    }

    Aws::String GetNameForStartStreamTranscriptionEventType(StartStreamTranscriptionEventType value)
    {
        switch (value)
        {
        case StartStreamTranscriptionEventType::TRANSCRIPTEVENT:
            return "TranscriptEvent";
        default:
            return "Unknown";
        }
    }
} // namespace StartStreamTranscriptionEventMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
