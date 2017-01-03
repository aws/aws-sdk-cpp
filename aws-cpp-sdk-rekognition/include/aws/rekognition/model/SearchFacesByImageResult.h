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
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/FaceMatch.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class AWS_REKOGNITION_API SearchFacesByImageResult
  {
  public:
    SearchFacesByImageResult();
    SearchFacesByImageResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchFacesByImageResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The bounding box around the face in the input image that Rekognition used for
     * the search.</p>
     */
    inline const BoundingBox& GetSearchedFaceBoundingBox() const{ return m_searchedFaceBoundingBox; }

    /**
     * <p>The bounding box around the face in the input image that Rekognition used for
     * the search.</p>
     */
    inline void SetSearchedFaceBoundingBox(const BoundingBox& value) { m_searchedFaceBoundingBox = value; }

    /**
     * <p>The bounding box around the face in the input image that Rekognition used for
     * the search.</p>
     */
    inline void SetSearchedFaceBoundingBox(BoundingBox&& value) { m_searchedFaceBoundingBox = value; }

    /**
     * <p>The bounding box around the face in the input image that Rekognition used for
     * the search.</p>
     */
    inline SearchFacesByImageResult& WithSearchedFaceBoundingBox(const BoundingBox& value) { SetSearchedFaceBoundingBox(value); return *this;}

    /**
     * <p>The bounding box around the face in the input image that Rekognition used for
     * the search.</p>
     */
    inline SearchFacesByImageResult& WithSearchedFaceBoundingBox(BoundingBox&& value) { SetSearchedFaceBoundingBox(value); return *this;}

    /**
     * <p>The level of confidence that the <code>searchedFaceBoundingBox</code>,
     * contains a face.</p>
     */
    inline double GetSearchedFaceConfidence() const{ return m_searchedFaceConfidence; }

    /**
     * <p>The level of confidence that the <code>searchedFaceBoundingBox</code>,
     * contains a face.</p>
     */
    inline void SetSearchedFaceConfidence(double value) { m_searchedFaceConfidence = value; }

    /**
     * <p>The level of confidence that the <code>searchedFaceBoundingBox</code>,
     * contains a face.</p>
     */
    inline SearchFacesByImageResult& WithSearchedFaceConfidence(double value) { SetSearchedFaceConfidence(value); return *this;}

    /**
     * <p>An array of faces that match the input face, along with the confidence in the
     * match.</p>
     */
    inline const Aws::Vector<FaceMatch>& GetFaceMatches() const{ return m_faceMatches; }

    /**
     * <p>An array of faces that match the input face, along with the confidence in the
     * match.</p>
     */
    inline void SetFaceMatches(const Aws::Vector<FaceMatch>& value) { m_faceMatches = value; }

    /**
     * <p>An array of faces that match the input face, along with the confidence in the
     * match.</p>
     */
    inline void SetFaceMatches(Aws::Vector<FaceMatch>&& value) { m_faceMatches = value; }

    /**
     * <p>An array of faces that match the input face, along with the confidence in the
     * match.</p>
     */
    inline SearchFacesByImageResult& WithFaceMatches(const Aws::Vector<FaceMatch>& value) { SetFaceMatches(value); return *this;}

    /**
     * <p>An array of faces that match the input face, along with the confidence in the
     * match.</p>
     */
    inline SearchFacesByImageResult& WithFaceMatches(Aws::Vector<FaceMatch>&& value) { SetFaceMatches(value); return *this;}

    /**
     * <p>An array of faces that match the input face, along with the confidence in the
     * match.</p>
     */
    inline SearchFacesByImageResult& AddFaceMatches(const FaceMatch& value) { m_faceMatches.push_back(value); return *this; }

    /**
     * <p>An array of faces that match the input face, along with the confidence in the
     * match.</p>
     */
    inline SearchFacesByImageResult& AddFaceMatches(FaceMatch&& value) { m_faceMatches.push_back(value); return *this; }

  private:
    BoundingBox m_searchedFaceBoundingBox;
    double m_searchedFaceConfidence;
    Aws::Vector<FaceMatch> m_faceMatches;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
