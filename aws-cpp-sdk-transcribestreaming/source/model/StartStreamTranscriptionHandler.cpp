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

        m_onBadRequestException = [&](const BadRequestException&)
        {
            AWS_LOGSTREAM_TRACE(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "BadRequestException received.");
        };

        m_onLimitExceededException = [&](const LimitExceededException&)
        {
            AWS_LOGSTREAM_TRACE(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "LimitExceededException received.");
        };

        m_onInternalFailureException = [&](const InternalFailureException&)
        {
            AWS_LOGSTREAM_TRACE(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "InternalFailureException received.");
        };

        m_onConflictException = [&](const ConflictException&)
        {
            AWS_LOGSTREAM_TRACE(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "ConflictException received.");
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

        auto headers = GetEventHeaders();
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
        auto headers = GetEventHeaders();
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

            m_onTranscriptEvent(TranscriptEvent(json.View()));
            break;
        }
        case StartStreamTranscriptionEventType::BADREQUESTEXCEPTION:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Unable to generate a proper BadRequestException object from the response in JSON format.");
                break;
            }

            m_onBadRequestException(BadRequestException(json.View()));
            break;
        }
        case StartStreamTranscriptionEventType::LIMITEXCEEDEDEXCEPTION:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Unable to generate a proper LimitExceededException object from the response in JSON format.");
                break;
            }

            m_onLimitExceededException(LimitExceededException(json.View()));
            break;
        }
        case StartStreamTranscriptionEventType::INTERNALFAILUREEXCEPTION:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Unable to generate a proper InternalFailureException object from the response in JSON format.");
                break;
            }

            m_onInternalFailureException(InternalFailureException(json.View()));
            break;
        }
        case StartStreamTranscriptionEventType::CONFLICTEXCEPTION:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Unable to generate a proper ConflictException object from the response in JSON format.");
                break;
            }

            m_onConflictException(ConflictException(json.View()));
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG,
                "Unexpected event type: " << headers[EVENT_TYPE_HEADER].GetEventHeaderValueAsString());
            break;
        }
    }

    void StartStreamTranscriptionHandler::HandleErrorInMessage()
    {
        auto headers = GetEventHeaders();
        Aws::String errorCode = "";
        Aws::String errorMessage = "";
        auto errorCodeHeaderIter = headers.find(ERROR_CODE_HEADER);
        if (errorCodeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG,
                "Header: " << ERROR_CODE_HEADER << " not found in the message.");
        }
        else
        {
            errorCode = errorCodeHeaderIter->second.GetEventHeaderValueAsString();
        }
        auto errorMessageHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
        if (errorMessageHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(STARTSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG,
                "Header: " << ERROR_MESSAGE_HEADER << " not found in the message.");
        }
        else
        {
            errorMessage = errorMessageHeaderIter->second.GetEventHeaderValueAsString();
        }

        TranscribeStreamingServiceErrorMarshaller errorMarshaller;
        AWSError<CoreErrors> error;

        if (errorCode.empty())
        {
            error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
        }
        else
        {
            error = errorMarshaller.FindErrorByName(errorMessage.c_str());
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
    static const int BADREQUESTEXCEPTION_HASH = Aws::Utils::HashingUtils::HashString("BadRequestException");
    static const int LIMITEXCEEDEDEXCEPTION_HASH = Aws::Utils::HashingUtils::HashString("LimitExceededException");
    static const int INTERNALFAILUREEXCEPTION_HASH = Aws::Utils::HashingUtils::HashString("InternalFailureException");
    static const int CONFLICTEXCEPTION_HASH = Aws::Utils::HashingUtils::HashString("ConflictException");

    StartStreamTranscriptionEventType GetStartStreamTranscriptionEventTypeForName(const Aws::String& name)
    {
        int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());
        if (hashCode == TRANSCRIPTEVENT_HASH)
        {
            return StartStreamTranscriptionEventType::TRANSCRIPTEVENT;
        }
        else if (hashCode == BADREQUESTEXCEPTION_HASH)
        {
            return StartStreamTranscriptionEventType::BADREQUESTEXCEPTION;
        }
        else if (hashCode == LIMITEXCEEDEDEXCEPTION_HASH)
        {
            return StartStreamTranscriptionEventType::LIMITEXCEEDEDEXCEPTION;
        }
        else if (hashCode == INTERNALFAILUREEXCEPTION_HASH)
        {
            return StartStreamTranscriptionEventType::INTERNALFAILUREEXCEPTION;
        }
        else if (hashCode == CONFLICTEXCEPTION_HASH)
        {
            return StartStreamTranscriptionEventType::CONFLICTEXCEPTION;
        }
        return StartStreamTranscriptionEventType::UNKNOWN;
    }

    Aws::String GetNameForStartStreamTranscriptionEventType(StartStreamTranscriptionEventType value)
    {
        switch (value)
        {
        case StartStreamTranscriptionEventType::TRANSCRIPTEVENT:
            return "TranscriptEvent";
        case StartStreamTranscriptionEventType::BADREQUESTEXCEPTION:
            return "BadRequestException";
        case StartStreamTranscriptionEventType::LIMITEXCEEDEDEXCEPTION:
            return "LimitExceededException";
        case StartStreamTranscriptionEventType::INTERNALFAILUREEXCEPTION:
            return "InternalFailureException";
        case StartStreamTranscriptionEventType::CONFLICTEXCEPTION:
            return "ConflictException";
        default:
            return "Unknown";
        }
    }
} // namespace StartStreamTranscriptionEventMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
