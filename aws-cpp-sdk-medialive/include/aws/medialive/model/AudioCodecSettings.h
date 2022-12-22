/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AacSettings.h>
#include <aws/medialive/model/Ac3Settings.h>
#include <aws/medialive/model/Eac3AtmosSettings.h>
#include <aws/medialive/model/Eac3Settings.h>
#include <aws/medialive/model/Mp2Settings.h>
#include <aws/medialive/model/PassThroughSettings.h>
#include <aws/medialive/model/WavSettings.h>
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
   * Audio Codec Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioCodecSettings">AWS
   * API Reference</a></p>
   */
  class AudioCodecSettings
  {
  public:
    AWS_MEDIALIVE_API AudioCodecSettings();
    AWS_MEDIALIVE_API AudioCodecSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioCodecSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AacSettings& GetAacSettings() const{ return m_aacSettings; }

    
    inline bool AacSettingsHasBeenSet() const { return m_aacSettingsHasBeenSet; }

    
    inline void SetAacSettings(const AacSettings& value) { m_aacSettingsHasBeenSet = true; m_aacSettings = value; }

    
    inline void SetAacSettings(AacSettings&& value) { m_aacSettingsHasBeenSet = true; m_aacSettings = std::move(value); }

    
    inline AudioCodecSettings& WithAacSettings(const AacSettings& value) { SetAacSettings(value); return *this;}

    
    inline AudioCodecSettings& WithAacSettings(AacSettings&& value) { SetAacSettings(std::move(value)); return *this;}


    
    inline const Ac3Settings& GetAc3Settings() const{ return m_ac3Settings; }

    
    inline bool Ac3SettingsHasBeenSet() const { return m_ac3SettingsHasBeenSet; }

    
    inline void SetAc3Settings(const Ac3Settings& value) { m_ac3SettingsHasBeenSet = true; m_ac3Settings = value; }

    
    inline void SetAc3Settings(Ac3Settings&& value) { m_ac3SettingsHasBeenSet = true; m_ac3Settings = std::move(value); }

    
    inline AudioCodecSettings& WithAc3Settings(const Ac3Settings& value) { SetAc3Settings(value); return *this;}

    
    inline AudioCodecSettings& WithAc3Settings(Ac3Settings&& value) { SetAc3Settings(std::move(value)); return *this;}


    
    inline const Eac3AtmosSettings& GetEac3AtmosSettings() const{ return m_eac3AtmosSettings; }

    
    inline bool Eac3AtmosSettingsHasBeenSet() const { return m_eac3AtmosSettingsHasBeenSet; }

    
    inline void SetEac3AtmosSettings(const Eac3AtmosSettings& value) { m_eac3AtmosSettingsHasBeenSet = true; m_eac3AtmosSettings = value; }

    
    inline void SetEac3AtmosSettings(Eac3AtmosSettings&& value) { m_eac3AtmosSettingsHasBeenSet = true; m_eac3AtmosSettings = std::move(value); }

    
    inline AudioCodecSettings& WithEac3AtmosSettings(const Eac3AtmosSettings& value) { SetEac3AtmosSettings(value); return *this;}

    
    inline AudioCodecSettings& WithEac3AtmosSettings(Eac3AtmosSettings&& value) { SetEac3AtmosSettings(std::move(value)); return *this;}


    
    inline const Eac3Settings& GetEac3Settings() const{ return m_eac3Settings; }

    
    inline bool Eac3SettingsHasBeenSet() const { return m_eac3SettingsHasBeenSet; }

    
    inline void SetEac3Settings(const Eac3Settings& value) { m_eac3SettingsHasBeenSet = true; m_eac3Settings = value; }

    
    inline void SetEac3Settings(Eac3Settings&& value) { m_eac3SettingsHasBeenSet = true; m_eac3Settings = std::move(value); }

    
    inline AudioCodecSettings& WithEac3Settings(const Eac3Settings& value) { SetEac3Settings(value); return *this;}

    
    inline AudioCodecSettings& WithEac3Settings(Eac3Settings&& value) { SetEac3Settings(std::move(value)); return *this;}


    
    inline const Mp2Settings& GetMp2Settings() const{ return m_mp2Settings; }

    
    inline bool Mp2SettingsHasBeenSet() const { return m_mp2SettingsHasBeenSet; }

    
    inline void SetMp2Settings(const Mp2Settings& value) { m_mp2SettingsHasBeenSet = true; m_mp2Settings = value; }

    
    inline void SetMp2Settings(Mp2Settings&& value) { m_mp2SettingsHasBeenSet = true; m_mp2Settings = std::move(value); }

    
    inline AudioCodecSettings& WithMp2Settings(const Mp2Settings& value) { SetMp2Settings(value); return *this;}

    
    inline AudioCodecSettings& WithMp2Settings(Mp2Settings&& value) { SetMp2Settings(std::move(value)); return *this;}


    
    inline const PassThroughSettings& GetPassThroughSettings() const{ return m_passThroughSettings; }

    
    inline bool PassThroughSettingsHasBeenSet() const { return m_passThroughSettingsHasBeenSet; }

    
    inline void SetPassThroughSettings(const PassThroughSettings& value) { m_passThroughSettingsHasBeenSet = true; m_passThroughSettings = value; }

    
    inline void SetPassThroughSettings(PassThroughSettings&& value) { m_passThroughSettingsHasBeenSet = true; m_passThroughSettings = std::move(value); }

    
    inline AudioCodecSettings& WithPassThroughSettings(const PassThroughSettings& value) { SetPassThroughSettings(value); return *this;}

    
    inline AudioCodecSettings& WithPassThroughSettings(PassThroughSettings&& value) { SetPassThroughSettings(std::move(value)); return *this;}


    
    inline const WavSettings& GetWavSettings() const{ return m_wavSettings; }

    
    inline bool WavSettingsHasBeenSet() const { return m_wavSettingsHasBeenSet; }

    
    inline void SetWavSettings(const WavSettings& value) { m_wavSettingsHasBeenSet = true; m_wavSettings = value; }

    
    inline void SetWavSettings(WavSettings&& value) { m_wavSettingsHasBeenSet = true; m_wavSettings = std::move(value); }

    
    inline AudioCodecSettings& WithWavSettings(const WavSettings& value) { SetWavSettings(value); return *this;}

    
    inline AudioCodecSettings& WithWavSettings(WavSettings&& value) { SetWavSettings(std::move(value)); return *this;}

  private:

    AacSettings m_aacSettings;
    bool m_aacSettingsHasBeenSet = false;

    Ac3Settings m_ac3Settings;
    bool m_ac3SettingsHasBeenSet = false;

    Eac3AtmosSettings m_eac3AtmosSettings;
    bool m_eac3AtmosSettingsHasBeenSet = false;

    Eac3Settings m_eac3Settings;
    bool m_eac3SettingsHasBeenSet = false;

    Mp2Settings m_mp2Settings;
    bool m_mp2SettingsHasBeenSet = false;

    PassThroughSettings m_passThroughSettings;
    bool m_passThroughSettingsHasBeenSet = false;

    WavSettings m_wavSettings;
    bool m_wavSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
