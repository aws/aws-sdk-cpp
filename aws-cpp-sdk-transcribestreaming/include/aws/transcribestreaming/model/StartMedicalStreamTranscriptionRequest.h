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
#include <utility>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionRequest : public TranscribeStreamingServiceRequest
  {
  public:
    StartMedicalStreamTranscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMedicalStreamTranscription"; }

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
     * <p> Indicates the source language used in the input audio stream. For Amazon
     * Transcribe Medical, this is US English (en-US). </p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p> Indicates the source language used in the input audio stream. For Amazon
     * Transcribe Medical, this is US English (en-US). </p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p> Indicates the source language used in the input audio stream. For Amazon
     * Transcribe Medical, this is US English (en-US). </p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p> Indicates the source language used in the input audio stream. For Amazon
     * Transcribe Medical, this is US English (en-US). </p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p> Indicates the source language used in the input audio stream. For Amazon
     * Transcribe Medical, this is US English (en-US). </p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p> Indicates the source language used in the input audio stream. For Amazon
     * Transcribe Medical, this is US English (en-US). </p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate of the input audio in Hertz. Sample rates of 16000 Hz or
     * higher are accepted.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate of the input audio in Hertz. Sample rates of 16000 Hz or
     * higher are accepted.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate of the input audio in Hertz. Sample rates of 16000 Hz or
     * higher are accepted.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate of the input audio in Hertz. Sample rates of 16000 Hz or
     * higher are accepted.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


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
    inline StartMedicalStreamTranscriptionRequest& WithMediaEncoding(const MediaEncoding& value) { SetMediaEncoding(value); return *this;}

    /**
     * <p>The encoding used for the input audio.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithMediaEncoding(MediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}


    /**
     * <p>The name of the medical custom vocabulary to use when processing the
     * real-time stream.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the medical custom vocabulary to use when processing the
     * real-time stream.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the medical custom vocabulary to use when processing the
     * real-time stream.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the medical custom vocabulary to use when processing the
     * real-time stream.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the medical custom vocabulary to use when processing the
     * real-time stream.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the medical custom vocabulary to use when processing the
     * real-time stream.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the medical custom vocabulary to use when processing the
     * real-time stream.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the medical custom vocabulary to use when processing the
     * real-time stream.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The medical specialty of the clinician or provider.</p>
     */
    inline const Specialty& GetSpecialty() const{ return m_specialty; }

    /**
     * <p>The medical specialty of the clinician or provider.</p>
     */
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }

    /**
     * <p>The medical specialty of the clinician or provider.</p>
     */
    inline void SetSpecialty(const Specialty& value) { m_specialtyHasBeenSet = true; m_specialty = value; }

    /**
     * <p>The medical specialty of the clinician or provider.</p>
     */
    inline void SetSpecialty(Specialty&& value) { m_specialtyHasBeenSet = true; m_specialty = std::move(value); }

    /**
     * <p>The medical specialty of the clinician or provider.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithSpecialty(const Specialty& value) { SetSpecialty(value); return *this;}

    /**
     * <p>The medical specialty of the clinician or provider.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithSpecialty(Specialty&& value) { SetSpecialty(std::move(value)); return *this;}


    /**
     * <p>The type of input audio. Choose <code>DICTATION</code> for a provider
     * dictating patient notes. Choose <code>CONVERSATION</code> for a dialogue between
     * a patient and one or more medical professionanls.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The type of input audio. Choose <code>DICTATION</code> for a provider
     * dictating patient notes. Choose <code>CONVERSATION</code> for a dialogue between
     * a patient and one or more medical professionanls.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of input audio. Choose <code>DICTATION</code> for a provider
     * dictating patient notes. Choose <code>CONVERSATION</code> for a dialogue between
     * a patient and one or more medical professionanls.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of input audio. Choose <code>DICTATION</code> for a provider
     * dictating patient notes. Choose <code>CONVERSATION</code> for a dialogue between
     * a patient and one or more medical professionanls.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of input audio. Choose <code>DICTATION</code> for a provider
     * dictating patient notes. Choose <code>CONVERSATION</code> for a dialogue between
     * a patient and one or more medical professionanls.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The type of input audio. Choose <code>DICTATION</code> for a provider
     * dictating patient notes. Choose <code>CONVERSATION</code> for a dialogue between
     * a patient and one or more medical professionanls.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithType(Type&& value) { SetType(std::move(value)); return *this;}


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
    inline StartMedicalStreamTranscriptionRequest& WithShowSpeakerLabel(bool value) { SetShowSpeakerLabel(value); return *this;}


    /**
     * <p> Optional. An identifier for the transcription session. If you don't provide
     * a session ID, Amazon Transcribe generates one for you and returns it in the
     * response. </p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p> Optional. An identifier for the transcription session. If you don't provide
     * a session ID, Amazon Transcribe generates one for you and returns it in the
     * response. </p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p> Optional. An identifier for the transcription session. If you don't provide
     * a session ID, Amazon Transcribe generates one for you and returns it in the
     * response. </p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p> Optional. An identifier for the transcription session. If you don't provide
     * a session ID, Amazon Transcribe generates one for you and returns it in the
     * response. </p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p> Optional. An identifier for the transcription session. If you don't provide
     * a session ID, Amazon Transcribe generates one for you and returns it in the
     * response. </p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p> Optional. An identifier for the transcription session. If you don't provide
     * a session ID, Amazon Transcribe generates one for you and returns it in the
     * response. </p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p> Optional. An identifier for the transcription session. If you don't provide
     * a session ID, Amazon Transcribe generates one for you and returns it in the
     * response. </p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p> Optional. An identifier for the transcription session. If you don't provide
     * a session ID, Amazon Transcribe generates one for you and returns it in the
     * response. </p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    
    std::shared_ptr<AudioStream> GetAudioStream() const { return m_audioStream; }

    
    void SetAudioStream(const std::shared_ptr<AudioStream>& value) { m_audioStream = value; }

    
    StartMedicalStreamTranscriptionRequest& WithAudioStream(const std::shared_ptr<AudioStream>& value) { SetAudioStream(value); return *this;}


    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe Medical to process each
     * audio channel separately and then merge the transcription output of each channel
     * into a single transcription.</p> <p>Amazon Transcribe Medical also produces a
     * transcription of each item. An item includes the start time, end time, and any
     * alternative transcriptions.</p> <p>You can't set both
     * <code>ShowSpeakerLabel</code> and <code>EnableChannelIdentification</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline bool GetEnableChannelIdentification() const{ return m_enableChannelIdentification; }

    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe Medical to process each
     * audio channel separately and then merge the transcription output of each channel
     * into a single transcription.</p> <p>Amazon Transcribe Medical also produces a
     * transcription of each item. An item includes the start time, end time, and any
     * alternative transcriptions.</p> <p>You can't set both
     * <code>ShowSpeakerLabel</code> and <code>EnableChannelIdentification</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline bool EnableChannelIdentificationHasBeenSet() const { return m_enableChannelIdentificationHasBeenSet; }

    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe Medical to process each
     * audio channel separately and then merge the transcription output of each channel
     * into a single transcription.</p> <p>Amazon Transcribe Medical also produces a
     * transcription of each item. An item includes the start time, end time, and any
     * alternative transcriptions.</p> <p>You can't set both
     * <code>ShowSpeakerLabel</code> and <code>EnableChannelIdentification</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline void SetEnableChannelIdentification(bool value) { m_enableChannelIdentificationHasBeenSet = true; m_enableChannelIdentification = value; }

    /**
     * <p>When <code>true</code>, instructs Amazon Transcribe Medical to process each
     * audio channel separately and then merge the transcription output of each channel
     * into a single transcription.</p> <p>Amazon Transcribe Medical also produces a
     * transcription of each item. An item includes the start time, end time, and any
     * alternative transcriptions.</p> <p>You can't set both
     * <code>ShowSpeakerLabel</code> and <code>EnableChannelIdentification</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline StartMedicalStreamTranscriptionRequest& WithEnableChannelIdentification(bool value) { SetEnableChannelIdentification(value); return *this;}


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
    inline StartMedicalStreamTranscriptionRequest& WithNumberOfChannels(int value) { SetNumberOfChannels(value); return *this;}

  private:

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet;

    MediaEncoding m_mediaEncoding;
    bool m_mediaEncodingHasBeenSet;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    Specialty m_specialty;
    bool m_specialtyHasBeenSet;

    Type m_type;
    bool m_typeHasBeenSet;

    bool m_showSpeakerLabel;
    bool m_showSpeakerLabelHasBeenSet;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet;

    std::shared_ptr<AudioStream> m_audioStream;

    bool m_enableChannelIdentification;
    bool m_enableChannelIdentificationHasBeenSet;

    int m_numberOfChannels;
    bool m_numberOfChannelsHasBeenSet;
    Aws::Utils::Event::EventStreamDecoder m_decoder;
    StartMedicalStreamTranscriptionHandler m_handler;

  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
