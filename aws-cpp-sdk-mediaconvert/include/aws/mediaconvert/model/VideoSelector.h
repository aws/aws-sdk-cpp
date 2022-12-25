/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AlphaBehavior.h>
#include <aws/mediaconvert/model/ColorSpace.h>
#include <aws/mediaconvert/model/ColorSpaceUsage.h>
#include <aws/mediaconvert/model/EmbeddedTimecodeOverride.h>
#include <aws/mediaconvert/model/Hdr10Metadata.h>
#include <aws/mediaconvert/model/PadVideo.h>
#include <aws/mediaconvert/model/InputRotate.h>
#include <aws/mediaconvert/model/InputSampleRange.h>
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
   * Input video selectors contain the video settings for the input. Each of your
   * inputs can have up to one video selector.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoSelector">AWS
   * API Reference</a></p>
   */
  class VideoSelector
  {
  public:
    AWS_MEDIACONVERT_API VideoSelector();
    AWS_MEDIACONVERT_API VideoSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Ignore this setting unless this input is a QuickTime animation with an alpha
     * channel. Use this setting to create separate Key and Fill outputs. In each
     * output, specify which part of the input MediaConvert uses. Leave this setting at
     * the default value DISCARD to delete the alpha channel and preserve the video.
     * Set it to REMAP_TO_LUMA to delete the video and map the alpha channel to the
     * luma channel of your outputs.
     */
    inline const AlphaBehavior& GetAlphaBehavior() const{ return m_alphaBehavior; }

    /**
     * Ignore this setting unless this input is a QuickTime animation with an alpha
     * channel. Use this setting to create separate Key and Fill outputs. In each
     * output, specify which part of the input MediaConvert uses. Leave this setting at
     * the default value DISCARD to delete the alpha channel and preserve the video.
     * Set it to REMAP_TO_LUMA to delete the video and map the alpha channel to the
     * luma channel of your outputs.
     */
    inline bool AlphaBehaviorHasBeenSet() const { return m_alphaBehaviorHasBeenSet; }

    /**
     * Ignore this setting unless this input is a QuickTime animation with an alpha
     * channel. Use this setting to create separate Key and Fill outputs. In each
     * output, specify which part of the input MediaConvert uses. Leave this setting at
     * the default value DISCARD to delete the alpha channel and preserve the video.
     * Set it to REMAP_TO_LUMA to delete the video and map the alpha channel to the
     * luma channel of your outputs.
     */
    inline void SetAlphaBehavior(const AlphaBehavior& value) { m_alphaBehaviorHasBeenSet = true; m_alphaBehavior = value; }

    /**
     * Ignore this setting unless this input is a QuickTime animation with an alpha
     * channel. Use this setting to create separate Key and Fill outputs. In each
     * output, specify which part of the input MediaConvert uses. Leave this setting at
     * the default value DISCARD to delete the alpha channel and preserve the video.
     * Set it to REMAP_TO_LUMA to delete the video and map the alpha channel to the
     * luma channel of your outputs.
     */
    inline void SetAlphaBehavior(AlphaBehavior&& value) { m_alphaBehaviorHasBeenSet = true; m_alphaBehavior = std::move(value); }

    /**
     * Ignore this setting unless this input is a QuickTime animation with an alpha
     * channel. Use this setting to create separate Key and Fill outputs. In each
     * output, specify which part of the input MediaConvert uses. Leave this setting at
     * the default value DISCARD to delete the alpha channel and preserve the video.
     * Set it to REMAP_TO_LUMA to delete the video and map the alpha channel to the
     * luma channel of your outputs.
     */
    inline VideoSelector& WithAlphaBehavior(const AlphaBehavior& value) { SetAlphaBehavior(value); return *this;}

    /**
     * Ignore this setting unless this input is a QuickTime animation with an alpha
     * channel. Use this setting to create separate Key and Fill outputs. In each
     * output, specify which part of the input MediaConvert uses. Leave this setting at
     * the default value DISCARD to delete the alpha channel and preserve the video.
     * Set it to REMAP_TO_LUMA to delete the video and map the alpha channel to the
     * luma channel of your outputs.
     */
    inline VideoSelector& WithAlphaBehavior(AlphaBehavior&& value) { SetAlphaBehavior(std::move(value)); return *this;}


    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value Follow. The service will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, specify the accurate color space here. If your
     * input video is HDR 10 and the SMPTE ST 2086 Mastering Display Color Volume
     * static metadata isn't present in your video stream, or if that metadata is
     * present but not accurate, choose Force HDR 10 here and specify correct values in
     * the input HDR 10 metadata settings. For more information about MediaConvert HDR
     * jobs, see https://docs.aws.amazon.com/console/mediaconvert/hdr. Select P3D65
     * (SDR) to set the input color space metadata to the following:
 * Color
     * primaries: Display P3
 * Transfer characteristics: SMPTE 428M
 * Matrix
     * coefficients: BT.709
     */
    inline const ColorSpace& GetColorSpace() const{ return m_colorSpace; }

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value Follow. The service will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, specify the accurate color space here. If your
     * input video is HDR 10 and the SMPTE ST 2086 Mastering Display Color Volume
     * static metadata isn't present in your video stream, or if that metadata is
     * present but not accurate, choose Force HDR 10 here and specify correct values in
     * the input HDR 10 metadata settings. For more information about MediaConvert HDR
     * jobs, see https://docs.aws.amazon.com/console/mediaconvert/hdr. Select P3D65
     * (SDR) to set the input color space metadata to the following:
 * Color
     * primaries: Display P3
 * Transfer characteristics: SMPTE 428M
 * Matrix
     * coefficients: BT.709
     */
    inline bool ColorSpaceHasBeenSet() const { return m_colorSpaceHasBeenSet; }

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value Follow. The service will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, specify the accurate color space here. If your
     * input video is HDR 10 and the SMPTE ST 2086 Mastering Display Color Volume
     * static metadata isn't present in your video stream, or if that metadata is
     * present but not accurate, choose Force HDR 10 here and specify correct values in
     * the input HDR 10 metadata settings. For more information about MediaConvert HDR
     * jobs, see https://docs.aws.amazon.com/console/mediaconvert/hdr. Select P3D65
     * (SDR) to set the input color space metadata to the following:
 * Color
     * primaries: Display P3
 * Transfer characteristics: SMPTE 428M
 * Matrix
     * coefficients: BT.709
     */
    inline void SetColorSpace(const ColorSpace& value) { m_colorSpaceHasBeenSet = true; m_colorSpace = value; }

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value Follow. The service will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, specify the accurate color space here. If your
     * input video is HDR 10 and the SMPTE ST 2086 Mastering Display Color Volume
     * static metadata isn't present in your video stream, or if that metadata is
     * present but not accurate, choose Force HDR 10 here and specify correct values in
     * the input HDR 10 metadata settings. For more information about MediaConvert HDR
     * jobs, see https://docs.aws.amazon.com/console/mediaconvert/hdr. Select P3D65
     * (SDR) to set the input color space metadata to the following:
 * Color
     * primaries: Display P3
 * Transfer characteristics: SMPTE 428M
 * Matrix
     * coefficients: BT.709
     */
    inline void SetColorSpace(ColorSpace&& value) { m_colorSpaceHasBeenSet = true; m_colorSpace = std::move(value); }

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value Follow. The service will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, specify the accurate color space here. If your
     * input video is HDR 10 and the SMPTE ST 2086 Mastering Display Color Volume
     * static metadata isn't present in your video stream, or if that metadata is
     * present but not accurate, choose Force HDR 10 here and specify correct values in
     * the input HDR 10 metadata settings. For more information about MediaConvert HDR
     * jobs, see https://docs.aws.amazon.com/console/mediaconvert/hdr. Select P3D65
     * (SDR) to set the input color space metadata to the following:
 * Color
     * primaries: Display P3
 * Transfer characteristics: SMPTE 428M
 * Matrix
     * coefficients: BT.709
     */
    inline VideoSelector& WithColorSpace(const ColorSpace& value) { SetColorSpace(value); return *this;}

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value Follow. The service will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, specify the accurate color space here. If your
     * input video is HDR 10 and the SMPTE ST 2086 Mastering Display Color Volume
     * static metadata isn't present in your video stream, or if that metadata is
     * present but not accurate, choose Force HDR 10 here and specify correct values in
     * the input HDR 10 metadata settings. For more information about MediaConvert HDR
     * jobs, see https://docs.aws.amazon.com/console/mediaconvert/hdr. Select P3D65
     * (SDR) to set the input color space metadata to the following:
 * Color
     * primaries: Display P3
 * Transfer characteristics: SMPTE 428M
 * Matrix
     * coefficients: BT.709
     */
    inline VideoSelector& WithColorSpace(ColorSpace&& value) { SetColorSpace(std::move(value)); return *this;}


    /**
     * There are two sources for color metadata, the input file and the job input
     * settings Color space (ColorSpace) and HDR master display information
     * settings(Hdr10Metadata). The Color space usage setting determines which takes
     * precedence. Choose Force (FORCE) to use color metadata from the input job
     * settings. If you don't specify values for those settings, the service defaults
     * to using metadata from your input. FALLBACK - Choose Fallback (FALLBACK) to use
     * color metadata from the source when it is present. If there's no color metadata
     * in your input file, the service defaults to using values you specify in the
     * input settings.
     */
    inline const ColorSpaceUsage& GetColorSpaceUsage() const{ return m_colorSpaceUsage; }

    /**
     * There are two sources for color metadata, the input file and the job input
     * settings Color space (ColorSpace) and HDR master display information
     * settings(Hdr10Metadata). The Color space usage setting determines which takes
     * precedence. Choose Force (FORCE) to use color metadata from the input job
     * settings. If you don't specify values for those settings, the service defaults
     * to using metadata from your input. FALLBACK - Choose Fallback (FALLBACK) to use
     * color metadata from the source when it is present. If there's no color metadata
     * in your input file, the service defaults to using values you specify in the
     * input settings.
     */
    inline bool ColorSpaceUsageHasBeenSet() const { return m_colorSpaceUsageHasBeenSet; }

    /**
     * There are two sources for color metadata, the input file and the job input
     * settings Color space (ColorSpace) and HDR master display information
     * settings(Hdr10Metadata). The Color space usage setting determines which takes
     * precedence. Choose Force (FORCE) to use color metadata from the input job
     * settings. If you don't specify values for those settings, the service defaults
     * to using metadata from your input. FALLBACK - Choose Fallback (FALLBACK) to use
     * color metadata from the source when it is present. If there's no color metadata
     * in your input file, the service defaults to using values you specify in the
     * input settings.
     */
    inline void SetColorSpaceUsage(const ColorSpaceUsage& value) { m_colorSpaceUsageHasBeenSet = true; m_colorSpaceUsage = value; }

    /**
     * There are two sources for color metadata, the input file and the job input
     * settings Color space (ColorSpace) and HDR master display information
     * settings(Hdr10Metadata). The Color space usage setting determines which takes
     * precedence. Choose Force (FORCE) to use color metadata from the input job
     * settings. If you don't specify values for those settings, the service defaults
     * to using metadata from your input. FALLBACK - Choose Fallback (FALLBACK) to use
     * color metadata from the source when it is present. If there's no color metadata
     * in your input file, the service defaults to using values you specify in the
     * input settings.
     */
    inline void SetColorSpaceUsage(ColorSpaceUsage&& value) { m_colorSpaceUsageHasBeenSet = true; m_colorSpaceUsage = std::move(value); }

    /**
     * There are two sources for color metadata, the input file and the job input
     * settings Color space (ColorSpace) and HDR master display information
     * settings(Hdr10Metadata). The Color space usage setting determines which takes
     * precedence. Choose Force (FORCE) to use color metadata from the input job
     * settings. If you don't specify values for those settings, the service defaults
     * to using metadata from your input. FALLBACK - Choose Fallback (FALLBACK) to use
     * color metadata from the source when it is present. If there's no color metadata
     * in your input file, the service defaults to using values you specify in the
     * input settings.
     */
    inline VideoSelector& WithColorSpaceUsage(const ColorSpaceUsage& value) { SetColorSpaceUsage(value); return *this;}

    /**
     * There are two sources for color metadata, the input file and the job input
     * settings Color space (ColorSpace) and HDR master display information
     * settings(Hdr10Metadata). The Color space usage setting determines which takes
     * precedence. Choose Force (FORCE) to use color metadata from the input job
     * settings. If you don't specify values for those settings, the service defaults
     * to using metadata from your input. FALLBACK - Choose Fallback (FALLBACK) to use
     * color metadata from the source when it is present. If there's no color metadata
     * in your input file, the service defaults to using values you specify in the
     * input settings.
     */
    inline VideoSelector& WithColorSpaceUsage(ColorSpaceUsage&& value) { SetColorSpaceUsage(std::move(value)); return *this;}


    /**
     * Set Embedded timecode override (embeddedTimecodeOverride) to Use MDPM (USE_MDPM)
     * when your AVCHD input contains timecode tag data in the Modified Digital Video
     * Pack Metadata (MDPM). When you do, we recommend you also set Timecode source
     * (inputTimecodeSource) to Embedded (EMBEDDED). Leave Embedded timecode override
     * blank, or set to None (NONE), when your input does not contain MDPM timecode.
     */
    inline const EmbeddedTimecodeOverride& GetEmbeddedTimecodeOverride() const{ return m_embeddedTimecodeOverride; }

    /**
     * Set Embedded timecode override (embeddedTimecodeOverride) to Use MDPM (USE_MDPM)
     * when your AVCHD input contains timecode tag data in the Modified Digital Video
     * Pack Metadata (MDPM). When you do, we recommend you also set Timecode source
     * (inputTimecodeSource) to Embedded (EMBEDDED). Leave Embedded timecode override
     * blank, or set to None (NONE), when your input does not contain MDPM timecode.
     */
    inline bool EmbeddedTimecodeOverrideHasBeenSet() const { return m_embeddedTimecodeOverrideHasBeenSet; }

    /**
     * Set Embedded timecode override (embeddedTimecodeOverride) to Use MDPM (USE_MDPM)
     * when your AVCHD input contains timecode tag data in the Modified Digital Video
     * Pack Metadata (MDPM). When you do, we recommend you also set Timecode source
     * (inputTimecodeSource) to Embedded (EMBEDDED). Leave Embedded timecode override
     * blank, or set to None (NONE), when your input does not contain MDPM timecode.
     */
    inline void SetEmbeddedTimecodeOverride(const EmbeddedTimecodeOverride& value) { m_embeddedTimecodeOverrideHasBeenSet = true; m_embeddedTimecodeOverride = value; }

    /**
     * Set Embedded timecode override (embeddedTimecodeOverride) to Use MDPM (USE_MDPM)
     * when your AVCHD input contains timecode tag data in the Modified Digital Video
     * Pack Metadata (MDPM). When you do, we recommend you also set Timecode source
     * (inputTimecodeSource) to Embedded (EMBEDDED). Leave Embedded timecode override
     * blank, or set to None (NONE), when your input does not contain MDPM timecode.
     */
    inline void SetEmbeddedTimecodeOverride(EmbeddedTimecodeOverride&& value) { m_embeddedTimecodeOverrideHasBeenSet = true; m_embeddedTimecodeOverride = std::move(value); }

    /**
     * Set Embedded timecode override (embeddedTimecodeOverride) to Use MDPM (USE_MDPM)
     * when your AVCHD input contains timecode tag data in the Modified Digital Video
     * Pack Metadata (MDPM). When you do, we recommend you also set Timecode source
     * (inputTimecodeSource) to Embedded (EMBEDDED). Leave Embedded timecode override
     * blank, or set to None (NONE), when your input does not contain MDPM timecode.
     */
    inline VideoSelector& WithEmbeddedTimecodeOverride(const EmbeddedTimecodeOverride& value) { SetEmbeddedTimecodeOverride(value); return *this;}

    /**
     * Set Embedded timecode override (embeddedTimecodeOverride) to Use MDPM (USE_MDPM)
     * when your AVCHD input contains timecode tag data in the Modified Digital Video
     * Pack Metadata (MDPM). When you do, we recommend you also set Timecode source
     * (inputTimecodeSource) to Embedded (EMBEDDED). Leave Embedded timecode override
     * blank, or set to None (NONE), when your input does not contain MDPM timecode.
     */
    inline VideoSelector& WithEmbeddedTimecodeOverride(EmbeddedTimecodeOverride&& value) { SetEmbeddedTimecodeOverride(std::move(value)); return *this;}


    /**
     * Use these settings to provide HDR 10 metadata that is missing or inaccurate in
     * your input video. Appropriate values vary depending on the input video and must
     * be provided by a color grader. The color grader generates these values during
     * the HDR 10 mastering process. The valid range for each of these settings is 0 to
     * 50,000. Each increment represents 0.00002 in CIE1931 color coordinate. Related
     * settings - When you specify these values, you must also set Color space
     * (ColorSpace) to HDR 10 (HDR10). To specify whether the the values you specify
     * here take precedence over the values in the metadata of your input file, set
     * Color space usage (ColorSpaceUsage). To specify whether color metadata is
     * included in an output, set Color metadata (ColorMetadata). For more information
     * about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline const Hdr10Metadata& GetHdr10Metadata() const{ return m_hdr10Metadata; }

    /**
     * Use these settings to provide HDR 10 metadata that is missing or inaccurate in
     * your input video. Appropriate values vary depending on the input video and must
     * be provided by a color grader. The color grader generates these values during
     * the HDR 10 mastering process. The valid range for each of these settings is 0 to
     * 50,000. Each increment represents 0.00002 in CIE1931 color coordinate. Related
     * settings - When you specify these values, you must also set Color space
     * (ColorSpace) to HDR 10 (HDR10). To specify whether the the values you specify
     * here take precedence over the values in the metadata of your input file, set
     * Color space usage (ColorSpaceUsage). To specify whether color metadata is
     * included in an output, set Color metadata (ColorMetadata). For more information
     * about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline bool Hdr10MetadataHasBeenSet() const { return m_hdr10MetadataHasBeenSet; }

    /**
     * Use these settings to provide HDR 10 metadata that is missing or inaccurate in
     * your input video. Appropriate values vary depending on the input video and must
     * be provided by a color grader. The color grader generates these values during
     * the HDR 10 mastering process. The valid range for each of these settings is 0 to
     * 50,000. Each increment represents 0.00002 in CIE1931 color coordinate. Related
     * settings - When you specify these values, you must also set Color space
     * (ColorSpace) to HDR 10 (HDR10). To specify whether the the values you specify
     * here take precedence over the values in the metadata of your input file, set
     * Color space usage (ColorSpaceUsage). To specify whether color metadata is
     * included in an output, set Color metadata (ColorMetadata). For more information
     * about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline void SetHdr10Metadata(const Hdr10Metadata& value) { m_hdr10MetadataHasBeenSet = true; m_hdr10Metadata = value; }

    /**
     * Use these settings to provide HDR 10 metadata that is missing or inaccurate in
     * your input video. Appropriate values vary depending on the input video and must
     * be provided by a color grader. The color grader generates these values during
     * the HDR 10 mastering process. The valid range for each of these settings is 0 to
     * 50,000. Each increment represents 0.00002 in CIE1931 color coordinate. Related
     * settings - When you specify these values, you must also set Color space
     * (ColorSpace) to HDR 10 (HDR10). To specify whether the the values you specify
     * here take precedence over the values in the metadata of your input file, set
     * Color space usage (ColorSpaceUsage). To specify whether color metadata is
     * included in an output, set Color metadata (ColorMetadata). For more information
     * about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline void SetHdr10Metadata(Hdr10Metadata&& value) { m_hdr10MetadataHasBeenSet = true; m_hdr10Metadata = std::move(value); }

    /**
     * Use these settings to provide HDR 10 metadata that is missing or inaccurate in
     * your input video. Appropriate values vary depending on the input video and must
     * be provided by a color grader. The color grader generates these values during
     * the HDR 10 mastering process. The valid range for each of these settings is 0 to
     * 50,000. Each increment represents 0.00002 in CIE1931 color coordinate. Related
     * settings - When you specify these values, you must also set Color space
     * (ColorSpace) to HDR 10 (HDR10). To specify whether the the values you specify
     * here take precedence over the values in the metadata of your input file, set
     * Color space usage (ColorSpaceUsage). To specify whether color metadata is
     * included in an output, set Color metadata (ColorMetadata). For more information
     * about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline VideoSelector& WithHdr10Metadata(const Hdr10Metadata& value) { SetHdr10Metadata(value); return *this;}

    /**
     * Use these settings to provide HDR 10 metadata that is missing or inaccurate in
     * your input video. Appropriate values vary depending on the input video and must
     * be provided by a color grader. The color grader generates these values during
     * the HDR 10 mastering process. The valid range for each of these settings is 0 to
     * 50,000. Each increment represents 0.00002 in CIE1931 color coordinate. Related
     * settings - When you specify these values, you must also set Color space
     * (ColorSpace) to HDR 10 (HDR10). To specify whether the the values you specify
     * here take precedence over the values in the metadata of your input file, set
     * Color space usage (ColorSpaceUsage). To specify whether color metadata is
     * included in an output, set Color metadata (ColorMetadata). For more information
     * about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline VideoSelector& WithHdr10Metadata(Hdr10Metadata&& value) { SetHdr10Metadata(std::move(value)); return *this;}


    /**
     * Use this setting if your input has video and audio durations that don't align,
     * and your output or player has strict alignment requirements. Examples: Input
     * audio track has a delayed start. Input video track ends before audio ends. When
     * you set Pad video (padVideo) to Black (BLACK), MediaConvert generates black
     * video frames so that output video and audio durations match. Black video frames
     * are added at the beginning or end, depending on your input. To keep the default
     * behavior and not generate black video, set Pad video to Disabled (DISABLED) or
     * leave blank.
     */
    inline const PadVideo& GetPadVideo() const{ return m_padVideo; }

    /**
     * Use this setting if your input has video and audio durations that don't align,
     * and your output or player has strict alignment requirements. Examples: Input
     * audio track has a delayed start. Input video track ends before audio ends. When
     * you set Pad video (padVideo) to Black (BLACK), MediaConvert generates black
     * video frames so that output video and audio durations match. Black video frames
     * are added at the beginning or end, depending on your input. To keep the default
     * behavior and not generate black video, set Pad video to Disabled (DISABLED) or
     * leave blank.
     */
    inline bool PadVideoHasBeenSet() const { return m_padVideoHasBeenSet; }

    /**
     * Use this setting if your input has video and audio durations that don't align,
     * and your output or player has strict alignment requirements. Examples: Input
     * audio track has a delayed start. Input video track ends before audio ends. When
     * you set Pad video (padVideo) to Black (BLACK), MediaConvert generates black
     * video frames so that output video and audio durations match. Black video frames
     * are added at the beginning or end, depending on your input. To keep the default
     * behavior and not generate black video, set Pad video to Disabled (DISABLED) or
     * leave blank.
     */
    inline void SetPadVideo(const PadVideo& value) { m_padVideoHasBeenSet = true; m_padVideo = value; }

    /**
     * Use this setting if your input has video and audio durations that don't align,
     * and your output or player has strict alignment requirements. Examples: Input
     * audio track has a delayed start. Input video track ends before audio ends. When
     * you set Pad video (padVideo) to Black (BLACK), MediaConvert generates black
     * video frames so that output video and audio durations match. Black video frames
     * are added at the beginning or end, depending on your input. To keep the default
     * behavior and not generate black video, set Pad video to Disabled (DISABLED) or
     * leave blank.
     */
    inline void SetPadVideo(PadVideo&& value) { m_padVideoHasBeenSet = true; m_padVideo = std::move(value); }

    /**
     * Use this setting if your input has video and audio durations that don't align,
     * and your output or player has strict alignment requirements. Examples: Input
     * audio track has a delayed start. Input video track ends before audio ends. When
     * you set Pad video (padVideo) to Black (BLACK), MediaConvert generates black
     * video frames so that output video and audio durations match. Black video frames
     * are added at the beginning or end, depending on your input. To keep the default
     * behavior and not generate black video, set Pad video to Disabled (DISABLED) or
     * leave blank.
     */
    inline VideoSelector& WithPadVideo(const PadVideo& value) { SetPadVideo(value); return *this;}

    /**
     * Use this setting if your input has video and audio durations that don't align,
     * and your output or player has strict alignment requirements. Examples: Input
     * audio track has a delayed start. Input video track ends before audio ends. When
     * you set Pad video (padVideo) to Black (BLACK), MediaConvert generates black
     * video frames so that output video and audio durations match. Black video frames
     * are added at the beginning or end, depending on your input. To keep the default
     * behavior and not generate black video, set Pad video to Disabled (DISABLED) or
     * leave blank.
     */
    inline VideoSelector& WithPadVideo(PadVideo&& value) { SetPadVideo(std::move(value)); return *this;}


    /**
     * Use PID (Pid) to select specific video data from an input file. Specify this
     * value as an integer; the system automatically converts it to the hexidecimal
     * value. For example, 257 selects PID 0x101. A PID, or packet identifier, is an
     * identifier for a set of data in an MPEG-2 transport stream container.
     */
    inline int GetPid() const{ return m_pid; }

    /**
     * Use PID (Pid) to select specific video data from an input file. Specify this
     * value as an integer; the system automatically converts it to the hexidecimal
     * value. For example, 257 selects PID 0x101. A PID, or packet identifier, is an
     * identifier for a set of data in an MPEG-2 transport stream container.
     */
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }

    /**
     * Use PID (Pid) to select specific video data from an input file. Specify this
     * value as an integer; the system automatically converts it to the hexidecimal
     * value. For example, 257 selects PID 0x101. A PID, or packet identifier, is an
     * identifier for a set of data in an MPEG-2 transport stream container.
     */
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }

    /**
     * Use PID (Pid) to select specific video data from an input file. Specify this
     * value as an integer; the system automatically converts it to the hexidecimal
     * value. For example, 257 selects PID 0x101. A PID, or packet identifier, is an
     * identifier for a set of data in an MPEG-2 transport stream container.
     */
    inline VideoSelector& WithPid(int value) { SetPid(value); return *this;}


    /**
     * Selects a specific program from within a multi-program transport stream. Note
     * that Quad 4K is not currently supported.
     */
    inline int GetProgramNumber() const{ return m_programNumber; }

    /**
     * Selects a specific program from within a multi-program transport stream. Note
     * that Quad 4K is not currently supported.
     */
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }

    /**
     * Selects a specific program from within a multi-program transport stream. Note
     * that Quad 4K is not currently supported.
     */
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }

    /**
     * Selects a specific program from within a multi-program transport stream. Note
     * that Quad 4K is not currently supported.
     */
    inline VideoSelector& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}


    /**
     * Use Rotate (InputRotate) to specify how the service rotates your video. You can
     * choose automatic rotation or specify a rotation. You can specify a clockwise
     * rotation of 0, 90, 180, or 270 degrees. If your input video container is .mov or
     * .mp4 and your input has rotation metadata, you can choose Automatic to have the
     * service rotate your video according to the rotation specified in the metadata.
     * The rotation must be within one degree of 90, 180, or 270 degrees. If the
     * rotation metadata specifies any other rotation, the service will default to no
     * rotation. By default, the service does no rotation, even if your input video has
     * rotation metadata. The service doesn't pass through rotation metadata.
     */
    inline const InputRotate& GetRotate() const{ return m_rotate; }

    /**
     * Use Rotate (InputRotate) to specify how the service rotates your video. You can
     * choose automatic rotation or specify a rotation. You can specify a clockwise
     * rotation of 0, 90, 180, or 270 degrees. If your input video container is .mov or
     * .mp4 and your input has rotation metadata, you can choose Automatic to have the
     * service rotate your video according to the rotation specified in the metadata.
     * The rotation must be within one degree of 90, 180, or 270 degrees. If the
     * rotation metadata specifies any other rotation, the service will default to no
     * rotation. By default, the service does no rotation, even if your input video has
     * rotation metadata. The service doesn't pass through rotation metadata.
     */
    inline bool RotateHasBeenSet() const { return m_rotateHasBeenSet; }

    /**
     * Use Rotate (InputRotate) to specify how the service rotates your video. You can
     * choose automatic rotation or specify a rotation. You can specify a clockwise
     * rotation of 0, 90, 180, or 270 degrees. If your input video container is .mov or
     * .mp4 and your input has rotation metadata, you can choose Automatic to have the
     * service rotate your video according to the rotation specified in the metadata.
     * The rotation must be within one degree of 90, 180, or 270 degrees. If the
     * rotation metadata specifies any other rotation, the service will default to no
     * rotation. By default, the service does no rotation, even if your input video has
     * rotation metadata. The service doesn't pass through rotation metadata.
     */
    inline void SetRotate(const InputRotate& value) { m_rotateHasBeenSet = true; m_rotate = value; }

    /**
     * Use Rotate (InputRotate) to specify how the service rotates your video. You can
     * choose automatic rotation or specify a rotation. You can specify a clockwise
     * rotation of 0, 90, 180, or 270 degrees. If your input video container is .mov or
     * .mp4 and your input has rotation metadata, you can choose Automatic to have the
     * service rotate your video according to the rotation specified in the metadata.
     * The rotation must be within one degree of 90, 180, or 270 degrees. If the
     * rotation metadata specifies any other rotation, the service will default to no
     * rotation. By default, the service does no rotation, even if your input video has
     * rotation metadata. The service doesn't pass through rotation metadata.
     */
    inline void SetRotate(InputRotate&& value) { m_rotateHasBeenSet = true; m_rotate = std::move(value); }

    /**
     * Use Rotate (InputRotate) to specify how the service rotates your video. You can
     * choose automatic rotation or specify a rotation. You can specify a clockwise
     * rotation of 0, 90, 180, or 270 degrees. If your input video container is .mov or
     * .mp4 and your input has rotation metadata, you can choose Automatic to have the
     * service rotate your video according to the rotation specified in the metadata.
     * The rotation must be within one degree of 90, 180, or 270 degrees. If the
     * rotation metadata specifies any other rotation, the service will default to no
     * rotation. By default, the service does no rotation, even if your input video has
     * rotation metadata. The service doesn't pass through rotation metadata.
     */
    inline VideoSelector& WithRotate(const InputRotate& value) { SetRotate(value); return *this;}

    /**
     * Use Rotate (InputRotate) to specify how the service rotates your video. You can
     * choose automatic rotation or specify a rotation. You can specify a clockwise
     * rotation of 0, 90, 180, or 270 degrees. If your input video container is .mov or
     * .mp4 and your input has rotation metadata, you can choose Automatic to have the
     * service rotate your video according to the rotation specified in the metadata.
     * The rotation must be within one degree of 90, 180, or 270 degrees. If the
     * rotation metadata specifies any other rotation, the service will default to no
     * rotation. By default, the service does no rotation, even if your input video has
     * rotation metadata. The service doesn't pass through rotation metadata.
     */
    inline VideoSelector& WithRotate(InputRotate&& value) { SetRotate(std::move(value)); return *this;}


    /**
     * If the sample range metadata in your input video is accurate, or if you don't
     * know about sample range, keep the default value, Follow (FOLLOW), for this
     * setting. When you do, the service automatically detects your input sample range.
     * If your input video has metadata indicating the wrong sample range, specify the
     * accurate sample range here. When you do, MediaConvert ignores any sample range
     * information in the input metadata. Regardless of whether MediaConvert uses the
     * input sample range or the sample range that you specify, MediaConvert uses the
     * sample range for transcoding and also writes it to the output metadata.
     */
    inline const InputSampleRange& GetSampleRange() const{ return m_sampleRange; }

    /**
     * If the sample range metadata in your input video is accurate, or if you don't
     * know about sample range, keep the default value, Follow (FOLLOW), for this
     * setting. When you do, the service automatically detects your input sample range.
     * If your input video has metadata indicating the wrong sample range, specify the
     * accurate sample range here. When you do, MediaConvert ignores any sample range
     * information in the input metadata. Regardless of whether MediaConvert uses the
     * input sample range or the sample range that you specify, MediaConvert uses the
     * sample range for transcoding and also writes it to the output metadata.
     */
    inline bool SampleRangeHasBeenSet() const { return m_sampleRangeHasBeenSet; }

    /**
     * If the sample range metadata in your input video is accurate, or if you don't
     * know about sample range, keep the default value, Follow (FOLLOW), for this
     * setting. When you do, the service automatically detects your input sample range.
     * If your input video has metadata indicating the wrong sample range, specify the
     * accurate sample range here. When you do, MediaConvert ignores any sample range
     * information in the input metadata. Regardless of whether MediaConvert uses the
     * input sample range or the sample range that you specify, MediaConvert uses the
     * sample range for transcoding and also writes it to the output metadata.
     */
    inline void SetSampleRange(const InputSampleRange& value) { m_sampleRangeHasBeenSet = true; m_sampleRange = value; }

    /**
     * If the sample range metadata in your input video is accurate, or if you don't
     * know about sample range, keep the default value, Follow (FOLLOW), for this
     * setting. When you do, the service automatically detects your input sample range.
     * If your input video has metadata indicating the wrong sample range, specify the
     * accurate sample range here. When you do, MediaConvert ignores any sample range
     * information in the input metadata. Regardless of whether MediaConvert uses the
     * input sample range or the sample range that you specify, MediaConvert uses the
     * sample range for transcoding and also writes it to the output metadata.
     */
    inline void SetSampleRange(InputSampleRange&& value) { m_sampleRangeHasBeenSet = true; m_sampleRange = std::move(value); }

    /**
     * If the sample range metadata in your input video is accurate, or if you don't
     * know about sample range, keep the default value, Follow (FOLLOW), for this
     * setting. When you do, the service automatically detects your input sample range.
     * If your input video has metadata indicating the wrong sample range, specify the
     * accurate sample range here. When you do, MediaConvert ignores any sample range
     * information in the input metadata. Regardless of whether MediaConvert uses the
     * input sample range or the sample range that you specify, MediaConvert uses the
     * sample range for transcoding and also writes it to the output metadata.
     */
    inline VideoSelector& WithSampleRange(const InputSampleRange& value) { SetSampleRange(value); return *this;}

    /**
     * If the sample range metadata in your input video is accurate, or if you don't
     * know about sample range, keep the default value, Follow (FOLLOW), for this
     * setting. When you do, the service automatically detects your input sample range.
     * If your input video has metadata indicating the wrong sample range, specify the
     * accurate sample range here. When you do, MediaConvert ignores any sample range
     * information in the input metadata. Regardless of whether MediaConvert uses the
     * input sample range or the sample range that you specify, MediaConvert uses the
     * sample range for transcoding and also writes it to the output metadata.
     */
    inline VideoSelector& WithSampleRange(InputSampleRange&& value) { SetSampleRange(std::move(value)); return *this;}

  private:

    AlphaBehavior m_alphaBehavior;
    bool m_alphaBehaviorHasBeenSet = false;

    ColorSpace m_colorSpace;
    bool m_colorSpaceHasBeenSet = false;

    ColorSpaceUsage m_colorSpaceUsage;
    bool m_colorSpaceUsageHasBeenSet = false;

    EmbeddedTimecodeOverride m_embeddedTimecodeOverride;
    bool m_embeddedTimecodeOverrideHasBeenSet = false;

    Hdr10Metadata m_hdr10Metadata;
    bool m_hdr10MetadataHasBeenSet = false;

    PadVideo m_padVideo;
    bool m_padVideoHasBeenSet = false;

    int m_pid;
    bool m_pidHasBeenSet = false;

    int m_programNumber;
    bool m_programNumberHasBeenSet = false;

    InputRotate m_rotate;
    bool m_rotateHasBeenSet = false;

    InputSampleRange m_sampleRange;
    bool m_sampleRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
