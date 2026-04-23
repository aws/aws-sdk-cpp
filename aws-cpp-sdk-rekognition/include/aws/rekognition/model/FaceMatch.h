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
#include <aws/rekognition/model/Face.h>
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
   * <p>Provides face metadata. In addition, it also provides the confidence in the
   * match of this face with the input face.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/FaceMatch">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API FaceMatch
  {
  public:
    FaceMatch();
    FaceMatch(Aws::Utils::Json::JsonView jsonValue);
    FaceMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Confidence in the match of this face with the input face.</p>
     */
    inline double GetSimilarity() const{ return m_similarity; }

    /**
     * <p>Confidence in the match of this face with the input face.</p>
     */
    inline bool SimilarityHasBeenSet() const { return m_similarityHasBeenSet; }

    /**
     * <p>Confidence in the match of this face with the input face.</p>
     */
    inline void SetSimilarity(double value) { m_similarityHasBeenSet = true; m_similarity = value; }

    /**
     * <p>Confidence in the match of this face with the input face.</p>
     */
    inline FaceMatch& WithSimilarity(double value) { SetSimilarity(value); return *this;}


    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the source image, and external image ID that you assigned.</p>
     */
    inline const Face& GetFace() const{ return m_face; }

    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the source image, and external image ID that you assigned.</p>
     */
    inline bool FaceHasBeenSet() const { return m_faceHasBeenSet; }

    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the source image, and external image ID that you assigned.</p>
     */
    inline void SetFace(const Face& value) { m_faceHasBeenSet = true; m_face = value; }

    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the source image, and external image ID that you assigned.</p>
     */
    inline void SetFace(Face&& value) { m_faceHasBeenSet = true; m_face = std::move(value); }

    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the source image, and external image ID that you assigned.</p>
     */
    inline FaceMatch& WithFace(const Face& value) { SetFace(value); return *this;}

    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the source image, and external image ID that you assigned.</p>
     */
    inline FaceMatch& WithFace(Face&& value) { SetFace(std::move(value)); return *this;}

  private:

    double m_similarity;
    bool m_similarityHasBeenSet;

    Face m_face;
    bool m_faceHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
