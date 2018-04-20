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
#include <aws/medialive/model/HlsOutputSettings.h>
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
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for OutputSettings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API OutputSettings
  {
  public:
    OutputSettings();
    OutputSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    OutputSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ArchiveOutputSettings& GetArchiveOutputSettings() const{ return m_archiveOutputSettings; }

    
    inline void SetArchiveOutputSettings(const ArchiveOutputSettings& value) { m_archiveOutputSettingsHasBeenSet = true; m_archiveOutputSettings = value; }

    
    inline void SetArchiveOutputSettings(ArchiveOutputSettings&& value) { m_archiveOutputSettingsHasBeenSet = true; m_archiveOutputSettings = std::move(value); }

    
    inline OutputSettings& WithArchiveOutputSettings(const ArchiveOutputSettings& value) { SetArchiveOutputSettings(value); return *this;}

    
    inline OutputSettings& WithArchiveOutputSettings(ArchiveOutputSettings&& value) { SetArchiveOutputSettings(std::move(value)); return *this;}


    
    inline const HlsOutputSettings& GetHlsOutputSettings() const{ return m_hlsOutputSettings; }

    
    inline void SetHlsOutputSettings(const HlsOutputSettings& value) { m_hlsOutputSettingsHasBeenSet = true; m_hlsOutputSettings = value; }

    
    inline void SetHlsOutputSettings(HlsOutputSettings&& value) { m_hlsOutputSettingsHasBeenSet = true; m_hlsOutputSettings = std::move(value); }

    
    inline OutputSettings& WithHlsOutputSettings(const HlsOutputSettings& value) { SetHlsOutputSettings(value); return *this;}

    
    inline OutputSettings& WithHlsOutputSettings(HlsOutputSettings&& value) { SetHlsOutputSettings(std::move(value)); return *this;}


    
    inline const MsSmoothOutputSettings& GetMsSmoothOutputSettings() const{ return m_msSmoothOutputSettings; }

    
    inline void SetMsSmoothOutputSettings(const MsSmoothOutputSettings& value) { m_msSmoothOutputSettingsHasBeenSet = true; m_msSmoothOutputSettings = value; }

    
    inline void SetMsSmoothOutputSettings(MsSmoothOutputSettings&& value) { m_msSmoothOutputSettingsHasBeenSet = true; m_msSmoothOutputSettings = std::move(value); }

    
    inline OutputSettings& WithMsSmoothOutputSettings(const MsSmoothOutputSettings& value) { SetMsSmoothOutputSettings(value); return *this;}

    
    inline OutputSettings& WithMsSmoothOutputSettings(MsSmoothOutputSettings&& value) { SetMsSmoothOutputSettings(std::move(value)); return *this;}


    
    inline const RtmpOutputSettings& GetRtmpOutputSettings() const{ return m_rtmpOutputSettings; }

    
    inline void SetRtmpOutputSettings(const RtmpOutputSettings& value) { m_rtmpOutputSettingsHasBeenSet = true; m_rtmpOutputSettings = value; }

    
    inline void SetRtmpOutputSettings(RtmpOutputSettings&& value) { m_rtmpOutputSettingsHasBeenSet = true; m_rtmpOutputSettings = std::move(value); }

    
    inline OutputSettings& WithRtmpOutputSettings(const RtmpOutputSettings& value) { SetRtmpOutputSettings(value); return *this;}

    
    inline OutputSettings& WithRtmpOutputSettings(RtmpOutputSettings&& value) { SetRtmpOutputSettings(std::move(value)); return *this;}


    
    inline const UdpOutputSettings& GetUdpOutputSettings() const{ return m_udpOutputSettings; }

    
    inline void SetUdpOutputSettings(const UdpOutputSettings& value) { m_udpOutputSettingsHasBeenSet = true; m_udpOutputSettings = value; }

    
    inline void SetUdpOutputSettings(UdpOutputSettings&& value) { m_udpOutputSettingsHasBeenSet = true; m_udpOutputSettings = std::move(value); }

    
    inline OutputSettings& WithUdpOutputSettings(const UdpOutputSettings& value) { SetUdpOutputSettings(value); return *this;}

    
    inline OutputSettings& WithUdpOutputSettings(UdpOutputSettings&& value) { SetUdpOutputSettings(std::move(value)); return *this;}

  private:

    ArchiveOutputSettings m_archiveOutputSettings;
    bool m_archiveOutputSettingsHasBeenSet;

    HlsOutputSettings m_hlsOutputSettings;
    bool m_hlsOutputSettingsHasBeenSet;

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
