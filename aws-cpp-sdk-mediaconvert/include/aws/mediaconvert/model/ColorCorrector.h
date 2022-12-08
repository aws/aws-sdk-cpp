/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ColorSpaceConversion.h>
#include <aws/mediaconvert/model/Hdr10Metadata.h>
#include <aws/mediaconvert/model/SampleRangeConversion.h>
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
  class ColorCorrector
  {
  public:
    AWS_MEDIACONVERT_API ColorCorrector();
    AWS_MEDIACONVERT_API ColorCorrector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ColorCorrector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * to approximate the outcome of manually regrading from HDR to SDR. Select Force
     * P3D65 (SDR) to set the output color space metadata to the following: * Color
     * primaries: Display P3 * Transfer characteristics: SMPTE 428M * Matrix
     * coefficients: BT.709
     */
    inline const ColorSpaceConversion& GetColorSpaceConversion() const{ return m_colorSpaceConversion; }

    /**
     * Specify the color space you want for this output. The service supports
     * conversion between HDR formats, between SDR formats, from SDR to HDR, and from
     * HDR to SDR. SDR to HDR conversion doesn't upgrade the dynamic range. The
     * converted video has an HDR format, but visually appears the same as an
     * unconverted output. HDR to SDR conversion uses Elemental tone mapping technology
     * to approximate the outcome of manually regrading from HDR to SDR. Select Force
     * P3D65 (SDR) to set the output color space metadata to the following: * Color
     * primaries: Display P3 * Transfer characteristics: SMPTE 428M * Matrix
     * coefficients: BT.709
     */
    inline bool ColorSpaceConversionHasBeenSet() const { return m_colorSpaceConversionHasBeenSet; }

    /**
     * Specify the color space you want for this output. The service supports
     * conversion between HDR formats, between SDR formats, from SDR to HDR, and from
     * HDR to SDR. SDR to HDR conversion doesn't upgrade the dynamic range. The
     * converted video has an HDR format, but visually appears the same as an
     * unconverted output. HDR to SDR conversion uses Elemental tone mapping technology
     * to approximate the outcome of manually regrading from HDR to SDR. Select Force
     * P3D65 (SDR) to set the output color space metadata to the following: * Color
     * primaries: Display P3 * Transfer characteristics: SMPTE 428M * Matrix
     * coefficients: BT.709
     */
    inline void SetColorSpaceConversion(const ColorSpaceConversion& value) { m_colorSpaceConversionHasBeenSet = true; m_colorSpaceConversion = value; }

    /**
     * Specify the color space you want for this output. The service supports
     * conversion between HDR formats, between SDR formats, from SDR to HDR, and from
     * HDR to SDR. SDR to HDR conversion doesn't upgrade the dynamic range. The
     * converted video has an HDR format, but visually appears the same as an
     * unconverted output. HDR to SDR conversion uses Elemental tone mapping technology
     * to approximate the outcome of manually regrading from HDR to SDR. Select Force
     * P3D65 (SDR) to set the output color space metadata to the following: * Color
     * primaries: Display P3 * Transfer characteristics: SMPTE 428M * Matrix
     * coefficients: BT.709
     */
    inline void SetColorSpaceConversion(ColorSpaceConversion&& value) { m_colorSpaceConversionHasBeenSet = true; m_colorSpaceConversion = std::move(value); }

    /**
     * Specify the color space you want for this output. The service supports
     * conversion between HDR formats, between SDR formats, from SDR to HDR, and from
     * HDR to SDR. SDR to HDR conversion doesn't upgrade the dynamic range. The
     * converted video has an HDR format, but visually appears the same as an
     * unconverted output. HDR to SDR conversion uses Elemental tone mapping technology
     * to approximate the outcome of manually regrading from HDR to SDR. Select Force
     * P3D65 (SDR) to set the output color space metadata to the following: * Color
     * primaries: Display P3 * Transfer characteristics: SMPTE 428M * Matrix
     * coefficients: BT.709
     */
    inline ColorCorrector& WithColorSpaceConversion(const ColorSpaceConversion& value) { SetColorSpaceConversion(value); return *this;}

    /**
     * Specify the color space you want for this output. The service supports
     * conversion between HDR formats, between SDR formats, from SDR to HDR, and from
     * HDR to SDR. SDR to HDR conversion doesn't upgrade the dynamic range. The
     * converted video has an HDR format, but visually appears the same as an
     * unconverted output. HDR to SDR conversion uses Elemental tone mapping technology
     * to approximate the outcome of manually regrading from HDR to SDR. Select Force
     * P3D65 (SDR) to set the output color space metadata to the following: * Color
     * primaries: Display P3 * Transfer characteristics: SMPTE 428M * Matrix
     * coefficients: BT.709
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
     * Specify the video color sample range for this output. To create a full range
     * output, you must start with a full range YUV input and keep the default value,
     * None (NONE). To create a limited range output from a full range input, choose
     * Limited range (LIMITED_RANGE_SQUEEZE). With RGB inputs, your output is always
     * limited range, regardless of your choice here. When you create a limited range
     * output from a full range input, MediaConvert limits the active pixel values in a
     * way that depends on the output's bit depth: 8-bit outputs contain only values
     * from 16 through 235 and 10-bit outputs contain only values from 64 through 940.
     * With this conversion, MediaConvert also changes the output metadata to note the
     * limited range.
     */
    inline const SampleRangeConversion& GetSampleRangeConversion() const{ return m_sampleRangeConversion; }

    /**
     * Specify the video color sample range for this output. To create a full range
     * output, you must start with a full range YUV input and keep the default value,
     * None (NONE). To create a limited range output from a full range input, choose
     * Limited range (LIMITED_RANGE_SQUEEZE). With RGB inputs, your output is always
     * limited range, regardless of your choice here. When you create a limited range
     * output from a full range input, MediaConvert limits the active pixel values in a
     * way that depends on the output's bit depth: 8-bit outputs contain only values
     * from 16 through 235 and 10-bit outputs contain only values from 64 through 940.
     * With this conversion, MediaConvert also changes the output metadata to note the
     * limited range.
     */
    inline bool SampleRangeConversionHasBeenSet() const { return m_sampleRangeConversionHasBeenSet; }

    /**
     * Specify the video color sample range for this output. To create a full range
     * output, you must start with a full range YUV input and keep the default value,
     * None (NONE). To create a limited range output from a full range input, choose
     * Limited range (LIMITED_RANGE_SQUEEZE). With RGB inputs, your output is always
     * limited range, regardless of your choice here. When you create a limited range
     * output from a full range input, MediaConvert limits the active pixel values in a
     * way that depends on the output's bit depth: 8-bit outputs contain only values
     * from 16 through 235 and 10-bit outputs contain only values from 64 through 940.
     * With this conversion, MediaConvert also changes the output metadata to note the
     * limited range.
     */
    inline void SetSampleRangeConversion(const SampleRangeConversion& value) { m_sampleRangeConversionHasBeenSet = true; m_sampleRangeConversion = value; }

    /**
     * Specify the video color sample range for this output. To create a full range
     * output, you must start with a full range YUV input and keep the default value,
     * None (NONE). To create a limited range output from a full range input, choose
     * Limited range (LIMITED_RANGE_SQUEEZE). With RGB inputs, your output is always
     * limited range, regardless of your choice here. When you create a limited range
     * output from a full range input, MediaConvert limits the active pixel values in a
     * way that depends on the output's bit depth: 8-bit outputs contain only values
     * from 16 through 235 and 10-bit outputs contain only values from 64 through 940.
     * With this conversion, MediaConvert also changes the output metadata to note the
     * limited range.
     */
    inline void SetSampleRangeConversion(SampleRangeConversion&& value) { m_sampleRangeConversionHasBeenSet = true; m_sampleRangeConversion = std::move(value); }

    /**
     * Specify the video color sample range for this output. To create a full range
     * output, you must start with a full range YUV input and keep the default value,
     * None (NONE). To create a limited range output from a full range input, choose
     * Limited range (LIMITED_RANGE_SQUEEZE). With RGB inputs, your output is always
     * limited range, regardless of your choice here. When you create a limited range
     * output from a full range input, MediaConvert limits the active pixel values in a
     * way that depends on the output's bit depth: 8-bit outputs contain only values
     * from 16 through 235 and 10-bit outputs contain only values from 64 through 940.
     * With this conversion, MediaConvert also changes the output metadata to note the
     * limited range.
     */
    inline ColorCorrector& WithSampleRangeConversion(const SampleRangeConversion& value) { SetSampleRangeConversion(value); return *this;}

    /**
     * Specify the video color sample range for this output. To create a full range
     * output, you must start with a full range YUV input and keep the default value,
     * None (NONE). To create a limited range output from a full range input, choose
     * Limited range (LIMITED_RANGE_SQUEEZE). With RGB inputs, your output is always
     * limited range, regardless of your choice here. When you create a limited range
     * output from a full range input, MediaConvert limits the active pixel values in a
     * way that depends on the output's bit depth: 8-bit outputs contain only values
     * from 16 through 235 and 10-bit outputs contain only values from 64 through 940.
     * With this conversion, MediaConvert also changes the output metadata to note the
     * limited range.
     */
    inline ColorCorrector& WithSampleRangeConversion(SampleRangeConversion&& value) { SetSampleRangeConversion(std::move(value)); return *this;}


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


    /**
     * Specify the reference white level, in nits, for all of your SDR inputs. Use to
     * correct brightness levels within HDR10 outputs. The following color metadata
     * must be present in your SDR input: color primaries, transfer characteristics,
     * and matrix coefficients. If your SDR input has missing color metadata, or if you
     * want to correct input color metadata, manually specify a color space in the
     * input video selector. For 1,000 nit peak brightness displays, we recommend that
     * you set SDR reference white level to 203 (according to ITU-R BT.2408). Leave
     * blank to use the default value of 100, or specify an integer from 100 to 1000.
     */
    inline int GetSdrReferenceWhiteLevel() const{ return m_sdrReferenceWhiteLevel; }

    /**
     * Specify the reference white level, in nits, for all of your SDR inputs. Use to
     * correct brightness levels within HDR10 outputs. The following color metadata
     * must be present in your SDR input: color primaries, transfer characteristics,
     * and matrix coefficients. If your SDR input has missing color metadata, or if you
     * want to correct input color metadata, manually specify a color space in the
     * input video selector. For 1,000 nit peak brightness displays, we recommend that
     * you set SDR reference white level to 203 (according to ITU-R BT.2408). Leave
     * blank to use the default value of 100, or specify an integer from 100 to 1000.
     */
    inline bool SdrReferenceWhiteLevelHasBeenSet() const { return m_sdrReferenceWhiteLevelHasBeenSet; }

    /**
     * Specify the reference white level, in nits, for all of your SDR inputs. Use to
     * correct brightness levels within HDR10 outputs. The following color metadata
     * must be present in your SDR input: color primaries, transfer characteristics,
     * and matrix coefficients. If your SDR input has missing color metadata, or if you
     * want to correct input color metadata, manually specify a color space in the
     * input video selector. For 1,000 nit peak brightness displays, we recommend that
     * you set SDR reference white level to 203 (according to ITU-R BT.2408). Leave
     * blank to use the default value of 100, or specify an integer from 100 to 1000.
     */
    inline void SetSdrReferenceWhiteLevel(int value) { m_sdrReferenceWhiteLevelHasBeenSet = true; m_sdrReferenceWhiteLevel = value; }

    /**
     * Specify the reference white level, in nits, for all of your SDR inputs. Use to
     * correct brightness levels within HDR10 outputs. The following color metadata
     * must be present in your SDR input: color primaries, transfer characteristics,
     * and matrix coefficients. If your SDR input has missing color metadata, or if you
     * want to correct input color metadata, manually specify a color space in the
     * input video selector. For 1,000 nit peak brightness displays, we recommend that
     * you set SDR reference white level to 203 (according to ITU-R BT.2408). Leave
     * blank to use the default value of 100, or specify an integer from 100 to 1000.
     */
    inline ColorCorrector& WithSdrReferenceWhiteLevel(int value) { SetSdrReferenceWhiteLevel(value); return *this;}

  private:

    int m_brightness;
    bool m_brightnessHasBeenSet = false;

    ColorSpaceConversion m_colorSpaceConversion;
    bool m_colorSpaceConversionHasBeenSet = false;

    int m_contrast;
    bool m_contrastHasBeenSet = false;

    Hdr10Metadata m_hdr10Metadata;
    bool m_hdr10MetadataHasBeenSet = false;

    int m_hue;
    bool m_hueHasBeenSet = false;

    SampleRangeConversion m_sampleRangeConversion;
    bool m_sampleRangeConversionHasBeenSet = false;

    int m_saturation;
    bool m_saturationHasBeenSet = false;

    int m_sdrReferenceWhiteLevel;
    bool m_sdrReferenceWhiteLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
