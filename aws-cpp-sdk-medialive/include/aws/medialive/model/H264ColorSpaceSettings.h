/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ColorSpacePassthroughSettings.h>
#include <aws/medialive/model/Rec601Settings.h>
#include <aws/medialive/model/Rec709Settings.h>
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
   * H264 Color Space Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/H264ColorSpaceSettings">AWS
   * API Reference</a></p>
   */
  class H264ColorSpaceSettings
  {
  public:
    AWS_MEDIALIVE_API H264ColorSpaceSettings();
    AWS_MEDIALIVE_API H264ColorSpaceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API H264ColorSpaceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ColorSpacePassthroughSettings& GetColorSpacePassthroughSettings() const{ return m_colorSpacePassthroughSettings; }

    
    inline bool ColorSpacePassthroughSettingsHasBeenSet() const { return m_colorSpacePassthroughSettingsHasBeenSet; }

    
    inline void SetColorSpacePassthroughSettings(const ColorSpacePassthroughSettings& value) { m_colorSpacePassthroughSettingsHasBeenSet = true; m_colorSpacePassthroughSettings = value; }

    
    inline void SetColorSpacePassthroughSettings(ColorSpacePassthroughSettings&& value) { m_colorSpacePassthroughSettingsHasBeenSet = true; m_colorSpacePassthroughSettings = std::move(value); }

    
    inline H264ColorSpaceSettings& WithColorSpacePassthroughSettings(const ColorSpacePassthroughSettings& value) { SetColorSpacePassthroughSettings(value); return *this;}

    
    inline H264ColorSpaceSettings& WithColorSpacePassthroughSettings(ColorSpacePassthroughSettings&& value) { SetColorSpacePassthroughSettings(std::move(value)); return *this;}


    
    inline const Rec601Settings& GetRec601Settings() const{ return m_rec601Settings; }

    
    inline bool Rec601SettingsHasBeenSet() const { return m_rec601SettingsHasBeenSet; }

    
    inline void SetRec601Settings(const Rec601Settings& value) { m_rec601SettingsHasBeenSet = true; m_rec601Settings = value; }

    
    inline void SetRec601Settings(Rec601Settings&& value) { m_rec601SettingsHasBeenSet = true; m_rec601Settings = std::move(value); }

    
    inline H264ColorSpaceSettings& WithRec601Settings(const Rec601Settings& value) { SetRec601Settings(value); return *this;}

    
    inline H264ColorSpaceSettings& WithRec601Settings(Rec601Settings&& value) { SetRec601Settings(std::move(value)); return *this;}


    
    inline const Rec709Settings& GetRec709Settings() const{ return m_rec709Settings; }

    
    inline bool Rec709SettingsHasBeenSet() const { return m_rec709SettingsHasBeenSet; }

    
    inline void SetRec709Settings(const Rec709Settings& value) { m_rec709SettingsHasBeenSet = true; m_rec709Settings = value; }

    
    inline void SetRec709Settings(Rec709Settings&& value) { m_rec709SettingsHasBeenSet = true; m_rec709Settings = std::move(value); }

    
    inline H264ColorSpaceSettings& WithRec709Settings(const Rec709Settings& value) { SetRec709Settings(value); return *this;}

    
    inline H264ColorSpaceSettings& WithRec709Settings(Rec709Settings&& value) { SetRec709Settings(std::move(value)); return *this;}

  private:

    ColorSpacePassthroughSettings m_colorSpacePassthroughSettings;
    bool m_colorSpacePassthroughSettingsHasBeenSet = false;

    Rec601Settings m_rec601Settings;
    bool m_rec601SettingsHasBeenSet = false;

    Rec709Settings m_rec709Settings;
    bool m_rec709SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
