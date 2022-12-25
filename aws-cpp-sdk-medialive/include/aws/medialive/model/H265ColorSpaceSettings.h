/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ColorSpacePassthroughSettings.h>
#include <aws/medialive/model/DolbyVision81Settings.h>
#include <aws/medialive/model/Hdr10Settings.h>
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
   * H265 Color Space Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/H265ColorSpaceSettings">AWS
   * API Reference</a></p>
   */
  class H265ColorSpaceSettings
  {
  public:
    AWS_MEDIALIVE_API H265ColorSpaceSettings();
    AWS_MEDIALIVE_API H265ColorSpaceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API H265ColorSpaceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ColorSpacePassthroughSettings& GetColorSpacePassthroughSettings() const{ return m_colorSpacePassthroughSettings; }

    
    inline bool ColorSpacePassthroughSettingsHasBeenSet() const { return m_colorSpacePassthroughSettingsHasBeenSet; }

    
    inline void SetColorSpacePassthroughSettings(const ColorSpacePassthroughSettings& value) { m_colorSpacePassthroughSettingsHasBeenSet = true; m_colorSpacePassthroughSettings = value; }

    
    inline void SetColorSpacePassthroughSettings(ColorSpacePassthroughSettings&& value) { m_colorSpacePassthroughSettingsHasBeenSet = true; m_colorSpacePassthroughSettings = std::move(value); }

    
    inline H265ColorSpaceSettings& WithColorSpacePassthroughSettings(const ColorSpacePassthroughSettings& value) { SetColorSpacePassthroughSettings(value); return *this;}

    
    inline H265ColorSpaceSettings& WithColorSpacePassthroughSettings(ColorSpacePassthroughSettings&& value) { SetColorSpacePassthroughSettings(std::move(value)); return *this;}


    
    inline const DolbyVision81Settings& GetDolbyVision81Settings() const{ return m_dolbyVision81Settings; }

    
    inline bool DolbyVision81SettingsHasBeenSet() const { return m_dolbyVision81SettingsHasBeenSet; }

    
    inline void SetDolbyVision81Settings(const DolbyVision81Settings& value) { m_dolbyVision81SettingsHasBeenSet = true; m_dolbyVision81Settings = value; }

    
    inline void SetDolbyVision81Settings(DolbyVision81Settings&& value) { m_dolbyVision81SettingsHasBeenSet = true; m_dolbyVision81Settings = std::move(value); }

    
    inline H265ColorSpaceSettings& WithDolbyVision81Settings(const DolbyVision81Settings& value) { SetDolbyVision81Settings(value); return *this;}

    
    inline H265ColorSpaceSettings& WithDolbyVision81Settings(DolbyVision81Settings&& value) { SetDolbyVision81Settings(std::move(value)); return *this;}


    
    inline const Hdr10Settings& GetHdr10Settings() const{ return m_hdr10Settings; }

    
    inline bool Hdr10SettingsHasBeenSet() const { return m_hdr10SettingsHasBeenSet; }

    
    inline void SetHdr10Settings(const Hdr10Settings& value) { m_hdr10SettingsHasBeenSet = true; m_hdr10Settings = value; }

    
    inline void SetHdr10Settings(Hdr10Settings&& value) { m_hdr10SettingsHasBeenSet = true; m_hdr10Settings = std::move(value); }

    
    inline H265ColorSpaceSettings& WithHdr10Settings(const Hdr10Settings& value) { SetHdr10Settings(value); return *this;}

    
    inline H265ColorSpaceSettings& WithHdr10Settings(Hdr10Settings&& value) { SetHdr10Settings(std::move(value)); return *this;}


    
    inline const Rec601Settings& GetRec601Settings() const{ return m_rec601Settings; }

    
    inline bool Rec601SettingsHasBeenSet() const { return m_rec601SettingsHasBeenSet; }

    
    inline void SetRec601Settings(const Rec601Settings& value) { m_rec601SettingsHasBeenSet = true; m_rec601Settings = value; }

    
    inline void SetRec601Settings(Rec601Settings&& value) { m_rec601SettingsHasBeenSet = true; m_rec601Settings = std::move(value); }

    
    inline H265ColorSpaceSettings& WithRec601Settings(const Rec601Settings& value) { SetRec601Settings(value); return *this;}

    
    inline H265ColorSpaceSettings& WithRec601Settings(Rec601Settings&& value) { SetRec601Settings(std::move(value)); return *this;}


    
    inline const Rec709Settings& GetRec709Settings() const{ return m_rec709Settings; }

    
    inline bool Rec709SettingsHasBeenSet() const { return m_rec709SettingsHasBeenSet; }

    
    inline void SetRec709Settings(const Rec709Settings& value) { m_rec709SettingsHasBeenSet = true; m_rec709Settings = value; }

    
    inline void SetRec709Settings(Rec709Settings&& value) { m_rec709SettingsHasBeenSet = true; m_rec709Settings = std::move(value); }

    
    inline H265ColorSpaceSettings& WithRec709Settings(const Rec709Settings& value) { SetRec709Settings(value); return *this;}

    
    inline H265ColorSpaceSettings& WithRec709Settings(Rec709Settings&& value) { SetRec709Settings(std::move(value)); return *this;}

  private:

    ColorSpacePassthroughSettings m_colorSpacePassthroughSettings;
    bool m_colorSpacePassthroughSettingsHasBeenSet = false;

    DolbyVision81Settings m_dolbyVision81Settings;
    bool m_dolbyVision81SettingsHasBeenSet = false;

    Hdr10Settings m_hdr10Settings;
    bool m_hdr10SettingsHasBeenSet = false;

    Rec601Settings m_rec601Settings;
    bool m_rec601SettingsHasBeenSet = false;

    Rec709Settings m_rec709Settings;
    bool m_rec709SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
