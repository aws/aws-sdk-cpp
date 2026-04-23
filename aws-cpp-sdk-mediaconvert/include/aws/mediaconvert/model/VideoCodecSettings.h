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
  class JsonView;
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
    VideoCodecSettings(Aws::Utils::Json::JsonView jsonValue);
    VideoCodecSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies the video codec. This must be equal to one of the enum values defined
     * by the object  VideoCodec.
     */
    inline const VideoCodec& GetCodec() const{ return m_codec; }

    /**
     * Specifies the video codec. This must be equal to one of the enum values defined
     * by the object  VideoCodec.
     */
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }

    /**
     * Specifies the video codec. This must be equal to one of the enum values defined
     * by the object  VideoCodec.
     */
    inline void SetCodec(const VideoCodec& value) { m_codecHasBeenSet = true; m_codec = value; }

    /**
     * Specifies the video codec. This must be equal to one of the enum values defined
     * by the object  VideoCodec.
     */
    inline void SetCodec(VideoCodec&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }

    /**
     * Specifies the video codec. This must be equal to one of the enum values defined
     * by the object  VideoCodec.
     */
    inline VideoCodecSettings& WithCodec(const VideoCodec& value) { SetCodec(value); return *this;}

    /**
     * Specifies the video codec. This must be equal to one of the enum values defined
     * by the object  VideoCodec.
     */
    inline VideoCodecSettings& WithCodec(VideoCodec&& value) { SetCodec(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value FRAME_CAPTURE.
     */
    inline const FrameCaptureSettings& GetFrameCaptureSettings() const{ return m_frameCaptureSettings; }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value FRAME_CAPTURE.
     */
    inline bool FrameCaptureSettingsHasBeenSet() const { return m_frameCaptureSettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value FRAME_CAPTURE.
     */
    inline void SetFrameCaptureSettings(const FrameCaptureSettings& value) { m_frameCaptureSettingsHasBeenSet = true; m_frameCaptureSettings = value; }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value FRAME_CAPTURE.
     */
    inline void SetFrameCaptureSettings(FrameCaptureSettings&& value) { m_frameCaptureSettingsHasBeenSet = true; m_frameCaptureSettings = std::move(value); }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value FRAME_CAPTURE.
     */
    inline VideoCodecSettings& WithFrameCaptureSettings(const FrameCaptureSettings& value) { SetFrameCaptureSettings(value); return *this;}

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value FRAME_CAPTURE.
     */
    inline VideoCodecSettings& WithFrameCaptureSettings(FrameCaptureSettings&& value) { SetFrameCaptureSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value H_264.
     */
    inline const H264Settings& GetH264Settings() const{ return m_h264Settings; }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value H_264.
     */
    inline bool H264SettingsHasBeenSet() const { return m_h264SettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value H_264.
     */
    inline void SetH264Settings(const H264Settings& value) { m_h264SettingsHasBeenSet = true; m_h264Settings = value; }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value H_264.
     */
    inline void SetH264Settings(H264Settings&& value) { m_h264SettingsHasBeenSet = true; m_h264Settings = std::move(value); }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value H_264.
     */
    inline VideoCodecSettings& WithH264Settings(const H264Settings& value) { SetH264Settings(value); return *this;}

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value H_264.
     */
    inline VideoCodecSettings& WithH264Settings(H264Settings&& value) { SetH264Settings(std::move(value)); return *this;}


    /**
     * Settings for H265 codec
     */
    inline const H265Settings& GetH265Settings() const{ return m_h265Settings; }

    /**
     * Settings for H265 codec
     */
    inline bool H265SettingsHasBeenSet() const { return m_h265SettingsHasBeenSet; }

    /**
     * Settings for H265 codec
     */
    inline void SetH265Settings(const H265Settings& value) { m_h265SettingsHasBeenSet = true; m_h265Settings = value; }

    /**
     * Settings for H265 codec
     */
    inline void SetH265Settings(H265Settings&& value) { m_h265SettingsHasBeenSet = true; m_h265Settings = std::move(value); }

    /**
     * Settings for H265 codec
     */
    inline VideoCodecSettings& WithH265Settings(const H265Settings& value) { SetH265Settings(value); return *this;}

    /**
     * Settings for H265 codec
     */
    inline VideoCodecSettings& WithH265Settings(H265Settings&& value) { SetH265Settings(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value MPEG2.
     */
    inline const Mpeg2Settings& GetMpeg2Settings() const{ return m_mpeg2Settings; }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value MPEG2.
     */
    inline bool Mpeg2SettingsHasBeenSet() const { return m_mpeg2SettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value MPEG2.
     */
    inline void SetMpeg2Settings(const Mpeg2Settings& value) { m_mpeg2SettingsHasBeenSet = true; m_mpeg2Settings = value; }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value MPEG2.
     */
    inline void SetMpeg2Settings(Mpeg2Settings&& value) { m_mpeg2SettingsHasBeenSet = true; m_mpeg2Settings = std::move(value); }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value MPEG2.
     */
    inline VideoCodecSettings& WithMpeg2Settings(const Mpeg2Settings& value) { SetMpeg2Settings(value); return *this;}

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value MPEG2.
     */
    inline VideoCodecSettings& WithMpeg2Settings(Mpeg2Settings&& value) { SetMpeg2Settings(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value PRORES.
     */
    inline const ProresSettings& GetProresSettings() const{ return m_proresSettings; }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value PRORES.
     */
    inline bool ProresSettingsHasBeenSet() const { return m_proresSettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value PRORES.
     */
    inline void SetProresSettings(const ProresSettings& value) { m_proresSettingsHasBeenSet = true; m_proresSettings = value; }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value PRORES.
     */
    inline void SetProresSettings(ProresSettings&& value) { m_proresSettingsHasBeenSet = true; m_proresSettings = std::move(value); }

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value PRORES.
     */
    inline VideoCodecSettings& WithProresSettings(const ProresSettings& value) { SetProresSettings(value); return *this;}

    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value PRORES.
     */
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
