﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
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
    OutputSettings(Aws::Utils::Json::JsonView jsonValue);
    OutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Settings for HLS output groups
     */
    inline const HlsSettings& GetHlsSettings() const{ return m_hlsSettings; }

    /**
     * Settings for HLS output groups
     */
    inline bool HlsSettingsHasBeenSet() const { return m_hlsSettingsHasBeenSet; }

    /**
     * Settings for HLS output groups
     */
    inline void SetHlsSettings(const HlsSettings& value) { m_hlsSettingsHasBeenSet = true; m_hlsSettings = value; }

    /**
     * Settings for HLS output groups
     */
    inline void SetHlsSettings(HlsSettings&& value) { m_hlsSettingsHasBeenSet = true; m_hlsSettings = std::move(value); }

    /**
     * Settings for HLS output groups
     */
    inline OutputSettings& WithHlsSettings(const HlsSettings& value) { SetHlsSettings(value); return *this;}

    /**
     * Settings for HLS output groups
     */
    inline OutputSettings& WithHlsSettings(HlsSettings&& value) { SetHlsSettings(std::move(value)); return *this;}

  private:

    HlsSettings m_hlsSettings;
    bool m_hlsSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
