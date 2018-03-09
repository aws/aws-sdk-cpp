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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Use the HDR master display (Hdr10Metadata) settings to provide values for HDR
   * color. These values vary depending on the input video and must be provided by a
   * color grader. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931
   * color coordinate.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Hdr10Metadata">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Hdr10Metadata
  {
  public:
    Hdr10Metadata();
    Hdr10Metadata(const Aws::Utils::Json::JsonValue& jsonValue);
    Hdr10Metadata& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline int GetBluePrimaryX() const{ return m_bluePrimaryX; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline void SetBluePrimaryX(int value) { m_bluePrimaryXHasBeenSet = true; m_bluePrimaryX = value; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline Hdr10Metadata& WithBluePrimaryX(int value) { SetBluePrimaryX(value); return *this;}


    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline int GetBluePrimaryY() const{ return m_bluePrimaryY; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline void SetBluePrimaryY(int value) { m_bluePrimaryYHasBeenSet = true; m_bluePrimaryY = value; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline Hdr10Metadata& WithBluePrimaryY(int value) { SetBluePrimaryY(value); return *this;}


    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline int GetGreenPrimaryX() const{ return m_greenPrimaryX; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline void SetGreenPrimaryX(int value) { m_greenPrimaryXHasBeenSet = true; m_greenPrimaryX = value; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline Hdr10Metadata& WithGreenPrimaryX(int value) { SetGreenPrimaryX(value); return *this;}


    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline int GetGreenPrimaryY() const{ return m_greenPrimaryY; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline void SetGreenPrimaryY(int value) { m_greenPrimaryYHasBeenSet = true; m_greenPrimaryY = value; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline Hdr10Metadata& WithGreenPrimaryY(int value) { SetGreenPrimaryY(value); return *this;}


    /**
     * Maximum light level among all samples in the coded video sequence, in units of
     * candelas per square meter.
     */
    inline int GetMaxContentLightLevel() const{ return m_maxContentLightLevel; }

    /**
     * Maximum light level among all samples in the coded video sequence, in units of
     * candelas per square meter.
     */
    inline void SetMaxContentLightLevel(int value) { m_maxContentLightLevelHasBeenSet = true; m_maxContentLightLevel = value; }

    /**
     * Maximum light level among all samples in the coded video sequence, in units of
     * candelas per square meter.
     */
    inline Hdr10Metadata& WithMaxContentLightLevel(int value) { SetMaxContentLightLevel(value); return *this;}


    /**
     * Maximum average light level of any frame in the coded video sequence, in units
     * of candelas per square meter.
     */
    inline int GetMaxFrameAverageLightLevel() const{ return m_maxFrameAverageLightLevel; }

    /**
     * Maximum average light level of any frame in the coded video sequence, in units
     * of candelas per square meter.
     */
    inline void SetMaxFrameAverageLightLevel(int value) { m_maxFrameAverageLightLevelHasBeenSet = true; m_maxFrameAverageLightLevel = value; }

    /**
     * Maximum average light level of any frame in the coded video sequence, in units
     * of candelas per square meter.
     */
    inline Hdr10Metadata& WithMaxFrameAverageLightLevel(int value) { SetMaxFrameAverageLightLevel(value); return *this;}


    /**
     * Nominal maximum mastering display luminance in units of of 0.0001 candelas per
     * square meter.
     */
    inline int GetMaxLuminance() const{ return m_maxLuminance; }

    /**
     * Nominal maximum mastering display luminance in units of of 0.0001 candelas per
     * square meter.
     */
    inline void SetMaxLuminance(int value) { m_maxLuminanceHasBeenSet = true; m_maxLuminance = value; }

    /**
     * Nominal maximum mastering display luminance in units of of 0.0001 candelas per
     * square meter.
     */
    inline Hdr10Metadata& WithMaxLuminance(int value) { SetMaxLuminance(value); return *this;}


    /**
     * Nominal minimum mastering display luminance in units of of 0.0001 candelas per
     * square meter
     */
    inline int GetMinLuminance() const{ return m_minLuminance; }

    /**
     * Nominal minimum mastering display luminance in units of of 0.0001 candelas per
     * square meter
     */
    inline void SetMinLuminance(int value) { m_minLuminanceHasBeenSet = true; m_minLuminance = value; }

    /**
     * Nominal minimum mastering display luminance in units of of 0.0001 candelas per
     * square meter
     */
    inline Hdr10Metadata& WithMinLuminance(int value) { SetMinLuminance(value); return *this;}


    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline int GetRedPrimaryX() const{ return m_redPrimaryX; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline void SetRedPrimaryX(int value) { m_redPrimaryXHasBeenSet = true; m_redPrimaryX = value; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline Hdr10Metadata& WithRedPrimaryX(int value) { SetRedPrimaryX(value); return *this;}


    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline int GetRedPrimaryY() const{ return m_redPrimaryY; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline void SetRedPrimaryY(int value) { m_redPrimaryYHasBeenSet = true; m_redPrimaryY = value; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline Hdr10Metadata& WithRedPrimaryY(int value) { SetRedPrimaryY(value); return *this;}


    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline int GetWhitePointX() const{ return m_whitePointX; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline void SetWhitePointX(int value) { m_whitePointXHasBeenSet = true; m_whitePointX = value; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline Hdr10Metadata& WithWhitePointX(int value) { SetWhitePointX(value); return *this;}


    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline int GetWhitePointY() const{ return m_whitePointY; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline void SetWhitePointY(int value) { m_whitePointYHasBeenSet = true; m_whitePointY = value; }

    /**
     * HDR Master Display Information comes from the color grader and the color grading
     * tools. Range is 0 to 50,000, each increment represents 0.00002 in CIE1931 color
     * coordinate.
     */
    inline Hdr10Metadata& WithWhitePointY(int value) { SetWhitePointY(value); return *this;}

  private:

    int m_bluePrimaryX;
    bool m_bluePrimaryXHasBeenSet;

    int m_bluePrimaryY;
    bool m_bluePrimaryYHasBeenSet;

    int m_greenPrimaryX;
    bool m_greenPrimaryXHasBeenSet;

    int m_greenPrimaryY;
    bool m_greenPrimaryYHasBeenSet;

    int m_maxContentLightLevel;
    bool m_maxContentLightLevelHasBeenSet;

    int m_maxFrameAverageLightLevel;
    bool m_maxFrameAverageLightLevelHasBeenSet;

    int m_maxLuminance;
    bool m_maxLuminanceHasBeenSet;

    int m_minLuminance;
    bool m_minLuminanceHasBeenSet;

    int m_redPrimaryX;
    bool m_redPrimaryXHasBeenSet;

    int m_redPrimaryY;
    bool m_redPrimaryYHasBeenSet;

    int m_whitePointX;
    bool m_whitePointXHasBeenSet;

    int m_whitePointY;
    bool m_whitePointYHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
