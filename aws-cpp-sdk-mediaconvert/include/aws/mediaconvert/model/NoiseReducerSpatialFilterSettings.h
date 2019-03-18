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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Noise reducer filter settings for spatial filter.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/NoiseReducerSpatialFilterSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API NoiseReducerSpatialFilterSettings
  {
  public:
    NoiseReducerSpatialFilterSettings();
    NoiseReducerSpatialFilterSettings(Aws::Utils::Json::JsonView jsonValue);
    NoiseReducerSpatialFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify strength of post noise reduction sharpening filter, with 0 disabling the
     * filter and 3 enabling it at maximum strength.
     */
    inline int GetPostFilterSharpenStrength() const{ return m_postFilterSharpenStrength; }

    /**
     * Specify strength of post noise reduction sharpening filter, with 0 disabling the
     * filter and 3 enabling it at maximum strength.
     */
    inline bool PostFilterSharpenStrengthHasBeenSet() const { return m_postFilterSharpenStrengthHasBeenSet; }

    /**
     * Specify strength of post noise reduction sharpening filter, with 0 disabling the
     * filter and 3 enabling it at maximum strength.
     */
    inline void SetPostFilterSharpenStrength(int value) { m_postFilterSharpenStrengthHasBeenSet = true; m_postFilterSharpenStrength = value; }

    /**
     * Specify strength of post noise reduction sharpening filter, with 0 disabling the
     * filter and 3 enabling it at maximum strength.
     */
    inline NoiseReducerSpatialFilterSettings& WithPostFilterSharpenStrength(int value) { SetPostFilterSharpenStrength(value); return *this;}


    /**
     * The speed of the filter, from -2 (lower speed) to 3 (higher speed), with 0 being
     * the nominal value.
     */
    inline int GetSpeed() const{ return m_speed; }

    /**
     * The speed of the filter, from -2 (lower speed) to 3 (higher speed), with 0 being
     * the nominal value.
     */
    inline bool SpeedHasBeenSet() const { return m_speedHasBeenSet; }

    /**
     * The speed of the filter, from -2 (lower speed) to 3 (higher speed), with 0 being
     * the nominal value.
     */
    inline void SetSpeed(int value) { m_speedHasBeenSet = true; m_speed = value; }

    /**
     * The speed of the filter, from -2 (lower speed) to 3 (higher speed), with 0 being
     * the nominal value.
     */
    inline NoiseReducerSpatialFilterSettings& WithSpeed(int value) { SetSpeed(value); return *this;}


    /**
     * Relative strength of noise reducing filter. Higher values produce stronger
     * filtering.
     */
    inline int GetStrength() const{ return m_strength; }

    /**
     * Relative strength of noise reducing filter. Higher values produce stronger
     * filtering.
     */
    inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }

    /**
     * Relative strength of noise reducing filter. Higher values produce stronger
     * filtering.
     */
    inline void SetStrength(int value) { m_strengthHasBeenSet = true; m_strength = value; }

    /**
     * Relative strength of noise reducing filter. Higher values produce stronger
     * filtering.
     */
    inline NoiseReducerSpatialFilterSettings& WithStrength(int value) { SetStrength(value); return *this;}

  private:

    int m_postFilterSharpenStrength;
    bool m_postFilterSharpenStrengthHasBeenSet;

    int m_speed;
    bool m_speedHasBeenSet;

    int m_strength;
    bool m_strengthHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
