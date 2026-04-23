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
#include <aws/mediaconvert/model/AudioNormalizationSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/AudioTypeControl.h>
#include <aws/mediaconvert/model/AudioCodecSettings.h>
#include <aws/mediaconvert/model/LanguageCode.h>
#include <aws/mediaconvert/model/AudioLanguageCodeControl.h>
#include <aws/mediaconvert/model/RemixSettings.h>
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
   * Description of audio output<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioDescription">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API AudioDescription
  {
  public:
    AudioDescription();
    AudioDescription(Aws::Utils::Json::JsonView jsonValue);
    AudioDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Advanced audio normalization settings.
     */
    inline const AudioNormalizationSettings& GetAudioNormalizationSettings() const{ return m_audioNormalizationSettings; }

    /**
     * Advanced audio normalization settings.
     */
    inline bool AudioNormalizationSettingsHasBeenSet() const { return m_audioNormalizationSettingsHasBeenSet; }

    /**
     * Advanced audio normalization settings.
     */
    inline void SetAudioNormalizationSettings(const AudioNormalizationSettings& value) { m_audioNormalizationSettingsHasBeenSet = true; m_audioNormalizationSettings = value; }

    /**
     * Advanced audio normalization settings.
     */
    inline void SetAudioNormalizationSettings(AudioNormalizationSettings&& value) { m_audioNormalizationSettingsHasBeenSet = true; m_audioNormalizationSettings = std::move(value); }

    /**
     * Advanced audio normalization settings.
     */
    inline AudioDescription& WithAudioNormalizationSettings(const AudioNormalizationSettings& value) { SetAudioNormalizationSettings(value); return *this;}

    /**
     * Advanced audio normalization settings.
     */
    inline AudioDescription& WithAudioNormalizationSettings(AudioNormalizationSettings&& value) { SetAudioNormalizationSettings(std::move(value)); return *this;}


    /**
     * Specifies which audio data to use from each input. In the simplest case, specify
     * an "Audio Selector":#inputs-audio_selector by name based on its order within
     * each input. For example if you specify "Audio Selector 3", then the third audio
     * selector will be used from each input. If an input does not have an "Audio
     * Selector 3", then the audio selector marked as "default" in that input will be
     * used. If there is no audio selector marked as "default", silence will be
     * inserted for the duration of that input. Alternatively, an "Audio Selector
     * Group":#inputs-audio_selector_group name may be specified, with similar
     * default/silence behavior. If no audio_source_name is specified, then "Audio
     * Selector 1" will be chosen automatically.
     */
    inline const Aws::String& GetAudioSourceName() const{ return m_audioSourceName; }

    /**
     * Specifies which audio data to use from each input. In the simplest case, specify
     * an "Audio Selector":#inputs-audio_selector by name based on its order within
     * each input. For example if you specify "Audio Selector 3", then the third audio
     * selector will be used from each input. If an input does not have an "Audio
     * Selector 3", then the audio selector marked as "default" in that input will be
     * used. If there is no audio selector marked as "default", silence will be
     * inserted for the duration of that input. Alternatively, an "Audio Selector
     * Group":#inputs-audio_selector_group name may be specified, with similar
     * default/silence behavior. If no audio_source_name is specified, then "Audio
     * Selector 1" will be chosen automatically.
     */
    inline bool AudioSourceNameHasBeenSet() const { return m_audioSourceNameHasBeenSet; }

    /**
     * Specifies which audio data to use from each input. In the simplest case, specify
     * an "Audio Selector":#inputs-audio_selector by name based on its order within
     * each input. For example if you specify "Audio Selector 3", then the third audio
     * selector will be used from each input. If an input does not have an "Audio
     * Selector 3", then the audio selector marked as "default" in that input will be
     * used. If there is no audio selector marked as "default", silence will be
     * inserted for the duration of that input. Alternatively, an "Audio Selector
     * Group":#inputs-audio_selector_group name may be specified, with similar
     * default/silence behavior. If no audio_source_name is specified, then "Audio
     * Selector 1" will be chosen automatically.
     */
    inline void SetAudioSourceName(const Aws::String& value) { m_audioSourceNameHasBeenSet = true; m_audioSourceName = value; }

    /**
     * Specifies which audio data to use from each input. In the simplest case, specify
     * an "Audio Selector":#inputs-audio_selector by name based on its order within
     * each input. For example if you specify "Audio Selector 3", then the third audio
     * selector will be used from each input. If an input does not have an "Audio
     * Selector 3", then the audio selector marked as "default" in that input will be
     * used. If there is no audio selector marked as "default", silence will be
     * inserted for the duration of that input. Alternatively, an "Audio Selector
     * Group":#inputs-audio_selector_group name may be specified, with similar
     * default/silence behavior. If no audio_source_name is specified, then "Audio
     * Selector 1" will be chosen automatically.
     */
    inline void SetAudioSourceName(Aws::String&& value) { m_audioSourceNameHasBeenSet = true; m_audioSourceName = std::move(value); }

    /**
     * Specifies which audio data to use from each input. In the simplest case, specify
     * an "Audio Selector":#inputs-audio_selector by name based on its order within
     * each input. For example if you specify "Audio Selector 3", then the third audio
     * selector will be used from each input. If an input does not have an "Audio
     * Selector 3", then the audio selector marked as "default" in that input will be
     * used. If there is no audio selector marked as "default", silence will be
     * inserted for the duration of that input. Alternatively, an "Audio Selector
     * Group":#inputs-audio_selector_group name may be specified, with similar
     * default/silence behavior. If no audio_source_name is specified, then "Audio
     * Selector 1" will be chosen automatically.
     */
    inline void SetAudioSourceName(const char* value) { m_audioSourceNameHasBeenSet = true; m_audioSourceName.assign(value); }

    /**
     * Specifies which audio data to use from each input. In the simplest case, specify
     * an "Audio Selector":#inputs-audio_selector by name based on its order within
     * each input. For example if you specify "Audio Selector 3", then the third audio
     * selector will be used from each input. If an input does not have an "Audio
     * Selector 3", then the audio selector marked as "default" in that input will be
     * used. If there is no audio selector marked as "default", silence will be
     * inserted for the duration of that input. Alternatively, an "Audio Selector
     * Group":#inputs-audio_selector_group name may be specified, with similar
     * default/silence behavior. If no audio_source_name is specified, then "Audio
     * Selector 1" will be chosen automatically.
     */
    inline AudioDescription& WithAudioSourceName(const Aws::String& value) { SetAudioSourceName(value); return *this;}

    /**
     * Specifies which audio data to use from each input. In the simplest case, specify
     * an "Audio Selector":#inputs-audio_selector by name based on its order within
     * each input. For example if you specify "Audio Selector 3", then the third audio
     * selector will be used from each input. If an input does not have an "Audio
     * Selector 3", then the audio selector marked as "default" in that input will be
     * used. If there is no audio selector marked as "default", silence will be
     * inserted for the duration of that input. Alternatively, an "Audio Selector
     * Group":#inputs-audio_selector_group name may be specified, with similar
     * default/silence behavior. If no audio_source_name is specified, then "Audio
     * Selector 1" will be chosen automatically.
     */
    inline AudioDescription& WithAudioSourceName(Aws::String&& value) { SetAudioSourceName(std::move(value)); return *this;}

    /**
     * Specifies which audio data to use from each input. In the simplest case, specify
     * an "Audio Selector":#inputs-audio_selector by name based on its order within
     * each input. For example if you specify "Audio Selector 3", then the third audio
     * selector will be used from each input. If an input does not have an "Audio
     * Selector 3", then the audio selector marked as "default" in that input will be
     * used. If there is no audio selector marked as "default", silence will be
     * inserted for the duration of that input. Alternatively, an "Audio Selector
     * Group":#inputs-audio_selector_group name may be specified, with similar
     * default/silence behavior. If no audio_source_name is specified, then "Audio
     * Selector 1" will be chosen automatically.
     */
    inline AudioDescription& WithAudioSourceName(const char* value) { SetAudioSourceName(value); return *this;}


    /**
     * Applies only if Follow Input Audio Type is unchecked (false). A number between 0
     * and 255. The following are defined in ISO-IEC 13818-1: 0 = Undefined, 1 = Clean
     * Effects, 2 = Hearing Impaired, 3 = Visually Impaired Commentary, 4-255 =
     * Reserved.
     */
    inline int GetAudioType() const{ return m_audioType; }

    /**
     * Applies only if Follow Input Audio Type is unchecked (false). A number between 0
     * and 255. The following are defined in ISO-IEC 13818-1: 0 = Undefined, 1 = Clean
     * Effects, 2 = Hearing Impaired, 3 = Visually Impaired Commentary, 4-255 =
     * Reserved.
     */
    inline bool AudioTypeHasBeenSet() const { return m_audioTypeHasBeenSet; }

    /**
     * Applies only if Follow Input Audio Type is unchecked (false). A number between 0
     * and 255. The following are defined in ISO-IEC 13818-1: 0 = Undefined, 1 = Clean
     * Effects, 2 = Hearing Impaired, 3 = Visually Impaired Commentary, 4-255 =
     * Reserved.
     */
    inline void SetAudioType(int value) { m_audioTypeHasBeenSet = true; m_audioType = value; }

    /**
     * Applies only if Follow Input Audio Type is unchecked (false). A number between 0
     * and 255. The following are defined in ISO-IEC 13818-1: 0 = Undefined, 1 = Clean
     * Effects, 2 = Hearing Impaired, 3 = Visually Impaired Commentary, 4-255 =
     * Reserved.
     */
    inline AudioDescription& WithAudioType(int value) { SetAudioType(value); return *this;}


    /**
     * When set to FOLLOW_INPUT, if the input contains an ISO 639 audio_type, then that
     * value is passed through to the output. If the input contains no ISO 639
     * audio_type, the value in Audio Type is included in the output. Otherwise the
     * value in Audio Type is included in the output. Note that this field and
     * audioType are both ignored if audioDescriptionBroadcasterMix is set to
     * BROADCASTER_MIXED_AD.
     */
    inline const AudioTypeControl& GetAudioTypeControl() const{ return m_audioTypeControl; }

    /**
     * When set to FOLLOW_INPUT, if the input contains an ISO 639 audio_type, then that
     * value is passed through to the output. If the input contains no ISO 639
     * audio_type, the value in Audio Type is included in the output. Otherwise the
     * value in Audio Type is included in the output. Note that this field and
     * audioType are both ignored if audioDescriptionBroadcasterMix is set to
     * BROADCASTER_MIXED_AD.
     */
    inline bool AudioTypeControlHasBeenSet() const { return m_audioTypeControlHasBeenSet; }

    /**
     * When set to FOLLOW_INPUT, if the input contains an ISO 639 audio_type, then that
     * value is passed through to the output. If the input contains no ISO 639
     * audio_type, the value in Audio Type is included in the output. Otherwise the
     * value in Audio Type is included in the output. Note that this field and
     * audioType are both ignored if audioDescriptionBroadcasterMix is set to
     * BROADCASTER_MIXED_AD.
     */
    inline void SetAudioTypeControl(const AudioTypeControl& value) { m_audioTypeControlHasBeenSet = true; m_audioTypeControl = value; }

    /**
     * When set to FOLLOW_INPUT, if the input contains an ISO 639 audio_type, then that
     * value is passed through to the output. If the input contains no ISO 639
     * audio_type, the value in Audio Type is included in the output. Otherwise the
     * value in Audio Type is included in the output. Note that this field and
     * audioType are both ignored if audioDescriptionBroadcasterMix is set to
     * BROADCASTER_MIXED_AD.
     */
    inline void SetAudioTypeControl(AudioTypeControl&& value) { m_audioTypeControlHasBeenSet = true; m_audioTypeControl = std::move(value); }

    /**
     * When set to FOLLOW_INPUT, if the input contains an ISO 639 audio_type, then that
     * value is passed through to the output. If the input contains no ISO 639
     * audio_type, the value in Audio Type is included in the output. Otherwise the
     * value in Audio Type is included in the output. Note that this field and
     * audioType are both ignored if audioDescriptionBroadcasterMix is set to
     * BROADCASTER_MIXED_AD.
     */
    inline AudioDescription& WithAudioTypeControl(const AudioTypeControl& value) { SetAudioTypeControl(value); return *this;}

    /**
     * When set to FOLLOW_INPUT, if the input contains an ISO 639 audio_type, then that
     * value is passed through to the output. If the input contains no ISO 639
     * audio_type, the value in Audio Type is included in the output. Otherwise the
     * value in Audio Type is included in the output. Note that this field and
     * audioType are both ignored if audioDescriptionBroadcasterMix is set to
     * BROADCASTER_MIXED_AD.
     */
    inline AudioDescription& WithAudioTypeControl(AudioTypeControl&& value) { SetAudioTypeControl(std::move(value)); return *this;}


    /**
     * Audio codec settings (CodecSettings) under (AudioDescriptions) contains the
     * group of settings related to audio encoding. The settings in this group vary
     * depending on the value you choose for Audio codec (Codec). For each codec enum
     * you choose, define the corresponding settings object. The following lists the
     * codec enum, settings object pairs. * AAC, AacSettings * MP2, Mp2Settings * WAV,
     * WavSettings * AIFF, AiffSettings * AC3, Ac3Settings * EAC3, Eac3Settings
     */
    inline const AudioCodecSettings& GetCodecSettings() const{ return m_codecSettings; }

    /**
     * Audio codec settings (CodecSettings) under (AudioDescriptions) contains the
     * group of settings related to audio encoding. The settings in this group vary
     * depending on the value you choose for Audio codec (Codec). For each codec enum
     * you choose, define the corresponding settings object. The following lists the
     * codec enum, settings object pairs. * AAC, AacSettings * MP2, Mp2Settings * WAV,
     * WavSettings * AIFF, AiffSettings * AC3, Ac3Settings * EAC3, Eac3Settings
     */
    inline bool CodecSettingsHasBeenSet() const { return m_codecSettingsHasBeenSet; }

    /**
     * Audio codec settings (CodecSettings) under (AudioDescriptions) contains the
     * group of settings related to audio encoding. The settings in this group vary
     * depending on the value you choose for Audio codec (Codec). For each codec enum
     * you choose, define the corresponding settings object. The following lists the
     * codec enum, settings object pairs. * AAC, AacSettings * MP2, Mp2Settings * WAV,
     * WavSettings * AIFF, AiffSettings * AC3, Ac3Settings * EAC3, Eac3Settings
     */
    inline void SetCodecSettings(const AudioCodecSettings& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = value; }

    /**
     * Audio codec settings (CodecSettings) under (AudioDescriptions) contains the
     * group of settings related to audio encoding. The settings in this group vary
     * depending on the value you choose for Audio codec (Codec). For each codec enum
     * you choose, define the corresponding settings object. The following lists the
     * codec enum, settings object pairs. * AAC, AacSettings * MP2, Mp2Settings * WAV,
     * WavSettings * AIFF, AiffSettings * AC3, Ac3Settings * EAC3, Eac3Settings
     */
    inline void SetCodecSettings(AudioCodecSettings&& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = std::move(value); }

    /**
     * Audio codec settings (CodecSettings) under (AudioDescriptions) contains the
     * group of settings related to audio encoding. The settings in this group vary
     * depending on the value you choose for Audio codec (Codec). For each codec enum
     * you choose, define the corresponding settings object. The following lists the
     * codec enum, settings object pairs. * AAC, AacSettings * MP2, Mp2Settings * WAV,
     * WavSettings * AIFF, AiffSettings * AC3, Ac3Settings * EAC3, Eac3Settings
     */
    inline AudioDescription& WithCodecSettings(const AudioCodecSettings& value) { SetCodecSettings(value); return *this;}

    /**
     * Audio codec settings (CodecSettings) under (AudioDescriptions) contains the
     * group of settings related to audio encoding. The settings in this group vary
     * depending on the value you choose for Audio codec (Codec). For each codec enum
     * you choose, define the corresponding settings object. The following lists the
     * codec enum, settings object pairs. * AAC, AacSettings * MP2, Mp2Settings * WAV,
     * WavSettings * AIFF, AiffSettings * AC3, Ac3Settings * EAC3, Eac3Settings
     */
    inline AudioDescription& WithCodecSettings(AudioCodecSettings&& value) { SetCodecSettings(std::move(value)); return *this;}


    /**
     * Specify the language for this audio output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. The language specified will be used when
     * 'Follow Input Language Code' is not selected or when 'Follow Input Language
     * Code' is selected but there is no ISO 639 language code specified by the input.
     */
    inline const Aws::String& GetCustomLanguageCode() const{ return m_customLanguageCode; }

    /**
     * Specify the language for this audio output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. The language specified will be used when
     * 'Follow Input Language Code' is not selected or when 'Follow Input Language
     * Code' is selected but there is no ISO 639 language code specified by the input.
     */
    inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }

    /**
     * Specify the language for this audio output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. The language specified will be used when
     * 'Follow Input Language Code' is not selected or when 'Follow Input Language
     * Code' is selected but there is no ISO 639 language code specified by the input.
     */
    inline void SetCustomLanguageCode(const Aws::String& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = value; }

    /**
     * Specify the language for this audio output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. The language specified will be used when
     * 'Follow Input Language Code' is not selected or when 'Follow Input Language
     * Code' is selected but there is no ISO 639 language code specified by the input.
     */
    inline void SetCustomLanguageCode(Aws::String&& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = std::move(value); }

    /**
     * Specify the language for this audio output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. The language specified will be used when
     * 'Follow Input Language Code' is not selected or when 'Follow Input Language
     * Code' is selected but there is no ISO 639 language code specified by the input.
     */
    inline void SetCustomLanguageCode(const char* value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode.assign(value); }

    /**
     * Specify the language for this audio output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. The language specified will be used when
     * 'Follow Input Language Code' is not selected or when 'Follow Input Language
     * Code' is selected but there is no ISO 639 language code specified by the input.
     */
    inline AudioDescription& WithCustomLanguageCode(const Aws::String& value) { SetCustomLanguageCode(value); return *this;}

    /**
     * Specify the language for this audio output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. The language specified will be used when
     * 'Follow Input Language Code' is not selected or when 'Follow Input Language
     * Code' is selected but there is no ISO 639 language code specified by the input.
     */
    inline AudioDescription& WithCustomLanguageCode(Aws::String&& value) { SetCustomLanguageCode(std::move(value)); return *this;}

    /**
     * Specify the language for this audio output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. The language specified will be used when
     * 'Follow Input Language Code' is not selected or when 'Follow Input Language
     * Code' is selected but there is no ISO 639 language code specified by the input.
     */
    inline AudioDescription& WithCustomLanguageCode(const char* value) { SetCustomLanguageCode(value); return *this;}


    /**
     * Indicates the language of the audio output track. The ISO 639 language specified
     * in the 'Language Code' drop down will be used when 'Follow Input Language Code'
     * is not selected or when 'Follow Input Language Code' is selected but there is no
     * ISO 639 language code specified by the input.
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * Indicates the language of the audio output track. The ISO 639 language specified
     * in the 'Language Code' drop down will be used when 'Follow Input Language Code'
     * is not selected or when 'Follow Input Language Code' is selected but there is no
     * ISO 639 language code specified by the input.
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * Indicates the language of the audio output track. The ISO 639 language specified
     * in the 'Language Code' drop down will be used when 'Follow Input Language Code'
     * is not selected or when 'Follow Input Language Code' is selected but there is no
     * ISO 639 language code specified by the input.
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * Indicates the language of the audio output track. The ISO 639 language specified
     * in the 'Language Code' drop down will be used when 'Follow Input Language Code'
     * is not selected or when 'Follow Input Language Code' is selected but there is no
     * ISO 639 language code specified by the input.
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * Indicates the language of the audio output track. The ISO 639 language specified
     * in the 'Language Code' drop down will be used when 'Follow Input Language Code'
     * is not selected or when 'Follow Input Language Code' is selected but there is no
     * ISO 639 language code specified by the input.
     */
    inline AudioDescription& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * Indicates the language of the audio output track. The ISO 639 language specified
     * in the 'Language Code' drop down will be used when 'Follow Input Language Code'
     * is not selected or when 'Follow Input Language Code' is selected but there is no
     * ISO 639 language code specified by the input.
     */
    inline AudioDescription& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * Choosing FOLLOW_INPUT will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The language specified for
     * languageCode' will be used when USE_CONFIGURED is selected or when FOLLOW_INPUT
     * is selected but there is no ISO 639 language code specified by the input.
     */
    inline const AudioLanguageCodeControl& GetLanguageCodeControl() const{ return m_languageCodeControl; }

    /**
     * Choosing FOLLOW_INPUT will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The language specified for
     * languageCode' will be used when USE_CONFIGURED is selected or when FOLLOW_INPUT
     * is selected but there is no ISO 639 language code specified by the input.
     */
    inline bool LanguageCodeControlHasBeenSet() const { return m_languageCodeControlHasBeenSet; }

    /**
     * Choosing FOLLOW_INPUT will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The language specified for
     * languageCode' will be used when USE_CONFIGURED is selected or when FOLLOW_INPUT
     * is selected but there is no ISO 639 language code specified by the input.
     */
    inline void SetLanguageCodeControl(const AudioLanguageCodeControl& value) { m_languageCodeControlHasBeenSet = true; m_languageCodeControl = value; }

    /**
     * Choosing FOLLOW_INPUT will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The language specified for
     * languageCode' will be used when USE_CONFIGURED is selected or when FOLLOW_INPUT
     * is selected but there is no ISO 639 language code specified by the input.
     */
    inline void SetLanguageCodeControl(AudioLanguageCodeControl&& value) { m_languageCodeControlHasBeenSet = true; m_languageCodeControl = std::move(value); }

    /**
     * Choosing FOLLOW_INPUT will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The language specified for
     * languageCode' will be used when USE_CONFIGURED is selected or when FOLLOW_INPUT
     * is selected but there is no ISO 639 language code specified by the input.
     */
    inline AudioDescription& WithLanguageCodeControl(const AudioLanguageCodeControl& value) { SetLanguageCodeControl(value); return *this;}

    /**
     * Choosing FOLLOW_INPUT will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The language specified for
     * languageCode' will be used when USE_CONFIGURED is selected or when FOLLOW_INPUT
     * is selected but there is no ISO 639 language code specified by the input.
     */
    inline AudioDescription& WithLanguageCodeControl(AudioLanguageCodeControl&& value) { SetLanguageCodeControl(std::move(value)); return *this;}


    /**
     * Advanced audio remixing settings.
     */
    inline const RemixSettings& GetRemixSettings() const{ return m_remixSettings; }

    /**
     * Advanced audio remixing settings.
     */
    inline bool RemixSettingsHasBeenSet() const { return m_remixSettingsHasBeenSet; }

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
    inline AudioDescription& WithRemixSettings(const RemixSettings& value) { SetRemixSettings(value); return *this;}

    /**
     * Advanced audio remixing settings.
     */
    inline AudioDescription& WithRemixSettings(RemixSettings&& value) { SetRemixSettings(std::move(value)); return *this;}


    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary). Alphanumeric characters, spaces,
     * and underscore are legal.
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary). Alphanumeric characters, spaces,
     * and underscore are legal.
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary). Alphanumeric characters, spaces,
     * and underscore are legal.
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary). Alphanumeric characters, spaces,
     * and underscore are legal.
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary). Alphanumeric characters, spaces,
     * and underscore are legal.
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary). Alphanumeric characters, spaces,
     * and underscore are legal.
     */
    inline AudioDescription& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary). Alphanumeric characters, spaces,
     * and underscore are legal.
     */
    inline AudioDescription& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary). Alphanumeric characters, spaces,
     * and underscore are legal.
     */
    inline AudioDescription& WithStreamName(const char* value) { SetStreamName(value); return *this;}

  private:

    AudioNormalizationSettings m_audioNormalizationSettings;
    bool m_audioNormalizationSettingsHasBeenSet;

    Aws::String m_audioSourceName;
    bool m_audioSourceNameHasBeenSet;

    int m_audioType;
    bool m_audioTypeHasBeenSet;

    AudioTypeControl m_audioTypeControl;
    bool m_audioTypeControlHasBeenSet;

    AudioCodecSettings m_codecSettings;
    bool m_codecSettingsHasBeenSet;

    Aws::String m_customLanguageCode;
    bool m_customLanguageCodeHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    AudioLanguageCodeControl m_languageCodeControl;
    bool m_languageCodeControlHasBeenSet;

    RemixSettings m_remixSettings;
    bool m_remixSettingsHasBeenSet;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
