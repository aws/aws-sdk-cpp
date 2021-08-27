/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AlphaBehavior.h>
#include <aws/mediaconvert/model/ColorSpace.h>
#include <aws/mediaconvert/model/ColorSpaceUsage.h>
#include <aws/mediaconvert/model/Hdr10Metadata.h>
#include <aws/mediaconvert/model/InputRotate.h>
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
   * Selector for video.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoSelector">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API VideoSelector
  {
  public:
    VideoSelector();
    VideoSelector(Aws::Utils::Json::JsonView jsonValue);
    VideoSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * about color space, leave this set to the default value Follow (FOLLOW). The
     * service will automatically detect your input color space. If your input video
     * has metadata indicating the wrong color space, specify the accurate color space
     * here. If your input video is HDR 10 and the SMPTE ST 2086 Mastering Display
     * Color Volume static metadata isn't present in your video stream, or if that
     * metadata is present but not accurate, choose Force HDR 10 (FORCE_HDR10) here and
     * specify correct values in the input HDR 10 metadata (Hdr10Metadata) settings.
     * For more information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline const ColorSpace& GetColorSpace() const{ return m_colorSpace; }

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value Follow (FOLLOW). The
     * service will automatically detect your input color space. If your input video
     * has metadata indicating the wrong color space, specify the accurate color space
     * here. If your input video is HDR 10 and the SMPTE ST 2086 Mastering Display
     * Color Volume static metadata isn't present in your video stream, or if that
     * metadata is present but not accurate, choose Force HDR 10 (FORCE_HDR10) here and
     * specify correct values in the input HDR 10 metadata (Hdr10Metadata) settings.
     * For more information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline bool ColorSpaceHasBeenSet() const { return m_colorSpaceHasBeenSet; }

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value Follow (FOLLOW). The
     * service will automatically detect your input color space. If your input video
     * has metadata indicating the wrong color space, specify the accurate color space
     * here. If your input video is HDR 10 and the SMPTE ST 2086 Mastering Display
     * Color Volume static metadata isn't present in your video stream, or if that
     * metadata is present but not accurate, choose Force HDR 10 (FORCE_HDR10) here and
     * specify correct values in the input HDR 10 metadata (Hdr10Metadata) settings.
     * For more information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline void SetColorSpace(const ColorSpace& value) { m_colorSpaceHasBeenSet = true; m_colorSpace = value; }

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value Follow (FOLLOW). The
     * service will automatically detect your input color space. If your input video
     * has metadata indicating the wrong color space, specify the accurate color space
     * here. If your input video is HDR 10 and the SMPTE ST 2086 Mastering Display
     * Color Volume static metadata isn't present in your video stream, or if that
     * metadata is present but not accurate, choose Force HDR 10 (FORCE_HDR10) here and
     * specify correct values in the input HDR 10 metadata (Hdr10Metadata) settings.
     * For more information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline void SetColorSpace(ColorSpace&& value) { m_colorSpaceHasBeenSet = true; m_colorSpace = std::move(value); }

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value Follow (FOLLOW). The
     * service will automatically detect your input color space. If your input video
     * has metadata indicating the wrong color space, specify the accurate color space
     * here. If your input video is HDR 10 and the SMPTE ST 2086 Mastering Display
     * Color Volume static metadata isn't present in your video stream, or if that
     * metadata is present but not accurate, choose Force HDR 10 (FORCE_HDR10) here and
     * specify correct values in the input HDR 10 metadata (Hdr10Metadata) settings.
     * For more information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline VideoSelector& WithColorSpace(const ColorSpace& value) { SetColorSpace(value); return *this;}

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value Follow (FOLLOW). The
     * service will automatically detect your input color space. If your input video
     * has metadata indicating the wrong color space, specify the accurate color space
     * here. If your input video is HDR 10 and the SMPTE ST 2086 Mastering Display
     * Color Volume static metadata isn't present in your video stream, or if that
     * metadata is present but not accurate, choose Force HDR 10 (FORCE_HDR10) here and
     * specify correct values in the input HDR 10 metadata (Hdr10Metadata) settings.
     * For more information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
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

  private:

    AlphaBehavior m_alphaBehavior;
    bool m_alphaBehaviorHasBeenSet;

    ColorSpace m_colorSpace;
    bool m_colorSpaceHasBeenSet;

    ColorSpaceUsage m_colorSpaceUsage;
    bool m_colorSpaceUsageHasBeenSet;

    Hdr10Metadata m_hdr10Metadata;
    bool m_hdr10MetadataHasBeenSet;

    int m_pid;
    bool m_pidHasBeenSet;

    int m_programNumber;
    bool m_programNumberHasBeenSet;

    InputRotate m_rotate;
    bool m_rotateHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
