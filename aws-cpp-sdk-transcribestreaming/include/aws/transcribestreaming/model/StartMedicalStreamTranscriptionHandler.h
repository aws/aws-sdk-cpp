/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceErrors.h>

#include <aws/transcribestreaming/model/MedicalTranscriptEvent.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
    enum class StartMedicalStreamTranscriptionEventType
    {
        TRANSCRIPTEVENT,
        UNKNOWN
    };

    class AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const MedicalTranscriptEvent&)> MedicalTranscriptEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& error)> ErrorCallback;

    public:
        StartMedicalStreamTranscriptionHandler();
        StartMedicalStreamTranscriptionHandler& operator=(const StartMedicalStreamTranscriptionHandler& handler) = default;

        virtual void OnEvent() override;

        inline void SetMedicalTranscriptEventCallback(const MedicalTranscriptEventCallback& callback) { m_onMedicalTranscriptEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

    private:
        void HandleEventInMessage();
        void HandleErrorInMessage();
        void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        MedicalTranscriptEventCallback m_onMedicalTranscriptEvent;
        ErrorCallback m_onError;
    };

namespace StartMedicalStreamTranscriptionEventMapper
{
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionEventType GetStartMedicalStreamTranscriptionEventTypeForName(const Aws::String& name);

    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForStartMedicalStreamTranscriptionEventType(StartMedicalStreamTranscriptionEventType value);
} // namespace StartMedicalStreamTranscriptionEventMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
