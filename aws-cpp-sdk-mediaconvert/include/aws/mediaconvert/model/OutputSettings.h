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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/HlsSettings.h>
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
   * Specific settings for this type of output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OutputSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API OutputSettings
  {
  public:
    OutputSettings();
    OutputSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    OutputSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const HlsSettings& GetHlsSettings() const{ return m_hlsSettings; }

    
    inline void SetHlsSettings(const HlsSettings& value) { m_hlsSettingsHasBeenSet = true; m_hlsSettings = value; }

    
    inline void SetHlsSettings(HlsSettings&& value) { m_hlsSettingsHasBeenSet = true; m_hlsSettings = std::move(value); }

    
    inline OutputSettings& WithHlsSettings(const HlsSettings& value) { SetHlsSettings(value); return *this;}

    
    inline OutputSettings& WithHlsSettings(HlsSettings&& value) { SetHlsSettings(std::move(value)); return *this;}

  private:

    HlsSettings m_hlsSettings;
    bool m_hlsSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
