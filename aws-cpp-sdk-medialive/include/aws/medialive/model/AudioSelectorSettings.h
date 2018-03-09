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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioLanguageSelection.h>
#include <aws/medialive/model/AudioPidSelection.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for AudioSelectorSettings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioSelectorSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API AudioSelectorSettings
  {
  public:
    AudioSelectorSettings();
    AudioSelectorSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    AudioSelectorSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AudioLanguageSelection& GetAudioLanguageSelection() const{ return m_audioLanguageSelection; }

    
    inline void SetAudioLanguageSelection(const AudioLanguageSelection& value) { m_audioLanguageSelectionHasBeenSet = true; m_audioLanguageSelection = value; }

    
    inline void SetAudioLanguageSelection(AudioLanguageSelection&& value) { m_audioLanguageSelectionHasBeenSet = true; m_audioLanguageSelection = std::move(value); }

    
    inline AudioSelectorSettings& WithAudioLanguageSelection(const AudioLanguageSelection& value) { SetAudioLanguageSelection(value); return *this;}

    
    inline AudioSelectorSettings& WithAudioLanguageSelection(AudioLanguageSelection&& value) { SetAudioLanguageSelection(std::move(value)); return *this;}


    
    inline const AudioPidSelection& GetAudioPidSelection() const{ return m_audioPidSelection; }

    
    inline void SetAudioPidSelection(const AudioPidSelection& value) { m_audioPidSelectionHasBeenSet = true; m_audioPidSelection = value; }

    
    inline void SetAudioPidSelection(AudioPidSelection&& value) { m_audioPidSelectionHasBeenSet = true; m_audioPidSelection = std::move(value); }

    
    inline AudioSelectorSettings& WithAudioPidSelection(const AudioPidSelection& value) { SetAudioPidSelection(value); return *this;}

    
    inline AudioSelectorSettings& WithAudioPidSelection(AudioPidSelection&& value) { SetAudioPidSelection(std::move(value)); return *this;}

  private:

    AudioLanguageSelection m_audioLanguageSelection;
    bool m_audioLanguageSelectionHasBeenSet;

    AudioPidSelection m_audioPidSelection;
    bool m_audioPidSelectionHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
