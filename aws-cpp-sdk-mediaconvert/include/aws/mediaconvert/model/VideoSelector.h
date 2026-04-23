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
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value FOLLOW. The service will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, or if your input video is missing color space
     * metadata that should be there, specify the accurate color space here. If you
     * choose HDR10, you can also correct inaccurate color space coefficients, using
     * the HDR master display information controls. You must also set Color space usage
     * (ColorSpaceUsage) to FORCE for the service to use these values.
     */
    inline const ColorSpace& GetColorSpace() const{ return m_colorSpace; }

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value FOLLOW. The service will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, or if your input video is missing color space
     * metadata that should be there, specify the accurate color space here. If you
     * choose HDR10, you can also correct inaccurate color space coefficients, using
     * the HDR master display information controls. You must also set Color space usage
     * (ColorSpaceUsage) to FORCE for the service to use these values.
     */
    inline bool ColorSpaceHasBeenSet() const { return m_colorSpaceHasBeenSet; }

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value FOLLOW. The service will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, or if your input video is missing color space
     * metadata that should be there, specify the accurate color space here. If you
     * choose HDR10, you can also correct inaccurate color space coefficients, using
     * the HDR master display information controls. You must also set Color space usage
     * (ColorSpaceUsage) to FORCE for the service to use these values.
     */
    inline void SetColorSpace(const ColorSpace& value) { m_colorSpaceHasBeenSet = true; m_colorSpace = value; }

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value FOLLOW. The service will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, or if your input video is missing color space
     * metadata that should be there, specify the accurate color space here. If you
     * choose HDR10, you can also correct inaccurate color space coefficients, using
     * the HDR master display information controls. You must also set Color space usage
     * (ColorSpaceUsage) to FORCE for the service to use these values.
     */
    inline void SetColorSpace(ColorSpace&& value) { m_colorSpaceHasBeenSet = true; m_colorSpace = std::move(value); }

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value FOLLOW. The service will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, or if your input video is missing color space
     * metadata that should be there, specify the accurate color space here. If you
     * choose HDR10, you can also correct inaccurate color space coefficients, using
     * the HDR master display information controls. You must also set Color space usage
     * (ColorSpaceUsage) to FORCE for the service to use these values.
     */
    inline VideoSelector& WithColorSpace(const ColorSpace& value) { SetColorSpace(value); return *this;}

    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space, leave this set to the default value FOLLOW. The service will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, or if your input video is missing color space
     * metadata that should be there, specify the accurate color space here. If you
     * choose HDR10, you can also correct inaccurate color space coefficients, using
     * the HDR master display information controls. You must also set Color space usage
     * (ColorSpaceUsage) to FORCE for the service to use these values.
     */
    inline VideoSelector& WithColorSpace(ColorSpace&& value) { SetColorSpace(std::move(value)); return *this;}


    /**
     * There are two sources for color metadata, the input file and the job
     * configuration (in the Color space and HDR master display informaiton settings).
     * The Color space usage setting controls which takes precedence. FORCE: The system
     * will use color metadata supplied by user, if any. If the user does not supply
     * color metadata, the system will use data from the source. FALLBACK: The system
     * will use color metadata from the source. If source has no color metadata, the
     * system will use user-supplied color metadata values if available.
     */
    inline const ColorSpaceUsage& GetColorSpaceUsage() const{ return m_colorSpaceUsage; }

    /**
     * There are two sources for color metadata, the input file and the job
     * configuration (in the Color space and HDR master display informaiton settings).
     * The Color space usage setting controls which takes precedence. FORCE: The system
     * will use color metadata supplied by user, if any. If the user does not supply
     * color metadata, the system will use data from the source. FALLBACK: The system
     * will use color metadata from the source. If source has no color metadata, the
     * system will use user-supplied color metadata values if available.
     */
    inline bool ColorSpaceUsageHasBeenSet() const { return m_colorSpaceUsageHasBeenSet; }

    /**
     * There are two sources for color metadata, the input file and the job
     * configuration (in the Color space and HDR master display informaiton settings).
     * The Color space usage setting controls which takes precedence. FORCE: The system
     * will use color metadata supplied by user, if any. If the user does not supply
     * color metadata, the system will use data from the source. FALLBACK: The system
     * will use color metadata from the source. If source has no color metadata, the
     * system will use user-supplied color metadata values if available.
     */
    inline void SetColorSpaceUsage(const ColorSpaceUsage& value) { m_colorSpaceUsageHasBeenSet = true; m_colorSpaceUsage = value; }

    /**
     * There are two sources for color metadata, the input file and the job
     * configuration (in the Color space and HDR master display informaiton settings).
     * The Color space usage setting controls which takes precedence. FORCE: The system
     * will use color metadata supplied by user, if any. If the user does not supply
     * color metadata, the system will use data from the source. FALLBACK: The system
     * will use color metadata from the source. If source has no color metadata, the
     * system will use user-supplied color metadata values if available.
     */
    inline void SetColorSpaceUsage(ColorSpaceUsage&& value) { m_colorSpaceUsageHasBeenSet = true; m_colorSpaceUsage = std::move(value); }

    /**
     * There are two sources for color metadata, the input file and the job
     * configuration (in the Color space and HDR master display informaiton settings).
     * The Color space usage setting controls which takes precedence. FORCE: The system
     * will use color metadata supplied by user, if any. If the user does not supply
     * color metadata, the system will use data from the source. FALLBACK: The system
     * will use color metadata from the source. If source has no color metadata, the
     * system will use user-supplied color metadata values if available.
     */
    inline VideoSelector& WithColorSpaceUsage(const ColorSpaceUsage& value) { SetColorSpaceUsage(value); return *this;}

    /**
     * There are two sources for color metadata, the input file and the job
     * configuration (in the Color space and HDR master display informaiton settings).
     * The Color space usage setting controls which takes precedence. FORCE: The system
     * will use color metadata supplied by user, if any. If the user does not supply
     * color metadata, the system will use data from the source. FALLBACK: The system
     * will use color metadata from the source. If source has no color metadata, the
     * system will use user-supplied color metadata values if available.
     */
    inline VideoSelector& WithColorSpaceUsage(ColorSpaceUsage&& value) { SetColorSpaceUsage(std::move(value)); return *this;}


    /**
     * Use the "HDR master display information" (Hdr10Metadata) settings to correct HDR
     * metadata or to provide missing metadata. These values vary depending on the
     * input video and must be provided by a color grader. Range is 0 to 50,000; each
     * increment represents 0.00002 in CIE1931 color coordinate. Note that these
     * settings are not color correction. Note that if you are creating HDR outputs
     * inside of an HLS CMAF package, to comply with the Apple specification, you must
     * use the following settings. Set "MP4 packaging type" (writeMp4PackagingType) to
     * HVC1 (HVC1). Set "Profile" (H265Settings > codecProfile) to Main10/High
     * (MAIN10_HIGH). Set "Level" (H265Settings > codecLevel) to 5 (LEVEL_5).
     */
    inline const Hdr10Metadata& GetHdr10Metadata() const{ return m_hdr10Metadata; }

    /**
     * Use the "HDR master display information" (Hdr10Metadata) settings to correct HDR
     * metadata or to provide missing metadata. These values vary depending on the
     * input video and must be provided by a color grader. Range is 0 to 50,000; each
     * increment represents 0.00002 in CIE1931 color coordinate. Note that these
     * settings are not color correction. Note that if you are creating HDR outputs
     * inside of an HLS CMAF package, to comply with the Apple specification, you must
     * use the following settings. Set "MP4 packaging type" (writeMp4PackagingType) to
     * HVC1 (HVC1). Set "Profile" (H265Settings > codecProfile) to Main10/High
     * (MAIN10_HIGH). Set "Level" (H265Settings > codecLevel) to 5 (LEVEL_5).
     */
    inline bool Hdr10MetadataHasBeenSet() const { return m_hdr10MetadataHasBeenSet; }

    /**
     * Use the "HDR master display information" (Hdr10Metadata) settings to correct HDR
     * metadata or to provide missing metadata. These values vary depending on the
     * input video and must be provided by a color grader. Range is 0 to 50,000; each
     * increment represents 0.00002 in CIE1931 color coordinate. Note that these
     * settings are not color correction. Note that if you are creating HDR outputs
     * inside of an HLS CMAF package, to comply with the Apple specification, you must
     * use the following settings. Set "MP4 packaging type" (writeMp4PackagingType) to
     * HVC1 (HVC1). Set "Profile" (H265Settings > codecProfile) to Main10/High
     * (MAIN10_HIGH). Set "Level" (H265Settings > codecLevel) to 5 (LEVEL_5).
     */
    inline void SetHdr10Metadata(const Hdr10Metadata& value) { m_hdr10MetadataHasBeenSet = true; m_hdr10Metadata = value; }

    /**
     * Use the "HDR master display information" (Hdr10Metadata) settings to correct HDR
     * metadata or to provide missing metadata. These values vary depending on the
     * input video and must be provided by a color grader. Range is 0 to 50,000; each
     * increment represents 0.00002 in CIE1931 color coordinate. Note that these
     * settings are not color correction. Note that if you are creating HDR outputs
     * inside of an HLS CMAF package, to comply with the Apple specification, you must
     * use the following settings. Set "MP4 packaging type" (writeMp4PackagingType) to
     * HVC1 (HVC1). Set "Profile" (H265Settings > codecProfile) to Main10/High
     * (MAIN10_HIGH). Set "Level" (H265Settings > codecLevel) to 5 (LEVEL_5).
     */
    inline void SetHdr10Metadata(Hdr10Metadata&& value) { m_hdr10MetadataHasBeenSet = true; m_hdr10Metadata = std::move(value); }

    /**
     * Use the "HDR master display information" (Hdr10Metadata) settings to correct HDR
     * metadata or to provide missing metadata. These values vary depending on the
     * input video and must be provided by a color grader. Range is 0 to 50,000; each
     * increment represents 0.00002 in CIE1931 color coordinate. Note that these
     * settings are not color correction. Note that if you are creating HDR outputs
     * inside of an HLS CMAF package, to comply with the Apple specification, you must
     * use the following settings. Set "MP4 packaging type" (writeMp4PackagingType) to
     * HVC1 (HVC1). Set "Profile" (H265Settings > codecProfile) to Main10/High
     * (MAIN10_HIGH). Set "Level" (H265Settings > codecLevel) to 5 (LEVEL_5).
     */
    inline VideoSelector& WithHdr10Metadata(const Hdr10Metadata& value) { SetHdr10Metadata(value); return *this;}

    /**
     * Use the "HDR master display information" (Hdr10Metadata) settings to correct HDR
     * metadata or to provide missing metadata. These values vary depending on the
     * input video and must be provided by a color grader. Range is 0 to 50,000; each
     * increment represents 0.00002 in CIE1931 color coordinate. Note that these
     * settings are not color correction. Note that if you are creating HDR outputs
     * inside of an HLS CMAF package, to comply with the Apple specification, you must
     * use the following settings. Set "MP4 packaging type" (writeMp4PackagingType) to
     * HVC1 (HVC1). Set "Profile" (H265Settings > codecProfile) to Main10/High
     * (MAIN10_HIGH). Set "Level" (H265Settings > codecLevel) to 5 (LEVEL_5).
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
