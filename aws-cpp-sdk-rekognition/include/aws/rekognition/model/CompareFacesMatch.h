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
#include <aws/rekognition/model/ComparedFace.h>
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
   * <p>Provides information about a face in a target image that matches the source
   * image face analyzed by <code>CompareFaces</code>. The <code>Face</code> property
   * contains the bounding box of the face in the target image. The
   * <code>Similarity</code> property is the confidence that the source image face
   * matches the face in the bounding box.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CompareFacesMatch">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API CompareFacesMatch
  {
  public:
    CompareFacesMatch();
    CompareFacesMatch(Aws::Utils::Json::JsonView jsonValue);
    CompareFacesMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Level of confidence that the faces match.</p>
     */
    inline double GetSimilarity() const{ return m_similarity; }

    /**
     * <p>Level of confidence that the faces match.</p>
     */
    inline bool SimilarityHasBeenSet() const { return m_similarityHasBeenSet; }

    /**
     * <p>Level of confidence that the faces match.</p>
     */
    inline void SetSimilarity(double value) { m_similarityHasBeenSet = true; m_similarity = value; }

    /**
     * <p>Level of confidence that the faces match.</p>
     */
    inline CompareFacesMatch& WithSimilarity(double value) { SetSimilarity(value); return *this;}


    /**
     * <p>Provides face metadata (bounding box and confidence that the bounding box
     * actually contains a face).</p>
     */
    inline const ComparedFace& GetFace() const{ return m_face; }

    /**
     * <p>Provides face metadata (bounding box and confidence that the bounding box
     * actually contains a face).</p>
     */
    inline bool FaceHasBeenSet() const { return m_faceHasBeenSet; }

    /**
     * <p>Provides face metadata (bounding box and confidence that the bounding box
     * actually contains a face).</p>
     */
    inline void SetFace(const ComparedFace& value) { m_faceHasBeenSet = true; m_face = value; }

    /**
     * <p>Provides face metadata (bounding box and confidence that the bounding box
     * actually contains a face).</p>
     */
    inline void SetFace(ComparedFace&& value) { m_faceHasBeenSet = true; m_face = std::move(value); }

    /**
     * <p>Provides face metadata (bounding box and confidence that the bounding box
     * actually contains a face).</p>
     */
    inline CompareFacesMatch& WithFace(const ComparedFace& value) { SetFace(value); return *this;}

    /**
     * <p>Provides face metadata (bounding box and confidence that the bounding box
     * actually contains a face).</p>
     */
    inline CompareFacesMatch& WithFace(ComparedFace&& value) { SetFace(std::move(value)); return *this;}

  private:

    double m_similarity;
    bool m_similarityHasBeenSet;

    ComparedFace m_face;
    bool m_faceHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
