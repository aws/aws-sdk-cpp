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
#include <aws/mediaconvert/model/VideoCodec.h>
#include <aws/mediaconvert/model/FrameCaptureSettings.h>
#include <aws/mediaconvert/model/H264Settings.h>
#include <aws/mediaconvert/model/H265Settings.h>
#include <aws/mediaconvert/model/Mpeg2Settings.h>
#include <aws/mediaconvert/model/ProresSettings.h>
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
   * Video codec settings, (CodecSettings) under (VideoDescription), contains the
   * group of settings related to video encoding. The settings in this group vary
   * depending on the value you choose for Video codec (Codec). For each codec enum
   * you choose, define the corresponding settings object. The following lists the
   * codec enum, settings object pairs. * H_264, H264Settings * H_265, H265Settings *
   * MPEG2, Mpeg2Settings * PRORES, ProresSettings * FRAME_CAPTURE,
   * FrameCaptureSettings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoCodecSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API VideoCodecSettings
  {
  public:
    VideoCodecSettings();
    VideoCodecSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    VideoCodecSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const VideoCodec& GetCodec() const{ return m_codec; }

    
    inline void SetCodec(const VideoCodec& value) { m_codecHasBeenSet = true; m_codec = value; }

    
    inline void SetCodec(VideoCodec&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }

    
    inline VideoCodecSettings& WithCodec(const VideoCodec& value) { SetCodec(value); return *this;}

    
    inline VideoCodecSettings& WithCodec(VideoCodec&& value) { SetCodec(std::move(value)); return *this;}


    
    inline const FrameCaptureSettings& GetFrameCaptureSettings() const{ return m_frameCaptureSettings; }

    
    inline void SetFrameCaptureSettings(const FrameCaptureSettings& value) { m_frameCaptureSettingsHasBeenSet = true; m_frameCaptureSettings = value; }

    
    inline void SetFrameCaptureSettings(FrameCaptureSettings&& value) { m_frameCaptureSettingsHasBeenSet = true; m_frameCaptureSettings = std::move(value); }

    
    inline VideoCodecSettings& WithFrameCaptureSettings(const FrameCaptureSettings& value) { SetFrameCaptureSettings(value); return *this;}

    
    inline VideoCodecSettings& WithFrameCaptureSettings(FrameCaptureSettings&& value) { SetFrameCaptureSettings(std::move(value)); return *this;}


    
    inline const H264Settings& GetH264Settings() const{ return m_h264Settings; }

    
    inline void SetH264Settings(const H264Settings& value) { m_h264SettingsHasBeenSet = true; m_h264Settings = value; }

    
    inline void SetH264Settings(H264Settings&& value) { m_h264SettingsHasBeenSet = true; m_h264Settings = std::move(value); }

    
    inline VideoCodecSettings& WithH264Settings(const H264Settings& value) { SetH264Settings(value); return *this;}

    
    inline VideoCodecSettings& WithH264Settings(H264Settings&& value) { SetH264Settings(std::move(value)); return *this;}


    
    inline const H265Settings& GetH265Settings() const{ return m_h265Settings; }

    
    inline void SetH265Settings(const H265Settings& value) { m_h265SettingsHasBeenSet = true; m_h265Settings = value; }

    
    inline void SetH265Settings(H265Settings&& value) { m_h265SettingsHasBeenSet = true; m_h265Settings = std::move(value); }

    
    inline VideoCodecSettings& WithH265Settings(const H265Settings& value) { SetH265Settings(value); return *this;}

    
    inline VideoCodecSettings& WithH265Settings(H265Settings&& value) { SetH265Settings(std::move(value)); return *this;}


    
    inline const Mpeg2Settings& GetMpeg2Settings() const{ return m_mpeg2Settings; }

    
    inline void SetMpeg2Settings(const Mpeg2Settings& value) { m_mpeg2SettingsHasBeenSet = true; m_mpeg2Settings = value; }

    
    inline void SetMpeg2Settings(Mpeg2Settings&& value) { m_mpeg2SettingsHasBeenSet = true; m_mpeg2Settings = std::move(value); }

    
    inline VideoCodecSettings& WithMpeg2Settings(const Mpeg2Settings& value) { SetMpeg2Settings(value); return *this;}

    
    inline VideoCodecSettings& WithMpeg2Settings(Mpeg2Settings&& value) { SetMpeg2Settings(std::move(value)); return *this;}


    
    inline const ProresSettings& GetProresSettings() const{ return m_proresSettings; }

    
    inline void SetProresSettings(const ProresSettings& value) { m_proresSettingsHasBeenSet = true; m_proresSettings = value; }

    
    inline void SetProresSettings(ProresSettings&& value) { m_proresSettingsHasBeenSet = true; m_proresSettings = std::move(value); }

    
    inline VideoCodecSettings& WithProresSettings(const ProresSettings& value) { SetProresSettings(value); return *this;}

    
    inline VideoCodecSettings& WithProresSettings(ProresSettings&& value) { SetProresSettings(std::move(value)); return *this;}

  private:

    VideoCodec m_codec;
    bool m_codecHasBeenSet;

    FrameCaptureSettings m_frameCaptureSettings;
    bool m_frameCaptureSettingsHasBeenSet;

    H264Settings m_h264Settings;
    bool m_h264SettingsHasBeenSet;

    H265Settings m_h265Settings;
    bool m_h265SettingsHasBeenSet;

    Mpeg2Settings m_mpeg2Settings;
    bool m_mpeg2SettingsHasBeenSet;

    ProresSettings m_proresSettings;
    bool m_proresSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
