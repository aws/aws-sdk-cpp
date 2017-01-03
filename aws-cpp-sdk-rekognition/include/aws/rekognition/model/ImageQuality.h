﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rekognition/Rekognition_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Identifies image brightness and sharpness. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ImageQuality">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API ImageQuality
  {
  public:
    ImageQuality();
    ImageQuality(const Aws::Utils::Json::JsonValue& jsonValue);
    ImageQuality& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Value representing brightness of the face. The service returns a value
     * between 0 and 1 (inclusive).</p>
     */
    inline double GetBrightness() const{ return m_brightness; }

    /**
     * <p>Value representing brightness of the face. The service returns a value
     * between 0 and 1 (inclusive).</p>
     */
    inline void SetBrightness(double value) { m_brightnessHasBeenSet = true; m_brightness = value; }

    /**
     * <p>Value representing brightness of the face. The service returns a value
     * between 0 and 1 (inclusive).</p>
     */
    inline ImageQuality& WithBrightness(double value) { SetBrightness(value); return *this;}

    /**
     * <p>Value representing sharpness of the face.</p>
     */
    inline double GetSharpness() const{ return m_sharpness; }

    /**
     * <p>Value representing sharpness of the face.</p>
     */
    inline void SetSharpness(double value) { m_sharpnessHasBeenSet = true; m_sharpness = value; }

    /**
     * <p>Value representing sharpness of the face.</p>
     */
    inline ImageQuality& WithSharpness(double value) { SetSharpness(value); return *this;}

  private:
    double m_brightness;
    bool m_brightnessHasBeenSet;
    double m_sharpness;
    bool m_sharpnessHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
