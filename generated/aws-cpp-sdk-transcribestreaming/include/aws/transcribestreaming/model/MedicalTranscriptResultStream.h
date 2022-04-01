﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/MedicalTranscriptEvent.h>
#include <aws/transcribestreaming/model/BadRequestException.h>
#include <aws/transcribestreaming/model/LimitExceededException.h>
#include <aws/transcribestreaming/model/InternalFailureException.h>
#include <aws/transcribestreaming/model/ConflictException.h>
#include <aws/transcribestreaming/model/ServiceUnavailableException.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Represents the transcription result stream from Amazon Transcribe Medical to
   * your application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalTranscriptResultStream">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalTranscriptResultStream
  {
  public:
    MedicalTranscriptResultStream();
    MedicalTranscriptResultStream(Aws::Utils::Json::JsonView jsonValue);
    MedicalTranscriptResultStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A portion of the transcription of the audio stream. Events are sent
     * periodically from Amazon Transcribe Medical to your application. The event can
     * be a partial transcription of a section of the audio stream, or it can be the
     * entire transcription of that portion of the audio stream.</p>
     */
    inline const MedicalTranscriptEvent& GetTranscriptEvent() const{ return m_transcriptEvent; }

    /**
     * <p>A portion of the transcription of the audio stream. Events are sent
     * periodically from Amazon Transcribe Medical to your application. The event can
     * be a partial transcription of a section of the audio stream, or it can be the
     * entire transcription of that portion of the audio stream.</p>
     */
    inline bool TranscriptEventHasBeenSet() const { return m_transcriptEventHasBeenSet; }

    /**
     * <p>A portion of the transcription of the audio stream. Events are sent
     * periodically from Amazon Transcribe Medical to your application. The event can
     * be a partial transcription of a section of the audio stream, or it can be the
     * entire transcription of that portion of the audio stream.</p>
     */
    inline void SetTranscriptEvent(const MedicalTranscriptEvent& value) { m_transcriptEventHasBeenSet = true; m_transcriptEvent = value; }

    /**
     * <p>A portion of the transcription of the audio stream. Events are sent
     * periodically from Amazon Transcribe Medical to your application. The event can
     * be a partial transcription of a section of the audio stream, or it can be the
     * entire transcription of that portion of the audio stream.</p>
     */
    inline void SetTranscriptEvent(MedicalTranscriptEvent&& value) { m_transcriptEventHasBeenSet = true; m_transcriptEvent = std::move(value); }

    /**
     * <p>A portion of the transcription of the audio stream. Events are sent
     * periodically from Amazon Transcribe Medical to your application. The event can
     * be a partial transcription of a section of the audio stream, or it can be the
     * entire transcription of that portion of the audio stream.</p>
     */
    inline MedicalTranscriptResultStream& WithTranscriptEvent(const MedicalTranscriptEvent& value) { SetTranscriptEvent(value); return *this;}

    /**
     * <p>A portion of the transcription of the audio stream. Events are sent
     * periodically from Amazon Transcribe Medical to your application. The event can
     * be a partial transcription of a section of the audio stream, or it can be the
     * entire transcription of that portion of the audio stream.</p>
     */
    inline MedicalTranscriptResultStream& WithTranscriptEvent(MedicalTranscriptEvent&& value) { SetTranscriptEvent(std::move(value)); return *this;}


    
    inline const BadRequestException& GetBadRequestException() const{ return m_badRequestException; }

    
    inline bool BadRequestExceptionHasBeenSet() const { return m_badRequestExceptionHasBeenSet; }

    
    inline void SetBadRequestException(const BadRequestException& value) { m_badRequestExceptionHasBeenSet = true; m_badRequestException = value; }

    
    inline void SetBadRequestException(BadRequestException&& value) { m_badRequestExceptionHasBeenSet = true; m_badRequestException = std::move(value); }

    
    inline MedicalTranscriptResultStream& WithBadRequestException(const BadRequestException& value) { SetBadRequestException(value); return *this;}

    
    inline MedicalTranscriptResultStream& WithBadRequestException(BadRequestException&& value) { SetBadRequestException(std::move(value)); return *this;}


    
    inline const LimitExceededException& GetLimitExceededException() const{ return m_limitExceededException; }

    
    inline bool LimitExceededExceptionHasBeenSet() const { return m_limitExceededExceptionHasBeenSet; }

    
    inline void SetLimitExceededException(const LimitExceededException& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = value; }

    
    inline void SetLimitExceededException(LimitExceededException&& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = std::move(value); }

    
    inline MedicalTranscriptResultStream& WithLimitExceededException(const LimitExceededException& value) { SetLimitExceededException(value); return *this;}

    
    inline MedicalTranscriptResultStream& WithLimitExceededException(LimitExceededException&& value) { SetLimitExceededException(std::move(value)); return *this;}


    
    inline const InternalFailureException& GetInternalFailureException() const{ return m_internalFailureException; }

    
    inline bool InternalFailureExceptionHasBeenSet() const { return m_internalFailureExceptionHasBeenSet; }

    
    inline void SetInternalFailureException(const InternalFailureException& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = value; }

    
    inline void SetInternalFailureException(InternalFailureException&& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = std::move(value); }

    
    inline MedicalTranscriptResultStream& WithInternalFailureException(const InternalFailureException& value) { SetInternalFailureException(value); return *this;}

    
    inline MedicalTranscriptResultStream& WithInternalFailureException(InternalFailureException&& value) { SetInternalFailureException(std::move(value)); return *this;}


    
    inline const ConflictException& GetConflictException() const{ return m_conflictException; }

    
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }

    
    inline void SetConflictException(const ConflictException& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = value; }

    
    inline void SetConflictException(ConflictException&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::move(value); }

    
    inline MedicalTranscriptResultStream& WithConflictException(const ConflictException& value) { SetConflictException(value); return *this;}

    
    inline MedicalTranscriptResultStream& WithConflictException(ConflictException&& value) { SetConflictException(std::move(value)); return *this;}


    
    inline const ServiceUnavailableException& GetServiceUnavailableException() const{ return m_serviceUnavailableException; }

    
    inline bool ServiceUnavailableExceptionHasBeenSet() const { return m_serviceUnavailableExceptionHasBeenSet; }

    
    inline void SetServiceUnavailableException(const ServiceUnavailableException& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = value; }

    
    inline void SetServiceUnavailableException(ServiceUnavailableException&& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = std::move(value); }

    
    inline MedicalTranscriptResultStream& WithServiceUnavailableException(const ServiceUnavailableException& value) { SetServiceUnavailableException(value); return *this;}

    
    inline MedicalTranscriptResultStream& WithServiceUnavailableException(ServiceUnavailableException&& value) { SetServiceUnavailableException(std::move(value)); return *this;}

  private:

    MedicalTranscriptEvent m_transcriptEvent;
    bool m_transcriptEventHasBeenSet;

    BadRequestException m_badRequestException;
    bool m_badRequestExceptionHasBeenSet;

    LimitExceededException m_limitExceededException;
    bool m_limitExceededExceptionHasBeenSet;

    InternalFailureException m_internalFailureException;
    bool m_internalFailureExceptionHasBeenSet;

    ConflictException m_conflictException;
    bool m_conflictExceptionHasBeenSet;

    ServiceUnavailableException m_serviceUnavailableException;
    bool m_serviceUnavailableExceptionHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
