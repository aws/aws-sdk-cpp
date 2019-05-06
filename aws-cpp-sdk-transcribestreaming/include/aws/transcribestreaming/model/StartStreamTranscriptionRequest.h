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
#include <aws/transcribestreaming/TranscribeStreamingServiceRequest.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <memory>
#include <aws/transcribestreaming/model/LanguageCode.h>
#include <aws/transcribestreaming/model/MediaEncoding.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/AudioStream.h>
#include <utility>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionRequest : public TranscribeStreamingServiceRequest
  {
  public:
    StartStreamTranscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartStreamTranscription"; }

    // SerializePayload will not be invoked.
    // This request is sent by encoding its data in event-streams which is sent as IOStream via GetBody()
    Aws::String SerializePayload() const override { return {}; }
    std::shared_ptr<Aws::IOStream> GetBody() const override;
    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const StartStreamTranscriptionHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const StartStreamTranscriptionHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline StartStreamTranscriptionRequest& WithEventStreamHandler(const StartStreamTranscriptionHandler& value) { SetEventStreamHandler(value); return *this; }


    /**
     * <p>Indicates the language used in the input audio stream.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Indicates the language used in the input audio stream.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Indicates the language used in the input audio stream.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Indicates the language used in the input audio stream.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Indicates the language used in the input audio stream.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Indicates the language used in the input audio stream.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate, in Hertz, of the input audio. We suggest that you use 8000
     * Hz for low quality audio and 16000 Hz for high quality audio.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate, in Hertz, of the input audio. We suggest that you use 8000
     * Hz for low quality audio and 16000 Hz for high quality audio.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate, in Hertz, of the input audio. We suggest that you use 8000
     * Hz for low quality audio and 16000 Hz for high quality audio.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate, in Hertz, of the input audio. We suggest that you use 8000
     * Hz for low quality audio and 16000 Hz for high quality audio.</p>
     */
    inline StartStreamTranscriptionRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>The encoding used for the input audio. </p>
     */
    inline const MediaEncoding& GetMediaEncoding() const{ return m_mediaEncoding; }

    /**
     * <p>The encoding used for the input audio. </p>
     */
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }

    /**
     * <p>The encoding used for the input audio. </p>
     */
    inline void SetMediaEncoding(const MediaEncoding& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }

    /**
     * <p>The encoding used for the input audio. </p>
     */
    inline void SetMediaEncoding(MediaEncoding&& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = std::move(value); }

    /**
     * <p>The encoding used for the input audio. </p>
     */
    inline StartStreamTranscriptionRequest& WithMediaEncoding(const MediaEncoding& value) { SetMediaEncoding(value); return *this;}

    /**
     * <p>The encoding used for the input audio. </p>
     */
    inline StartStreamTranscriptionRequest& WithMediaEncoding(MediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}


    /**
     * <p>The name of the vocabulary to use when processing the transcription job.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary to use when processing the transcription job.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary to use when processing the transcription job.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary to use when processing the transcription job.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary to use when processing the transcription job.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary to use when processing the transcription job.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary to use when processing the transcription job.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary to use when processing the transcription job.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>A identifier for the transcription session. Use this parameter when you want
     * to retry a session. If you don't provide a session ID, Amazon Transcribe will
     * generate one for you and return it in the response.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>A identifier for the transcription session. Use this parameter when you want
     * to retry a session. If you don't provide a session ID, Amazon Transcribe will
     * generate one for you and return it in the response.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>A identifier for the transcription session. Use this parameter when you want
     * to retry a session. If you don't provide a session ID, Amazon Transcribe will
     * generate one for you and return it in the response.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>A identifier for the transcription session. Use this parameter when you want
     * to retry a session. If you don't provide a session ID, Amazon Transcribe will
     * generate one for you and return it in the response.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>A identifier for the transcription session. Use this parameter when you want
     * to retry a session. If you don't provide a session ID, Amazon Transcribe will
     * generate one for you and return it in the response.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>A identifier for the transcription session. Use this parameter when you want
     * to retry a session. If you don't provide a session ID, Amazon Transcribe will
     * generate one for you and return it in the response.</p>
     */
    inline StartStreamTranscriptionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>A identifier for the transcription session. Use this parameter when you want
     * to retry a session. If you don't provide a session ID, Amazon Transcribe will
     * generate one for you and return it in the response.</p>
     */
    inline StartStreamTranscriptionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>A identifier for the transcription session. Use this parameter when you want
     * to retry a session. If you don't provide a session ID, Amazon Transcribe will
     * generate one for you and return it in the response.</p>
     */
    inline StartStreamTranscriptionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>PCM-encoded stream of audio blobs. The audio stream is encoded as an HTTP2
     * data frame.</p>
     */
    std::shared_ptr<AudioStream> GetAudioStream() const { return m_audioStream; }

    /**
     * <p>PCM-encoded stream of audio blobs. The audio stream is encoded as an HTTP2
     * data frame.</p>
     */
    void SetAudioStream(const std::shared_ptr<AudioStream>& value) { m_audioStream = value; }

    /**
     * <p>PCM-encoded stream of audio blobs. The audio stream is encoded as an HTTP2
     * data frame.</p>
     */
    StartStreamTranscriptionRequest& WithAudioStream(const std::shared_ptr<AudioStream>& value) { SetAudioStream(value); return *this;}

  private:

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet;

    MediaEncoding m_mediaEncoding;
    bool m_mediaEncodingHasBeenSet;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet;

    std::shared_ptr<AudioStream> m_audioStream;
    Aws::Utils::Event::EventStreamDecoder m_decoder;
    StartStreamTranscriptionHandler m_handler;

  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
