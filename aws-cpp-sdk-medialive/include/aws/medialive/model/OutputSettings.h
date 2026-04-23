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
#include <aws/medialive/model/ArchiveOutputSettings.h>
#include <aws/medialive/model/FrameCaptureOutputSettings.h>
#include <aws/medialive/model/HlsOutputSettings.h>
#include <aws/medialive/model/MediaPackageOutputSettings.h>
#include <aws/medialive/model/MsSmoothOutputSettings.h>
#include <aws/medialive/model/RtmpOutputSettings.h>
#include <aws/medialive/model/UdpOutputSettings.h>
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
   * Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API OutputSettings
  {
  public:
    OutputSettings();
    OutputSettings(Aws::Utils::Json::JsonView jsonValue);
    OutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ArchiveOutputSettings& GetArchiveOutputSettings() const{ return m_archiveOutputSettings; }

    
    inline bool ArchiveOutputSettingsHasBeenSet() const { return m_archiveOutputSettingsHasBeenSet; }

    
    inline void SetArchiveOutputSettings(const ArchiveOutputSettings& value) { m_archiveOutputSettingsHasBeenSet = true; m_archiveOutputSettings = value; }

    
    inline void SetArchiveOutputSettings(ArchiveOutputSettings&& value) { m_archiveOutputSettingsHasBeenSet = true; m_archiveOutputSettings = std::move(value); }

    
    inline OutputSettings& WithArchiveOutputSettings(const ArchiveOutputSettings& value) { SetArchiveOutputSettings(value); return *this;}

    
    inline OutputSettings& WithArchiveOutputSettings(ArchiveOutputSettings&& value) { SetArchiveOutputSettings(std::move(value)); return *this;}


    
    inline const FrameCaptureOutputSettings& GetFrameCaptureOutputSettings() const{ return m_frameCaptureOutputSettings; }

    
    inline bool FrameCaptureOutputSettingsHasBeenSet() const { return m_frameCaptureOutputSettingsHasBeenSet; }

    
    inline void SetFrameCaptureOutputSettings(const FrameCaptureOutputSettings& value) { m_frameCaptureOutputSettingsHasBeenSet = true; m_frameCaptureOutputSettings = value; }

    
    inline void SetFrameCaptureOutputSettings(FrameCaptureOutputSettings&& value) { m_frameCaptureOutputSettingsHasBeenSet = true; m_frameCaptureOutputSettings = std::move(value); }

    
    inline OutputSettings& WithFrameCaptureOutputSettings(const FrameCaptureOutputSettings& value) { SetFrameCaptureOutputSettings(value); return *this;}

    
    inline OutputSettings& WithFrameCaptureOutputSettings(FrameCaptureOutputSettings&& value) { SetFrameCaptureOutputSettings(std::move(value)); return *this;}


    
    inline const HlsOutputSettings& GetHlsOutputSettings() const{ return m_hlsOutputSettings; }

    
    inline bool HlsOutputSettingsHasBeenSet() const { return m_hlsOutputSettingsHasBeenSet; }

    
    inline void SetHlsOutputSettings(const HlsOutputSettings& value) { m_hlsOutputSettingsHasBeenSet = true; m_hlsOutputSettings = value; }

    
    inline void SetHlsOutputSettings(HlsOutputSettings&& value) { m_hlsOutputSettingsHasBeenSet = true; m_hlsOutputSettings = std::move(value); }

    
    inline OutputSettings& WithHlsOutputSettings(const HlsOutputSettings& value) { SetHlsOutputSettings(value); return *this;}

    
    inline OutputSettings& WithHlsOutputSettings(HlsOutputSettings&& value) { SetHlsOutputSettings(std::move(value)); return *this;}


    
    inline const MediaPackageOutputSettings& GetMediaPackageOutputSettings() const{ return m_mediaPackageOutputSettings; }

    
    inline bool MediaPackageOutputSettingsHasBeenSet() const { return m_mediaPackageOutputSettingsHasBeenSet; }

    
    inline void SetMediaPackageOutputSettings(const MediaPackageOutputSettings& value) { m_mediaPackageOutputSettingsHasBeenSet = true; m_mediaPackageOutputSettings = value; }

    
    inline void SetMediaPackageOutputSettings(MediaPackageOutputSettings&& value) { m_mediaPackageOutputSettingsHasBeenSet = true; m_mediaPackageOutputSettings = std::move(value); }

    
    inline OutputSettings& WithMediaPackageOutputSettings(const MediaPackageOutputSettings& value) { SetMediaPackageOutputSettings(value); return *this;}

    
    inline OutputSettings& WithMediaPackageOutputSettings(MediaPackageOutputSettings&& value) { SetMediaPackageOutputSettings(std::move(value)); return *this;}


    
    inline const MsSmoothOutputSettings& GetMsSmoothOutputSettings() const{ return m_msSmoothOutputSettings; }

    
    inline bool MsSmoothOutputSettingsHasBeenSet() const { return m_msSmoothOutputSettingsHasBeenSet; }

    
    inline void SetMsSmoothOutputSettings(const MsSmoothOutputSettings& value) { m_msSmoothOutputSettingsHasBeenSet = true; m_msSmoothOutputSettings = value; }

    
    inline void SetMsSmoothOutputSettings(MsSmoothOutputSettings&& value) { m_msSmoothOutputSettingsHasBeenSet = true; m_msSmoothOutputSettings = std::move(value); }

    
    inline OutputSettings& WithMsSmoothOutputSettings(const MsSmoothOutputSettings& value) { SetMsSmoothOutputSettings(value); return *this;}

    
    inline OutputSettings& WithMsSmoothOutputSettings(MsSmoothOutputSettings&& value) { SetMsSmoothOutputSettings(std::move(value)); return *this;}


    
    inline const RtmpOutputSettings& GetRtmpOutputSettings() const{ return m_rtmpOutputSettings; }

    
    inline bool RtmpOutputSettingsHasBeenSet() const { return m_rtmpOutputSettingsHasBeenSet; }

    
    inline void SetRtmpOutputSettings(const RtmpOutputSettings& value) { m_rtmpOutputSettingsHasBeenSet = true; m_rtmpOutputSettings = value; }

    
    inline void SetRtmpOutputSettings(RtmpOutputSettings&& value) { m_rtmpOutputSettingsHasBeenSet = true; m_rtmpOutputSettings = std::move(value); }

    
    inline OutputSettings& WithRtmpOutputSettings(const RtmpOutputSettings& value) { SetRtmpOutputSettings(value); return *this;}

    
    inline OutputSettings& WithRtmpOutputSettings(RtmpOutputSettings&& value) { SetRtmpOutputSettings(std::move(value)); return *this;}


    
    inline const UdpOutputSettings& GetUdpOutputSettings() const{ return m_udpOutputSettings; }

    
    inline bool UdpOutputSettingsHasBeenSet() const { return m_udpOutputSettingsHasBeenSet; }

    
    inline void SetUdpOutputSettings(const UdpOutputSettings& value) { m_udpOutputSettingsHasBeenSet = true; m_udpOutputSettings = value; }

    
    inline void SetUdpOutputSettings(UdpOutputSettings&& value) { m_udpOutputSettingsHasBeenSet = true; m_udpOutputSettings = std::move(value); }

    
    inline OutputSettings& WithUdpOutputSettings(const UdpOutputSettings& value) { SetUdpOutputSettings(value); return *this;}

    
    inline OutputSettings& WithUdpOutputSettings(UdpOutputSettings&& value) { SetUdpOutputSettings(std::move(value)); return *this;}

  private:

    ArchiveOutputSettings m_archiveOutputSettings;
    bool m_archiveOutputSettingsHasBeenSet;

    FrameCaptureOutputSettings m_frameCaptureOutputSettings;
    bool m_frameCaptureOutputSettingsHasBeenSet;

    HlsOutputSettings m_hlsOutputSettings;
    bool m_hlsOutputSettingsHasBeenSet;

    MediaPackageOutputSettings m_mediaPackageOutputSettings;
    bool m_mediaPackageOutputSettingsHasBeenSet;

    MsSmoothOutputSettings m_msSmoothOutputSettings;
    bool m_msSmoothOutputSettingsHasBeenSet;

    RtmpOutputSettings m_rtmpOutputSettings;
    bool m_rtmpOutputSettingsHasBeenSet;

    UdpOutputSettings m_udpOutputSettings;
    bool m_udpOutputSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
