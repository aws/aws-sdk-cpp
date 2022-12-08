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
  class StartStreamTranscriptionRequest : public TranscribeStreamingServiceRequest
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartStreamTranscription"; }

    inline virtual bool IsEventStreamRequest() const override { return true; }
    // SerializePayload will not be invoked.
    // This request is sent by encoding its data in event-streams which is sent as IOStream via GetBody()
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String SerializePayload() const override { return {}; }
    AWS_TRANSCRIBESTREAMINGSERVICE_API std::shared_ptr<Aws::IOStream> GetBody() const override;
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

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
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>If you're unsure of the language spoken in your audio, consider
     * using <code>IdentifyLanguage</code> to enable automatic language
     * identification.</p> <p>For a list of languages supported with Amazon Transcribe
     * streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>If you're unsure of the language spoken in your audio, consider
     * using <code>IdentifyLanguage</code> to enable automatic language
     * identification.</p> <p>For a list of languages supported with Amazon Transcribe
     * streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>If you're unsure of the language spoken in your audio, consider
     * using <code>IdentifyLanguage</code> to enable automatic language
     * identification.</p> <p>For a list of languages supported with Amazon Transcribe
     * streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>If you're unsure of the language spoken in your audio, consider
     * using <code>IdentifyLanguage</code> to enable automatic language
     * identification.</p> <p>For a list of languages supported with Amazon Transcribe
     * streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>If you're unsure of the language spoken in your audio, consider
     * using <code>IdentifyLanguage</code> to enable automatic language
     * identification.</p> <p>For a list of languages supported with Amazon Transcribe
     * streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>If you're unsure of the language spoken in your audio, consider
     * using <code>IdentifyLanguage</code> to enable automatic language
     * identification.</p> <p>For a list of languages supported with Amazon Transcribe
     * streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
     */
    inline StartStreamTranscriptionRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline const MediaEncoding& GetMediaEncoding() const{ return m_mediaEncoding; }

    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }

    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline void SetMediaEncoding(const MediaEncoding& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }

    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline void SetMediaEncoding(MediaEncoding&& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = std::move(value); }

    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithMediaEncoding(const MediaEncoding& value) { SetMediaEncoding(value); return *this;}

    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithMediaEncoding(MediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}


    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p>  <p>This parameter is <b>not</b>
     * intended for use with the <code>IdentifyLanguage</code> parameter. If you're
     * including <code>IdentifyLanguage</code> in your request and want to use one or
     * more custom vocabularies with your transcription, use the
     * <code>VocabularyNames</code> parameter instead.</p>  <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p>  <p>This parameter is <b>not</b>
     * intended for use with the <code>IdentifyLanguage</code> parameter. If you're
     * including <code>IdentifyLanguage</code> in your request and want to use one or
     * more custom vocabularies with your transcription, use the
     * <code>VocabularyNames</code> parameter instead.</p>  <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p>  <p>This parameter is <b>not</b>
     * intended for use with the <code>IdentifyLanguage</code> parameter. If you're
     * including <code>IdentifyLanguage</code> in your request and want to use one or
     * more custom vocabularies with your transcription, use the
     * <code>VocabularyNames</code> parameter instead.</p>  <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p>  <p>This parameter is <b>not</b>
     * intended for use with the <code>IdentifyLanguage</code> parameter. If you're
     * including <code>IdentifyLanguage</code> in your request and want to use one or
     * more custom vocabularies with your transcription, use the
     * <code>VocabularyNames</code> parameter instead.</p>  <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p>  <p>This parameter is <b>not</b>
     * intended for use with the <code>IdentifyLanguage</code> parameter. If you're
     * including <code>IdentifyLanguage</code> in your request and want to use one or
     * more custom vocabularies with your transcription, use the
     * <code>VocabularyNames</code> parameter instead.</p>  <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p>  <p>This parameter is <b>not</b>
     * intended for use with the <code>IdentifyLanguage</code> parameter. If you're
     * including <code>IdentifyLanguage</code> in your request and want to use one or
     * more custom vocabularies with your transcription, use the
     * <code>VocabularyNames</code> parameter instead.</p>  <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p>  <p>This parameter is <b>not</b>
     * intended for use with the <code>IdentifyLanguage</code> parameter. If you're
     * including <code>IdentifyLanguage</code> in your request and want to use one or
     * more custom vocabularies with your transcription, use the
     * <code>VocabularyNames</code> parameter instead.</p>  <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p>  <p>This parameter is <b>not</b>
     * intended for use with the <code>IdentifyLanguage</code> parameter. If you're
     * including <code>IdentifyLanguage</code> in your request and want to use one or
     * more custom vocabularies with your transcription, use the
     * <code>VocabularyNames</code> parameter instead.</p>  <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe generates an ID and returns it in
     * the response.</p> <p>You can use a session ID to retry a streaming session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe generates an ID and returns it in
     * the response.</p> <p>You can use a session ID to retry a streaming session.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe generates an ID and returns it in
     * the response.</p> <p>You can use a session ID to retry a streaming session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe generates an ID and returns it in
     * the response.</p> <p>You can use a session ID to retry a streaming session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe generates an ID and returns it in
     * the response.</p> <p>You can use a session ID to retry a streaming session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe generates an ID and returns it in
     * the response.</p> <p>You can use a session ID to retry a streaming session.</p>
     */
    inline StartStreamTranscriptionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe generates an ID and returns it in
     * the response.</p> <p>You can use a session ID to retry a streaming session.</p>
     */
    inline StartStreamTranscriptionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe generates an ID and returns it in
     * the response.</p> <p>You can use a session ID to retry a streaming session.</p>
     */
    inline StartStreamTranscriptionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>An encoded stream of audio blobs. Audio streams are encoded as either HTTP/2
     * or WebSocket data frames.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html">Transcribing
     * streaming audio</a>.</p>
     */
    AWS_TRANSCRIBESTREAMINGSERVICE_API std::shared_ptr<AudioStream> GetAudioStream() const { return m_audioStream; }

    /**
     * <p>An encoded stream of audio blobs. Audio streams are encoded as either HTTP/2
     * or WebSocket data frames.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html">Transcribing
     * streaming audio</a>.</p>
     */
    AWS_TRANSCRIBESTREAMINGSERVICE_API void SetAudioStream(const std::shared_ptr<AudioStream>& value) { m_audioStream = value; }

    /**
     * <p>An encoded stream of audio blobs. Audio streams are encoded as either HTTP/2
     * or WebSocket data frames.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html">Transcribing
     * streaming audio</a>.</p>
     */
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionRequest& WithAudioStream(const std::shared_ptr<AudioStream>& value) { SetAudioStream(value); return *this;}


    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p>  <p>This parameter is
     * <b>not</b> intended for use with the <code>IdentifyLanguage</code> parameter. If
     * you're including <code>IdentifyLanguage</code> in your request and want to use
     * one or more vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p>  <p>This parameter is
     * <b>not</b> intended for use with the <code>IdentifyLanguage</code> parameter. If
     * you're including <code>IdentifyLanguage</code> in your request and want to use
     * one or more vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p>  <p>This parameter is
     * <b>not</b> intended for use with the <code>IdentifyLanguage</code> parameter. If
     * you're including <code>IdentifyLanguage</code> in your request and want to use
     * one or more vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p>  <p>This parameter is
     * <b>not</b> intended for use with the <code>IdentifyLanguage</code> parameter. If
     * you're including <code>IdentifyLanguage</code> in your request and want to use
     * one or more vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p>  <p>This parameter is
     * <b>not</b> intended for use with the <code>IdentifyLanguage</code> parameter. If
     * you're including <code>IdentifyLanguage</code> in your request and want to use
     * one or more vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p>  <p>This parameter is
     * <b>not</b> intended for use with the <code>IdentifyLanguage</code> parameter. If
     * you're including <code>IdentifyLanguage</code> in your request and want to use
     * one or more vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p>  <p>This parameter is
     * <b>not</b> intended for use with the <code>IdentifyLanguage</code> parameter. If
     * you're including <code>IdentifyLanguage</code> in your request and want to use
     * one or more vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p>  <p>This parameter is
     * <b>not</b> intended for use with the <code>IdentifyLanguage</code> parameter. If
     * you're including <code>IdentifyLanguage</code> in your request and want to use
     * one or more vocabulary filters with your transcription, use the
     * <code>VocabularyFilterNames</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline const VocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline void SetVocabularyFilterMethod(const VocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterMethod(const VocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterMethod(VocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}


    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline bool GetShowSpeakerLabel() const{ return m_showSpeakerLabel; }

    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline bool ShowSpeakerLabelHasBeenSet() const { return m_showSpeakerLabelHasBeenSet; }

    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline void SetShowSpeakerLabel(bool value) { m_showSpeakerLabelHasBeenSet = true; m_showSpeakerLabel = value; }

    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithShowSpeakerLabel(bool value) { SetShowSpeakerLabel(value); return *this;}


    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>If you have
     * multi-channel audio and do not enable channel identification, your audio is
     * transcribed in a continuous manner and your transcript is not separated by
     * channel.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline bool GetEnableChannelIdentification() const{ return m_enableChannelIdentification; }

    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>If you have
     * multi-channel audio and do not enable channel identification, your audio is
     * transcribed in a continuous manner and your transcript is not separated by
     * channel.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline bool EnableChannelIdentificationHasBeenSet() const { return m_enableChannelIdentificationHasBeenSet; }

    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>If you have
     * multi-channel audio and do not enable channel identification, your audio is
     * transcribed in a continuous manner and your transcript is not separated by
     * channel.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline void SetEnableChannelIdentification(bool value) { m_enableChannelIdentificationHasBeenSet = true; m_enableChannelIdentification = value; }

    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>If you have
     * multi-channel audio and do not enable channel identification, your audio is
     * transcribed in a continuous manner and your transcript is not separated by
     * channel.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithEnableChannelIdentification(bool value) { SetEnableChannelIdentification(value); return *this;}


    /**
     * <p>Specify the number of channels in your audio stream. Up to two channels are
     * supported.</p>
     */
    inline int GetNumberOfChannels() const{ return m_numberOfChannels; }

    /**
     * <p>Specify the number of channels in your audio stream. Up to two channels are
     * supported.</p>
     */
    inline bool NumberOfChannelsHasBeenSet() const { return m_numberOfChannelsHasBeenSet; }

    /**
     * <p>Specify the number of channels in your audio stream. Up to two channels are
     * supported.</p>
     */
    inline void SetNumberOfChannels(int value) { m_numberOfChannelsHasBeenSet = true; m_numberOfChannels = value; }

    /**
     * <p>Specify the number of channels in your audio stream. Up to two channels are
     * supported.</p>
     */
    inline StartStreamTranscriptionRequest& WithNumberOfChannels(int value) { SetNumberOfChannels(value); return *this;}


    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline bool GetEnablePartialResultsStabilization() const{ return m_enablePartialResultsStabilization; }

    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline bool EnablePartialResultsStabilizationHasBeenSet() const { return m_enablePartialResultsStabilizationHasBeenSet; }

    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline void SetEnablePartialResultsStabilization(bool value) { m_enablePartialResultsStabilizationHasBeenSet = true; m_enablePartialResultsStabilization = value; }

    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithEnablePartialResultsStabilization(bool value) { SetEnablePartialResultsStabilization(value); return *this;}


    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline const PartialResultsStability& GetPartialResultsStability() const{ return m_partialResultsStability; }

    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline bool PartialResultsStabilityHasBeenSet() const { return m_partialResultsStabilityHasBeenSet; }

    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline void SetPartialResultsStability(const PartialResultsStability& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = value; }

    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline void SetPartialResultsStability(PartialResultsStability&& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = std::move(value); }

    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithPartialResultsStability(const PartialResultsStability& value) { SetPartialResultsStability(value); return *this;}

    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithPartialResultsStability(PartialResultsStability&& value) { SetPartialResultsStability(std::move(value)); return *this;}


    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline const ContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline void SetContentIdentificationType(const ContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline void SetContentIdentificationType(ContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithContentIdentificationType(const ContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithContentIdentificationType(ContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline const ContentRedactionType& GetContentRedactionType() const{ return m_contentRedactionType; }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline bool ContentRedactionTypeHasBeenSet() const { return m_contentRedactionTypeHasBeenSet; }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline void SetContentRedactionType(const ContentRedactionType& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = value; }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline void SetContentRedactionType(ContentRedactionType&& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = std::move(value); }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithContentRedactionType(const ContentRedactionType& value) { SetContentRedactionType(value); return *this;}

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithContentRedactionType(ContentRedactionType&& value) { SetContentRedactionType(std::move(value)); return *this;}


    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline const Aws::String& GetPiiEntityTypes() const{ return m_piiEntityTypes; }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(const Aws::String& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = value; }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(Aws::String&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::move(value); }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(const char* value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.assign(value); }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithPiiEntityTypes(const Aws::String& value) { SetPiiEntityTypes(value); return *this;}

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithPiiEntityTypes(Aws::String&& value) { SetPiiEntityTypes(std::move(value)); return *this;}

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline StartStreamTranscriptionRequest& WithPiiEntityTypes(const char* value) { SetPiiEntityTypes(value); return *this;}


    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}


    /**
     * <p>Enables automatic language identification for your transcription.</p> <p>If
     * you include <code>IdentifyLanguage</code>, you can optionally include a list of
     * language codes, using <code>LanguageOptions</code>, that you think may be
     * present in your audio stream. Including language options can improve
     * transcription accuracy.</p> <p>You can also include a preferred language using
     * <code>PreferredLanguage</code>. Adding a preferred language can help Amazon
     * Transcribe identify the language faster than if you omit this parameter.</p>
     * <p>If you have multi-channel audio that contains different languages on each
     * channel, and you've enabled channel identification, automatic language
     * identification identifies the dominant language on each audio channel.</p>
     * <p>Note that you must include either <code>LanguageCode</code> or
     * <code>IdentifyLanguage</code> in your request. If you include both parameters,
     * your request fails.</p> <p>Streaming language identification can't be combined
     * with custom language models or redaction.</p>
     */
    inline bool GetIdentifyLanguage() const{ return m_identifyLanguage; }

    /**
     * <p>Enables automatic language identification for your transcription.</p> <p>If
     * you include <code>IdentifyLanguage</code>, you can optionally include a list of
     * language codes, using <code>LanguageOptions</code>, that you think may be
     * present in your audio stream. Including language options can improve
     * transcription accuracy.</p> <p>You can also include a preferred language using
     * <code>PreferredLanguage</code>. Adding a preferred language can help Amazon
     * Transcribe identify the language faster than if you omit this parameter.</p>
     * <p>If you have multi-channel audio that contains different languages on each
     * channel, and you've enabled channel identification, automatic language
     * identification identifies the dominant language on each audio channel.</p>
     * <p>Note that you must include either <code>LanguageCode</code> or
     * <code>IdentifyLanguage</code> in your request. If you include both parameters,
     * your request fails.</p> <p>Streaming language identification can't be combined
     * with custom language models or redaction.</p>
     */
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }

    /**
     * <p>Enables automatic language identification for your transcription.</p> <p>If
     * you include <code>IdentifyLanguage</code>, you can optionally include a list of
     * language codes, using <code>LanguageOptions</code>, that you think may be
     * present in your audio stream. Including language options can improve
     * transcription accuracy.</p> <p>You can also include a preferred language using
     * <code>PreferredLanguage</code>. Adding a preferred language can help Amazon
     * Transcribe identify the language faster than if you omit this parameter.</p>
     * <p>If you have multi-channel audio that contains different languages on each
     * channel, and you've enabled channel identification, automatic language
     * identification identifies the dominant language on each audio channel.</p>
     * <p>Note that you must include either <code>LanguageCode</code> or
     * <code>IdentifyLanguage</code> in your request. If you include both parameters,
     * your request fails.</p> <p>Streaming language identification can't be combined
     * with custom language models or redaction.</p>
     */
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }

    /**
     * <p>Enables automatic language identification for your transcription.</p> <p>If
     * you include <code>IdentifyLanguage</code>, you can optionally include a list of
     * language codes, using <code>LanguageOptions</code>, that you think may be
     * present in your audio stream. Including language options can improve
     * transcription accuracy.</p> <p>You can also include a preferred language using
     * <code>PreferredLanguage</code>. Adding a preferred language can help Amazon
     * Transcribe identify the language faster than if you omit this parameter.</p>
     * <p>If you have multi-channel audio that contains different languages on each
     * channel, and you've enabled channel identification, automatic language
     * identification identifies the dominant language on each audio channel.</p>
     * <p>Note that you must include either <code>LanguageCode</code> or
     * <code>IdentifyLanguage</code> in your request. If you include both parameters,
     * your request fails.</p> <p>Streaming language identification can't be combined
     * with custom language models or redaction.</p>
     */
    inline StartStreamTranscriptionRequest& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}


    /**
     * <p>Specify two or more language codes that represent the languages you think may
     * be present in your media; including more than five is not recommended. If you're
     * unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>If you include <code>LanguageOptions</code> in your
     * request, you must also include <code>IdentifyLanguage</code>.</p> <p>For a list
     * of languages supported with Amazon Transcribe streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>  <p>You can only include one language
     * dialect per language per stream. For example, you cannot include
     * <code>en-US</code> and <code>en-AU</code> in the same request.</p> 
     */
    inline const Aws::String& GetLanguageOptions() const{ return m_languageOptions; }

    /**
     * <p>Specify two or more language codes that represent the languages you think may
     * be present in your media; including more than five is not recommended. If you're
     * unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>If you include <code>LanguageOptions</code> in your
     * request, you must also include <code>IdentifyLanguage</code>.</p> <p>For a list
     * of languages supported with Amazon Transcribe streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>  <p>You can only include one language
     * dialect per language per stream. For example, you cannot include
     * <code>en-US</code> and <code>en-AU</code> in the same request.</p> 
     */
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }

    /**
     * <p>Specify two or more language codes that represent the languages you think may
     * be present in your media; including more than five is not recommended. If you're
     * unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>If you include <code>LanguageOptions</code> in your
     * request, you must also include <code>IdentifyLanguage</code>.</p> <p>For a list
     * of languages supported with Amazon Transcribe streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>  <p>You can only include one language
     * dialect per language per stream. For example, you cannot include
     * <code>en-US</code> and <code>en-AU</code> in the same request.</p> 
     */
    inline void SetLanguageOptions(const Aws::String& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = value; }

    /**
     * <p>Specify two or more language codes that represent the languages you think may
     * be present in your media; including more than five is not recommended. If you're
     * unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>If you include <code>LanguageOptions</code> in your
     * request, you must also include <code>IdentifyLanguage</code>.</p> <p>For a list
     * of languages supported with Amazon Transcribe streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>  <p>You can only include one language
     * dialect per language per stream. For example, you cannot include
     * <code>en-US</code> and <code>en-AU</code> in the same request.</p> 
     */
    inline void SetLanguageOptions(Aws::String&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::move(value); }

    /**
     * <p>Specify two or more language codes that represent the languages you think may
     * be present in your media; including more than five is not recommended. If you're
     * unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>If you include <code>LanguageOptions</code> in your
     * request, you must also include <code>IdentifyLanguage</code>.</p> <p>For a list
     * of languages supported with Amazon Transcribe streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>  <p>You can only include one language
     * dialect per language per stream. For example, you cannot include
     * <code>en-US</code> and <code>en-AU</code> in the same request.</p> 
     */
    inline void SetLanguageOptions(const char* value) { m_languageOptionsHasBeenSet = true; m_languageOptions.assign(value); }

    /**
     * <p>Specify two or more language codes that represent the languages you think may
     * be present in your media; including more than five is not recommended. If you're
     * unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>If you include <code>LanguageOptions</code> in your
     * request, you must also include <code>IdentifyLanguage</code>.</p> <p>For a list
     * of languages supported with Amazon Transcribe streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>  <p>You can only include one language
     * dialect per language per stream. For example, you cannot include
     * <code>en-US</code> and <code>en-AU</code> in the same request.</p> 
     */
    inline StartStreamTranscriptionRequest& WithLanguageOptions(const Aws::String& value) { SetLanguageOptions(value); return *this;}

    /**
     * <p>Specify two or more language codes that represent the languages you think may
     * be present in your media; including more than five is not recommended. If you're
     * unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>If you include <code>LanguageOptions</code> in your
     * request, you must also include <code>IdentifyLanguage</code>.</p> <p>For a list
     * of languages supported with Amazon Transcribe streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>  <p>You can only include one language
     * dialect per language per stream. For example, you cannot include
     * <code>en-US</code> and <code>en-AU</code> in the same request.</p> 
     */
    inline StartStreamTranscriptionRequest& WithLanguageOptions(Aws::String&& value) { SetLanguageOptions(std::move(value)); return *this;}

    /**
     * <p>Specify two or more language codes that represent the languages you think may
     * be present in your media; including more than five is not recommended. If you're
     * unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>If you include <code>LanguageOptions</code> in your
     * request, you must also include <code>IdentifyLanguage</code>.</p> <p>For a list
     * of languages supported with Amazon Transcribe streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>  <p>You can only include one language
     * dialect per language per stream. For example, you cannot include
     * <code>en-US</code> and <code>en-AU</code> in the same request.</p> 
     */
    inline StartStreamTranscriptionRequest& WithLanguageOptions(const char* value) { SetLanguageOptions(value); return *this;}


    /**
     * <p>Specify a preferred language from the subset of languages codes you specified
     * in <code>LanguageOptions</code>.</p> <p>You can only use this parameter if
     * you've included <code>IdentifyLanguage</code> and <code>LanguageOptions</code>
     * in your request.</p>
     */
    inline const LanguageCode& GetPreferredLanguage() const{ return m_preferredLanguage; }

    /**
     * <p>Specify a preferred language from the subset of languages codes you specified
     * in <code>LanguageOptions</code>.</p> <p>You can only use this parameter if
     * you've included <code>IdentifyLanguage</code> and <code>LanguageOptions</code>
     * in your request.</p>
     */
    inline bool PreferredLanguageHasBeenSet() const { return m_preferredLanguageHasBeenSet; }

    /**
     * <p>Specify a preferred language from the subset of languages codes you specified
     * in <code>LanguageOptions</code>.</p> <p>You can only use this parameter if
     * you've included <code>IdentifyLanguage</code> and <code>LanguageOptions</code>
     * in your request.</p>
     */
    inline void SetPreferredLanguage(const LanguageCode& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = value; }

    /**
     * <p>Specify a preferred language from the subset of languages codes you specified
     * in <code>LanguageOptions</code>.</p> <p>You can only use this parameter if
     * you've included <code>IdentifyLanguage</code> and <code>LanguageOptions</code>
     * in your request.</p>
     */
    inline void SetPreferredLanguage(LanguageCode&& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = std::move(value); }

    /**
     * <p>Specify a preferred language from the subset of languages codes you specified
     * in <code>LanguageOptions</code>.</p> <p>You can only use this parameter if
     * you've included <code>IdentifyLanguage</code> and <code>LanguageOptions</code>
     * in your request.</p>
     */
    inline StartStreamTranscriptionRequest& WithPreferredLanguage(const LanguageCode& value) { SetPreferredLanguage(value); return *this;}

    /**
     * <p>Specify a preferred language from the subset of languages codes you specified
     * in <code>LanguageOptions</code>.</p> <p>You can only use this parameter if
     * you've included <code>IdentifyLanguage</code> and <code>LanguageOptions</code>
     * in your request.</p>
     */
    inline StartStreamTranscriptionRequest& WithPreferredLanguage(LanguageCode&& value) { SetPreferredLanguage(std::move(value)); return *this;}


    /**
     * <p>Specify the names of the custom vocabularies that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabularies
     * match the language identified in your media, your job fails.</p> 
     * <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * parameter instead.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline const Aws::String& GetVocabularyNames() const{ return m_vocabularyNames; }

    /**
     * <p>Specify the names of the custom vocabularies that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabularies
     * match the language identified in your media, your job fails.</p> 
     * <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * parameter instead.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline bool VocabularyNamesHasBeenSet() const { return m_vocabularyNamesHasBeenSet; }

    /**
     * <p>Specify the names of the custom vocabularies that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabularies
     * match the language identified in your media, your job fails.</p> 
     * <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * parameter instead.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline void SetVocabularyNames(const Aws::String& value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames = value; }

    /**
     * <p>Specify the names of the custom vocabularies that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabularies
     * match the language identified in your media, your job fails.</p> 
     * <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * parameter instead.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline void SetVocabularyNames(Aws::String&& value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames = std::move(value); }

    /**
     * <p>Specify the names of the custom vocabularies that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabularies
     * match the language identified in your media, your job fails.</p> 
     * <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * parameter instead.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline void SetVocabularyNames(const char* value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames.assign(value); }

    /**
     * <p>Specify the names of the custom vocabularies that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabularies
     * match the language identified in your media, your job fails.</p> 
     * <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * parameter instead.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyNames(const Aws::String& value) { SetVocabularyNames(value); return *this;}

    /**
     * <p>Specify the names of the custom vocabularies that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabularies
     * match the language identified in your media, your job fails.</p> 
     * <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * parameter instead.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyNames(Aws::String&& value) { SetVocabularyNames(std::move(value)); return *this;}

    /**
     * <p>Specify the names of the custom vocabularies that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabularies
     * match the language identified in your media, your job fails.</p> 
     * <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * parameter instead.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyNames(const char* value) { SetVocabularyNames(value); return *this;}


    /**
     * <p>Specify the names of the custom vocabulary filters that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabulary
     * filters match the language identified in your media, your job fails.</p>
     *  <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary filter with your transcription, use the
     * <code>VocabularyFilterName</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline const Aws::String& GetVocabularyFilterNames() const{ return m_vocabularyFilterNames; }

    /**
     * <p>Specify the names of the custom vocabulary filters that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabulary
     * filters match the language identified in your media, your job fails.</p>
     *  <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary filter with your transcription, use the
     * <code>VocabularyFilterName</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline bool VocabularyFilterNamesHasBeenSet() const { return m_vocabularyFilterNamesHasBeenSet; }

    /**
     * <p>Specify the names of the custom vocabulary filters that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabulary
     * filters match the language identified in your media, your job fails.</p>
     *  <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary filter with your transcription, use the
     * <code>VocabularyFilterName</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline void SetVocabularyFilterNames(const Aws::String& value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames = value; }

    /**
     * <p>Specify the names of the custom vocabulary filters that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabulary
     * filters match the language identified in your media, your job fails.</p>
     *  <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary filter with your transcription, use the
     * <code>VocabularyFilterName</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline void SetVocabularyFilterNames(Aws::String&& value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames = std::move(value); }

    /**
     * <p>Specify the names of the custom vocabulary filters that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabulary
     * filters match the language identified in your media, your job fails.</p>
     *  <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary filter with your transcription, use the
     * <code>VocabularyFilterName</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline void SetVocabularyFilterNames(const char* value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames.assign(value); }

    /**
     * <p>Specify the names of the custom vocabulary filters that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabulary
     * filters match the language identified in your media, your job fails.</p>
     *  <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary filter with your transcription, use the
     * <code>VocabularyFilterName</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterNames(const Aws::String& value) { SetVocabularyFilterNames(value); return *this;}

    /**
     * <p>Specify the names of the custom vocabulary filters that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabulary
     * filters match the language identified in your media, your job fails.</p>
     *  <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary filter with your transcription, use the
     * <code>VocabularyFilterName</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline StartStreamTranscriptionRequest& WithVocabularyFilterNames(Aws::String&& value) { SetVocabularyFilterNames(std::move(value)); return *this;}

    /**
     * <p>Specify the names of the custom vocabulary filters that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If none of the languages of the specified custom vocabulary
     * filters match the language identified in your media, your job fails.</p>
     *  <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary filter with your transcription, use the
     * <code>VocabularyFilterName</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
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
