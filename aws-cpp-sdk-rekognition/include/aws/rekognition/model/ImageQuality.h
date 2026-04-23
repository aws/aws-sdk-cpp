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
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Identifies face image brightness and sharpness. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ImageQuality">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API ImageQuality
  {
  public:
    ImageQuality();
    ImageQuality(Aws::Utils::Json::JsonView jsonValue);
    ImageQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Value representing brightness of the face. The service returns a value
     * between 0 and 100 (inclusive). A higher value indicates a brighter face
     * image.</p>
     */
    inline double GetBrightness() const{ return m_brightness; }

    /**
     * <p>Value representing brightness of the face. The service returns a value
     * between 0 and 100 (inclusive). A higher value indicates a brighter face
     * image.</p>
     */
    inline bool BrightnessHasBeenSet() const { return m_brightnessHasBeenSet; }

    /**
     * <p>Value representing brightness of the face. The service returns a value
     * between 0 and 100 (inclusive). A higher value indicates a brighter face
     * image.</p>
     */
    inline void SetBrightness(double value) { m_brightnessHasBeenSet = true; m_brightness = value; }

    /**
     * <p>Value representing brightness of the face. The service returns a value
     * between 0 and 100 (inclusive). A higher value indicates a brighter face
     * image.</p>
     */
    inline ImageQuality& WithBrightness(double value) { SetBrightness(value); return *this;}


    /**
     * <p>Value representing sharpness of the face. The service returns a value between
     * 0 and 100 (inclusive). A higher value indicates a sharper face image.</p>
     */
    inline double GetSharpness() const{ return m_sharpness; }

    /**
     * <p>Value representing sharpness of the face. The service returns a value between
     * 0 and 100 (inclusive). A higher value indicates a sharper face image.</p>
     */
    inline bool SharpnessHasBeenSet() const { return m_sharpnessHasBeenSet; }

    /**
     * <p>Value representing sharpness of the face. The service returns a value between
     * 0 and 100 (inclusive). A higher value indicates a sharper face image.</p>
     */
    inline void SetSharpness(double value) { m_sharpnessHasBeenSet = true; m_sharpness = value; }

    /**
     * <p>Value representing sharpness of the face. The service returns a value between
     * 0 and 100 (inclusive). A higher value indicates a sharper face image.</p>
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
