/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/transcribestreaming/model/VocabularyFilterMethod.h>
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

    inline virtual bool IsEventStreamRequest() const override { return true; }
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
     * <p>Indicates the source language used in the input audio stream.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Indicates the source language used in the input audio stream.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Indicates the source language used in the input audio stream.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Indicates the source language used in the input audio stream.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Indicates the source language used in the input audio stream.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Indicates the source language used in the input audio stream.</p>
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
     * <p>The encoding used for the input audio.</p>
     */
    inline const MediaEncoding& GetMediaEncoding() const{ return m_mediaEncoding; }

    /**
     * <p>The encoding used for the input audio.</p>
     */
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }

    /**
     * <p>The encoding used for the input audio.</p>
     */
    inline void SetMediaEncoding(const MediaEncoding& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }

    /**
     * <p>The encoding used for the input audio.</p>
     */
    inline void SetMediaEncoding(MediaEncoding&& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = std::move(value); }

    /**
     * <p>The encoding used for the input audio.</p>
     */
    inline StartStreamTranscriptionRequest& WithMediaEncoding(const MediaEncoding& value) { SetMediaEncoding(value); return *this;}

    /**
     * <p>The encoding used for the input audio.</p>
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


    /**
     * <p>The name of the vocabulary filter you've created that is unique to your AWS
     * account. Provide the name in this field to successfully use it in a stream.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of the vocabulary filter you've created that is unique to your AWS
     * account. Provide the name in this field to successfully use it in a stream.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary filter you've created that is unique to your AWS
     * account. Provide the name in this field to successfully use it in a stream.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>The name of the vocabulary filter you've created that is unique to your AWS
     * account. Provide the name in this field to successfully use it in a stream.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of the vocabulary filter you've created that is unique to your AWS
     * account. Provide the name in this field to successfully use it in a stream.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of the vocabulary filter you've created that is unique to your AWS
     * account. Provide the name in this field to successfully use it in a stream.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of the vocabulary filter you've created that is unique to your AWS
     * account. Provide the name in this field to successfully use it in a stream.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary filter you've created that is unique to your AWS
     * account. Provide the name in this field to successfully use it in a stream.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>The manner in which you use your vocabulary filter to filter words in your
     * transcript. <code>Remove</code> removes filtered words from your transcription
     * results. <code>Mask</code> masks those words with a <code>***</code> in your
     * transcription results. <code>Tag</code> keeps the filtered words in your
     * transcription results and tags them. The tag appears as
     * <code>VocabularyFilterMatch</code> equal to <code>True</code> </p>
     */
    inline const VocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>The manner in which you use your vocabulary filter to filter words in your
     * transcript. <code>Remove</code> removes filtered words from your transcription
     * results. <code>Mask</code> masks those words with a <code>***</code> in your
     * transcription results. <code>Tag</code> keeps the filtered words in your
     * transcription results and tags them. The tag appears as
     * <code>VocabularyFilterMatch</code> equal to <code>True</code> </p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>The manner in which you use your vocabulary filter to filter words in your
     * transcript. <code>Remove</code> removes filtered words from your transcription
     * results. <code>Mask</code> masks those words with a <code>***</code> in your
     * transcription results. <code>Tag</code> keeps the filtered words in your
     * transcription results and tags them. The tag appears as
     * <code>VocabularyFilterMatch</code> equal to <code>True</code> </p>
     */
    inline void SetVocabularyFilterMethod(const VocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>The manner in which you use your vocabulary filter to filter words in your
     * transcript. <code>Remove</code> removes filtered words from your transcription
     * results. <code>Mask</code> masks those words with a <code>***</code> in your
     * transcription results. <code>Tag</code> keeps the filtered words in your
     * transcription results and tags them. The tag appears as
     * <code>VocabularyFilterMatch</code> equal to <code>True</code> </p>
     */
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>The manner in which you use your vocabulary filter to filter words in your
     * transcript. <code>Remove</code> removes filtered words from your transcription
     * results. <code>Mask</code> masks those words with a <code>***</code> in your
     * transcription results. <code>Tag</code> keeps the filtered words in your
     * transcription results and tags them. The tag appears as
     * <code>VocabularyFilterMatch</code> equal to <code>True</code> </p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterMethod(const VocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>The manner in which you use your vocabulary filter to filter words in your
     * transcript. <code>Remove</code> removes filtered words from your transcription
     * results. <code>Mask</code> masks those words with a <code>***</code> in your
     * transcription results. <code>Tag</code> keeps the filtered words in your
     * transcription results and tags them. The tag appears as
     * <code>VocabularyFilterMatch</code> equal to <code>True</code> </p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterMethod(VocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}


    /**
     * <p>When <code>true</code>, enables speaker identification in your real-time
     * stream.</p>
     */
    inline bool GetShowSpeakerLabel() const{ return m_showSpeakerLabel; }

    /**
     * <p>When <code>true</code>, enables speaker identification in your real-time
     * stream.</p>
     */
    inline bool ShowSpeakerLabelHasBeenSet() const { return m_showSpeakerLabelHasBeenSet; }

    /**
     * <p>When <code>true</code>, enables speaker identification in your real-time
     * stream.</p>
     */
    inline void SetShowSpeakerLabel(bool value) { m_showSpeakerLabelHasBeenSet = true; m_showSpeakerLabel = value; }

    /**
     * <p>When <code>true</code>, enables speaker identification in your real-time
     * stream.</p>
     */
    inline StartStreamTranscriptionRequest& WithShowSpeakerLabel(bool value) { SetShowSpeakerLabel(value); return *this;}


    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe to process each audio
     * channel separately and then merge the transcription output of each channel into
     * a single transcription.</p> <p>Amazon Transcribe also produces a transcription
     * of each item. An item includes the start time, end time, and any alternative
     * transcriptions.</p> <p>You can't set both <code>ShowSpeakerLabel</code> and
     * <code>EnableChannelIdentification</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p>
     */
    inline bool GetEnableChannelIdentification() const{ return m_enableChannelIdentification; }

    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe to process each audio
     * channel separately and then merge the transcription output of each channel into
     * a single transcription.</p> <p>Amazon Transcribe also produces a transcription
     * of each item. An item includes the start time, end time, and any alternative
     * transcriptions.</p> <p>You can't set both <code>ShowSpeakerLabel</code> and
     * <code>EnableChannelIdentification</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p>
     */
    inline bool EnableChannelIdentificationHasBeenSet() const { return m_enableChannelIdentificationHasBeenSet; }

    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe to process each audio
     * channel separately and then merge the transcription output of each channel into
     * a single transcription.</p> <p>Amazon Transcribe also produces a transcription
     * of each item. An item includes the start time, end time, and any alternative
     * transcriptions.</p> <p>You can't set both <code>ShowSpeakerLabel</code> and
     * <code>EnableChannelIdentification</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p>
     */
    inline void SetEnableChannelIdentification(bool value) { m_enableChannelIdentificationHasBeenSet = true; m_enableChannelIdentification = value; }

    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe to process each audio
     * channel separately and then merge the transcription output of each channel into
     * a single transcription.</p> <p>Amazon Transcribe also produces a transcription
     * of each item. An item includes the start time, end time, and any alternative
     * transcriptions.</p> <p>You can't set both <code>ShowSpeakerLabel</code> and
     * <code>EnableChannelIdentification</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithEnableChannelIdentification(bool value) { SetEnableChannelIdentification(value); return *this;}


    /**
     * <p>The number of channels that are in your audio stream.</p>
     */
    inline int GetNumberOfChannels() const{ return m_numberOfChannels; }

    /**
     * <p>The number of channels that are in your audio stream.</p>
     */
    inline bool NumberOfChannelsHasBeenSet() const { return m_numberOfChannelsHasBeenSet; }

    /**
     * <p>The number of channels that are in your audio stream.</p>
     */
    inline void SetNumberOfChannels(int value) { m_numberOfChannelsHasBeenSet = true; m_numberOfChannels = value; }

    /**
     * <p>The number of channels that are in your audio stream.</p>
     */
    inline StartStreamTranscriptionRequest& WithNumberOfChannels(int value) { SetNumberOfChannels(value); return *this;}

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

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet;

    VocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet;

    bool m_showSpeakerLabel;
    bool m_showSpeakerLabelHasBeenSet;

    bool m_enableChannelIdentification;
    bool m_enableChannelIdentificationHasBeenSet;

    int m_numberOfChannels;
    bool m_numberOfChannelsHasBeenSet;
    Aws::Utils::Event::EventStreamDecoder m_decoder;
    StartStreamTranscriptionHandler m_handler;

  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
