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
#include <aws/transcribestreaming/model/PartialResultsStability.h>
#include <aws/transcribestreaming/model/ContentIdentificationType.h>
#include <aws/transcribestreaming/model/ContentRedactionType.h>
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
     * <p>The language code of the input audio stream.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the input audio stream.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code of the input audio stream.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code of the input audio stream.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code of the input audio stream.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the input audio stream.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate of the input audio (in Hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate of the input audio (in Hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate of the input audio (in Hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate of the input audio (in Hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
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
     * <p>The name of the custom vocabulary you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more custom
     * vocabularies with your transcription, use the <code>VocabularyNames</code>
     * operation instead.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the custom vocabulary you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more custom
     * vocabularies with your transcription, use the <code>VocabularyNames</code>
     * operation instead.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the custom vocabulary you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more custom
     * vocabularies with your transcription, use the <code>VocabularyNames</code>
     * operation instead.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the custom vocabulary you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more custom
     * vocabularies with your transcription, use the <code>VocabularyNames</code>
     * operation instead.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the custom vocabulary you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more custom
     * vocabularies with your transcription, use the <code>VocabularyNames</code>
     * operation instead.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the custom vocabulary you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more custom
     * vocabularies with your transcription, use the <code>VocabularyNames</code>
     * operation instead.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the custom vocabulary you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more custom
     * vocabularies with your transcription, use the <code>VocabularyNames</code>
     * operation instead.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom vocabulary you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more custom
     * vocabularies with your transcription, use the <code>VocabularyNames</code>
     * operation instead.</p>
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
     * <p>PCM-encoded stream of audio blobs. The audio stream is encoded as an HTTP/2
     * data frame.</p>
     */
    std::shared_ptr<AudioStream> GetAudioStream() const { return m_audioStream; }

    /**
     * <p>PCM-encoded stream of audio blobs. The audio stream is encoded as an HTTP/2
     * data frame.</p>
     */
    void SetAudioStream(const std::shared_ptr<AudioStream>& value) { m_audioStream = value; }

    /**
     * <p>PCM-encoded stream of audio blobs. The audio stream is encoded as an HTTP/2
     * data frame.</p>
     */
    StartStreamTranscriptionRequest& WithAudioStream(const std::shared_ptr<AudioStream>& value) { SetAudioStream(value); return *this;}


    /**
     * <p>The name of the vocabulary filter you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more
     * vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> operation instead.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of the vocabulary filter you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more
     * vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> operation instead.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary filter you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more
     * vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> operation instead.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>The name of the vocabulary filter you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more
     * vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> operation instead.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of the vocabulary filter you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more
     * vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> operation instead.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of the vocabulary filter you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more
     * vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> operation instead.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of the vocabulary filter you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more
     * vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> operation instead.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary filter you want to use with your
     * transcription.</p> <p>This operation is not intended for use in conjunction with
     * the <code>IdentifyLanguage</code> operation. If you're using
     * <code>IdentifyLanguage</code> in your request and want to use one or more
     * vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> operation instead.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>The manner in which you use your vocabulary filter to filter words in your
     * transcript. <code>Remove</code> removes filtered words from your transcription
     * results. <code>Mask</code> masks filtered words with a <code>***</code> in your
     * transcription results. <code>Tag</code> keeps the filtered words in your
     * transcription results and tags them. The tag appears as
     * <code>VocabularyFilterMatch</code> equal to <code>True</code>.</p>
     */
    inline const VocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>The manner in which you use your vocabulary filter to filter words in your
     * transcript. <code>Remove</code> removes filtered words from your transcription
     * results. <code>Mask</code> masks filtered words with a <code>***</code> in your
     * transcription results. <code>Tag</code> keeps the filtered words in your
     * transcription results and tags them. The tag appears as
     * <code>VocabularyFilterMatch</code> equal to <code>True</code>.</p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>The manner in which you use your vocabulary filter to filter words in your
     * transcript. <code>Remove</code> removes filtered words from your transcription
     * results. <code>Mask</code> masks filtered words with a <code>***</code> in your
     * transcription results. <code>Tag</code> keeps the filtered words in your
     * transcription results and tags them. The tag appears as
     * <code>VocabularyFilterMatch</code> equal to <code>True</code>.</p>
     */
    inline void SetVocabularyFilterMethod(const VocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>The manner in which you use your vocabulary filter to filter words in your
     * transcript. <code>Remove</code> removes filtered words from your transcription
     * results. <code>Mask</code> masks filtered words with a <code>***</code> in your
     * transcription results. <code>Tag</code> keeps the filtered words in your
     * transcription results and tags them. The tag appears as
     * <code>VocabularyFilterMatch</code> equal to <code>True</code>.</p>
     */
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>The manner in which you use your vocabulary filter to filter words in your
     * transcript. <code>Remove</code> removes filtered words from your transcription
     * results. <code>Mask</code> masks filtered words with a <code>***</code> in your
     * transcription results. <code>Tag</code> keeps the filtered words in your
     * transcription results and tags them. The tag appears as
     * <code>VocabularyFilterMatch</code> equal to <code>True</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterMethod(const VocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>The manner in which you use your vocabulary filter to filter words in your
     * transcript. <code>Remove</code> removes filtered words from your transcription
     * results. <code>Mask</code> masks filtered words with a <code>***</code> in your
     * transcription results. <code>Tag</code> keeps the filtered words in your
     * transcription results and tags them. The tag appears as
     * <code>VocabularyFilterMatch</code> equal to <code>True</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterMethod(VocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}


    /**
     * <p>When <code>true</code>, enables speaker identification in your media
     * stream.</p>
     */
    inline bool GetShowSpeakerLabel() const{ return m_showSpeakerLabel; }

    /**
     * <p>When <code>true</code>, enables speaker identification in your media
     * stream.</p>
     */
    inline bool ShowSpeakerLabelHasBeenSet() const { return m_showSpeakerLabelHasBeenSet; }

    /**
     * <p>When <code>true</code>, enables speaker identification in your media
     * stream.</p>
     */
    inline void SetShowSpeakerLabel(bool value) { m_showSpeakerLabelHasBeenSet = true; m_showSpeakerLabel = value; }

    /**
     * <p>When <code>true</code>, enables speaker identification in your media
     * stream.</p>
     */
    inline StartStreamTranscriptionRequest& WithShowSpeakerLabel(bool value) { SetShowSpeakerLabel(value); return *this;}


    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe to process each audio
     * channel separately, then merges the transcription output of each channel into a
     * single transcription.</p> <p>Amazon Transcribe also produces a transcription of
     * each item. An item includes the start time, end time, and any alternative
     * transcriptions.</p>
     */
    inline bool GetEnableChannelIdentification() const{ return m_enableChannelIdentification; }

    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe to process each audio
     * channel separately, then merges the transcription output of each channel into a
     * single transcription.</p> <p>Amazon Transcribe also produces a transcription of
     * each item. An item includes the start time, end time, and any alternative
     * transcriptions.</p>
     */
    inline bool EnableChannelIdentificationHasBeenSet() const { return m_enableChannelIdentificationHasBeenSet; }

    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe to process each audio
     * channel separately, then merges the transcription output of each channel into a
     * single transcription.</p> <p>Amazon Transcribe also produces a transcription of
     * each item. An item includes the start time, end time, and any alternative
     * transcriptions.</p>
     */
    inline void SetEnableChannelIdentification(bool value) { m_enableChannelIdentificationHasBeenSet = true; m_enableChannelIdentification = value; }

    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe to process each audio
     * channel separately, then merges the transcription output of each channel into a
     * single transcription.</p> <p>Amazon Transcribe also produces a transcription of
     * each item. An item includes the start time, end time, and any alternative
     * transcriptions.</p>
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


    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe to present transcription
     * results that have the partial results stabilized. Normally, any word or phrase
     * from one partial result can change in a subsequent partial result. With partial
     * results stabilization enabled, only the last few words of one partial result can
     * change in another partial result.</p>
     */
    inline bool GetEnablePartialResultsStabilization() const{ return m_enablePartialResultsStabilization; }

    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe to present transcription
     * results that have the partial results stabilized. Normally, any word or phrase
     * from one partial result can change in a subsequent partial result. With partial
     * results stabilization enabled, only the last few words of one partial result can
     * change in another partial result.</p>
     */
    inline bool EnablePartialResultsStabilizationHasBeenSet() const { return m_enablePartialResultsStabilizationHasBeenSet; }

    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe to present transcription
     * results that have the partial results stabilized. Normally, any word or phrase
     * from one partial result can change in a subsequent partial result. With partial
     * results stabilization enabled, only the last few words of one partial result can
     * change in another partial result.</p>
     */
    inline void SetEnablePartialResultsStabilization(bool value) { m_enablePartialResultsStabilizationHasBeenSet = true; m_enablePartialResultsStabilization = value; }

    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe to present transcription
     * results that have the partial results stabilized. Normally, any word or phrase
     * from one partial result can change in a subsequent partial result. With partial
     * results stabilization enabled, only the last few words of one partial result can
     * change in another partial result.</p>
     */
    inline StartStreamTranscriptionRequest& WithEnablePartialResultsStabilization(bool value) { SetEnablePartialResultsStabilization(value); return *this;}


    /**
     * <p>You can use this field to set the stability level of the transcription
     * results. A higher stability level means that the transcription results are less
     * likely to change. Higher stability levels can come with lower overall
     * transcription accuracy.</p>
     */
    inline const PartialResultsStability& GetPartialResultsStability() const{ return m_partialResultsStability; }

    /**
     * <p>You can use this field to set the stability level of the transcription
     * results. A higher stability level means that the transcription results are less
     * likely to change. Higher stability levels can come with lower overall
     * transcription accuracy.</p>
     */
    inline bool PartialResultsStabilityHasBeenSet() const { return m_partialResultsStabilityHasBeenSet; }

    /**
     * <p>You can use this field to set the stability level of the transcription
     * results. A higher stability level means that the transcription results are less
     * likely to change. Higher stability levels can come with lower overall
     * transcription accuracy.</p>
     */
    inline void SetPartialResultsStability(const PartialResultsStability& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = value; }

    /**
     * <p>You can use this field to set the stability level of the transcription
     * results. A higher stability level means that the transcription results are less
     * likely to change. Higher stability levels can come with lower overall
     * transcription accuracy.</p>
     */
    inline void SetPartialResultsStability(PartialResultsStability&& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = std::move(value); }

    /**
     * <p>You can use this field to set the stability level of the transcription
     * results. A higher stability level means that the transcription results are less
     * likely to change. Higher stability levels can come with lower overall
     * transcription accuracy.</p>
     */
    inline StartStreamTranscriptionRequest& WithPartialResultsStability(const PartialResultsStability& value) { SetPartialResultsStability(value); return *this;}

    /**
     * <p>You can use this field to set the stability level of the transcription
     * results. A higher stability level means that the transcription results are less
     * likely to change. Higher stability levels can come with lower overall
     * transcription accuracy.</p>
     */
    inline StartStreamTranscriptionRequest& WithPartialResultsStability(PartialResultsStability&& value) { SetPartialResultsStability(std::move(value)); return *this;}


    /**
     * <p>Set this field to PII to identify personally identifiable information (PII)
     * in the transcription output. Content identification is performed only upon
     * complete transcription of the audio segments.</p> <p>You can’t set both
     * <code>ContentIdentificationType</code> and <code>ContentRedactionType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline const ContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Set this field to PII to identify personally identifiable information (PII)
     * in the transcription output. Content identification is performed only upon
     * complete transcription of the audio segments.</p> <p>You can’t set both
     * <code>ContentIdentificationType</code> and <code>ContentRedactionType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Set this field to PII to identify personally identifiable information (PII)
     * in the transcription output. Content identification is performed only upon
     * complete transcription of the audio segments.</p> <p>You can’t set both
     * <code>ContentIdentificationType</code> and <code>ContentRedactionType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline void SetContentIdentificationType(const ContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Set this field to PII to identify personally identifiable information (PII)
     * in the transcription output. Content identification is performed only upon
     * complete transcription of the audio segments.</p> <p>You can’t set both
     * <code>ContentIdentificationType</code> and <code>ContentRedactionType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline void SetContentIdentificationType(ContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Set this field to PII to identify personally identifiable information (PII)
     * in the transcription output. Content identification is performed only upon
     * complete transcription of the audio segments.</p> <p>You can’t set both
     * <code>ContentIdentificationType</code> and <code>ContentRedactionType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithContentIdentificationType(const ContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Set this field to PII to identify personally identifiable information (PII)
     * in the transcription output. Content identification is performed only upon
     * complete transcription of the audio segments.</p> <p>You can’t set both
     * <code>ContentIdentificationType</code> and <code>ContentRedactionType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithContentIdentificationType(ContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>Set this field to PII to redact personally identifiable information (PII) in
     * the transcription output. Content redaction is performed only upon complete
     * transcription of the audio segments.</p> <p>You can’t set both
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline const ContentRedactionType& GetContentRedactionType() const{ return m_contentRedactionType; }

    /**
     * <p>Set this field to PII to redact personally identifiable information (PII) in
     * the transcription output. Content redaction is performed only upon complete
     * transcription of the audio segments.</p> <p>You can’t set both
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline bool ContentRedactionTypeHasBeenSet() const { return m_contentRedactionTypeHasBeenSet; }

    /**
     * <p>Set this field to PII to redact personally identifiable information (PII) in
     * the transcription output. Content redaction is performed only upon complete
     * transcription of the audio segments.</p> <p>You can’t set both
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline void SetContentRedactionType(const ContentRedactionType& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = value; }

    /**
     * <p>Set this field to PII to redact personally identifiable information (PII) in
     * the transcription output. Content redaction is performed only upon complete
     * transcription of the audio segments.</p> <p>You can’t set both
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline void SetContentRedactionType(ContentRedactionType&& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = std::move(value); }

    /**
     * <p>Set this field to PII to redact personally identifiable information (PII) in
     * the transcription output. Content redaction is performed only upon complete
     * transcription of the audio segments.</p> <p>You can’t set both
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithContentRedactionType(const ContentRedactionType& value) { SetContentRedactionType(value); return *this;}

    /**
     * <p>Set this field to PII to redact personally identifiable information (PII) in
     * the transcription output. Content redaction is performed only upon complete
     * transcription of the audio segments.</p> <p>You can’t set both
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithContentRedactionType(ContentRedactionType&& value) { SetContentRedactionType(std::move(value)); return *this;}


    /**
     * <p>List the PII entity types you want to identify or redact. In order to specify
     * entity types, you must have either <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code> enabled.</p> <p> <code>PIIEntityTypes</code>
     * must be comma-separated; the available values are:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline const Aws::String& GetPiiEntityTypes() const{ return m_piiEntityTypes; }

    /**
     * <p>List the PII entity types you want to identify or redact. In order to specify
     * entity types, you must have either <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code> enabled.</p> <p> <code>PIIEntityTypes</code>
     * must be comma-separated; the available values are:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }

    /**
     * <p>List the PII entity types you want to identify or redact. In order to specify
     * entity types, you must have either <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code> enabled.</p> <p> <code>PIIEntityTypes</code>
     * must be comma-separated; the available values are:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(const Aws::String& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = value; }

    /**
     * <p>List the PII entity types you want to identify or redact. In order to specify
     * entity types, you must have either <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code> enabled.</p> <p> <code>PIIEntityTypes</code>
     * must be comma-separated; the available values are:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(Aws::String&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::move(value); }

    /**
     * <p>List the PII entity types you want to identify or redact. In order to specify
     * entity types, you must have either <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code> enabled.</p> <p> <code>PIIEntityTypes</code>
     * must be comma-separated; the available values are:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(const char* value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.assign(value); }

    /**
     * <p>List the PII entity types you want to identify or redact. In order to specify
     * entity types, you must have either <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code> enabled.</p> <p> <code>PIIEntityTypes</code>
     * must be comma-separated; the available values are:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithPiiEntityTypes(const Aws::String& value) { SetPiiEntityTypes(value); return *this;}

    /**
     * <p>List the PII entity types you want to identify or redact. In order to specify
     * entity types, you must have either <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code> enabled.</p> <p> <code>PIIEntityTypes</code>
     * must be comma-separated; the available values are:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithPiiEntityTypes(Aws::String&& value) { SetPiiEntityTypes(std::move(value)); return *this;}

    /**
     * <p>List the PII entity types you want to identify or redact. In order to specify
     * entity types, you must have either <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code> enabled.</p> <p> <code>PIIEntityTypes</code>
     * must be comma-separated; the available values are:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithPiiEntityTypes(const char* value) { SetPiiEntityTypes(value); return *this;}


    /**
     * <p>The name of the language model you want to use.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>The name of the language model you want to use.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>The name of the language model you want to use.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>The name of the language model you want to use.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>The name of the language model you want to use.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>The name of the language model you want to use.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>The name of the language model you want to use.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the language model you want to use.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}


    /**
     * <p>Optional. Set this value to <code>true</code> to enable language
     * identification for your media stream.</p>
     */
    inline bool GetIdentifyLanguage() const{ return m_identifyLanguage; }

    /**
     * <p>Optional. Set this value to <code>true</code> to enable language
     * identification for your media stream.</p>
     */
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }

    /**
     * <p>Optional. Set this value to <code>true</code> to enable language
     * identification for your media stream.</p>
     */
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }

    /**
     * <p>Optional. Set this value to <code>true</code> to enable language
     * identification for your media stream.</p>
     */
    inline StartStreamTranscriptionRequest& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}


    /**
     * <p>An object containing a list of languages that might be present in your
     * audio.</p> <p>You must provide two or more language codes to help Amazon
     * Transcribe identify the correct language of your media stream with the highest
     * possible accuracy. You can only select one variant per language; for example,
     * you can't include both <code>en-US</code> and <code>en-UK</code> in the same
     * request.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline const Aws::String& GetLanguageOptions() const{ return m_languageOptions; }

    /**
     * <p>An object containing a list of languages that might be present in your
     * audio.</p> <p>You must provide two or more language codes to help Amazon
     * Transcribe identify the correct language of your media stream with the highest
     * possible accuracy. You can only select one variant per language; for example,
     * you can't include both <code>en-US</code> and <code>en-UK</code> in the same
     * request.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }

    /**
     * <p>An object containing a list of languages that might be present in your
     * audio.</p> <p>You must provide two or more language codes to help Amazon
     * Transcribe identify the correct language of your media stream with the highest
     * possible accuracy. You can only select one variant per language; for example,
     * you can't include both <code>en-US</code> and <code>en-UK</code> in the same
     * request.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline void SetLanguageOptions(const Aws::String& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = value; }

    /**
     * <p>An object containing a list of languages that might be present in your
     * audio.</p> <p>You must provide two or more language codes to help Amazon
     * Transcribe identify the correct language of your media stream with the highest
     * possible accuracy. You can only select one variant per language; for example,
     * you can't include both <code>en-US</code> and <code>en-UK</code> in the same
     * request.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline void SetLanguageOptions(Aws::String&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::move(value); }

    /**
     * <p>An object containing a list of languages that might be present in your
     * audio.</p> <p>You must provide two or more language codes to help Amazon
     * Transcribe identify the correct language of your media stream with the highest
     * possible accuracy. You can only select one variant per language; for example,
     * you can't include both <code>en-US</code> and <code>en-UK</code> in the same
     * request.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline void SetLanguageOptions(const char* value) { m_languageOptionsHasBeenSet = true; m_languageOptions.assign(value); }

    /**
     * <p>An object containing a list of languages that might be present in your
     * audio.</p> <p>You must provide two or more language codes to help Amazon
     * Transcribe identify the correct language of your media stream with the highest
     * possible accuracy. You can only select one variant per language; for example,
     * you can't include both <code>en-US</code> and <code>en-UK</code> in the same
     * request.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageOptions(const Aws::String& value) { SetLanguageOptions(value); return *this;}

    /**
     * <p>An object containing a list of languages that might be present in your
     * audio.</p> <p>You must provide two or more language codes to help Amazon
     * Transcribe identify the correct language of your media stream with the highest
     * possible accuracy. You can only select one variant per language; for example,
     * you can't include both <code>en-US</code> and <code>en-UK</code> in the same
     * request.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageOptions(Aws::String&& value) { SetLanguageOptions(std::move(value)); return *this;}

    /**
     * <p>An object containing a list of languages that might be present in your
     * audio.</p> <p>You must provide two or more language codes to help Amazon
     * Transcribe identify the correct language of your media stream with the highest
     * possible accuracy. You can only select one variant per language; for example,
     * you can't include both <code>en-US</code> and <code>en-UK</code> in the same
     * request.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageOptions(const char* value) { SetLanguageOptions(value); return *this;}


    /**
     * <p>Optional. From the subset of languages codes you provided for
     * <code>LanguageOptions</code>, you can select one preferred language for your
     * transcription.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline const LanguageCode& GetPreferredLanguage() const{ return m_preferredLanguage; }

    /**
     * <p>Optional. From the subset of languages codes you provided for
     * <code>LanguageOptions</code>, you can select one preferred language for your
     * transcription.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline bool PreferredLanguageHasBeenSet() const { return m_preferredLanguageHasBeenSet; }

    /**
     * <p>Optional. From the subset of languages codes you provided for
     * <code>LanguageOptions</code>, you can select one preferred language for your
     * transcription.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline void SetPreferredLanguage(const LanguageCode& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = value; }

    /**
     * <p>Optional. From the subset of languages codes you provided for
     * <code>LanguageOptions</code>, you can select one preferred language for your
     * transcription.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline void SetPreferredLanguage(LanguageCode&& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = std::move(value); }

    /**
     * <p>Optional. From the subset of languages codes you provided for
     * <code>LanguageOptions</code>, you can select one preferred language for your
     * transcription.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline StartStreamTranscriptionRequest& WithPreferredLanguage(const LanguageCode& value) { SetPreferredLanguage(value); return *this;}

    /**
     * <p>Optional. From the subset of languages codes you provided for
     * <code>LanguageOptions</code>, you can select one preferred language for your
     * transcription.</p> <p>You can only use this parameter if you've set
     * <code>IdentifyLanguage</code> to <code>true</code>in your request.</p>
     */
    inline StartStreamTranscriptionRequest& WithPreferredLanguage(LanguageCode&& value) { SetPreferredLanguage(std::move(value)); return *this;}


    /**
     * <p>The names of the custom vocabularies you want to use with your
     * transcription.</p> <p>Note that if the custom vocabularies you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * operation instead.</p>
     */
    inline const Aws::String& GetVocabularyNames() const{ return m_vocabularyNames; }

    /**
     * <p>The names of the custom vocabularies you want to use with your
     * transcription.</p> <p>Note that if the custom vocabularies you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * operation instead.</p>
     */
    inline bool VocabularyNamesHasBeenSet() const { return m_vocabularyNamesHasBeenSet; }

    /**
     * <p>The names of the custom vocabularies you want to use with your
     * transcription.</p> <p>Note that if the custom vocabularies you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * operation instead.</p>
     */
    inline void SetVocabularyNames(const Aws::String& value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames = value; }

    /**
     * <p>The names of the custom vocabularies you want to use with your
     * transcription.</p> <p>Note that if the custom vocabularies you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * operation instead.</p>
     */
    inline void SetVocabularyNames(Aws::String&& value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames = std::move(value); }

    /**
     * <p>The names of the custom vocabularies you want to use with your
     * transcription.</p> <p>Note that if the custom vocabularies you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * operation instead.</p>
     */
    inline void SetVocabularyNames(const char* value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames.assign(value); }

    /**
     * <p>The names of the custom vocabularies you want to use with your
     * transcription.</p> <p>Note that if the custom vocabularies you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * operation instead.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyNames(const Aws::String& value) { SetVocabularyNames(value); return *this;}

    /**
     * <p>The names of the custom vocabularies you want to use with your
     * transcription.</p> <p>Note that if the custom vocabularies you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * operation instead.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyNames(Aws::String&& value) { SetVocabularyNames(std::move(value)); return *this;}

    /**
     * <p>The names of the custom vocabularies you want to use with your
     * transcription.</p> <p>Note that if the custom vocabularies you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * operation instead.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyNames(const char* value) { SetVocabularyNames(value); return *this;}


    /**
     * <p>The names of the vocabulary filters you want to use with your
     * transcription.</p> <p>Note that if the vocabulary filters you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a vocabulary
     * filter with your transcription, use the <code>VocabularyFilterName</code>
     * operation instead.</p>
     */
    inline const Aws::String& GetVocabularyFilterNames() const{ return m_vocabularyFilterNames; }

    /**
     * <p>The names of the vocabulary filters you want to use with your
     * transcription.</p> <p>Note that if the vocabulary filters you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a vocabulary
     * filter with your transcription, use the <code>VocabularyFilterName</code>
     * operation instead.</p>
     */
    inline bool VocabularyFilterNamesHasBeenSet() const { return m_vocabularyFilterNamesHasBeenSet; }

    /**
     * <p>The names of the vocabulary filters you want to use with your
     * transcription.</p> <p>Note that if the vocabulary filters you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a vocabulary
     * filter with your transcription, use the <code>VocabularyFilterName</code>
     * operation instead.</p>
     */
    inline void SetVocabularyFilterNames(const Aws::String& value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames = value; }

    /**
     * <p>The names of the vocabulary filters you want to use with your
     * transcription.</p> <p>Note that if the vocabulary filters you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a vocabulary
     * filter with your transcription, use the <code>VocabularyFilterName</code>
     * operation instead.</p>
     */
    inline void SetVocabularyFilterNames(Aws::String&& value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames = std::move(value); }

    /**
     * <p>The names of the vocabulary filters you want to use with your
     * transcription.</p> <p>Note that if the vocabulary filters you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a vocabulary
     * filter with your transcription, use the <code>VocabularyFilterName</code>
     * operation instead.</p>
     */
    inline void SetVocabularyFilterNames(const char* value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames.assign(value); }

    /**
     * <p>The names of the vocabulary filters you want to use with your
     * transcription.</p> <p>Note that if the vocabulary filters you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a vocabulary
     * filter with your transcription, use the <code>VocabularyFilterName</code>
     * operation instead.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterNames(const Aws::String& value) { SetVocabularyFilterNames(value); return *this;}

    /**
     * <p>The names of the vocabulary filters you want to use with your
     * transcription.</p> <p>Note that if the vocabulary filters you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a vocabulary
     * filter with your transcription, use the <code>VocabularyFilterName</code>
     * operation instead.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterNames(Aws::String&& value) { SetVocabularyFilterNames(std::move(value)); return *this;}

    /**
     * <p>The names of the vocabulary filters you want to use with your
     * transcription.</p> <p>Note that if the vocabulary filters you specify are in
     * languages that don't match the language identified in your media, your job
     * fails.</p> <p>This operation is only intended for use in conjunction with the
     * <code>IdentifyLanguage</code> operation. If you're not using
     * <code>IdentifyLanguage</code> in your request and want to use a vocabulary
     * filter with your transcription, use the <code>VocabularyFilterName</code>
     * operation instead.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterNames(const char* value) { SetVocabularyFilterNames(value); return *this;}

  private:

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaEncoding m_mediaEncoding;
    bool m_mediaEncodingHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    std::shared_ptr<AudioStream> m_audioStream;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    VocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet = false;

    bool m_showSpeakerLabel;
    bool m_showSpeakerLabelHasBeenSet = false;

    bool m_enableChannelIdentification;
    bool m_enableChannelIdentificationHasBeenSet = false;

    int m_numberOfChannels;
    bool m_numberOfChannelsHasBeenSet = false;

    bool m_enablePartialResultsStabilization;
    bool m_enablePartialResultsStabilizationHasBeenSet = false;

    PartialResultsStability m_partialResultsStability;
    bool m_partialResultsStabilityHasBeenSet = false;

    ContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;

    ContentRedactionType m_contentRedactionType;
    bool m_contentRedactionTypeHasBeenSet = false;

    Aws::String m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;

    bool m_identifyLanguage;
    bool m_identifyLanguageHasBeenSet = false;

    Aws::String m_languageOptions;
    bool m_languageOptionsHasBeenSet = false;

    LanguageCode m_preferredLanguage;
    bool m_preferredLanguageHasBeenSet = false;

    Aws::String m_vocabularyNames;
    bool m_vocabularyNamesHasBeenSet = false;

    Aws::String m_vocabularyFilterNames;
    bool m_vocabularyFilterNamesHasBeenSet = false;
    StartStreamTranscriptionHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
