/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioLanguageSelection.h>
#include <aws/medialive/model/AudioPidSelection.h>
#include <aws/medialive/model/AudioTrackSelection.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Audio Selector Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioSelectorSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API AudioSelectorSettings
  {
  public:
    AudioSelectorSettings();
    AudioSelectorSettings(Aws::Utils::Json::JsonView jsonValue);
    AudioSelectorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AudioLanguageSelection& GetAudioLanguageSelection() const{ return m_audioLanguageSelection; }

    
    inline bool AudioLanguageSelectionHasBeenSet() const { return m_audioLanguageSelectionHasBeenSet; }

    
    inline void SetAudioLanguageSelection(const AudioLanguageSelection& value) { m_audioLanguageSelectionHasBeenSet = true; m_audioLanguageSelection = value; }

    
    inline void SetAudioLanguageSelection(AudioLanguageSelection&& value) { m_audioLanguageSelectionHasBeenSet = true; m_audioLanguageSelection = std::move(value); }

    
    inline AudioSelectorSettings& WithAudioLanguageSelection(const AudioLanguageSelection& value) { SetAudioLanguageSelection(value); return *this;}

    
    inline AudioSelectorSettings& WithAudioLanguageSelection(AudioLanguageSelection&& value) { SetAudioLanguageSelection(std::move(value)); return *this;}


    
    inline const AudioPidSelection& GetAudioPidSelection() const{ return m_audioPidSelection; }

    
    inline bool AudioPidSelectionHasBeenSet() const { return m_audioPidSelectionHasBeenSet; }

    
    inline void SetAudioPidSelection(const AudioPidSelection& value) { m_audioPidSelectionHasBeenSet = true; m_audioPidSelection = value; }

    
    inline void SetAudioPidSelection(AudioPidSelection&& value) { m_audioPidSelectionHasBeenSet = true; m_audioPidSelection = std::move(value); }

    
    inline AudioSelectorSettings& WithAudioPidSelection(const AudioPidSelection& value) { SetAudioPidSelection(value); return *this;}

    
    inline AudioSelectorSettings& WithAudioPidSelection(AudioPidSelection&& value) { SetAudioPidSelection(std::move(value)); return *this;}


    
    inline const AudioTrackSelection& GetAudioTrackSelection() const{ return m_audioTrackSelection; }

    
    inline bool AudioTrackSelectionHasBeenSet() const { return m_audioTrackSelectionHasBeenSet; }

    
    inline void SetAudioTrackSelection(const AudioTrackSelection& value) { m_audioTrackSelectionHasBeenSet = true; m_audioTrackSelection = value; }

    
    inline void SetAudioTrackSelection(AudioTrackSelection&& value) { m_audioTrackSelectionHasBeenSet = true; m_audioTrackSelection = std::move(value); }

    
    inline AudioSelectorSettings& WithAudioTrackSelection(const AudioTrackSelection& value) { SetAudioTrackSelection(value); return *this;}

    
    inline AudioSelectorSettings& WithAudioTrackSelection(AudioTrackSelection&& value) { SetAudioTrackSelection(std::move(value)); return *this;}

  private:

    AudioLanguageSelection m_audioLanguageSelection;
    bool m_audioLanguageSelectionHasBeenSet;

    AudioPidSelection m_audioPidSelection;
    bool m_audioPidSelectionHasBeenSet;

    AudioTrackSelection m_audioTrackSelection;
    bool m_audioTrackSelectionHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
