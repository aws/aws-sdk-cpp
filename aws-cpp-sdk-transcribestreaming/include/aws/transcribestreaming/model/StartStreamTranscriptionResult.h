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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/LanguageCode.h>
#include <aws/transcribestreaming/model/MediaEncoding.h>
#include <aws/transcribestreaming/model/TranscriptResultStream.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TranscribeStreamingService
{
namespace Model
{
  class AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionResult
  {
  public:
    StartStreamTranscriptionResult();
    StartStreamTranscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartStreamTranscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An identifier for the streaming transcription.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>An identifier for the streaming transcription.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>An identifier for the streaming transcription.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>An identifier for the streaming transcription.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>An identifier for the streaming transcription.</p>
     */
    inline StartStreamTranscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>An identifier for the streaming transcription.</p>
     */
    inline StartStreamTranscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>An identifier for the streaming transcription.</p>
     */
    inline StartStreamTranscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The language code for the input audio stream.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code for the input audio stream.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCode = value; }

    /**
     * <p>The language code for the input audio stream.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCode = std::move(value); }

    /**
     * <p>The language code for the input audio stream.</p>
     */
    inline StartStreamTranscriptionResult& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the input audio stream.</p>
     */
    inline StartStreamTranscriptionResult& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate for the input audio stream. Use 8000 Hz for low quality audio
     * and 16000 Hz for high quality audio.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate for the input audio stream. Use 8000 Hz for low quality audio
     * and 16000 Hz for high quality audio.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate for the input audio stream. Use 8000 Hz for low quality audio
     * and 16000 Hz for high quality audio.</p>
     */
    inline StartStreamTranscriptionResult& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>The encoding used for the input audio stream.</p>
     */
    inline const MediaEncoding& GetMediaEncoding() const{ return m_mediaEncoding; }

    /**
     * <p>The encoding used for the input audio stream.</p>
     */
    inline void SetMediaEncoding(const MediaEncoding& value) { m_mediaEncoding = value; }

    /**
     * <p>The encoding used for the input audio stream.</p>
     */
    inline void SetMediaEncoding(MediaEncoding&& value) { m_mediaEncoding = std::move(value); }

    /**
     * <p>The encoding used for the input audio stream.</p>
     */
    inline StartStreamTranscriptionResult& WithMediaEncoding(const MediaEncoding& value) { SetMediaEncoding(value); return *this;}

    /**
     * <p>The encoding used for the input audio stream.</p>
     */
    inline StartStreamTranscriptionResult& WithMediaEncoding(MediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}


    /**
     * <p>The name of the vocabulary used when processing the job.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary used when processing the job.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary used when processing the job.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary used when processing the job.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary used when processing the job.</p>
     */
    inline StartStreamTranscriptionResult& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary used when processing the job.</p>
     */
    inline StartStreamTranscriptionResult& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary used when processing the job.</p>
     */
    inline StartStreamTranscriptionResult& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>An identifier for a specific transcription session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>An identifier for a specific transcription session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>An identifier for a specific transcription session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>An identifier for a specific transcription session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>An identifier for a specific transcription session.</p>
     */
    inline StartStreamTranscriptionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>An identifier for a specific transcription session.</p>
     */
    inline StartStreamTranscriptionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>An identifier for a specific transcription session.</p>
     */
    inline StartStreamTranscriptionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>Represents the stream of transcription events from Amazon Transcribe to your
     * application.</p>
     */
    inline const TranscriptResultStream& GetTranscriptResultStream() const{ return m_transcriptResultStream; }

    /**
     * <p>Represents the stream of transcription events from Amazon Transcribe to your
     * application.</p>
     */
    inline void SetTranscriptResultStream(const TranscriptResultStream& value) { m_transcriptResultStream = value; }

    /**
     * <p>Represents the stream of transcription events from Amazon Transcribe to your
     * application.</p>
     */
    inline void SetTranscriptResultStream(TranscriptResultStream&& value) { m_transcriptResultStream = std::move(value); }

    /**
     * <p>Represents the stream of transcription events from Amazon Transcribe to your
     * application.</p>
     */
    inline StartStreamTranscriptionResult& WithTranscriptResultStream(const TranscriptResultStream& value) { SetTranscriptResultStream(value); return *this;}

    /**
     * <p>Represents the stream of transcription events from Amazon Transcribe to your
     * application.</p>
     */
    inline StartStreamTranscriptionResult& WithTranscriptResultStream(TranscriptResultStream&& value) { SetTranscriptResultStream(std::move(value)); return *this;}

  private:

    Aws::String m_requestId;

    LanguageCode m_languageCode;

    int m_mediaSampleRateHertz;

    MediaEncoding m_mediaEncoding;

    Aws::String m_vocabularyName;

    Aws::String m_sessionId;

    TranscriptResultStream m_transcriptResultStream;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
