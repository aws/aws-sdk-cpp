/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceRequest.h>
#include <aws/transcribestreaming/model/StartMedicalStreamTranscriptionHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <memory>
#include <aws/transcribestreaming/model/LanguageCode.h>
#include <aws/transcribestreaming/model/MediaEncoding.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/Specialty.h>
#include <aws/transcribestreaming/model/Type.h>
#include <aws/transcribestreaming/model/AudioStream.h>
#include <aws/transcribestreaming/model/MedicalContentIdentificationType.h>
#include <utility>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   */
  class StartMedicalStreamTranscriptionRequest : public TranscribeStreamingServiceRequest
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMedicalStreamTranscription"; }

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
    inline const StartMedicalStreamTranscriptionHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const StartMedicalStreamTranscriptionHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline StartMedicalStreamTranscriptionRequest& WithEventStreamHandler(const StartMedicalStreamTranscriptionHandler& value) { SetEventStreamHandler(value); return *this; }


    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p>  <p>Amazon Transcribe Medical only supports US English
     * (<code>en-US</code>).</p> 
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p>  <p>Amazon Transcribe Medical only supports US English
     * (<code>en-US</code>).</p> 
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p>  <p>Amazon Transcribe Medical only supports US English
     * (<code>en-US</code>).</p> 
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p>  <p>Amazon Transcribe Medical only supports US English
     * (<code>en-US</code>).</p> 
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p>  <p>Amazon Transcribe Medical only supports US English
     * (<code>en-US</code>).</p> 
     */
    inline StartMedicalStreamTranscriptionRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p>  <p>Amazon Transcribe Medical only supports US English
     * (<code>en-US</code>).</p> 
     */
    inline StartMedicalStreamTranscriptionRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate of the input audio (in hertz). Amazon Transcribe Medical
     * supports a range from 16,000 Hz to 48,000 Hz. Note that the sample rate you
     * specify must match that of your audio.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate of the input audio (in hertz). Amazon Transcribe Medical
     * supports a range from 16,000 Hz to 48,000 Hz. Note that the sample rate you
     * specify must match that of your audio.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate of the input audio (in hertz). Amazon Transcribe Medical
     * supports a range from 16,000 Hz to 48,000 Hz. Note that the sample rate you
     * specify must match that of your audio.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate of the input audio (in hertz). Amazon Transcribe Medical
     * supports a range from 16,000 Hz to 48,000 Hz. Note that the sample rate you
     * specify must match that of your audio.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>Specify the encoding used for the input audio. Supported formats are:</p>
     * <ul> <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p>
     * </li> <li> <p>PCM (only signed 16-bit little-endian audio formats, which does
     * not include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline const MediaEncoding& GetMediaEncoding() const{ return m_mediaEncoding; }

    /**
     * <p>Specify the encoding used for the input audio. Supported formats are:</p>
     * <ul> <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p>
     * </li> <li> <p>PCM (only signed 16-bit little-endian audio formats, which does
     * not include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }

    /**
     * <p>Specify the encoding used for the input audio. Supported formats are:</p>
     * <ul> <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p>
     * </li> <li> <p>PCM (only signed 16-bit little-endian audio formats, which does
     * not include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline void SetMediaEncoding(const MediaEncoding& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }

    /**
     * <p>Specify the encoding used for the input audio. Supported formats are:</p>
     * <ul> <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p>
     * </li> <li> <p>PCM (only signed 16-bit little-endian audio formats, which does
     * not include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline void SetMediaEncoding(MediaEncoding&& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = std::move(value); }

    /**
     * <p>Specify the encoding used for the input audio. Supported formats are:</p>
     * <ul> <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p>
     * </li> <li> <p>PCM (only signed 16-bit little-endian audio formats, which does
     * not include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithMediaEncoding(const MediaEncoding& value) { SetMediaEncoding(value); return *this;}

    /**
     * <p>Specify the encoding used for the input audio. Supported formats are:</p>
     * <ul> <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p>
     * </li> <li> <p>PCM (only signed 16-bit little-endian audio formats, which does
     * not include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithMediaEncoding(MediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}


    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>Specify the medical specialty contained in your audio.</p>
     */
    inline const Specialty& GetSpecialty() const{ return m_specialty; }

    /**
     * <p>Specify the medical specialty contained in your audio.</p>
     */
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }

    /**
     * <p>Specify the medical specialty contained in your audio.</p>
     */
    inline void SetSpecialty(const Specialty& value) { m_specialtyHasBeenSet = true; m_specialty = value; }

    /**
     * <p>Specify the medical specialty contained in your audio.</p>
     */
    inline void SetSpecialty(Specialty&& value) { m_specialtyHasBeenSet = true; m_specialty = std::move(value); }

    /**
     * <p>Specify the medical specialty contained in your audio.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithSpecialty(const Specialty& value) { SetSpecialty(value); return *this;}

    /**
     * <p>Specify the medical specialty contained in your audio.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithSpecialty(Specialty&& value) { SetSpecialty(std::move(value)); return *this;}


    /**
     * <p>Specify the type of input audio. For example, choose <code>DICTATION</code>
     * for a provider dictating patient notes and <code>CONVERSATION</code> for a
     * dialogue between a patient and a medical professional.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>Specify the type of input audio. For example, choose <code>DICTATION</code>
     * for a provider dictating patient notes and <code>CONVERSATION</code> for a
     * dialogue between a patient and a medical professional.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specify the type of input audio. For example, choose <code>DICTATION</code>
     * for a provider dictating patient notes and <code>CONVERSATION</code> for a
     * dialogue between a patient and a medical professional.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specify the type of input audio. For example, choose <code>DICTATION</code>
     * for a provider dictating patient notes and <code>CONVERSATION</code> for a
     * dialogue between a patient and a medical professional.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specify the type of input audio. For example, choose <code>DICTATION</code>
     * for a provider dictating patient notes and <code>CONVERSATION</code> for a
     * dialogue between a patient and a medical professional.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>Specify the type of input audio. For example, choose <code>DICTATION</code>
     * for a provider dictating patient notes and <code>CONVERSATION</code> for a
     * dialogue between a patient and a medical professional.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithType(Type&& value) { SetType(std::move(value)); return *this;}


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
    inline StartMedicalStreamTranscriptionRequest& WithShowSpeakerLabel(bool value) { SetShowSpeakerLabel(value); return *this;}


    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe Medical generates an ID and returns
     * it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe Medical generates an ID and returns
     * it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe Medical generates an ID and returns
     * it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe Medical generates an ID and returns
     * it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe Medical generates an ID and returns
     * it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe Medical generates an ID and returns
     * it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe Medical generates an ID and returns
     * it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe Medical generates an ID and returns
     * it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    
    AWS_TRANSCRIBESTREAMINGSERVICE_API std::shared_ptr<AudioStream> GetAudioStream() const { return m_audioStream; }

    
    AWS_TRANSCRIBESTREAMINGSERVICE_API void SetAudioStream(const std::shared_ptr<AudioStream>& value) { m_audioStream = value; }

    
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionRequest& WithAudioStream(const std::shared_ptr<AudioStream>& value) { SetAudioStream(value); return *this;}


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
    inline StartMedicalStreamTranscriptionRequest& WithEnableChannelIdentification(bool value) { SetEnableChannelIdentification(value); return *this;}


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
    inline StartMedicalStreamTranscriptionRequest& WithNumberOfChannels(int value) { SetNumberOfChannels(value); return *this;}


    /**
     * <p>Labels all personal health information (PHI) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PHI
     * is flagged upon complete transcription of an audio segment.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline const MedicalContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Labels all personal health information (PHI) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PHI
     * is flagged upon complete transcription of an audio segment.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Labels all personal health information (PHI) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PHI
     * is flagged upon complete transcription of an audio segment.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline void SetContentIdentificationType(const MedicalContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Labels all personal health information (PHI) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PHI
     * is flagged upon complete transcription of an audio segment.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline void SetContentIdentificationType(MedicalContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Labels all personal health information (PHI) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PHI
     * is flagged upon complete transcription of an audio segment.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithContentIdentificationType(const MedicalContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Labels all personal health information (PHI) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PHI
     * is flagged upon complete transcription of an audio segment.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithContentIdentificationType(MedicalContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}

  private:

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaEncoding m_mediaEncoding;
    bool m_mediaEncodingHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Specialty m_specialty;
    bool m_specialtyHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    bool m_showSpeakerLabel;
    bool m_showSpeakerLabelHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    std::shared_ptr<AudioStream> m_audioStream;

    bool m_enableChannelIdentification;
    bool m_enableChannelIdentificationHasBeenSet = false;

    int m_numberOfChannels;
    bool m_numberOfChannelsHasBeenSet = false;

    MedicalContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;
    StartMedicalStreamTranscriptionHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
