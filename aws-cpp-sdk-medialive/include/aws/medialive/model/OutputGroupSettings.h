﻿/*
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
#include <aws/medialive/model/ArchiveGroupSettings.h>
#include <aws/medialive/model/HlsGroupSettings.h>
#include <aws/medialive/model/MsSmoothGroupSettings.h>
#include <aws/medialive/model/UdpGroupSettings.h>
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
   * Placeholder documentation for OutputGroupSettings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API OutputGroupSettings
  {
  public:
    OutputGroupSettings();
    OutputGroupSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    OutputGroupSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ArchiveGroupSettings& GetArchiveGroupSettings() const{ return m_archiveGroupSettings; }

    
    inline void SetArchiveGroupSettings(const ArchiveGroupSettings& value) { m_archiveGroupSettingsHasBeenSet = true; m_archiveGroupSettings = value; }

    
    inline void SetArchiveGroupSettings(ArchiveGroupSettings&& value) { m_archiveGroupSettingsHasBeenSet = true; m_archiveGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithArchiveGroupSettings(const ArchiveGroupSettings& value) { SetArchiveGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithArchiveGroupSettings(ArchiveGroupSettings&& value) { SetArchiveGroupSettings(std::move(value)); return *this;}


    
    inline const HlsGroupSettings& GetHlsGroupSettings() const{ return m_hlsGroupSettings; }

    
    inline void SetHlsGroupSettings(const HlsGroupSettings& value) { m_hlsGroupSettingsHasBeenSet = true; m_hlsGroupSettings = value; }

    
    inline void SetHlsGroupSettings(HlsGroupSettings&& value) { m_hlsGroupSettingsHasBeenSet = true; m_hlsGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithHlsGroupSettings(const HlsGroupSettings& value) { SetHlsGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithHlsGroupSettings(HlsGroupSettings&& value) { SetHlsGroupSettings(std::move(value)); return *this;}


    
    inline const MsSmoothGroupSettings& GetMsSmoothGroupSettings() const{ return m_msSmoothGroupSettings; }

    
    inline void SetMsSmoothGroupSettings(const MsSmoothGroupSettings& value) { m_msSmoothGroupSettingsHasBeenSet = true; m_msSmoothGroupSettings = value; }

    
    inline void SetMsSmoothGroupSettings(MsSmoothGroupSettings&& value) { m_msSmoothGroupSettingsHasBeenSet = true; m_msSmoothGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithMsSmoothGroupSettings(const MsSmoothGroupSettings& value) { SetMsSmoothGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithMsSmoothGroupSettings(MsSmoothGroupSettings&& value) { SetMsSmoothGroupSettings(std::move(value)); return *this;}


    
    inline const UdpGroupSettings& GetUdpGroupSettings() const{ return m_udpGroupSettings; }

    
    inline void SetUdpGroupSettings(const UdpGroupSettings& value) { m_udpGroupSettingsHasBeenSet = true; m_udpGroupSettings = value; }

    
    inline void SetUdpGroupSettings(UdpGroupSettings&& value) { m_udpGroupSettingsHasBeenSet = true; m_udpGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithUdpGroupSettings(const UdpGroupSettings& value) { SetUdpGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithUdpGroupSettings(UdpGroupSettings&& value) { SetUdpGroupSettings(std::move(value)); return *this;}

  private:

    ArchiveGroupSettings m_archiveGroupSettings;
    bool m_archiveGroupSettingsHasBeenSet;

    HlsGroupSettings m_hlsGroupSettings;
    bool m_hlsGroupSettingsHasBeenSet;

    MsSmoothGroupSettings m_msSmoothGroupSettings;
    bool m_msSmoothGroupSettingsHasBeenSet;

    UdpGroupSettings m_udpGroupSettings;
    bool m_udpGroupSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
