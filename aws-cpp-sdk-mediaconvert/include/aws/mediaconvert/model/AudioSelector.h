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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AudioDefaultSelection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/RemixSettings.h>
#include <aws/mediaconvert/model/AudioSelectorType.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Selector for Audio<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioSelector">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API AudioSelector
  {
  public:
    AudioSelector();
    AudioSelector(const Aws::Utils::Json::JsonValue& jsonValue);
    AudioSelector& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AudioDefaultSelection& GetDefaultSelection() const{ return m_defaultSelection; }

    
    inline void SetDefaultSelection(const AudioDefaultSelection& value) { m_defaultSelectionHasBeenSet = true; m_defaultSelection = value; }

    
    inline void SetDefaultSelection(AudioDefaultSelection&& value) { m_defaultSelectionHasBeenSet = true; m_defaultSelection = std::move(value); }

    
    inline AudioSelector& WithDefaultSelection(const AudioDefaultSelection& value) { SetDefaultSelection(value); return *this;}

    
    inline AudioSelector& WithDefaultSelection(AudioDefaultSelection&& value) { SetDefaultSelection(std::move(value)); return *this;}


    /**
     * Specifies audio data from an external file source.
     */
    inline const Aws::String& GetExternalAudioFileInput() const{ return m_externalAudioFileInput; }

    /**
     * Specifies audio data from an external file source.
     */
    inline void SetExternalAudioFileInput(const Aws::String& value) { m_externalAudioFileInputHasBeenSet = true; m_externalAudioFileInput = value; }

    /**
     * Specifies audio data from an external file source.
     */
    inline void SetExternalAudioFileInput(Aws::String&& value) { m_externalAudioFileInputHasBeenSet = true; m_externalAudioFileInput = std::move(value); }

    /**
     * Specifies audio data from an external file source.
     */
    inline void SetExternalAudioFileInput(const char* value) { m_externalAudioFileInputHasBeenSet = true; m_externalAudioFileInput.assign(value); }

    /**
     * Specifies audio data from an external file source.
     */
    inline AudioSelector& WithExternalAudioFileInput(const Aws::String& value) { SetExternalAudioFileInput(value); return *this;}

    /**
     * Specifies audio data from an external file source.
     */
    inline AudioSelector& WithExternalAudioFileInput(Aws::String&& value) { SetExternalAudioFileInput(std::move(value)); return *this;}

    /**
     * Specifies audio data from an external file source.
     */
    inline AudioSelector& WithExternalAudioFileInput(const char* value) { SetExternalAudioFileInput(value); return *this;}


    /**
     * Selects a specific language code from within an audio source.
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * Selects a specific language code from within an audio source.
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * Selects a specific language code from within an audio source.
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * Selects a specific language code from within an audio source.
     */
    inline AudioSelector& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * Selects a specific language code from within an audio source.
     */
    inline AudioSelector& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * Specifies a time delta in milliseconds to offset the audio from the input video.
     */
    inline int GetOffset() const{ return m_offset; }

    /**
     * Specifies a time delta in milliseconds to offset the audio from the input video.
     */
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }

    /**
     * Specifies a time delta in milliseconds to offset the audio from the input video.
     */
    inline AudioSelector& WithOffset(int value) { SetOffset(value); return *this;}


    /**
     * Selects a specific PID from within an audio source (e.g. 257 selects PID 0x101).
     */
    inline const Aws::Vector<int>& GetPids() const{ return m_pids; }

    /**
     * Selects a specific PID from within an audio source (e.g. 257 selects PID 0x101).
     */
    inline void SetPids(const Aws::Vector<int>& value) { m_pidsHasBeenSet = true; m_pids = value; }

    /**
     * Selects a specific PID from within an audio source (e.g. 257 selects PID 0x101).
     */
    inline void SetPids(Aws::Vector<int>&& value) { m_pidsHasBeenSet = true; m_pids = std::move(value); }

    /**
     * Selects a specific PID from within an audio source (e.g. 257 selects PID 0x101).
     */
    inline AudioSelector& WithPids(const Aws::Vector<int>& value) { SetPids(value); return *this;}

    /**
     * Selects a specific PID from within an audio source (e.g. 257 selects PID 0x101).
     */
    inline AudioSelector& WithPids(Aws::Vector<int>&& value) { SetPids(std::move(value)); return *this;}

    /**
     * Selects a specific PID from within an audio source (e.g. 257 selects PID 0x101).
     */
    inline AudioSelector& AddPids(int value) { m_pidsHasBeenSet = true; m_pids.push_back(value); return *this; }


    /**
     * Applies only when input streams contain Dolby E. Enter the program ID (according
     * to the metadata in the audio) of the Dolby E program to extract from the
     * specified track. One program extracted per audio selector. To select multiple
     * programs, create multiple selectors with the same Track and different Program
     * numbers. "All channels" means to ignore the program IDs and include all the
     * channels in this selector; useful if metadata is known to be incorrect.
     */
    inline int GetProgramSelection() const{ return m_programSelection; }

    /**
     * Applies only when input streams contain Dolby E. Enter the program ID (according
     * to the metadata in the audio) of the Dolby E program to extract from the
     * specified track. One program extracted per audio selector. To select multiple
     * programs, create multiple selectors with the same Track and different Program
     * numbers. "All channels" means to ignore the program IDs and include all the
     * channels in this selector; useful if metadata is known to be incorrect.
     */
    inline void SetProgramSelection(int value) { m_programSelectionHasBeenSet = true; m_programSelection = value; }

    /**
     * Applies only when input streams contain Dolby E. Enter the program ID (according
     * to the metadata in the audio) of the Dolby E program to extract from the
     * specified track. One program extracted per audio selector. To select multiple
     * programs, create multiple selectors with the same Track and different Program
     * numbers. "All channels" means to ignore the program IDs and include all the
     * channels in this selector; useful if metadata is known to be incorrect.
     */
    inline AudioSelector& WithProgramSelection(int value) { SetProgramSelection(value); return *this;}


    /**
     * Advanced audio remixing settings.
     */
    inline const RemixSettings& GetRemixSettings() const{ return m_remixSettings; }

    /**
     * Advanced audio remixing settings.
     */
    inline void SetRemixSettings(const RemixSettings& value) { m_remixSettingsHasBeenSet = true; m_remixSettings = value; }

    /**
     * Advanced audio remixing settings.
     */
    inline void SetRemixSettings(RemixSettings&& value) { m_remixSettingsHasBeenSet = true; m_remixSettings = std::move(value); }

    /**
     * Advanced audio remixing settings.
     */
    inline AudioSelector& WithRemixSettings(const RemixSettings& value) { SetRemixSettings(value); return *this;}

    /**
     * Advanced audio remixing settings.
     */
    inline AudioSelector& WithRemixSettings(RemixSettings&& value) { SetRemixSettings(std::move(value)); return *this;}


    
    inline const AudioSelectorType& GetSelectorType() const{ return m_selectorType; }

    
    inline void SetSelectorType(const AudioSelectorType& value) { m_selectorTypeHasBeenSet = true; m_selectorType = value; }

    
    inline void SetSelectorType(AudioSelectorType&& value) { m_selectorTypeHasBeenSet = true; m_selectorType = std::move(value); }

    
    inline AudioSelector& WithSelectorType(const AudioSelectorType& value) { SetSelectorType(value); return *this;}

    
    inline AudioSelector& WithSelectorType(AudioSelectorType&& value) { SetSelectorType(std::move(value)); return *this;}


    /**
     * Identify the channel to include in this selector by entering the 1-based track
     * index.  To combine several tracks, enter a comma-separated list, e.g. "1,2,3"
     * for tracks 1-3.
     */
    inline const Aws::Vector<int>& GetTracks() const{ return m_tracks; }

    /**
     * Identify the channel to include in this selector by entering the 1-based track
     * index.  To combine several tracks, enter a comma-separated list, e.g. "1,2,3"
     * for tracks 1-3.
     */
    inline void SetTracks(const Aws::Vector<int>& value) { m_tracksHasBeenSet = true; m_tracks = value; }

    /**
     * Identify the channel to include in this selector by entering the 1-based track
     * index.  To combine several tracks, enter a comma-separated list, e.g. "1,2,3"
     * for tracks 1-3.
     */
    inline void SetTracks(Aws::Vector<int>&& value) { m_tracksHasBeenSet = true; m_tracks = std::move(value); }

    /**
     * Identify the channel to include in this selector by entering the 1-based track
     * index.  To combine several tracks, enter a comma-separated list, e.g. "1,2,3"
     * for tracks 1-3.
     */
    inline AudioSelector& WithTracks(const Aws::Vector<int>& value) { SetTracks(value); return *this;}

    /**
     * Identify the channel to include in this selector by entering the 1-based track
     * index.  To combine several tracks, enter a comma-separated list, e.g. "1,2,3"
     * for tracks 1-3.
     */
    inline AudioSelector& WithTracks(Aws::Vector<int>&& value) { SetTracks(std::move(value)); return *this;}

    /**
     * Identify the channel to include in this selector by entering the 1-based track
     * index.  To combine several tracks, enter a comma-separated list, e.g. "1,2,3"
     * for tracks 1-3.
     */
    inline AudioSelector& AddTracks(int value) { m_tracksHasBeenSet = true; m_tracks.push_back(value); return *this; }

  private:

    AudioDefaultSelection m_defaultSelection;
    bool m_defaultSelectionHasBeenSet;

    Aws::String m_externalAudioFileInput;
    bool m_externalAudioFileInputHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    int m_offset;
    bool m_offsetHasBeenSet;

    Aws::Vector<int> m_pids;
    bool m_pidsHasBeenSet;

    int m_programSelection;
    bool m_programSelectionHasBeenSet;

    RemixSettings m_remixSettings;
    bool m_remixSettingsHasBeenSet;

    AudioSelectorType m_selectorType;
    bool m_selectorTypeHasBeenSet;

    Aws::Vector<int> m_tracks;
    bool m_tracksHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
