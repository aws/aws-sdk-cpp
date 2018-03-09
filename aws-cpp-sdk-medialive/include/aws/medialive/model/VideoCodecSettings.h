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
#include <aws/medialive/model/H264Settings.h>
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
   * Placeholder documentation for VideoCodecSettings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VideoCodecSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API VideoCodecSettings
  {
  public:
    VideoCodecSettings();
    VideoCodecSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    VideoCodecSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const H264Settings& GetH264Settings() const{ return m_h264Settings; }

    
    inline void SetH264Settings(const H264Settings& value) { m_h264SettingsHasBeenSet = true; m_h264Settings = value; }

    
    inline void SetH264Settings(H264Settings&& value) { m_h264SettingsHasBeenSet = true; m_h264Settings = std::move(value); }

    
    inline VideoCodecSettings& WithH264Settings(const H264Settings& value) { SetH264Settings(value); return *this;}

    
    inline VideoCodecSettings& WithH264Settings(H264Settings&& value) { SetH264Settings(std::move(value)); return *this;}

  private:

    H264Settings m_h264Settings;
    bool m_h264SettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
