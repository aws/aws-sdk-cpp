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
   * <p>Provides optional settings for the <code>StartTranscriptionJob</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Settings">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API Settings
  {
  public:
    Settings();
    Settings(Aws::Utils::Json::JsonView jsonValue);
    Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a vocabulary to use when processing the transcription job.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of a vocabulary to use when processing the transcription job.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of a vocabulary to use when processing the transcription job.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of a vocabulary to use when processing the transcription job.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of a vocabulary to use when processing the transcription job.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of a vocabulary to use when processing the transcription job.</p>
     */
    inline Settings& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of a vocabulary to use when processing the transcription job.</p>
     */
    inline Settings& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of a vocabulary to use when processing the transcription job.</p>
     */
    inline Settings& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>Determines whether the transcription job uses speaker recognition to identify
     * different speakers in the input audio. Speaker recognition labels individual
     * speakers in the audio file. If you set the <code>ShowSpeakerLabels</code> field
     * to true, you must also set the maximum number of speaker labels
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
     * to true, you must also set the maximum number of speaker labels
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
     * to true, you must also set the maximum number of speaker labels
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
     * to true, you must also set the maximum number of speaker labels
     * <code>MaxSpeakerLabels</code> field.</p> <p>You can't set both
     * <code>ShowSpeakerLabels</code> and <code>ChannelIdentification</code> in the
     * same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline Settings& WithShowSpeakerLabels(bool value) { SetShowSpeakerLabels(value); return *this;}


    /**
     * <p>The maximum number of speakers to identify in the input audio. If there are
     * more speakers in the audio than this number, multiple speakers will be
     * identified as a single speaker. If you specify the <code>MaxSpeakerLabels</code>
     * field, you must set the <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline int GetMaxSpeakerLabels() const{ return m_maxSpeakerLabels; }

    /**
     * <p>The maximum number of speakers to identify in the input audio. If there are
     * more speakers in the audio than this number, multiple speakers will be
     * identified as a single speaker. If you specify the <code>MaxSpeakerLabels</code>
     * field, you must set the <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline bool MaxSpeakerLabelsHasBeenSet() const { return m_maxSpeakerLabelsHasBeenSet; }

    /**
     * <p>The maximum number of speakers to identify in the input audio. If there are
     * more speakers in the audio than this number, multiple speakers will be
     * identified as a single speaker. If you specify the <code>MaxSpeakerLabels</code>
     * field, you must set the <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline void SetMaxSpeakerLabels(int value) { m_maxSpeakerLabelsHasBeenSet = true; m_maxSpeakerLabels = value; }

    /**
     * <p>The maximum number of speakers to identify in the input audio. If there are
     * more speakers in the audio than this number, multiple speakers will be
     * identified as a single speaker. If you specify the <code>MaxSpeakerLabels</code>
     * field, you must set the <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline Settings& WithMaxSpeakerLabels(int value) { SetMaxSpeakerLabels(value); return *this;}


    /**
     * <p>Instructs Amazon Transcribe to process each audio channel separately and then
     * merge the transcription output of each channel into a single transcription. </p>
     * <p>Amazon Transcribe also produces a transcription of each item detected on an
     * audio channel, including the start time and end time of the item and alternative
     * transcriptions of the item including the confidence that Amazon Transcribe has
     * in the transcription.</p> <p>You can't set both <code>ShowSpeakerLabels</code>
     * and <code>ChannelIdentification</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p>
     */
    inline bool GetChannelIdentification() const{ return m_channelIdentification; }

    /**
     * <p>Instructs Amazon Transcribe to process each audio channel separately and then
     * merge the transcription output of each channel into a single transcription. </p>
     * <p>Amazon Transcribe also produces a transcription of each item detected on an
     * audio channel, including the start time and end time of the item and alternative
     * transcriptions of the item including the confidence that Amazon Transcribe has
     * in the transcription.</p> <p>You can't set both <code>ShowSpeakerLabels</code>
     * and <code>ChannelIdentification</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p>
     */
    inline bool ChannelIdentificationHasBeenSet() const { return m_channelIdentificationHasBeenSet; }

    /**
     * <p>Instructs Amazon Transcribe to process each audio channel separately and then
     * merge the transcription output of each channel into a single transcription. </p>
     * <p>Amazon Transcribe also produces a transcription of each item detected on an
     * audio channel, including the start time and end time of the item and alternative
     * transcriptions of the item including the confidence that Amazon Transcribe has
     * in the transcription.</p> <p>You can't set both <code>ShowSpeakerLabels</code>
     * and <code>ChannelIdentification</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p>
     */
    inline void SetChannelIdentification(bool value) { m_channelIdentificationHasBeenSet = true; m_channelIdentification = value; }

    /**
     * <p>Instructs Amazon Transcribe to process each audio channel separately and then
     * merge the transcription output of each channel into a single transcription. </p>
     * <p>Amazon Transcribe also produces a transcription of each item detected on an
     * audio channel, including the start time and end time of the item and alternative
     * transcriptions of the item including the confidence that Amazon Transcribe has
     * in the transcription.</p> <p>You can't set both <code>ShowSpeakerLabels</code>
     * and <code>ChannelIdentification</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p>
     */
    inline Settings& WithChannelIdentification(bool value) { SetChannelIdentification(value); return *this;}

  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    bool m_showSpeakerLabels;
    bool m_showSpeakerLabelsHasBeenSet;

    int m_maxSpeakerLabels;
    bool m_maxSpeakerLabelsHasBeenSet;

    bool m_channelIdentification;
    bool m_channelIdentificationHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
