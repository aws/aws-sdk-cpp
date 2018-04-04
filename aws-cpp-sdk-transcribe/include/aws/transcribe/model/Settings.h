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
    Settings(const Aws::Utils::Json::JsonValue& jsonValue);
    Settings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a vocabulary to use when processing the transcription job.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

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
     * <p>Determines whether the transcription job should use speaker recognition to
     * identify different speakers in the input audio. If you set the
     * <code>ShowSpeakerLabels</code> field to true, you must also set the maximum
     * number of speaker labels <code>MaxSpeakerLabels</code> field.</p>
     */
    inline bool GetShowSpeakerLabels() const{ return m_showSpeakerLabels; }

    /**
     * <p>Determines whether the transcription job should use speaker recognition to
     * identify different speakers in the input audio. If you set the
     * <code>ShowSpeakerLabels</code> field to true, you must also set the maximum
     * number of speaker labels <code>MaxSpeakerLabels</code> field.</p>
     */
    inline void SetShowSpeakerLabels(bool value) { m_showSpeakerLabelsHasBeenSet = true; m_showSpeakerLabels = value; }

    /**
     * <p>Determines whether the transcription job should use speaker recognition to
     * identify different speakers in the input audio. If you set the
     * <code>ShowSpeakerLabels</code> field to true, you must also set the maximum
     * number of speaker labels <code>MaxSpeakerLabels</code> field.</p>
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
    inline void SetMaxSpeakerLabels(int value) { m_maxSpeakerLabelsHasBeenSet = true; m_maxSpeakerLabels = value; }

    /**
     * <p>The maximum number of speakers to identify in the input audio. If there are
     * more speakers in the audio than this number, multiple speakers will be
     * identified as a single speaker. If you specify the <code>MaxSpeakerLabels</code>
     * field, you must set the <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline Settings& WithMaxSpeakerLabels(int value) { SetMaxSpeakerLabels(value); return *this;}

  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    bool m_showSpeakerLabels;
    bool m_showSpeakerLabelsHasBeenSet;

    int m_maxSpeakerLabels;
    bool m_maxSpeakerLabelsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
