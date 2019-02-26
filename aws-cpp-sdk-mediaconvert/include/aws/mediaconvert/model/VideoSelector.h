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


    
    inline const ColorSpace& GetColorSpace() const{ return m_colorSpace; }

    
    inline void SetColorSpace(const ColorSpace& value) { m_colorSpaceHasBeenSet = true; m_colorSpace = value; }

    
    inline void SetColorSpace(ColorSpace&& value) { m_colorSpaceHasBeenSet = true; m_colorSpace = std::move(value); }

    
    inline VideoSelector& WithColorSpace(const ColorSpace& value) { SetColorSpace(value); return *this;}

    
    inline VideoSelector& WithColorSpace(ColorSpace&& value) { SetColorSpace(std::move(value)); return *this;}


    
    inline const ColorSpaceUsage& GetColorSpaceUsage() const{ return m_colorSpaceUsage; }

    
    inline void SetColorSpaceUsage(const ColorSpaceUsage& value) { m_colorSpaceUsageHasBeenSet = true; m_colorSpaceUsage = value; }

    
    inline void SetColorSpaceUsage(ColorSpaceUsage&& value) { m_colorSpaceUsageHasBeenSet = true; m_colorSpaceUsage = std::move(value); }

    
    inline VideoSelector& WithColorSpaceUsage(const ColorSpaceUsage& value) { SetColorSpaceUsage(value); return *this;}

    
    inline VideoSelector& WithColorSpaceUsage(ColorSpaceUsage&& value) { SetColorSpaceUsage(std::move(value)); return *this;}


    
    inline const Hdr10Metadata& GetHdr10Metadata() const{ return m_hdr10Metadata; }

    
    inline void SetHdr10Metadata(const Hdr10Metadata& value) { m_hdr10MetadataHasBeenSet = true; m_hdr10Metadata = value; }

    
    inline void SetHdr10Metadata(Hdr10Metadata&& value) { m_hdr10MetadataHasBeenSet = true; m_hdr10Metadata = std::move(value); }

    
    inline VideoSelector& WithHdr10Metadata(const Hdr10Metadata& value) { SetHdr10Metadata(value); return *this;}

    
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
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }

    /**
     * Selects a specific program from within a multi-program transport stream. Note
     * that Quad 4K is not currently supported.
     */
    inline VideoSelector& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}


    
    inline const InputRotate& GetRotate() const{ return m_rotate; }

    
    inline void SetRotate(const InputRotate& value) { m_rotateHasBeenSet = true; m_rotate = value; }

    
    inline void SetRotate(InputRotate&& value) { m_rotateHasBeenSet = true; m_rotate = std::move(value); }

    
    inline VideoSelector& WithRotate(const InputRotate& value) { SetRotate(value); return *this;}

    
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
