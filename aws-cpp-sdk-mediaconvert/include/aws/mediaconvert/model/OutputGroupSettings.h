/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class OutputGroupSettings
  {
  public:
    AWS_MEDIACONVERT_API OutputGroupSettings();
    AWS_MEDIACONVERT_API OutputGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API OutputGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Settings related to your CMAF output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * CMAF_GROUP_SETTINGS.
     */
    inline const CmafGroupSettings& GetCmafGroupSettings() const{ return m_cmafGroupSettings; }

    /**
     * Settings related to your CMAF output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * CMAF_GROUP_SETTINGS.
     */
    inline bool CmafGroupSettingsHasBeenSet() const { return m_cmafGroupSettingsHasBeenSet; }

    /**
     * Settings related to your CMAF output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * CMAF_GROUP_SETTINGS.
     */
    inline void SetCmafGroupSettings(const CmafGroupSettings& value) { m_cmafGroupSettingsHasBeenSet = true; m_cmafGroupSettings = value; }

    /**
     * Settings related to your CMAF output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * CMAF_GROUP_SETTINGS.
     */
    inline void SetCmafGroupSettings(CmafGroupSettings&& value) { m_cmafGroupSettingsHasBeenSet = true; m_cmafGroupSettings = std::move(value); }

    /**
     * Settings related to your CMAF output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * CMAF_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithCmafGroupSettings(const CmafGroupSettings& value) { SetCmafGroupSettings(value); return *this;}

    /**
     * Settings related to your CMAF output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * CMAF_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithCmafGroupSettings(CmafGroupSettings&& value) { SetCmafGroupSettings(std::move(value)); return *this;}


    /**
     * Settings related to your DASH output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * DASH_ISO_GROUP_SETTINGS.
     */
    inline const DashIsoGroupSettings& GetDashIsoGroupSettings() const{ return m_dashIsoGroupSettings; }

    /**
     * Settings related to your DASH output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * DASH_ISO_GROUP_SETTINGS.
     */
    inline bool DashIsoGroupSettingsHasBeenSet() const { return m_dashIsoGroupSettingsHasBeenSet; }

    /**
     * Settings related to your DASH output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * DASH_ISO_GROUP_SETTINGS.
     */
    inline void SetDashIsoGroupSettings(const DashIsoGroupSettings& value) { m_dashIsoGroupSettingsHasBeenSet = true; m_dashIsoGroupSettings = value; }

    /**
     * Settings related to your DASH output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * DASH_ISO_GROUP_SETTINGS.
     */
    inline void SetDashIsoGroupSettings(DashIsoGroupSettings&& value) { m_dashIsoGroupSettingsHasBeenSet = true; m_dashIsoGroupSettings = std::move(value); }

    /**
     * Settings related to your DASH output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * DASH_ISO_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithDashIsoGroupSettings(const DashIsoGroupSettings& value) { SetDashIsoGroupSettings(value); return *this;}

    /**
     * Settings related to your DASH output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * DASH_ISO_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithDashIsoGroupSettings(DashIsoGroupSettings&& value) { SetDashIsoGroupSettings(std::move(value)); return *this;}


    /**
     * Settings related to your File output group. MediaConvert uses this group of
     * settings to generate a single standalone file, rather than a streaming package.
     * When you work directly in your JSON job specification, include this object and
     * any required children when you set Type, under OutputGroupSettings, to
     * FILE_GROUP_SETTINGS.
     */
    inline const FileGroupSettings& GetFileGroupSettings() const{ return m_fileGroupSettings; }

    /**
     * Settings related to your File output group. MediaConvert uses this group of
     * settings to generate a single standalone file, rather than a streaming package.
     * When you work directly in your JSON job specification, include this object and
     * any required children when you set Type, under OutputGroupSettings, to
     * FILE_GROUP_SETTINGS.
     */
    inline bool FileGroupSettingsHasBeenSet() const { return m_fileGroupSettingsHasBeenSet; }

    /**
     * Settings related to your File output group. MediaConvert uses this group of
     * settings to generate a single standalone file, rather than a streaming package.
     * When you work directly in your JSON job specification, include this object and
     * any required children when you set Type, under OutputGroupSettings, to
     * FILE_GROUP_SETTINGS.
     */
    inline void SetFileGroupSettings(const FileGroupSettings& value) { m_fileGroupSettingsHasBeenSet = true; m_fileGroupSettings = value; }

    /**
     * Settings related to your File output group. MediaConvert uses this group of
     * settings to generate a single standalone file, rather than a streaming package.
     * When you work directly in your JSON job specification, include this object and
     * any required children when you set Type, under OutputGroupSettings, to
     * FILE_GROUP_SETTINGS.
     */
    inline void SetFileGroupSettings(FileGroupSettings&& value) { m_fileGroupSettingsHasBeenSet = true; m_fileGroupSettings = std::move(value); }

    /**
     * Settings related to your File output group. MediaConvert uses this group of
     * settings to generate a single standalone file, rather than a streaming package.
     * When you work directly in your JSON job specification, include this object and
     * any required children when you set Type, under OutputGroupSettings, to
     * FILE_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithFileGroupSettings(const FileGroupSettings& value) { SetFileGroupSettings(value); return *this;}

    /**
     * Settings related to your File output group. MediaConvert uses this group of
     * settings to generate a single standalone file, rather than a streaming package.
     * When you work directly in your JSON job specification, include this object and
     * any required children when you set Type, under OutputGroupSettings, to
     * FILE_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithFileGroupSettings(FileGroupSettings&& value) { SetFileGroupSettings(std::move(value)); return *this;}


    /**
     * Settings related to your HLS output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * HLS_GROUP_SETTINGS.
     */
    inline const HlsGroupSettings& GetHlsGroupSettings() const{ return m_hlsGroupSettings; }

    /**
     * Settings related to your HLS output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * HLS_GROUP_SETTINGS.
     */
    inline bool HlsGroupSettingsHasBeenSet() const { return m_hlsGroupSettingsHasBeenSet; }

    /**
     * Settings related to your HLS output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * HLS_GROUP_SETTINGS.
     */
    inline void SetHlsGroupSettings(const HlsGroupSettings& value) { m_hlsGroupSettingsHasBeenSet = true; m_hlsGroupSettings = value; }

    /**
     * Settings related to your HLS output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * HLS_GROUP_SETTINGS.
     */
    inline void SetHlsGroupSettings(HlsGroupSettings&& value) { m_hlsGroupSettingsHasBeenSet = true; m_hlsGroupSettings = std::move(value); }

    /**
     * Settings related to your HLS output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * HLS_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithHlsGroupSettings(const HlsGroupSettings& value) { SetHlsGroupSettings(value); return *this;}

    /**
     * Settings related to your HLS output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * HLS_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithHlsGroupSettings(HlsGroupSettings&& value) { SetHlsGroupSettings(std::move(value)); return *this;}


    /**
     * Settings related to your Microsoft Smooth Streaming output package. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * MS_SMOOTH_GROUP_SETTINGS.
     */
    inline const MsSmoothGroupSettings& GetMsSmoothGroupSettings() const{ return m_msSmoothGroupSettings; }

    /**
     * Settings related to your Microsoft Smooth Streaming output package. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * MS_SMOOTH_GROUP_SETTINGS.
     */
    inline bool MsSmoothGroupSettingsHasBeenSet() const { return m_msSmoothGroupSettingsHasBeenSet; }

    /**
     * Settings related to your Microsoft Smooth Streaming output package. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * MS_SMOOTH_GROUP_SETTINGS.
     */
    inline void SetMsSmoothGroupSettings(const MsSmoothGroupSettings& value) { m_msSmoothGroupSettingsHasBeenSet = true; m_msSmoothGroupSettings = value; }

    /**
     * Settings related to your Microsoft Smooth Streaming output package. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * MS_SMOOTH_GROUP_SETTINGS.
     */
    inline void SetMsSmoothGroupSettings(MsSmoothGroupSettings&& value) { m_msSmoothGroupSettingsHasBeenSet = true; m_msSmoothGroupSettings = std::move(value); }

    /**
     * Settings related to your Microsoft Smooth Streaming output package. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
     * MS_SMOOTH_GROUP_SETTINGS.
     */
    inline OutputGroupSettings& WithMsSmoothGroupSettings(const MsSmoothGroupSettings& value) { SetMsSmoothGroupSettings(value); return *this;}

    /**
     * Settings related to your Microsoft Smooth Streaming output package. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
     * you work directly in your JSON job specification, include this object and any
     * required children when you set Type, under OutputGroupSettings, to
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
    bool m_cmafGroupSettingsHasBeenSet = false;

    DashIsoGroupSettings m_dashIsoGroupSettings;
    bool m_dashIsoGroupSettingsHasBeenSet = false;

    FileGroupSettings m_fileGroupSettings;
    bool m_fileGroupSettingsHasBeenSet = false;

    HlsGroupSettings m_hlsGroupSettings;
    bool m_hlsGroupSettingsHasBeenSet = false;

    MsSmoothGroupSettings m_msSmoothGroupSettings;
    bool m_msSmoothGroupSettingsHasBeenSet = false;

    OutputGroupType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
