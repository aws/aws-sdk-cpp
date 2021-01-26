/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
     * Specify the color space you want for this output. The service supports
     * conversion between HDR formats, between SDR formats, from SDR to HDR, and from
     * HDR to SDR. SDR to HDR conversion doesn't upgrade the dynamic range. The
     * converted video has an HDR format, but visually appears the same as an
     * unconverted output. HDR to SDR conversion uses Elemental tone mapping technology
     * to approximate the outcome of manually regrading from HDR to SDR.
     */
    inline const ColorSpaceConversion& GetColorSpaceConversion() const{ return m_colorSpaceConversion; }

    /**
     * Specify the color space you want for this output. The service supports
     * conversion between HDR formats, between SDR formats, from SDR to HDR, and from
     * HDR to SDR. SDR to HDR conversion doesn't upgrade the dynamic range. The
     * converted video has an HDR format, but visually appears the same as an
     * unconverted output. HDR to SDR conversion uses Elemental tone mapping technology
     * to approximate the outcome of manually regrading from HDR to SDR.
     */
    inline bool ColorSpaceConversionHasBeenSet() const { return m_colorSpaceConversionHasBeenSet; }

    /**
     * Specify the color space you want for this output. The service supports
     * conversion between HDR formats, between SDR formats, from SDR to HDR, and from
     * HDR to SDR. SDR to HDR conversion doesn't upgrade the dynamic range. The
     * converted video has an HDR format, but visually appears the same as an
     * unconverted output. HDR to SDR conversion uses Elemental tone mapping technology
     * to approximate the outcome of manually regrading from HDR to SDR.
     */
    inline void SetColorSpaceConversion(const ColorSpaceConversion& value) { m_colorSpaceConversionHasBeenSet = true; m_colorSpaceConversion = value; }

    /**
     * Specify the color space you want for this output. The service supports
     * conversion between HDR formats, between SDR formats, from SDR to HDR, and from
     * HDR to SDR. SDR to HDR conversion doesn't upgrade the dynamic range. The
     * converted video has an HDR format, but visually appears the same as an
     * unconverted output. HDR to SDR conversion uses Elemental tone mapping technology
     * to approximate the outcome of manually regrading from HDR to SDR.
     */
    inline void SetColorSpaceConversion(ColorSpaceConversion&& value) { m_colorSpaceConversionHasBeenSet = true; m_colorSpaceConversion = std::move(value); }

    /**
     * Specify the color space you want for this output. The service supports
     * conversion between HDR formats, between SDR formats, from SDR to HDR, and from
     * HDR to SDR. SDR to HDR conversion doesn't upgrade the dynamic range. The
     * converted video has an HDR format, but visually appears the same as an
     * unconverted output. HDR to SDR conversion uses Elemental tone mapping technology
     * to approximate the outcome of manually regrading from HDR to SDR.
     */
    inline ColorCorrector& WithColorSpaceConversion(const ColorSpaceConversion& value) { SetColorSpaceConversion(value); return *this;}

    /**
     * Specify the color space you want for this output. The service supports
     * conversion between HDR formats, between SDR formats, from SDR to HDR, and from
     * HDR to SDR. SDR to HDR conversion doesn't upgrade the dynamic range. The
     * converted video has an HDR format, but visually appears the same as an
     * unconverted output. HDR to SDR conversion uses Elemental tone mapping technology
     * to approximate the outcome of manually regrading from HDR to SDR.
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
     * Use these settings when you convert to the HDR 10 color space. Specify the SMPTE
     * ST 2086 Mastering Display Color Volume static metadata that you want signaled in
     * the output. These values don't affect the pixel values that are encoded in the
     * video stream. They are intended to help the downstream video player display
     * content in a way that reflects the intentions of the the content creator. When
     * you set Color space conversion (ColorSpaceConversion) to HDR 10 (FORCE_HDR10),
     * these settings are required. You must set values for Max frame average light
     * level (maxFrameAverageLightLevel) and Max content light level
     * (maxContentLightLevel); these settings don't have a default value. The default
     * values for the other HDR 10 metadata settings are defined by the P3D65 color
     * space. For more information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline const Hdr10Metadata& GetHdr10Metadata() const{ return m_hdr10Metadata; }

    /**
     * Use these settings when you convert to the HDR 10 color space. Specify the SMPTE
     * ST 2086 Mastering Display Color Volume static metadata that you want signaled in
     * the output. These values don't affect the pixel values that are encoded in the
     * video stream. They are intended to help the downstream video player display
     * content in a way that reflects the intentions of the the content creator. When
     * you set Color space conversion (ColorSpaceConversion) to HDR 10 (FORCE_HDR10),
     * these settings are required. You must set values for Max frame average light
     * level (maxFrameAverageLightLevel) and Max content light level
     * (maxContentLightLevel); these settings don't have a default value. The default
     * values for the other HDR 10 metadata settings are defined by the P3D65 color
     * space. For more information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline bool Hdr10MetadataHasBeenSet() const { return m_hdr10MetadataHasBeenSet; }

    /**
     * Use these settings when you convert to the HDR 10 color space. Specify the SMPTE
     * ST 2086 Mastering Display Color Volume static metadata that you want signaled in
     * the output. These values don't affect the pixel values that are encoded in the
     * video stream. They are intended to help the downstream video player display
     * content in a way that reflects the intentions of the the content creator. When
     * you set Color space conversion (ColorSpaceConversion) to HDR 10 (FORCE_HDR10),
     * these settings are required. You must set values for Max frame average light
     * level (maxFrameAverageLightLevel) and Max content light level
     * (maxContentLightLevel); these settings don't have a default value. The default
     * values for the other HDR 10 metadata settings are defined by the P3D65 color
     * space. For more information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline void SetHdr10Metadata(const Hdr10Metadata& value) { m_hdr10MetadataHasBeenSet = true; m_hdr10Metadata = value; }

    /**
     * Use these settings when you convert to the HDR 10 color space. Specify the SMPTE
     * ST 2086 Mastering Display Color Volume static metadata that you want signaled in
     * the output. These values don't affect the pixel values that are encoded in the
     * video stream. They are intended to help the downstream video player display
     * content in a way that reflects the intentions of the the content creator. When
     * you set Color space conversion (ColorSpaceConversion) to HDR 10 (FORCE_HDR10),
     * these settings are required. You must set values for Max frame average light
     * level (maxFrameAverageLightLevel) and Max content light level
     * (maxContentLightLevel); these settings don't have a default value. The default
     * values for the other HDR 10 metadata settings are defined by the P3D65 color
     * space. For more information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline void SetHdr10Metadata(Hdr10Metadata&& value) { m_hdr10MetadataHasBeenSet = true; m_hdr10Metadata = std::move(value); }

    /**
     * Use these settings when you convert to the HDR 10 color space. Specify the SMPTE
     * ST 2086 Mastering Display Color Volume static metadata that you want signaled in
     * the output. These values don't affect the pixel values that are encoded in the
     * video stream. They are intended to help the downstream video player display
     * content in a way that reflects the intentions of the the content creator. When
     * you set Color space conversion (ColorSpaceConversion) to HDR 10 (FORCE_HDR10),
     * these settings are required. You must set values for Max frame average light
     * level (maxFrameAverageLightLevel) and Max content light level
     * (maxContentLightLevel); these settings don't have a default value. The default
     * values for the other HDR 10 metadata settings are defined by the P3D65 color
     * space. For more information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline ColorCorrector& WithHdr10Metadata(const Hdr10Metadata& value) { SetHdr10Metadata(value); return *this;}

    /**
     * Use these settings when you convert to the HDR 10 color space. Specify the SMPTE
     * ST 2086 Mastering Display Color Volume static metadata that you want signaled in
     * the output. These values don't affect the pixel values that are encoded in the
     * video stream. They are intended to help the downstream video player display
     * content in a way that reflects the intentions of the the content creator. When
     * you set Color space conversion (ColorSpaceConversion) to HDR 10 (FORCE_HDR10),
     * these settings are required. You must set values for Max frame average light
     * level (maxFrameAverageLightLevel) and Max content light level
     * (maxContentLightLevel); these settings don't have a default value. The default
     * values for the other HDR 10 metadata settings are defined by the P3D65 color
     * space. For more information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
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
