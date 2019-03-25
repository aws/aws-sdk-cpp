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
#include <aws/mediaconvert/model/ColorSpaceConversion.h>
#include <aws/mediaconvert/model/Hdr10Metadata.h>
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
   * Settings for color correction.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ColorCorrector">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API ColorCorrector
  {
  public:
    ColorCorrector();
    ColorCorrector(Aws::Utils::Json::JsonView jsonValue);
    ColorCorrector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Brightness level.
     */
    inline int GetBrightness() const{ return m_brightness; }

    /**
     * Brightness level.
     */
    inline bool BrightnessHasBeenSet() const { return m_brightnessHasBeenSet; }

    /**
     * Brightness level.
     */
    inline void SetBrightness(int value) { m_brightnessHasBeenSet = true; m_brightness = value; }

    /**
     * Brightness level.
     */
    inline ColorCorrector& WithBrightness(int value) { SetBrightness(value); return *this;}


    /**
     * Determines if colorspace conversion will be performed. If set to _None_, no
     * conversion will be performed. If _Force 601_ or _Force 709_ are selected,
     * conversion will be performed for inputs with differing colorspaces. An input's
     * colorspace can be specified explicitly in the "Video
     * Selector":#inputs-video_selector if necessary.
     */
    inline const ColorSpaceConversion& GetColorSpaceConversion() const{ return m_colorSpaceConversion; }

    /**
     * Determines if colorspace conversion will be performed. If set to _None_, no
     * conversion will be performed. If _Force 601_ or _Force 709_ are selected,
     * conversion will be performed for inputs with differing colorspaces. An input's
     * colorspace can be specified explicitly in the "Video
     * Selector":#inputs-video_selector if necessary.
     */
    inline bool ColorSpaceConversionHasBeenSet() const { return m_colorSpaceConversionHasBeenSet; }

    /**
     * Determines if colorspace conversion will be performed. If set to _None_, no
     * conversion will be performed. If _Force 601_ or _Force 709_ are selected,
     * conversion will be performed for inputs with differing colorspaces. An input's
     * colorspace can be specified explicitly in the "Video
     * Selector":#inputs-video_selector if necessary.
     */
    inline void SetColorSpaceConversion(const ColorSpaceConversion& value) { m_colorSpaceConversionHasBeenSet = true; m_colorSpaceConversion = value; }

    /**
     * Determines if colorspace conversion will be performed. If set to _None_, no
     * conversion will be performed. If _Force 601_ or _Force 709_ are selected,
     * conversion will be performed for inputs with differing colorspaces. An input's
     * colorspace can be specified explicitly in the "Video
     * Selector":#inputs-video_selector if necessary.
     */
    inline void SetColorSpaceConversion(ColorSpaceConversion&& value) { m_colorSpaceConversionHasBeenSet = true; m_colorSpaceConversion = std::move(value); }

    /**
     * Determines if colorspace conversion will be performed. If set to _None_, no
     * conversion will be performed. If _Force 601_ or _Force 709_ are selected,
     * conversion will be performed for inputs with differing colorspaces. An input's
     * colorspace can be specified explicitly in the "Video
     * Selector":#inputs-video_selector if necessary.
     */
    inline ColorCorrector& WithColorSpaceConversion(const ColorSpaceConversion& value) { SetColorSpaceConversion(value); return *this;}

    /**
     * Determines if colorspace conversion will be performed. If set to _None_, no
     * conversion will be performed. If _Force 601_ or _Force 709_ are selected,
     * conversion will be performed for inputs with differing colorspaces. An input's
     * colorspace can be specified explicitly in the "Video
     * Selector":#inputs-video_selector if necessary.
     */
    inline ColorCorrector& WithColorSpaceConversion(ColorSpaceConversion&& value) { SetColorSpaceConversion(std::move(value)); return *this;}


    /**
     * Contrast level.
     */
    inline int GetContrast() const{ return m_contrast; }

    /**
     * Contrast level.
     */
    inline bool ContrastHasBeenSet() const { return m_contrastHasBeenSet; }

    /**
     * Contrast level.
     */
    inline void SetContrast(int value) { m_contrastHasBeenSet = true; m_contrast = value; }

    /**
     * Contrast level.
     */
    inline ColorCorrector& WithContrast(int value) { SetContrast(value); return *this;}


    /**
     * Use the HDR master display (Hdr10Metadata) settings to correct HDR metadata or
     * to provide missing metadata. Note that these settings are not color correction.
     */
    inline const Hdr10Metadata& GetHdr10Metadata() const{ return m_hdr10Metadata; }

    /**
     * Use the HDR master display (Hdr10Metadata) settings to correct HDR metadata or
     * to provide missing metadata. Note that these settings are not color correction.
     */
    inline bool Hdr10MetadataHasBeenSet() const { return m_hdr10MetadataHasBeenSet; }

    /**
     * Use the HDR master display (Hdr10Metadata) settings to correct HDR metadata or
     * to provide missing metadata. Note that these settings are not color correction.
     */
    inline void SetHdr10Metadata(const Hdr10Metadata& value) { m_hdr10MetadataHasBeenSet = true; m_hdr10Metadata = value; }

    /**
     * Use the HDR master display (Hdr10Metadata) settings to correct HDR metadata or
     * to provide missing metadata. Note that these settings are not color correction.
     */
    inline void SetHdr10Metadata(Hdr10Metadata&& value) { m_hdr10MetadataHasBeenSet = true; m_hdr10Metadata = std::move(value); }

    /**
     * Use the HDR master display (Hdr10Metadata) settings to correct HDR metadata or
     * to provide missing metadata. Note that these settings are not color correction.
     */
    inline ColorCorrector& WithHdr10Metadata(const Hdr10Metadata& value) { SetHdr10Metadata(value); return *this;}

    /**
     * Use the HDR master display (Hdr10Metadata) settings to correct HDR metadata or
     * to provide missing metadata. Note that these settings are not color correction.
     */
    inline ColorCorrector& WithHdr10Metadata(Hdr10Metadata&& value) { SetHdr10Metadata(std::move(value)); return *this;}


    /**
     * Hue in degrees.
     */
    inline int GetHue() const{ return m_hue; }

    /**
     * Hue in degrees.
     */
    inline bool HueHasBeenSet() const { return m_hueHasBeenSet; }

    /**
     * Hue in degrees.
     */
    inline void SetHue(int value) { m_hueHasBeenSet = true; m_hue = value; }

    /**
     * Hue in degrees.
     */
    inline ColorCorrector& WithHue(int value) { SetHue(value); return *this;}


    /**
     * Saturation level.
     */
    inline int GetSaturation() const{ return m_saturation; }

    /**
     * Saturation level.
     */
    inline bool SaturationHasBeenSet() const { return m_saturationHasBeenSet; }

    /**
     * Saturation level.
     */
    inline void SetSaturation(int value) { m_saturationHasBeenSet = true; m_saturation = value; }

    /**
     * Saturation level.
     */
    inline ColorCorrector& WithSaturation(int value) { SetSaturation(value); return *this;}

  private:

    int m_brightness;
    bool m_brightnessHasBeenSet;

    ColorSpaceConversion m_colorSpaceConversion;
    bool m_colorSpaceConversionHasBeenSet;

    int m_contrast;
    bool m_contrastHasBeenSet;

    Hdr10Metadata m_hdr10Metadata;
    bool m_hdr10MetadataHasBeenSet;

    int m_hue;
    bool m_hueHasBeenSet;

    int m_saturation;
    bool m_saturationHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
