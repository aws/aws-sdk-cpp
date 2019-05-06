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
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/TranscriptEvent.h>
#include <aws/transcribestreaming/model/BadRequestException.h>
#include <aws/transcribestreaming/model/LimitExceededException.h>
#include <aws/transcribestreaming/model/InternalFailureException.h>
#include <aws/transcribestreaming/model/ConflictException.h>
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
   * <p>Represents the transcription result stream from Amazon Transcribe to your
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/TranscriptResultStream">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API TranscriptResultStream
  {
  public:
    TranscriptResultStream();
    TranscriptResultStream(Aws::Utils::Json::JsonView jsonValue);
    TranscriptResultStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A portion of the transcription of the audio stream. Events are sent
     * periodically from Amazon Transcribe to your application. The event can be a
     * partial transcription of a section of the audio stream, or it can be the entire
     * transcription of that portion of the audio stream. </p>
     */
    inline const TranscriptEvent& GetTranscriptEvent() const{ return m_transcriptEvent; }

    /**
     * <p>A portion of the transcription of the audio stream. Events are sent
     * periodically from Amazon Transcribe to your application. The event can be a
     * partial transcription of a section of the audio stream, or it can be the entire
     * transcription of that portion of the audio stream. </p>
     */
    inline bool TranscriptEventHasBeenSet() const { return m_transcriptEventHasBeenSet; }

    /**
     * <p>A portion of the transcription of the audio stream. Events are sent
     * periodically from Amazon Transcribe to your application. The event can be a
     * partial transcription of a section of the audio stream, or it can be the entire
     * transcription of that portion of the audio stream. </p>
     */
    inline void SetTranscriptEvent(const TranscriptEvent& value) { m_transcriptEventHasBeenSet = true; m_transcriptEvent = value; }

    /**
     * <p>A portion of the transcription of the audio stream. Events are sent
     * periodically from Amazon Transcribe to your application. The event can be a
     * partial transcription of a section of the audio stream, or it can be the entire
     * transcription of that portion of the audio stream. </p>
     */
    inline void SetTranscriptEvent(TranscriptEvent&& value) { m_transcriptEventHasBeenSet = true; m_transcriptEvent = std::move(value); }

    /**
     * <p>A portion of the transcription of the audio stream. Events are sent
     * periodically from Amazon Transcribe to your application. The event can be a
     * partial transcription of a section of the audio stream, or it can be the entire
     * transcription of that portion of the audio stream. </p>
     */
    inline TranscriptResultStream& WithTranscriptEvent(const TranscriptEvent& value) { SetTranscriptEvent(value); return *this;}

    /**
     * <p>A portion of the transcription of the audio stream. Events are sent
     * periodically from Amazon Transcribe to your application. The event can be a
     * partial transcription of a section of the audio stream, or it can be the entire
     * transcription of that portion of the audio stream. </p>
     */
    inline TranscriptResultStream& WithTranscriptEvent(TranscriptEvent&& value) { SetTranscriptEvent(std::move(value)); return *this;}


    /**
     * <p>A client error occurred when the stream was created. Check the parameters of
     * the request and try your request again.</p>
     */
    inline const BadRequestException& GetBadRequestException() const{ return m_badRequestException; }

    /**
     * <p>A client error occurred when the stream was created. Check the parameters of
     * the request and try your request again.</p>
     */
    inline bool BadRequestExceptionHasBeenSet() const { return m_badRequestExceptionHasBeenSet; }

    /**
     * <p>A client error occurred when the stream was created. Check the parameters of
     * the request and try your request again.</p>
     */
    inline void SetBadRequestException(const BadRequestException& value) { m_badRequestExceptionHasBeenSet = true; m_badRequestException = value; }

    /**
     * <p>A client error occurred when the stream was created. Check the parameters of
     * the request and try your request again.</p>
     */
    inline void SetBadRequestException(BadRequestException&& value) { m_badRequestExceptionHasBeenSet = true; m_badRequestException = std::move(value); }

    /**
     * <p>A client error occurred when the stream was created. Check the parameters of
     * the request and try your request again.</p>
     */
    inline TranscriptResultStream& WithBadRequestException(const BadRequestException& value) { SetBadRequestException(value); return *this;}

    /**
     * <p>A client error occurred when the stream was created. Check the parameters of
     * the request and try your request again.</p>
     */
    inline TranscriptResultStream& WithBadRequestException(BadRequestException&& value) { SetBadRequestException(std::move(value)); return *this;}


    /**
     * <p>Your client has exceeded one of the Amazon Transcribe limits, typically the
     * limit on audio length. Break your audio stream into smaller chunks and try your
     * request again.</p>
     */
    inline const LimitExceededException& GetLimitExceededException() const{ return m_limitExceededException; }

    /**
     * <p>Your client has exceeded one of the Amazon Transcribe limits, typically the
     * limit on audio length. Break your audio stream into smaller chunks and try your
     * request again.</p>
     */
    inline bool LimitExceededExceptionHasBeenSet() const { return m_limitExceededExceptionHasBeenSet; }

    /**
     * <p>Your client has exceeded one of the Amazon Transcribe limits, typically the
     * limit on audio length. Break your audio stream into smaller chunks and try your
     * request again.</p>
     */
    inline void SetLimitExceededException(const LimitExceededException& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = value; }

    /**
     * <p>Your client has exceeded one of the Amazon Transcribe limits, typically the
     * limit on audio length. Break your audio stream into smaller chunks and try your
     * request again.</p>
     */
    inline void SetLimitExceededException(LimitExceededException&& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = std::move(value); }

    /**
     * <p>Your client has exceeded one of the Amazon Transcribe limits, typically the
     * limit on audio length. Break your audio stream into smaller chunks and try your
     * request again.</p>
     */
    inline TranscriptResultStream& WithLimitExceededException(const LimitExceededException& value) { SetLimitExceededException(value); return *this;}

    /**
     * <p>Your client has exceeded one of the Amazon Transcribe limits, typically the
     * limit on audio length. Break your audio stream into smaller chunks and try your
     * request again.</p>
     */
    inline TranscriptResultStream& WithLimitExceededException(LimitExceededException&& value) { SetLimitExceededException(std::move(value)); return *this;}


    /**
     * <p>A problem occurred while processing the audio. Amazon Transcribe terminated
     * processing.</p>
     */
    inline const InternalFailureException& GetInternalFailureException() const{ return m_internalFailureException; }

    /**
     * <p>A problem occurred while processing the audio. Amazon Transcribe terminated
     * processing.</p>
     */
    inline bool InternalFailureExceptionHasBeenSet() const { return m_internalFailureExceptionHasBeenSet; }

    /**
     * <p>A problem occurred while processing the audio. Amazon Transcribe terminated
     * processing.</p>
     */
    inline void SetInternalFailureException(const InternalFailureException& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = value; }

    /**
     * <p>A problem occurred while processing the audio. Amazon Transcribe terminated
     * processing.</p>
     */
    inline void SetInternalFailureException(InternalFailureException&& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = std::move(value); }

    /**
     * <p>A problem occurred while processing the audio. Amazon Transcribe terminated
     * processing.</p>
     */
    inline TranscriptResultStream& WithInternalFailureException(const InternalFailureException& value) { SetInternalFailureException(value); return *this;}

    /**
     * <p>A problem occurred while processing the audio. Amazon Transcribe terminated
     * processing.</p>
     */
    inline TranscriptResultStream& WithInternalFailureException(InternalFailureException&& value) { SetInternalFailureException(std::move(value)); return *this;}


    /**
     * <p>A new stream started with the same session ID. The current stream has been
     * terminated.</p>
     */
    inline const ConflictException& GetConflictException() const{ return m_conflictException; }

    /**
     * <p>A new stream started with the same session ID. The current stream has been
     * terminated.</p>
     */
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }

    /**
     * <p>A new stream started with the same session ID. The current stream has been
     * terminated.</p>
     */
    inline void SetConflictException(const ConflictException& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = value; }

    /**
     * <p>A new stream started with the same session ID. The current stream has been
     * terminated.</p>
     */
    inline void SetConflictException(ConflictException&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::move(value); }

    /**
     * <p>A new stream started with the same session ID. The current stream has been
     * terminated.</p>
     */
    inline TranscriptResultStream& WithConflictException(const ConflictException& value) { SetConflictException(value); return *this;}

    /**
     * <p>A new stream started with the same session ID. The current stream has been
     * terminated.</p>
     */
    inline TranscriptResultStream& WithConflictException(ConflictException&& value) { SetConflictException(std::move(value)); return *this;}

  private:

    TranscriptEvent m_transcriptEvent;
    bool m_transcriptEventHasBeenSet;

    BadRequestException m_badRequestException;
    bool m_badRequestExceptionHasBeenSet;

    LimitExceededException m_limitExceededException;
    bool m_limitExceededExceptionHasBeenSet;

    InternalFailureException m_internalFailureException;
    bool m_internalFailureExceptionHasBeenSet;

    ConflictException m_conflictException;
    bool m_conflictExceptionHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
