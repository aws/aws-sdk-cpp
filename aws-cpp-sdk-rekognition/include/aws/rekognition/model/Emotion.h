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
#include <aws/rekognition/model/EmotionName.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>The emotions detected on the face, and the confidence level in the
   * determination. For example, HAPPY, SAD, and ANGRY.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Emotion">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API Emotion
  {
  public:
    Emotion();
    Emotion(Aws::Utils::Json::JsonView jsonValue);
    Emotion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Type of emotion detected.</p>
     */
    inline const EmotionName& GetType() const{ return m_type; }

    /**
     * <p>Type of emotion detected.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of emotion detected.</p>
     */
    inline void SetType(const EmotionName& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of emotion detected.</p>
     */
    inline void SetType(EmotionName&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of emotion detected.</p>
     */
    inline Emotion& WithType(const EmotionName& value) { SetType(value); return *this;}

    /**
     * <p>Type of emotion detected.</p>
     */
    inline Emotion& WithType(EmotionName&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline Emotion& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    EmotionName m_type;
    bool m_typeHasBeenSet;

    double m_confidence;
    bool m_confidenceHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
