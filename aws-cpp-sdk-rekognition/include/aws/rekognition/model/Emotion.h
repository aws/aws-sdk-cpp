/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The emotions that appear to be expressed on the face, and the confidence
   * level in the determination. The API is only making a determination of the
   * physical appearance of a person's face. It is not a determination of the
   * person’s internal emotional state and should not be used in such a way. For
   * example, a person pretending to have a sad face might not be sad
   * emotionally.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Emotion">AWS
   * API Reference</a></p>
   */
  class Emotion
  {
  public:
    AWS_REKOGNITION_API Emotion();
    AWS_REKOGNITION_API Emotion(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Emotion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_typeHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
