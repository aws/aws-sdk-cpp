/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AudioLanguageSelection
  {
  public:
    AWS_MEDIALIVE_API AudioLanguageSelection();
    AWS_MEDIALIVE_API AudioLanguageSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioLanguageSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_languageCodeHasBeenSet = false;

    AudioLanguageSelectionPolicy m_languageSelectionPolicy;
    bool m_languageSelectionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
