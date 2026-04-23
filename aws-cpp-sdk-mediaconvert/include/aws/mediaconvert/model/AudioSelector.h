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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/AudioDefaultSelection.h>
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
  class JsonView;
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
    AudioSelector(Aws::Utils::Json::JsonView jsonValue);
    AudioSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Selects a specific language code from within an audio source, using the ISO
     * 639-2 or ISO 639-3 three-letter language code
     */
    inline const Aws::String& GetCustomLanguageCode() const{ return m_customLanguageCode; }

    /**
     * Selects a specific language code from within an audio source, using the ISO
     * 639-2 or ISO 639-3 three-letter language code
     */
    inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }

    /**
     * Selects a specific language code from within an audio source, using the ISO
     * 639-2 or ISO 639-3 three-letter language code
     */
    inline void SetCustomLanguageCode(const Aws::String& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = value; }

    /**
     * Selects a specific language code from within an audio source, using the ISO
     * 639-2 or ISO 639-3 three-letter language code
     */
    inline void SetCustomLanguageCode(Aws::String&& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = std::move(value); }

    /**
     * Selects a specific language code from within an audio source, using the ISO
     * 639-2 or ISO 639-3 three-letter language code
     */
    inline void SetCustomLanguageCode(const char* value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode.assign(value); }

    /**
     * Selects a specific language code from within an audio source, using the ISO
     * 639-2 or ISO 639-3 three-letter language code
     */
    inline AudioSelector& WithCustomLanguageCode(const Aws::String& value) { SetCustomLanguageCode(value); return *this;}

    /**
     * Selects a specific language code from within an audio source, using the ISO
     * 639-2 or ISO 639-3 three-letter language code
     */
    inline AudioSelector& WithCustomLanguageCode(Aws::String&& value) { SetCustomLanguageCode(std::move(value)); return *this;}

    /**
     * Selects a specific language code from within an audio source, using the ISO
     * 639-2 or ISO 639-3 three-letter language code
     */
    inline AudioSelector& WithCustomLanguageCode(const char* value) { SetCustomLanguageCode(value); return *this;}


    /**
     * Enable this setting on one audio selector to set it as the default for the job.
     * The service uses this default for outputs where it can't find the specified
     * input audio. If you don't set a default, those outputs have no audio.
     */
    inline const AudioDefaultSelection& GetDefaultSelection() const{ return m_defaultSelection; }

    /**
     * Enable this setting on one audio selector to set it as the default for the job.
     * The service uses this default for outputs where it can't find the specified
     * input audio. If you don't set a default, those outputs have no audio.
     */
    inline bool DefaultSelectionHasBeenSet() const { return m_defaultSelectionHasBeenSet; }

    /**
     * Enable this setting on one audio selector to set it as the default for the job.
     * The service uses this default for outputs where it can't find the specified
     * input audio. If you don't set a default, those outputs have no audio.
     */
    inline void SetDefaultSelection(const AudioDefaultSelection& value) { m_defaultSelectionHasBeenSet = true; m_defaultSelection = value; }

    /**
     * Enable this setting on one audio selector to set it as the default for the job.
     * The service uses this default for outputs where it can't find the specified
     * input audio. If you don't set a default, those outputs have no audio.
     */
    inline void SetDefaultSelection(AudioDefaultSelection&& value) { m_defaultSelectionHasBeenSet = true; m_defaultSelection = std::move(value); }

    /**
     * Enable this setting on one audio selector to set it as the default for the job.
     * The service uses this default for outputs where it can't find the specified
     * input audio. If you don't set a default, those outputs have no audio.
     */
    inline AudioSelector& WithDefaultSelection(const AudioDefaultSelection& value) { SetDefaultSelection(value); return *this;}

    /**
     * Enable this setting on one audio selector to set it as the default for the job.
     * The service uses this default for outputs where it can't find the specified
     * input audio. If you don't set a default, those outputs have no audio.
     */
    inline AudioSelector& WithDefaultSelection(AudioDefaultSelection&& value) { SetDefaultSelection(std::move(value)); return *this;}


    /**
     * Specifies audio data from an external file source.
     */
    inline const Aws::String& GetExternalAudioFileInput() const{ return m_externalAudioFileInput; }

    /**
     * Specifies audio data from an external file source.
     */
    inline bool ExternalAudioFileInputHasBeenSet() const { return m_externalAudioFileInputHasBeenSet; }

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
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

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
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }

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
    inline bool PidsHasBeenSet() const { return m_pidsHasBeenSet; }

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
     * Use this setting for input streams that contain Dolby E, to have the service
     * extract specific program data from the track. To select multiple programs,
     * create multiple selectors with the same Track and different Program numbers. In
     * the console, this setting is visible when you set Selector type to Track. Choose
     * the program number from the dropdown list. If you are sending a JSON file,
     * provide the program ID, which is part of the audio metadata. If your input file
     * has incorrect metadata, you can choose All channels instead of a program number
     * to have the service ignore the program IDs and include all the programs in the
     * track.
     */
    inline int GetProgramSelection() const{ return m_programSelection; }

    /**
     * Use this setting for input streams that contain Dolby E, to have the service
     * extract specific program data from the track. To select multiple programs,
     * create multiple selectors with the same Track and different Program numbers. In
     * the console, this setting is visible when you set Selector type to Track. Choose
     * the program number from the dropdown list. If you are sending a JSON file,
     * provide the program ID, which is part of the audio metadata. If your input file
     * has incorrect metadata, you can choose All channels instead of a program number
     * to have the service ignore the program IDs and include all the programs in the
     * track.
     */
    inline bool ProgramSelectionHasBeenSet() const { return m_programSelectionHasBeenSet; }

    /**
     * Use this setting for input streams that contain Dolby E, to have the service
     * extract specific program data from the track. To select multiple programs,
     * create multiple selectors with the same Track and different Program numbers. In
     * the console, this setting is visible when you set Selector type to Track. Choose
     * the program number from the dropdown list. If you are sending a JSON file,
     * provide the program ID, which is part of the audio metadata. If your input file
     * has incorrect metadata, you can choose All channels instead of a program number
     * to have the service ignore the program IDs and include all the programs in the
     * track.
     */
    inline void SetProgramSelection(int value) { m_programSelectionHasBeenSet = true; m_programSelection = value; }

    /**
     * Use this setting for input streams that contain Dolby E, to have the service
     * extract specific program data from the track. To select multiple programs,
     * create multiple selectors with the same Track and different Program numbers. In
     * the console, this setting is visible when you set Selector type to Track. Choose
     * the program number from the dropdown list. If you are sending a JSON file,
     * provide the program ID, which is part of the audio metadata. If your input file
     * has incorrect metadata, you can choose All channels instead of a program number
     * to have the service ignore the program IDs and include all the programs in the
     * track.
     */
    inline AudioSelector& WithProgramSelection(int value) { SetProgramSelection(value); return *this;}


    /**
     * Use these settings to reorder the audio channels of one input to match those of
     * another input. This allows you to combine the two files into a single output,
     * one after the other.
     */
    inline const RemixSettings& GetRemixSettings() const{ return m_remixSettings; }

    /**
     * Use these settings to reorder the audio channels of one input to match those of
     * another input. This allows you to combine the two files into a single output,
     * one after the other.
     */
    inline bool RemixSettingsHasBeenSet() const { return m_remixSettingsHasBeenSet; }

    /**
     * Use these settings to reorder the audio channels of one input to match those of
     * another input. This allows you to combine the two files into a single output,
     * one after the other.
     */
    inline void SetRemixSettings(const RemixSettings& value) { m_remixSettingsHasBeenSet = true; m_remixSettings = value; }

    /**
     * Use these settings to reorder the audio channels of one input to match those of
     * another input. This allows you to combine the two files into a single output,
     * one after the other.
     */
    inline void SetRemixSettings(RemixSettings&& value) { m_remixSettingsHasBeenSet = true; m_remixSettings = std::move(value); }

    /**
     * Use these settings to reorder the audio channels of one input to match those of
     * another input. This allows you to combine the two files into a single output,
     * one after the other.
     */
    inline AudioSelector& WithRemixSettings(const RemixSettings& value) { SetRemixSettings(value); return *this;}

    /**
     * Use these settings to reorder the audio channels of one input to match those of
     * another input. This allows you to combine the two files into a single output,
     * one after the other.
     */
    inline AudioSelector& WithRemixSettings(RemixSettings&& value) { SetRemixSettings(std::move(value)); return *this;}


    /**
     * Specifies the type of the audio selector.
     */
    inline const AudioSelectorType& GetSelectorType() const{ return m_selectorType; }

    /**
     * Specifies the type of the audio selector.
     */
    inline bool SelectorTypeHasBeenSet() const { return m_selectorTypeHasBeenSet; }

    /**
     * Specifies the type of the audio selector.
     */
    inline void SetSelectorType(const AudioSelectorType& value) { m_selectorTypeHasBeenSet = true; m_selectorType = value; }

    /**
     * Specifies the type of the audio selector.
     */
    inline void SetSelectorType(AudioSelectorType&& value) { m_selectorTypeHasBeenSet = true; m_selectorType = std::move(value); }

    /**
     * Specifies the type of the audio selector.
     */
    inline AudioSelector& WithSelectorType(const AudioSelectorType& value) { SetSelectorType(value); return *this;}

    /**
     * Specifies the type of the audio selector.
     */
    inline AudioSelector& WithSelectorType(AudioSelectorType&& value) { SetSelectorType(std::move(value)); return *this;}


    /**
     * Identify a track from the input audio to include in this selector by entering
     * the track index number. To include several tracks in a single audio selector,
     * specify multiple tracks as follows. Using the console, enter a comma-separated
     * list. For examle, type "1,2,3" to include tracks 1 through 3. Specifying
     * directly in your JSON job file, provide the track numbers in an array. For
     * example, "tracks": [1,2,3].
     */
    inline const Aws::Vector<int>& GetTracks() const{ return m_tracks; }

    /**
     * Identify a track from the input audio to include in this selector by entering
     * the track index number. To include several tracks in a single audio selector,
     * specify multiple tracks as follows. Using the console, enter a comma-separated
     * list. For examle, type "1,2,3" to include tracks 1 through 3. Specifying
     * directly in your JSON job file, provide the track numbers in an array. For
     * example, "tracks": [1,2,3].
     */
    inline bool TracksHasBeenSet() const { return m_tracksHasBeenSet; }

    /**
     * Identify a track from the input audio to include in this selector by entering
     * the track index number. To include several tracks in a single audio selector,
     * specify multiple tracks as follows. Using the console, enter a comma-separated
     * list. For examle, type "1,2,3" to include tracks 1 through 3. Specifying
     * directly in your JSON job file, provide the track numbers in an array. For
     * example, "tracks": [1,2,3].
     */
    inline void SetTracks(const Aws::Vector<int>& value) { m_tracksHasBeenSet = true; m_tracks = value; }

    /**
     * Identify a track from the input audio to include in this selector by entering
     * the track index number. To include several tracks in a single audio selector,
     * specify multiple tracks as follows. Using the console, enter a comma-separated
     * list. For examle, type "1,2,3" to include tracks 1 through 3. Specifying
     * directly in your JSON job file, provide the track numbers in an array. For
     * example, "tracks": [1,2,3].
     */
    inline void SetTracks(Aws::Vector<int>&& value) { m_tracksHasBeenSet = true; m_tracks = std::move(value); }

    /**
     * Identify a track from the input audio to include in this selector by entering
     * the track index number. To include several tracks in a single audio selector,
     * specify multiple tracks as follows. Using the console, enter a comma-separated
     * list. For examle, type "1,2,3" to include tracks 1 through 3. Specifying
     * directly in your JSON job file, provide the track numbers in an array. For
     * example, "tracks": [1,2,3].
     */
    inline AudioSelector& WithTracks(const Aws::Vector<int>& value) { SetTracks(value); return *this;}

    /**
     * Identify a track from the input audio to include in this selector by entering
     * the track index number. To include several tracks in a single audio selector,
     * specify multiple tracks as follows. Using the console, enter a comma-separated
     * list. For examle, type "1,2,3" to include tracks 1 through 3. Specifying
     * directly in your JSON job file, provide the track numbers in an array. For
     * example, "tracks": [1,2,3].
     */
    inline AudioSelector& WithTracks(Aws::Vector<int>&& value) { SetTracks(std::move(value)); return *this;}

    /**
     * Identify a track from the input audio to include in this selector by entering
     * the track index number. To include several tracks in a single audio selector,
     * specify multiple tracks as follows. Using the console, enter a comma-separated
     * list. For examle, type "1,2,3" to include tracks 1 through 3. Specifying
     * directly in your JSON job file, provide the track numbers in an array. For
     * example, "tracks": [1,2,3].
     */
    inline AudioSelector& AddTracks(int value) { m_tracksHasBeenSet = true; m_tracks.push_back(value); return *this; }

  private:

    Aws::String m_customLanguageCode;
    bool m_customLanguageCodeHasBeenSet;

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
