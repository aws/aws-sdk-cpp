/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ArchiveGroupSettings.h>
#include <aws/medialive/model/FrameCaptureGroupSettings.h>
#include <aws/medialive/model/HlsGroupSettings.h>
#include <aws/medialive/model/MediaPackageGroupSettings.h>
#include <aws/medialive/model/MsSmoothGroupSettings.h>
#include <aws/medialive/model/MultiplexGroupSettings.h>
#include <aws/medialive/model/RtmpGroupSettings.h>
#include <aws/medialive/model/UdpGroupSettings.h>
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
   * Output Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputGroupSettings">AWS
   * API Reference</a></p>
   */
  class OutputGroupSettings
  {
  public:
    AWS_MEDIALIVE_API OutputGroupSettings();
    AWS_MEDIALIVE_API OutputGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API OutputGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ArchiveGroupSettings& GetArchiveGroupSettings() const{ return m_archiveGroupSettings; }

    
    inline bool ArchiveGroupSettingsHasBeenSet() const { return m_archiveGroupSettingsHasBeenSet; }

    
    inline void SetArchiveGroupSettings(const ArchiveGroupSettings& value) { m_archiveGroupSettingsHasBeenSet = true; m_archiveGroupSettings = value; }

    
    inline void SetArchiveGroupSettings(ArchiveGroupSettings&& value) { m_archiveGroupSettingsHasBeenSet = true; m_archiveGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithArchiveGroupSettings(const ArchiveGroupSettings& value) { SetArchiveGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithArchiveGroupSettings(ArchiveGroupSettings&& value) { SetArchiveGroupSettings(std::move(value)); return *this;}


    
    inline const FrameCaptureGroupSettings& GetFrameCaptureGroupSettings() const{ return m_frameCaptureGroupSettings; }

    
    inline bool FrameCaptureGroupSettingsHasBeenSet() const { return m_frameCaptureGroupSettingsHasBeenSet; }

    
    inline void SetFrameCaptureGroupSettings(const FrameCaptureGroupSettings& value) { m_frameCaptureGroupSettingsHasBeenSet = true; m_frameCaptureGroupSettings = value; }

    
    inline void SetFrameCaptureGroupSettings(FrameCaptureGroupSettings&& value) { m_frameCaptureGroupSettingsHasBeenSet = true; m_frameCaptureGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithFrameCaptureGroupSettings(const FrameCaptureGroupSettings& value) { SetFrameCaptureGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithFrameCaptureGroupSettings(FrameCaptureGroupSettings&& value) { SetFrameCaptureGroupSettings(std::move(value)); return *this;}


    
    inline const HlsGroupSettings& GetHlsGroupSettings() const{ return m_hlsGroupSettings; }

    
    inline bool HlsGroupSettingsHasBeenSet() const { return m_hlsGroupSettingsHasBeenSet; }

    
    inline void SetHlsGroupSettings(const HlsGroupSettings& value) { m_hlsGroupSettingsHasBeenSet = true; m_hlsGroupSettings = value; }

    
    inline void SetHlsGroupSettings(HlsGroupSettings&& value) { m_hlsGroupSettingsHasBeenSet = true; m_hlsGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithHlsGroupSettings(const HlsGroupSettings& value) { SetHlsGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithHlsGroupSettings(HlsGroupSettings&& value) { SetHlsGroupSettings(std::move(value)); return *this;}


    
    inline const MediaPackageGroupSettings& GetMediaPackageGroupSettings() const{ return m_mediaPackageGroupSettings; }

    
    inline bool MediaPackageGroupSettingsHasBeenSet() const { return m_mediaPackageGroupSettingsHasBeenSet; }

    
    inline void SetMediaPackageGroupSettings(const MediaPackageGroupSettings& value) { m_mediaPackageGroupSettingsHasBeenSet = true; m_mediaPackageGroupSettings = value; }

    
    inline void SetMediaPackageGroupSettings(MediaPackageGroupSettings&& value) { m_mediaPackageGroupSettingsHasBeenSet = true; m_mediaPackageGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithMediaPackageGroupSettings(const MediaPackageGroupSettings& value) { SetMediaPackageGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithMediaPackageGroupSettings(MediaPackageGroupSettings&& value) { SetMediaPackageGroupSettings(std::move(value)); return *this;}


    
    inline const MsSmoothGroupSettings& GetMsSmoothGroupSettings() const{ return m_msSmoothGroupSettings; }

    
    inline bool MsSmoothGroupSettingsHasBeenSet() const { return m_msSmoothGroupSettingsHasBeenSet; }

    
    inline void SetMsSmoothGroupSettings(const MsSmoothGroupSettings& value) { m_msSmoothGroupSettingsHasBeenSet = true; m_msSmoothGroupSettings = value; }

    
    inline void SetMsSmoothGroupSettings(MsSmoothGroupSettings&& value) { m_msSmoothGroupSettingsHasBeenSet = true; m_msSmoothGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithMsSmoothGroupSettings(const MsSmoothGroupSettings& value) { SetMsSmoothGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithMsSmoothGroupSettings(MsSmoothGroupSettings&& value) { SetMsSmoothGroupSettings(std::move(value)); return *this;}


    
    inline const MultiplexGroupSettings& GetMultiplexGroupSettings() const{ return m_multiplexGroupSettings; }

    
    inline bool MultiplexGroupSettingsHasBeenSet() const { return m_multiplexGroupSettingsHasBeenSet; }

    
    inline void SetMultiplexGroupSettings(const MultiplexGroupSettings& value) { m_multiplexGroupSettingsHasBeenSet = true; m_multiplexGroupSettings = value; }

    
    inline void SetMultiplexGroupSettings(MultiplexGroupSettings&& value) { m_multiplexGroupSettingsHasBeenSet = true; m_multiplexGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithMultiplexGroupSettings(const MultiplexGroupSettings& value) { SetMultiplexGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithMultiplexGroupSettings(MultiplexGroupSettings&& value) { SetMultiplexGroupSettings(std::move(value)); return *this;}


    
    inline const RtmpGroupSettings& GetRtmpGroupSettings() const{ return m_rtmpGroupSettings; }

    
    inline bool RtmpGroupSettingsHasBeenSet() const { return m_rtmpGroupSettingsHasBeenSet; }

    
    inline void SetRtmpGroupSettings(const RtmpGroupSettings& value) { m_rtmpGroupSettingsHasBeenSet = true; m_rtmpGroupSettings = value; }

    
    inline void SetRtmpGroupSettings(RtmpGroupSettings&& value) { m_rtmpGroupSettingsHasBeenSet = true; m_rtmpGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithRtmpGroupSettings(const RtmpGroupSettings& value) { SetRtmpGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithRtmpGroupSettings(RtmpGroupSettings&& value) { SetRtmpGroupSettings(std::move(value)); return *this;}


    
    inline const UdpGroupSettings& GetUdpGroupSettings() const{ return m_udpGroupSettings; }

    
    inline bool UdpGroupSettingsHasBeenSet() const { return m_udpGroupSettingsHasBeenSet; }

    
    inline void SetUdpGroupSettings(const UdpGroupSettings& value) { m_udpGroupSettingsHasBeenSet = true; m_udpGroupSettings = value; }

    
    inline void SetUdpGroupSettings(UdpGroupSettings&& value) { m_udpGroupSettingsHasBeenSet = true; m_udpGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithUdpGroupSettings(const UdpGroupSettings& value) { SetUdpGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithUdpGroupSettings(UdpGroupSettings&& value) { SetUdpGroupSettings(std::move(value)); return *this;}

  private:

    ArchiveGroupSettings m_archiveGroupSettings;
    bool m_archiveGroupSettingsHasBeenSet = false;

    FrameCaptureGroupSettings m_frameCaptureGroupSettings;
    bool m_frameCaptureGroupSettingsHasBeenSet = false;

    HlsGroupSettings m_hlsGroupSettings;
    bool m_hlsGroupSettingsHasBeenSet = false;

    MediaPackageGroupSettings m_mediaPackageGroupSettings;
    bool m_mediaPackageGroupSettingsHasBeenSet = false;

    MsSmoothGroupSettings m_msSmoothGroupSettings;
    bool m_msSmoothGroupSettingsHasBeenSet = false;

    MultiplexGroupSettings m_multiplexGroupSettings;
    bool m_multiplexGroupSettingsHasBeenSet = false;

    RtmpGroupSettings m_rtmpGroupSettings;
    bool m_rtmpGroupSettingsHasBeenSet = false;

    UdpGroupSettings m_udpGroupSettings;
    bool m_udpGroupSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
