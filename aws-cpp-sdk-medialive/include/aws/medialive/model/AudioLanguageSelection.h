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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/AudioLanguageSelectionPolicy.h>
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
   * Audio Language Selection<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioLanguageSelection">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API AudioLanguageSelection
  {
  public:
    AudioLanguageSelection();
    AudioLanguageSelection(Aws::Utils::Json::JsonView jsonValue);
    AudioLanguageSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Selects a specific three-letter language code from within an audio source.
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }

    /**
     * Selects a specific three-letter language code from within an audio source.
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * Selects a specific three-letter language code from within an audio source.
     */
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * Selects a specific three-letter language code from within an audio source.
     */
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * Selects a specific three-letter language code from within an audio source.
     */
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }

    /**
     * Selects a specific three-letter language code from within an audio source.
     */
    inline AudioLanguageSelection& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}

    /**
     * Selects a specific three-letter language code from within an audio source.
     */
    inline AudioLanguageSelection& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * Selects a specific three-letter language code from within an audio source.
     */
    inline AudioLanguageSelection& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}


    /**
     * When set to "strict", the transport stream demux strictly identifies audio
     * streams by their language descriptor. If a PMT update occurs such that an audio
     * stream matching the initially selected language is no longer present then mute
     * will be encoded until the language returns. If "loose", then on a PMT update the
     * demux will choose another audio stream in the program with the same stream type
     * if it can't find one with the same language.
     */
    inline const AudioLanguageSelectionPolicy& GetLanguageSelectionPolicy() const{ return m_languageSelectionPolicy; }

    /**
     * When set to "strict", the transport stream demux strictly identifies audio
     * streams by their language descriptor. If a PMT update occurs such that an audio
     * stream matching the initially selected language is no longer present then mute
     * will be encoded until the language returns. If "loose", then on a PMT update the
     * demux will choose another audio stream in the program with the same stream type
     * if it can't find one with the same language.
     */
    inline bool LanguageSelectionPolicyHasBeenSet() const { return m_languageSelectionPolicyHasBeenSet; }

    /**
     * When set to "strict", the transport stream demux strictly identifies audio
     * streams by their language descriptor. If a PMT update occurs such that an audio
     * stream matching the initially selected language is no longer present then mute
     * will be encoded until the language returns. If "loose", then on a PMT update the
     * demux will choose another audio stream in the program with the same stream type
     * if it can't find one with the same language.
     */
    inline void SetLanguageSelectionPolicy(const AudioLanguageSelectionPolicy& value) { m_languageSelectionPolicyHasBeenSet = true; m_languageSelectionPolicy = value; }

    /**
     * When set to "strict", the transport stream demux strictly identifies audio
     * streams by their language descriptor. If a PMT update occurs such that an audio
     * stream matching the initially selected language is no longer present then mute
     * will be encoded until the language returns. If "loose", then on a PMT update the
     * demux will choose another audio stream in the program with the same stream type
     * if it can't find one with the same language.
     */
    inline void SetLanguageSelectionPolicy(AudioLanguageSelectionPolicy&& value) { m_languageSelectionPolicyHasBeenSet = true; m_languageSelectionPolicy = std::move(value); }

    /**
     * When set to "strict", the transport stream demux strictly identifies audio
     * streams by their language descriptor. If a PMT update occurs such that an audio
     * stream matching the initially selected language is no longer present then mute
     * will be encoded until the language returns. If "loose", then on a PMT update the
     * demux will choose another audio stream in the program with the same stream type
     * if it can't find one with the same language.
     */
    inline AudioLanguageSelection& WithLanguageSelectionPolicy(const AudioLanguageSelectionPolicy& value) { SetLanguageSelectionPolicy(value); return *this;}

    /**
     * When set to "strict", the transport stream demux strictly identifies audio
     * streams by their language descriptor. If a PMT update occurs such that an audio
     * stream matching the initially selected language is no longer present then mute
     * will be encoded until the language returns. If "loose", then on a PMT update the
     * demux will choose another audio stream in the program with the same stream type
     * if it can't find one with the same language.
     */
    inline AudioLanguageSelection& WithLanguageSelectionPolicy(AudioLanguageSelectionPolicy&& value) { SetLanguageSelectionPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet;

    AudioLanguageSelectionPolicy m_languageSelectionPolicy;
    bool m_languageSelectionPolicyHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
