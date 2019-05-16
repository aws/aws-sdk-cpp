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

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
    enum class StartStreamTranscriptionEventType
    {
        TRANSCRIPTEVENT,
        UNKNOWN
    };

    class AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const TranscriptEvent&)> TranscriptEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& error)> ErrorCallback;

    public:
        StartStreamTranscriptionHandler();
        StartStreamTranscriptionHandler& operator=(const StartStreamTranscriptionHandler& handler) = default;

        virtual void OnEvent() override;

        inline void SetTranscriptEventCallback(const TranscriptEventCallback& callback) { m_onTranscriptEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

    private:
        void HandleEventInMessage();
        void HandleErrorInMessage();
        void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        TranscriptEventCallback m_onTranscriptEvent;
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
