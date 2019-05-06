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

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceErrors.h>

#include <aws/transcribestreaming/model/TranscriptEvent.h>
#include <aws/transcribestreaming/model/BadRequestException.h>
#include <aws/transcribestreaming/model/LimitExceededException.h>
#include <aws/transcribestreaming/model/InternalFailureException.h>
#include <aws/transcribestreaming/model/ConflictException.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
    enum class StartStreamTranscriptionEventType
    {
        TRANSCRIPTEVENT,
        BADREQUESTEXCEPTION,
        LIMITEXCEEDEDEXCEPTION,
        INTERNALFAILUREEXCEPTION,
        CONFLICTEXCEPTION,
        UNKNOWN
    };

    class AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const TranscriptEvent&)> TranscriptEventCallback;
        typedef std::function<void(const BadRequestException&)> BadRequestExceptionCallback;
        typedef std::function<void(const LimitExceededException&)> LimitExceededExceptionCallback;
        typedef std::function<void(const InternalFailureException&)> InternalFailureExceptionCallback;
        typedef std::function<void(const ConflictException&)> ConflictExceptionCallback;
        typedef std::function<void(const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& error)> ErrorCallback;
        
    public:
        StartStreamTranscriptionHandler();
        StartStreamTranscriptionHandler& operator=(const StartStreamTranscriptionHandler& handler)
        {
            m_onTranscriptEvent = handler.m_onTranscriptEvent;
            m_onBadRequestException = handler.m_onBadRequestException;
            m_onLimitExceededException = handler.m_onLimitExceededException;
            m_onInternalFailureException = handler.m_onInternalFailureException;
            m_onConflictException = handler.m_onConflictException;
            m_onError = handler.m_onError;
            return *this;
        }


        virtual void OnEvent() override;

        inline void SetTranscriptEventCallback(const TranscriptEventCallback& callback) { m_onTranscriptEvent = callback; }
        inline void SetBadRequestExceptionCallback(const BadRequestExceptionCallback& callback) { m_onBadRequestException = callback; }
        inline void SetLimitExceededExceptionCallback(const LimitExceededExceptionCallback& callback) { m_onLimitExceededException = callback; }
        inline void SetInternalFailureExceptionCallback(const InternalFailureExceptionCallback& callback) { m_onInternalFailureException = callback; }
        inline void SetConflictExceptionCallback(const ConflictExceptionCallback& callback) { m_onConflictException = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

    private:
        void HandleEventInMessage();
        void HandleErrorInMessage();

        TranscriptEventCallback m_onTranscriptEvent;
        BadRequestExceptionCallback m_onBadRequestException;
        LimitExceededExceptionCallback m_onLimitExceededException;
        InternalFailureExceptionCallback m_onInternalFailureException;
        ConflictExceptionCallback m_onConflictException;
        ErrorCallback m_onError;
    };

namespace StartStreamTranscriptionEventMapper
{
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionEventType GetStartStreamTranscriptionEventTypeForName(const Aws::String& name);

    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForStartStreamTranscriptionEventType(StartStreamTranscriptionEventType value);
} // namespace StartStreamTranscriptionEventMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
