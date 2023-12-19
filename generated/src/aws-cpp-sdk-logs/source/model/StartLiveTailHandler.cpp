/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/StartLiveTailHandler.h>
#include <aws/logs/CloudWatchLogsErrorMarshaller.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/json/JsonSerializer.h>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{
    using namespace Aws::Client;

    static const char STARTLIVETAIL_HANDLER_CLASS_TAG[] = "StartLiveTailHandler";

    StartLiveTailHandler::StartLiveTailHandler() : EventStreamHandler()
    {
        m_onInitialResponse = [&](const StartLiveTailInitialResponse&)
        {
            AWS_LOGSTREAM_TRACE(STARTLIVETAIL_HANDLER_CLASS_TAG,
                "StartLiveTail initial response received.");
        };

        m_onLiveTailSessionStart = [&](const LiveTailSessionStart&)
        {
            AWS_LOGSTREAM_TRACE(STARTLIVETAIL_HANDLER_CLASS_TAG, "LiveTailSessionStart received.");
        };

        m_onLiveTailSessionUpdate = [&](const LiveTailSessionUpdate&)
        {
            AWS_LOGSTREAM_TRACE(STARTLIVETAIL_HANDLER_CLASS_TAG, "LiveTailSessionUpdate received.");
        };

        m_onError = [&](const AWSError<CloudWatchLogsErrors>& error)
        {
            AWS_LOGSTREAM_TRACE(STARTLIVETAIL_HANDLER_CLASS_TAG, "CloudWatchLogs Errors received, " << error);
        };
    }

    void StartLiveTailHandler::OnEvent()
    {
        // Handler internal error during event stream decoding.
        if (!*this)
        {
            AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
            error.SetMessage(GetEventPayloadAsString());
            m_onError(AWSError<CloudWatchLogsErrors>(error));
            return;
        }

        const auto& headers = GetEventHeaders();
        auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
        if (messageTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(STARTLIVETAIL_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
            AWS_LOGSTREAM_WARN(STARTLIVETAIL_HANDLER_CLASS_TAG,
                "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void StartLiveTailHandler::HandleEventInMessage()
    {
        const auto& headers = GetEventHeaders();
        auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
        if (eventTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(STARTLIVETAIL_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
            return;
        }
        switch (StartLiveTailEventMapper::GetStartLiveTailEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {
        
        case StartLiveTailEventType::INITIAL_RESPONSE: 
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTLIVETAIL_HANDLER_CLASS_TAG, "Unable to generate a proper StartLiveTailInitialResponse object from the response in JSON format.");
                break;
            }

            StartLiveTailInitialResponse event(json.View());
            m_onInitialResponse(event);
            break;
        }   

        case StartLiveTailEventType::SESSIONSTART:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTLIVETAIL_HANDLER_CLASS_TAG, "Unable to generate a proper LiveTailSessionStart object from the response in JSON format.");
                break;
            }

            m_onLiveTailSessionStart(LiveTailSessionStart{json.View()});
            break;
        }
        case StartLiveTailEventType::SESSIONUPDATE:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(STARTLIVETAIL_HANDLER_CLASS_TAG, "Unable to generate a proper LiveTailSessionUpdate object from the response in JSON format.");
                break;
            }

            m_onLiveTailSessionUpdate(LiveTailSessionUpdate{json.View()});
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(STARTLIVETAIL_HANDLER_CLASS_TAG,
                "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void StartLiveTailHandler::HandleErrorInMessage()
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
                AWS_LOGSTREAM_WARN(STARTLIVETAIL_HANDLER_CLASS_TAG,
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
                AWS_LOGSTREAM_ERROR(STARTLIVETAIL_HANDLER_CLASS_TAG,
                        "Error description was not found in the event message.");
                return;
            }

            JsonValue exceptionPayload(GetEventPayloadAsString());
            if (!exceptionPayload.WasParseSuccessful())
            {
                AWS_LOGSTREAM_ERROR(STARTLIVETAIL_HANDLER_CLASS_TAG, "Unable to generate a proper SessionStreamingException object from the response in JSON format.");
                auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
                if (contentTypeIter != headers.end())
                {
                    AWS_LOGSTREAM_DEBUG(STARTLIVETAIL_HANDLER_CLASS_TAG, "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
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

    void StartLiveTailHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage)
    {
        CloudWatchLogsErrorMarshaller errorMarshaller;
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
                AWS_LOGSTREAM_WARN(STARTLIVETAIL_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error.SetExceptionName(errorCode);
                error.SetMessage(errorMessage);
            }
            else
            {
                AWS_LOGSTREAM_WARN(STARTLIVETAIL_HANDLER_CLASS_TAG, "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode, "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
            }
        }

        m_onError(AWSError<CloudWatchLogsErrors>(error));
    }

namespace StartLiveTailEventMapper
{
    static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
    static const int SESSIONSTART_HASH = Aws::Utils::HashingUtils::HashString("sessionStart");
    static const int SESSIONUPDATE_HASH = Aws::Utils::HashingUtils::HashString("sessionUpdate");

    StartLiveTailEventType GetStartLiveTailEventTypeForName(const Aws::String& name)
    {
        int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

        if (hashCode == INITIAL_RESPONSE_HASH) 
        {
            return StartLiveTailEventType::INITIAL_RESPONSE;
        }
        else if (hashCode == SESSIONSTART_HASH)
        {
            return StartLiveTailEventType::SESSIONSTART;
        }
        else if (hashCode == SESSIONUPDATE_HASH)
        {
            return StartLiveTailEventType::SESSIONUPDATE;
        }
        return StartLiveTailEventType::UNKNOWN;
    }

    Aws::String GetNameForStartLiveTailEventType(StartLiveTailEventType value)
    {
        switch (value)
        {
        case StartLiveTailEventType::INITIAL_RESPONSE:
            return "initial-response";
        case StartLiveTailEventType::SESSIONSTART:
            return "sessionStart";
        case StartLiveTailEventType::SESSIONUPDATE:
            return "sessionUpdate";
        default:
            return "Unknown";
        }
    }
} // namespace StartLiveTailEventMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
