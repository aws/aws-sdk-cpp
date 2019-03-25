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
#include <aws/mediaconvert/model/AacSettings.h>
#include <aws/mediaconvert/model/Ac3Settings.h>
#include <aws/mediaconvert/model/AiffSettings.h>
#include <aws/mediaconvert/model/AudioCodec.h>
#include <aws/mediaconvert/model/Eac3Settings.h>
#include <aws/mediaconvert/model/Mp2Settings.h>
#include <aws/mediaconvert/model/WavSettings.h>
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
   * Audio codec settings (CodecSettings) under (AudioDescriptions) contains the
   * group of settings related to audio encoding. The settings in this group vary
   * depending on the value you choose for Audio codec (Codec). For each codec enum
   * you choose, define the corresponding settings object. The following lists the
   * codec enum, settings object pairs. * AAC, AacSettings * MP2, Mp2Settings * WAV,
   * WavSettings * AIFF, AiffSettings * AC3, Ac3Settings * EAC3,
   * Eac3Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioCodecSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API AudioCodecSettings
  {
  public:
    AudioCodecSettings();
    AudioCodecSettings(Aws::Utils::Json::JsonView jsonValue);
    AudioCodecSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AAC. The service accepts one of two mutually exclusive groups of AAC
     * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
     * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
     * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
     * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
     * control mode.
     */
    inline const AacSettings& GetAacSettings() const{ return m_aacSettings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AAC. The service accepts one of two mutually exclusive groups of AAC
     * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
     * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
     * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
     * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
     * control mode.
     */
    inline bool AacSettingsHasBeenSet() const { return m_aacSettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AAC. The service accepts one of two mutually exclusive groups of AAC
     * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
     * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
     * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
     * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
     * control mode.
     */
    inline void SetAacSettings(const AacSettings& value) { m_aacSettingsHasBeenSet = true; m_aacSettings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AAC. The service accepts one of two mutually exclusive groups of AAC
     * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
     * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
     * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
     * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
     * control mode.
     */
    inline void SetAacSettings(AacSettings&& value) { m_aacSettingsHasBeenSet = true; m_aacSettings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AAC. The service accepts one of two mutually exclusive groups of AAC
     * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
     * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
     * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
     * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
     * control mode.
     */
    inline AudioCodecSettings& WithAacSettings(const AacSettings& value) { SetAacSettings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AAC. The service accepts one of two mutually exclusive groups of AAC
     * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
     * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
     * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
     * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
     * control mode.
     */
    inline AudioCodecSettings& WithAacSettings(AacSettings&& value) { SetAacSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AC3.
     */
    inline const Ac3Settings& GetAc3Settings() const{ return m_ac3Settings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AC3.
     */
    inline bool Ac3SettingsHasBeenSet() const { return m_ac3SettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AC3.
     */
    inline void SetAc3Settings(const Ac3Settings& value) { m_ac3SettingsHasBeenSet = true; m_ac3Settings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AC3.
     */
    inline void SetAc3Settings(Ac3Settings&& value) { m_ac3SettingsHasBeenSet = true; m_ac3Settings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AC3.
     */
    inline AudioCodecSettings& WithAc3Settings(const Ac3Settings& value) { SetAc3Settings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AC3.
     */
    inline AudioCodecSettings& WithAc3Settings(Ac3Settings&& value) { SetAc3Settings(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AIFF.
     */
    inline const AiffSettings& GetAiffSettings() const{ return m_aiffSettings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AIFF.
     */
    inline bool AiffSettingsHasBeenSet() const { return m_aiffSettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AIFF.
     */
    inline void SetAiffSettings(const AiffSettings& value) { m_aiffSettingsHasBeenSet = true; m_aiffSettings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AIFF.
     */
    inline void SetAiffSettings(AiffSettings&& value) { m_aiffSettingsHasBeenSet = true; m_aiffSettings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AIFF.
     */
    inline AudioCodecSettings& WithAiffSettings(const AiffSettings& value) { SetAiffSettings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AIFF.
     */
    inline AudioCodecSettings& WithAiffSettings(AiffSettings&& value) { SetAiffSettings(std::move(value)); return *this;}


    /**
     * Type of Audio codec.
     */
    inline const AudioCodec& GetCodec() const{ return m_codec; }

    /**
     * Type of Audio codec.
     */
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }

    /**
     * Type of Audio codec.
     */
    inline void SetCodec(const AudioCodec& value) { m_codecHasBeenSet = true; m_codec = value; }

    /**
     * Type of Audio codec.
     */
    inline void SetCodec(AudioCodec&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }

    /**
     * Type of Audio codec.
     */
    inline AudioCodecSettings& WithCodec(const AudioCodec& value) { SetCodec(value); return *this;}

    /**
     * Type of Audio codec.
     */
    inline AudioCodecSettings& WithCodec(AudioCodec&& value) { SetCodec(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3.
     */
    inline const Eac3Settings& GetEac3Settings() const{ return m_eac3Settings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3.
     */
    inline bool Eac3SettingsHasBeenSet() const { return m_eac3SettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3.
     */
    inline void SetEac3Settings(const Eac3Settings& value) { m_eac3SettingsHasBeenSet = true; m_eac3Settings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3.
     */
    inline void SetEac3Settings(Eac3Settings&& value) { m_eac3SettingsHasBeenSet = true; m_eac3Settings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3.
     */
    inline AudioCodecSettings& WithEac3Settings(const Eac3Settings& value) { SetEac3Settings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3.
     */
    inline AudioCodecSettings& WithEac3Settings(Eac3Settings&& value) { SetEac3Settings(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value MP2.
     */
    inline const Mp2Settings& GetMp2Settings() const{ return m_mp2Settings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value MP2.
     */
    inline bool Mp2SettingsHasBeenSet() const { return m_mp2SettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value MP2.
     */
    inline void SetMp2Settings(const Mp2Settings& value) { m_mp2SettingsHasBeenSet = true; m_mp2Settings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value MP2.
     */
    inline void SetMp2Settings(Mp2Settings&& value) { m_mp2SettingsHasBeenSet = true; m_mp2Settings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value MP2.
     */
    inline AudioCodecSettings& WithMp2Settings(const Mp2Settings& value) { SetMp2Settings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value MP2.
     */
    inline AudioCodecSettings& WithMp2Settings(Mp2Settings&& value) { SetMp2Settings(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value WAV.
     */
    inline const WavSettings& GetWavSettings() const{ return m_wavSettings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value WAV.
     */
    inline bool WavSettingsHasBeenSet() const { return m_wavSettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value WAV.
     */
    inline void SetWavSettings(const WavSettings& value) { m_wavSettingsHasBeenSet = true; m_wavSettings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value WAV.
     */
    inline void SetWavSettings(WavSettings&& value) { m_wavSettingsHasBeenSet = true; m_wavSettings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value WAV.
     */
    inline AudioCodecSettings& WithWavSettings(const WavSettings& value) { SetWavSettings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value WAV.
     */
    inline AudioCodecSettings& WithWavSettings(WavSettings&& value) { SetWavSettings(std::move(value)); return *this;}

  private:

    AacSettings m_aacSettings;
    bool m_aacSettingsHasBeenSet;

    Ac3Settings m_ac3Settings;
    bool m_ac3SettingsHasBeenSet;

    AiffSettings m_aiffSettings;
    bool m_aiffSettingsHasBeenSet;

    AudioCodec m_codec;
    bool m_codecHasBeenSet;

    Eac3Settings m_eac3Settings;
    bool m_eac3SettingsHasBeenSet;

    Mp2Settings m_mp2Settings;
    bool m_mp2SettingsHasBeenSet;

    WavSettings m_wavSettings;
    bool m_wavSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
