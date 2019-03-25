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
#include <aws/mediaconvert/model/CmafGroupSettings.h>
#include <aws/mediaconvert/model/DashIsoGroupSettings.h>
#include <aws/mediaconvert/model/FileGroupSettings.h>
#include <aws/mediaconvert/model/HlsGroupSettings.h>
#include <aws/mediaconvert/model/MsSmoothGroupSettings.h>
#include <aws/mediaconvert/model/OutputGroupType.h>
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
   * Output Group settings, including type<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OutputGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API OutputGroupSettings
  {
  public:
    OutputGroupSettings();
    OutputGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    OutputGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * CMAF_GROUP_SETTINGS. Each output in a CMAF Output Group may only contain a
     * single video, audio, or caption output.
     */
    inline const CmafGroupSettings& GetCmafGroupSettings() const{ return m_cmafGroupSettings; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * CMAF_GROUP_SETTINGS. Each output in a CMAF Output Group may only contain a
     * single video, audio, or caption output.
     */
    inline bool CmafGroupSettingsHasBeenSet() const { return m_cmafGroupSettingsHasBeenSet; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * CMAF_GROUP_SETTINGS. Each output in a CMAF Output Group may only contain a
     * single video, audio, or caption output.
     */
    inline void SetCmafGroupSettings(const CmafGroupSettings& value) { m_cmafGroupSettingsHasBeenSet = true; m_cmafGroupSettings = value; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * CMAF_GROUP_SETTINGS. Each output in a CMAF Output Group may only contain a
     * single video, audio, or caption output.
     */
    inline void SetCmafGroupSettings(CmafGroupSettings&& value) { m_cmafGroupSettingsHasBeenSet = true; m_cmafGroupSettings = std::move(value); }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * CMAF_GROUP_SETTINGS. Each output in a CMAF Output Group may only contain a
     * single video, audio, or caption output.
     */
    inline OutputGroupSettings& WithCmafGroupSettings(const CmafGroupSettings& value) { SetCmafGroupSettings(value); return *this;}

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * CMAF_GROUP_SETTINGS. Each output in a CMAF Output Group may only contain a
     * single video, audio, or caption output.
     */
    inline OutputGroupSettings& WithCmafGroupSettings(CmafGroupSettings&& value) { SetCmafGroupSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * DASH_ISO_GROUP_SETTINGS.
     */
    inline const DashIsoGroupSettings& GetDashIsoGroupSettings() const{ return m_dashIsoGroupSettings; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * DASH_ISO_GROUP_SETTINGS.
     */
    inline bool DashIsoGroupSettingsHasBeenSet() const { return m_dashIsoGroupSettingsHasBeenSet; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * DASH_ISO_GROUP_SETTINGS.
     */
    inline void SetDashIsoGroupSettings(const DashIsoGroupSettings& value) { m_dashIsoGroupSettingsHasBeenSet = true; m_dashIsoGroupSettings = value; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * DASH_ISO_GROUP_SETTINGS.
     */
    inline void SetDashIsoGroupSettings(DashIsoGroupSettings&& value) { m_dashIsoGroupSettingsHasBeenSet = true; m_dashIsoGroupSettings = std::move(value); }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * DASH_ISO_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithDashIsoGroupSettings(const DashIsoGroupSettings& value) { SetDashIsoGroupSettings(value); return *this;}

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * DASH_ISO_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithDashIsoGroupSettings(DashIsoGroupSettings&& value) { SetDashIsoGroupSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * FILE_GROUP_SETTINGS.
     */
    inline const FileGroupSettings& GetFileGroupSettings() const{ return m_fileGroupSettings; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * FILE_GROUP_SETTINGS.
     */
    inline bool FileGroupSettingsHasBeenSet() const { return m_fileGroupSettingsHasBeenSet; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * FILE_GROUP_SETTINGS.
     */
    inline void SetFileGroupSettings(const FileGroupSettings& value) { m_fileGroupSettingsHasBeenSet = true; m_fileGroupSettings = value; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * FILE_GROUP_SETTINGS.
     */
    inline void SetFileGroupSettings(FileGroupSettings&& value) { m_fileGroupSettingsHasBeenSet = true; m_fileGroupSettings = std::move(value); }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * FILE_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithFileGroupSettings(const FileGroupSettings& value) { SetFileGroupSettings(value); return *this;}

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * FILE_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithFileGroupSettings(FileGroupSettings&& value) { SetFileGroupSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * HLS_GROUP_SETTINGS.
     */
    inline const HlsGroupSettings& GetHlsGroupSettings() const{ return m_hlsGroupSettings; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * HLS_GROUP_SETTINGS.
     */
    inline bool HlsGroupSettingsHasBeenSet() const { return m_hlsGroupSettingsHasBeenSet; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * HLS_GROUP_SETTINGS.
     */
    inline void SetHlsGroupSettings(const HlsGroupSettings& value) { m_hlsGroupSettingsHasBeenSet = true; m_hlsGroupSettings = value; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * HLS_GROUP_SETTINGS.
     */
    inline void SetHlsGroupSettings(HlsGroupSettings&& value) { m_hlsGroupSettingsHasBeenSet = true; m_hlsGroupSettings = std::move(value); }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * HLS_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithHlsGroupSettings(const HlsGroupSettings& value) { SetHlsGroupSettings(value); return *this;}

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * HLS_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithHlsGroupSettings(HlsGroupSettings&& value) { SetHlsGroupSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * MS_SMOOTH_GROUP_SETTINGS.
     */
    inline const MsSmoothGroupSettings& GetMsSmoothGroupSettings() const{ return m_msSmoothGroupSettings; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * MS_SMOOTH_GROUP_SETTINGS.
     */
    inline bool MsSmoothGroupSettingsHasBeenSet() const { return m_msSmoothGroupSettingsHasBeenSet; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * MS_SMOOTH_GROUP_SETTINGS.
     */
    inline void SetMsSmoothGroupSettings(const MsSmoothGroupSettings& value) { m_msSmoothGroupSettingsHasBeenSet = true; m_msSmoothGroupSettings = value; }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * MS_SMOOTH_GROUP_SETTINGS.
     */
    inline void SetMsSmoothGroupSettings(MsSmoothGroupSettings&& value) { m_msSmoothGroupSettingsHasBeenSet = true; m_msSmoothGroupSettings = std::move(value); }

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * MS_SMOOTH_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithMsSmoothGroupSettings(const MsSmoothGroupSettings& value) { SetMsSmoothGroupSettings(value); return *this;}

    /**
     * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
     * MS_SMOOTH_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithMsSmoothGroupSettings(MsSmoothGroupSettings&& value) { SetMsSmoothGroupSettings(std::move(value)); return *this;}


    /**
     * Type of output group (File group, Apple HLS, DASH ISO, Microsoft Smooth
     * Streaming, CMAF)
     */
    inline const OutputGroupType& GetType() const{ return m_type; }

    /**
     * Type of output group (File group, Apple HLS, DASH ISO, Microsoft Smooth
     * Streaming, CMAF)
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * Type of output group (File group, Apple HLS, DASH ISO, Microsoft Smooth
     * Streaming, CMAF)
     */
    inline void SetType(const OutputGroupType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * Type of output group (File group, Apple HLS, DASH ISO, Microsoft Smooth
     * Streaming, CMAF)
     */
    inline void SetType(OutputGroupType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * Type of output group (File group, Apple HLS, DASH ISO, Microsoft Smooth
     * Streaming, CMAF)
     */
    inline OutputGroupSettings& WithType(const OutputGroupType& value) { SetType(value); return *this;}

    /**
     * Type of output group (File group, Apple HLS, DASH ISO, Microsoft Smooth
     * Streaming, CMAF)
     */
    inline OutputGroupSettings& WithType(OutputGroupType&& value) { SetType(std::move(value)); return *this;}

  private:

    CmafGroupSettings m_cmafGroupSettings;
    bool m_cmafGroupSettingsHasBeenSet;

    DashIsoGroupSettings m_dashIsoGroupSettings;
    bool m_dashIsoGroupSettingsHasBeenSet;

    FileGroupSettings m_fileGroupSettings;
    bool m_fileGroupSettingsHasBeenSet;

    HlsGroupSettings m_hlsGroupSettings;
    bool m_hlsGroupSettingsHasBeenSet;

    MsSmoothGroupSettings m_msSmoothGroupSettings;
    bool m_msSmoothGroupSettingsHasBeenSet;

    OutputGroupType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
