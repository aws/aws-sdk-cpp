/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioOnlyHlsSettings.h>
#include <aws/medialive/model/Fmp4HlsSettings.h>
#include <aws/medialive/model/FrameCaptureHlsSettings.h>
#include <aws/medialive/model/StandardHlsSettings.h>
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
   * Hls Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsSettings">AWS
   * API Reference</a></p>
   */
  class HlsSettings
  {
  public:
    AWS_MEDIALIVE_API HlsSettings();
    AWS_MEDIALIVE_API HlsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AudioOnlyHlsSettings& GetAudioOnlyHlsSettings() const{ return m_audioOnlyHlsSettings; }

    
    inline bool AudioOnlyHlsSettingsHasBeenSet() const { return m_audioOnlyHlsSettingsHasBeenSet; }

    
    inline void SetAudioOnlyHlsSettings(const AudioOnlyHlsSettings& value) { m_audioOnlyHlsSettingsHasBeenSet = true; m_audioOnlyHlsSettings = value; }

    
    inline void SetAudioOnlyHlsSettings(AudioOnlyHlsSettings&& value) { m_audioOnlyHlsSettingsHasBeenSet = true; m_audioOnlyHlsSettings = std::move(value); }

    
    inline HlsSettings& WithAudioOnlyHlsSettings(const AudioOnlyHlsSettings& value) { SetAudioOnlyHlsSettings(value); return *this;}

    
    inline HlsSettings& WithAudioOnlyHlsSettings(AudioOnlyHlsSettings&& value) { SetAudioOnlyHlsSettings(std::move(value)); return *this;}


    
    inline const Fmp4HlsSettings& GetFmp4HlsSettings() const{ return m_fmp4HlsSettings; }

    
    inline bool Fmp4HlsSettingsHasBeenSet() const { return m_fmp4HlsSettingsHasBeenSet; }

    
    inline void SetFmp4HlsSettings(const Fmp4HlsSettings& value) { m_fmp4HlsSettingsHasBeenSet = true; m_fmp4HlsSettings = value; }

    
    inline void SetFmp4HlsSettings(Fmp4HlsSettings&& value) { m_fmp4HlsSettingsHasBeenSet = true; m_fmp4HlsSettings = std::move(value); }

    
    inline HlsSettings& WithFmp4HlsSettings(const Fmp4HlsSettings& value) { SetFmp4HlsSettings(value); return *this;}

    
    inline HlsSettings& WithFmp4HlsSettings(Fmp4HlsSettings&& value) { SetFmp4HlsSettings(std::move(value)); return *this;}


    
    inline const FrameCaptureHlsSettings& GetFrameCaptureHlsSettings() const{ return m_frameCaptureHlsSettings; }

    
    inline bool FrameCaptureHlsSettingsHasBeenSet() const { return m_frameCaptureHlsSettingsHasBeenSet; }

    
    inline void SetFrameCaptureHlsSettings(const FrameCaptureHlsSettings& value) { m_frameCaptureHlsSettingsHasBeenSet = true; m_frameCaptureHlsSettings = value; }

    
    inline void SetFrameCaptureHlsSettings(FrameCaptureHlsSettings&& value) { m_frameCaptureHlsSettingsHasBeenSet = true; m_frameCaptureHlsSettings = std::move(value); }

    
    inline HlsSettings& WithFrameCaptureHlsSettings(const FrameCaptureHlsSettings& value) { SetFrameCaptureHlsSettings(value); return *this;}

    
    inline HlsSettings& WithFrameCaptureHlsSettings(FrameCaptureHlsSettings&& value) { SetFrameCaptureHlsSettings(std::move(value)); return *this;}


    
    inline const StandardHlsSettings& GetStandardHlsSettings() const{ return m_standardHlsSettings; }

    
    inline bool StandardHlsSettingsHasBeenSet() const { return m_standardHlsSettingsHasBeenSet; }

    
    inline void SetStandardHlsSettings(const StandardHlsSettings& value) { m_standardHlsSettingsHasBeenSet = true; m_standardHlsSettings = value; }

    
    inline void SetStandardHlsSettings(StandardHlsSettings&& value) { m_standardHlsSettingsHasBeenSet = true; m_standardHlsSettings = std::move(value); }

    
    inline HlsSettings& WithStandardHlsSettings(const StandardHlsSettings& value) { SetStandardHlsSettings(value); return *this;}

    
    inline HlsSettings& WithStandardHlsSettings(StandardHlsSettings&& value) { SetStandardHlsSettings(std::move(value)); return *this;}

  private:

    AudioOnlyHlsSettings m_audioOnlyHlsSettings;
    bool m_audioOnlyHlsSettingsHasBeenSet = false;

    Fmp4HlsSettings m_fmp4HlsSettings;
    bool m_fmp4HlsSettingsHasBeenSet = false;

    FrameCaptureHlsSettings m_frameCaptureHlsSettings;
    bool m_frameCaptureHlsSettingsHasBeenSet = false;

    StandardHlsSettings m_standardHlsSettings;
    bool m_standardHlsSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
