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
    OutputGroupSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    OutputGroupSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const DashIsoGroupSettings& GetDashIsoGroupSettings() const{ return m_dashIsoGroupSettings; }

    
    inline void SetDashIsoGroupSettings(const DashIsoGroupSettings& value) { m_dashIsoGroupSettingsHasBeenSet = true; m_dashIsoGroupSettings = value; }

    
    inline void SetDashIsoGroupSettings(DashIsoGroupSettings&& value) { m_dashIsoGroupSettingsHasBeenSet = true; m_dashIsoGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithDashIsoGroupSettings(const DashIsoGroupSettings& value) { SetDashIsoGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithDashIsoGroupSettings(DashIsoGroupSettings&& value) { SetDashIsoGroupSettings(std::move(value)); return *this;}


    
    inline const FileGroupSettings& GetFileGroupSettings() const{ return m_fileGroupSettings; }

    
    inline void SetFileGroupSettings(const FileGroupSettings& value) { m_fileGroupSettingsHasBeenSet = true; m_fileGroupSettings = value; }

    
    inline void SetFileGroupSettings(FileGroupSettings&& value) { m_fileGroupSettingsHasBeenSet = true; m_fileGroupSettings = std::move(value); }

    
    inline OutputGroupSettings& WithFileGroupSettings(const FileGroupSettings& value) { SetFileGroupSettings(value); return *this;}

    
    inline OutputGroupSettings& WithFileGroupSettings(FileGroupSettings&& value) { SetFileGroupSettings(std::move(value)); return *this;}


    
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


    
    inline const OutputGroupType& GetType() const{ return m_type; }

    
    inline void SetType(const OutputGroupType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(OutputGroupType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline OutputGroupSettings& WithType(const OutputGroupType& value) { SetType(value); return *this;}

    
    inline OutputGroupSettings& WithType(OutputGroupType&& value) { SetType(std::move(value)); return *this;}

  private:

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
