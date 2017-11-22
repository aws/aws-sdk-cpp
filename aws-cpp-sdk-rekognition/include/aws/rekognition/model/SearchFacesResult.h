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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/FaceMatch.h>
#include <utility>

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
  class AWS_REKOGNITION_API SearchFacesResult
  {
  public:
    SearchFacesResult();
    SearchFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ID of the face that was searched for matches in a collection.</p>
     */
    inline const Aws::String& GetSearchedFaceId() const{ return m_searchedFaceId; }

    /**
     * <p>ID of the face that was searched for matches in a collection.</p>
     */
    inline void SetSearchedFaceId(const Aws::String& value) { m_searchedFaceId = value; }

    /**
     * <p>ID of the face that was searched for matches in a collection.</p>
     */
    inline void SetSearchedFaceId(Aws::String&& value) { m_searchedFaceId = std::move(value); }

    /**
     * <p>ID of the face that was searched for matches in a collection.</p>
     */
    inline void SetSearchedFaceId(const char* value) { m_searchedFaceId.assign(value); }

    /**
     * <p>ID of the face that was searched for matches in a collection.</p>
     */
    inline SearchFacesResult& WithSearchedFaceId(const Aws::String& value) { SetSearchedFaceId(value); return *this;}

    /**
     * <p>ID of the face that was searched for matches in a collection.</p>
     */
    inline SearchFacesResult& WithSearchedFaceId(Aws::String&& value) { SetSearchedFaceId(std::move(value)); return *this;}

    /**
     * <p>ID of the face that was searched for matches in a collection.</p>
     */
    inline SearchFacesResult& WithSearchedFaceId(const char* value) { SetSearchedFaceId(value); return *this;}


    /**
     * <p>An array of faces that matched the input face, along with the confidence in
     * the match.</p>
     */
    inline const Aws::Vector<FaceMatch>& GetFaceMatches() const{ return m_faceMatches; }

    /**
     * <p>An array of faces that matched the input face, along with the confidence in
     * the match.</p>
     */
    inline void SetFaceMatches(const Aws::Vector<FaceMatch>& value) { m_faceMatches = value; }

    /**
     * <p>An array of faces that matched the input face, along with the confidence in
     * the match.</p>
     */
    inline void SetFaceMatches(Aws::Vector<FaceMatch>&& value) { m_faceMatches = std::move(value); }

    /**
     * <p>An array of faces that matched the input face, along with the confidence in
     * the match.</p>
     */
    inline SearchFacesResult& WithFaceMatches(const Aws::Vector<FaceMatch>& value) { SetFaceMatches(value); return *this;}

    /**
     * <p>An array of faces that matched the input face, along with the confidence in
     * the match.</p>
     */
    inline SearchFacesResult& WithFaceMatches(Aws::Vector<FaceMatch>&& value) { SetFaceMatches(std::move(value)); return *this;}

    /**
     * <p>An array of faces that matched the input face, along with the confidence in
     * the match.</p>
     */
    inline SearchFacesResult& AddFaceMatches(const FaceMatch& value) { m_faceMatches.push_back(value); return *this; }

    /**
     * <p>An array of faces that matched the input face, along with the confidence in
     * the match.</p>
     */
    inline SearchFacesResult& AddFaceMatches(FaceMatch&& value) { m_faceMatches.push_back(std::move(value)); return *this; }


    /**
     * <p>Version number of the face detection model associated with the input
     * collection (<code>CollectionId</code>).</p>
     */
    inline const Aws::String& GetFaceModelVersion() const{ return m_faceModelVersion; }

    /**
     * <p>Version number of the face detection model associated with the input
     * collection (<code>CollectionId</code>).</p>
     */
    inline void SetFaceModelVersion(const Aws::String& value) { m_faceModelVersion = value; }

    /**
     * <p>Version number of the face detection model associated with the input
     * collection (<code>CollectionId</code>).</p>
     */
    inline void SetFaceModelVersion(Aws::String&& value) { m_faceModelVersion = std::move(value); }

    /**
     * <p>Version number of the face detection model associated with the input
     * collection (<code>CollectionId</code>).</p>
     */
    inline void SetFaceModelVersion(const char* value) { m_faceModelVersion.assign(value); }

    /**
     * <p>Version number of the face detection model associated with the input
     * collection (<code>CollectionId</code>).</p>
     */
    inline SearchFacesResult& WithFaceModelVersion(const Aws::String& value) { SetFaceModelVersion(value); return *this;}

    /**
     * <p>Version number of the face detection model associated with the input
     * collection (<code>CollectionId</code>).</p>
     */
    inline SearchFacesResult& WithFaceModelVersion(Aws::String&& value) { SetFaceModelVersion(std::move(value)); return *this;}

    /**
     * <p>Version number of the face detection model associated with the input
     * collection (<code>CollectionId</code>).</p>
     */
    inline SearchFacesResult& WithFaceModelVersion(const char* value) { SetFaceModelVersion(value); return *this;}

  private:

    Aws::String m_searchedFaceId;

    Aws::Vector<FaceMatch> m_faceMatches;

    Aws::String m_faceModelVersion;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
