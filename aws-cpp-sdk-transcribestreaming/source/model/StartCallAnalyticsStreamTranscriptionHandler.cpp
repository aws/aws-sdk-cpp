/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/StartCallAnalyticsStreamTranscriptionHandler.h>
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

    static const char STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG[] = "StartCallAnalyticsStreamTranscriptionHandler";

    StartCallAnalyticsStreamTranscriptionHandler::StartCallAnalyticsStreamTranscriptionHandler() : EventStreamHandler()
    {
        m_onUtteranceEvent = [&](const UtteranceEvent&)
        {
            AWS_LOGSTREAM_TRACE(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "UtteranceEvent received.");
        };

        m_onCategoryEvent = [&](const CategoryEvent&)
        {
            AWS_LOGSTREAM_TRACE(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "CategoryEvent received.");
        };

        m_onError = [&](const AWSError<TranscribeStreamingServiceErrors>& error)
        {
            AWS_LOGSTREAM_TRACE(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "TranscribeStreamingService Errors received, " << error);
        };
    }

    void StartCallAnalyticsStreamTranscriptionHandler::OnEvent()
    {
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
            AWS_LOGSTREAM_WARN(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
            AWS_LOGSTREAM_WARN(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG,
                "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void StartCallAnalyticsStreamTranscriptionHandler::HandleEventInMessage()
    {
        const auto& headers = GetEventHeaders();
        auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
        if (eventTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
            return;
        }
        switch (StartCallAnalyticsStreamTranscriptionEventMapper::GetStartCallAnalyticsStreamTranscriptionEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {
        case StartCallAnalyticsStreamTranscriptionEventType::UTTERANCEEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Unable to generate a proper UtteranceEvent object from the response in JSON format.");
                break;
            }

            m_onUtteranceEvent(UtteranceEvent{json.View()});
            break;
        }
        case StartCallAnalyticsStreamTranscriptionEventType::CATEGORYEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Unable to generate a proper CategoryEvent object from the response in JSON format.");
                break;
            }

            m_onCategoryEvent(CategoryEvent{json.View()});
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG,
                "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void StartCallAnalyticsStreamTranscriptionHandler::HandleErrorInMessage()
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
                AWS_LOGSTREAM_WARN(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG,
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
                AWS_LOGSTREAM_ERROR(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG,
                        "Error description was not found in the event message.");
                return;
            }

            JsonValue exceptionPayload(GetEventPayloadAsString());
            if (!exceptionPayload.WasParseSuccessful())
            {
                AWS_LOGSTREAM_ERROR(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Unable to generate a proper ServiceUnavailableException object from the response in JSON format.");
                auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
                if (contentTypeIter != headers.end())
                {
                    AWS_LOGSTREAM_DEBUG(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
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

    void StartCallAnalyticsStreamTranscriptionHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage)
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
                AWS_LOGSTREAM_WARN(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error.SetExceptionName(errorCode);
                error.SetMessage(errorMessage);
            }
            else
            {
                AWS_LOGSTREAM_WARN(STARTCALLANALYTICSSTREAMTRANSCRIPTION_HANDLER_CLASS_TAG, "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode, "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
            }
        }

        m_onError(AWSError<TranscribeStreamingServiceErrors>(error));
    }

namespace StartCallAnalyticsStreamTranscriptionEventMapper
{
    static const int UTTERANCEEVENT_HASH = Aws::Utils::HashingUtils::HashString("UtteranceEvent");
    static const int CATEGORYEVENT_HASH = Aws::Utils::HashingUtils::HashString("CategoryEvent");

    StartCallAnalyticsStreamTranscriptionEventType GetStartCallAnalyticsStreamTranscriptionEventTypeForName(const Aws::String& name)
    {
        int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());
        if (hashCode == UTTERANCEEVENT_HASH)
        {
            return StartCallAnalyticsStreamTranscriptionEventType::UTTERANCEEVENT;
        }
        else if (hashCode == CATEGORYEVENT_HASH)
        {
            return StartCallAnalyticsStreamTranscriptionEventType::CATEGORYEVENT;
        }
        return StartCallAnalyticsStreamTranscriptionEventType::UNKNOWN;
    }

    Aws::String GetNameForStartCallAnalyticsStreamTranscriptionEventType(StartCallAnalyticsStreamTranscriptionEventType value)
    {
        switch (value)
        {
        case StartCallAnalyticsStreamTranscriptionEventType::UTTERANCEEVENT:
            return "UtteranceEvent";
        case StartCallAnalyticsStreamTranscriptionEventType::CATEGORYEVENT:
            return "CategoryEvent";
        default:
            return "Unknown";
        }
    }
} // namespace StartCallAnalyticsStreamTranscriptionEventMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
