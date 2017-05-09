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
    FaceMatch(const Aws::Utils::Json::JsonValue& jsonValue);
    FaceMatch& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Confidence in the match of this face with the input face.</p>
     */
    inline double GetSimilarity() const{ return m_similarity; }

    /**
     * <p>Confidence in the match of this face with the input face.</p>
     */
    inline void SetSimilarity(double value) { m_similarityHasBeenSet = true; m_similarity = value; }

    /**
     * <p>Confidence in the match of this face with the input face.</p>
     */
    inline FaceMatch& WithSimilarity(double value) { SetSimilarity(value); return *this;}

    
    inline const Face& GetFace() const{ return m_face; }

    
    inline void SetFace(const Face& value) { m_faceHasBeenSet = true; m_face = value; }

    
    inline void SetFace(Face&& value) { m_faceHasBeenSet = true; m_face = std::move(value); }

    
    inline FaceMatch& WithFace(const Face& value) { SetFace(value); return *this;}

    
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
