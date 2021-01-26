/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Optional settings for the <a>StartMedicalTranscriptionJob</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalTranscriptionSetting">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API MedicalTranscriptionSetting
  {
  public:
    MedicalTranscriptionSetting();
    MedicalTranscriptionSetting(Aws::Utils::Json::JsonView jsonValue);
    MedicalTranscriptionSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether the transcription job uses speaker recognition to identify
     * different speakers in the input audio. Speaker recognition labels individual
     * speakers in the audio file. If you set the <code>ShowSpeakerLabels</code> field
     * to true, you must also set the maximum number of speaker labels in the
     * <code>MaxSpeakerLabels</code> field.</p> <p>You can't set both
     * <code>ShowSpeakerLabels</code> and <code>ChannelIdentification</code> in the
     * same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline bool GetShowSpeakerLabels() const{ return m_showSpeakerLabels; }

    /**
     * <p>Determines whether the transcription job uses speaker recognition to identify
     * different speakers in the input audio. Speaker recognition labels individual
     * speakers in the audio file. If you set the <code>ShowSpeakerLabels</code> field
     * to true, you must also set the maximum number of speaker labels in the
     * <code>MaxSpeakerLabels</code> field.</p> <p>You can't set both
     * <code>ShowSpeakerLabels</code> and <code>ChannelIdentification</code> in the
     * same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline bool ShowSpeakerLabelsHasBeenSet() const { return m_showSpeakerLabelsHasBeenSet; }

    /**
     * <p>Determines whether the transcription job uses speaker recognition to identify
     * different speakers in the input audio. Speaker recognition labels individual
     * speakers in the audio file. If you set the <code>ShowSpeakerLabels</code> field
     * to true, you must also set the maximum number of speaker labels in the
     * <code>MaxSpeakerLabels</code> field.</p> <p>You can't set both
     * <code>ShowSpeakerLabels</code> and <code>ChannelIdentification</code> in the
     * same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline void SetShowSpeakerLabels(bool value) { m_showSpeakerLabelsHasBeenSet = true; m_showSpeakerLabels = value; }

    /**
     * <p>Determines whether the transcription job uses speaker recognition to identify
     * different speakers in the input audio. Speaker recognition labels individual
     * speakers in the audio file. If you set the <code>ShowSpeakerLabels</code> field
     * to true, you must also set the maximum number of speaker labels in the
     * <code>MaxSpeakerLabels</code> field.</p> <p>You can't set both
     * <code>ShowSpeakerLabels</code> and <code>ChannelIdentification</code> in the
     * same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline MedicalTranscriptionSetting& WithShowSpeakerLabels(bool value) { SetShowSpeakerLabels(value); return *this;}


    /**
     * <p>The maximum number of speakers to identify in the input audio. If there are
     * more speakers in the audio than this number, multiple speakers are identified as
     * a single speaker. If you specify the <code>MaxSpeakerLabels</code> field, you
     * must set the <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline int GetMaxSpeakerLabels() const{ return m_maxSpeakerLabels; }

    /**
     * <p>The maximum number of speakers to identify in the input audio. If there are
     * more speakers in the audio than this number, multiple speakers are identified as
     * a single speaker. If you specify the <code>MaxSpeakerLabels</code> field, you
     * must set the <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline bool MaxSpeakerLabelsHasBeenSet() const { return m_maxSpeakerLabelsHasBeenSet; }

    /**
     * <p>The maximum number of speakers to identify in the input audio. If there are
     * more speakers in the audio than this number, multiple speakers are identified as
     * a single speaker. If you specify the <code>MaxSpeakerLabels</code> field, you
     * must set the <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline void SetMaxSpeakerLabels(int value) { m_maxSpeakerLabelsHasBeenSet = true; m_maxSpeakerLabels = value; }

    /**
     * <p>The maximum number of speakers to identify in the input audio. If there are
     * more speakers in the audio than this number, multiple speakers are identified as
     * a single speaker. If you specify the <code>MaxSpeakerLabels</code> field, you
     * must set the <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline MedicalTranscriptionSetting& WithMaxSpeakerLabels(int value) { SetMaxSpeakerLabels(value); return *this;}


    /**
     * <p>Instructs Amazon Transcribe Medical to process each audio channel separately
     * and then merge the transcription output of each channel into a single
     * transcription.</p> <p>Amazon Transcribe Medical also produces a transcription of
     * each item detected on an audio channel, including the start time and end time of
     * the item and alternative transcriptions of item. The alternative transcriptions
     * also come with confidence scores provided by Amazon Transcribe Medical.</p>
     * <p>You can't set both <code>ShowSpeakerLabels</code> and
     * <code>ChannelIdentification</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code> </p>
     */
    inline bool GetChannelIdentification() const{ return m_channelIdentification; }

    /**
     * <p>Instructs Amazon Transcribe Medical to process each audio channel separately
     * and then merge the transcription output of each channel into a single
     * transcription.</p> <p>Amazon Transcribe Medical also produces a transcription of
     * each item detected on an audio channel, including the start time and end time of
     * the item and alternative transcriptions of item. The alternative transcriptions
     * also come with confidence scores provided by Amazon Transcribe Medical.</p>
     * <p>You can't set both <code>ShowSpeakerLabels</code> and
     * <code>ChannelIdentification</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code> </p>
     */
    inline bool ChannelIdentificationHasBeenSet() const { return m_channelIdentificationHasBeenSet; }

    /**
     * <p>Instructs Amazon Transcribe Medical to process each audio channel separately
     * and then merge the transcription output of each channel into a single
     * transcription.</p> <p>Amazon Transcribe Medical also produces a transcription of
     * each item detected on an audio channel, including the start time and end time of
     * the item and alternative transcriptions of item. The alternative transcriptions
     * also come with confidence scores provided by Amazon Transcribe Medical.</p>
     * <p>You can't set both <code>ShowSpeakerLabels</code> and
     * <code>ChannelIdentification</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code> </p>
     */
    inline void SetChannelIdentification(bool value) { m_channelIdentificationHasBeenSet = true; m_channelIdentification = value; }

    /**
     * <p>Instructs Amazon Transcribe Medical to process each audio channel separately
     * and then merge the transcription output of each channel into a single
     * transcription.</p> <p>Amazon Transcribe Medical also produces a transcription of
     * each item detected on an audio channel, including the start time and end time of
     * the item and alternative transcriptions of item. The alternative transcriptions
     * also come with confidence scores provided by Amazon Transcribe Medical.</p>
     * <p>You can't set both <code>ShowSpeakerLabels</code> and
     * <code>ChannelIdentification</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code> </p>
     */
    inline MedicalTranscriptionSetting& WithChannelIdentification(bool value) { SetChannelIdentification(value); return *this;}


    /**
     * <p>Determines whether alternative transcripts are generated along with the
     * transcript that has the highest confidence. If you set
     * <code>ShowAlternatives</code> field to true, you must also set the maximum
     * number of alternatives to return in the <code>MaxAlternatives</code> field.</p>
     */
    inline bool GetShowAlternatives() const{ return m_showAlternatives; }

    /**
     * <p>Determines whether alternative transcripts are generated along with the
     * transcript that has the highest confidence. If you set
     * <code>ShowAlternatives</code> field to true, you must also set the maximum
     * number of alternatives to return in the <code>MaxAlternatives</code> field.</p>
     */
    inline bool ShowAlternativesHasBeenSet() const { return m_showAlternativesHasBeenSet; }

    /**
     * <p>Determines whether alternative transcripts are generated along with the
     * transcript that has the highest confidence. If you set
     * <code>ShowAlternatives</code> field to true, you must also set the maximum
     * number of alternatives to return in the <code>MaxAlternatives</code> field.</p>
     */
    inline void SetShowAlternatives(bool value) { m_showAlternativesHasBeenSet = true; m_showAlternatives = value; }

    /**
     * <p>Determines whether alternative transcripts are generated along with the
     * transcript that has the highest confidence. If you set
     * <code>ShowAlternatives</code> field to true, you must also set the maximum
     * number of alternatives to return in the <code>MaxAlternatives</code> field.</p>
     */
    inline MedicalTranscriptionSetting& WithShowAlternatives(bool value) { SetShowAlternatives(value); return *this;}


    /**
     * <p>The maximum number of alternatives that you tell the service to return. If
     * you specify the <code>MaxAlternatives</code> field, you must set the
     * <code>ShowAlternatives</code> field to true.</p>
     */
    inline int GetMaxAlternatives() const{ return m_maxAlternatives; }

    /**
     * <p>The maximum number of alternatives that you tell the service to return. If
     * you specify the <code>MaxAlternatives</code> field, you must set the
     * <code>ShowAlternatives</code> field to true.</p>
     */
    inline bool MaxAlternativesHasBeenSet() const { return m_maxAlternativesHasBeenSet; }

    /**
     * <p>The maximum number of alternatives that you tell the service to return. If
     * you specify the <code>MaxAlternatives</code> field, you must set the
     * <code>ShowAlternatives</code> field to true.</p>
     */
    inline void SetMaxAlternatives(int value) { m_maxAlternativesHasBeenSet = true; m_maxAlternatives = value; }

    /**
     * <p>The maximum number of alternatives that you tell the service to return. If
     * you specify the <code>MaxAlternatives</code> field, you must set the
     * <code>ShowAlternatives</code> field to true.</p>
     */
    inline MedicalTranscriptionSetting& WithMaxAlternatives(int value) { SetMaxAlternatives(value); return *this;}


    /**
     * <p>The name of the vocabulary to use when processing a medical transcription
     * job.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary to use when processing a medical transcription
     * job.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary to use when processing a medical transcription
     * job.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary to use when processing a medical transcription
     * job.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary to use when processing a medical transcription
     * job.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary to use when processing a medical transcription
     * job.</p>
     */
    inline MedicalTranscriptionSetting& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary to use when processing a medical transcription
     * job.</p>
     */
    inline MedicalTranscriptionSetting& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary to use when processing a medical transcription
     * job.</p>
     */
    inline MedicalTranscriptionSetting& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}

  private:

    bool m_showSpeakerLabels;
    bool m_showSpeakerLabelsHasBeenSet;

    int m_maxSpeakerLabels;
    bool m_maxSpeakerLabelsHasBeenSet;

    bool m_channelIdentification;
    bool m_channelIdentificationHasBeenSet;

    bool m_showAlternatives;
    bool m_showAlternativesHasBeenSet;

    int m_maxAlternatives;
    bool m_maxAlternativesHasBeenSet;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
