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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/Face.h>
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
  class AWS_REKOGNITION_API ListFacesResult
  {
  public:
    ListFacesResult();
    ListFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Face</code> objects. </p>
     */
    inline const Aws::Vector<Face>& GetFaces() const{ return m_faces; }

    /**
     * <p>An array of <code>Face</code> objects. </p>
     */
    inline void SetFaces(const Aws::Vector<Face>& value) { m_faces = value; }

    /**
     * <p>An array of <code>Face</code> objects. </p>
     */
    inline void SetFaces(Aws::Vector<Face>&& value) { m_faces = std::move(value); }

    /**
     * <p>An array of <code>Face</code> objects. </p>
     */
    inline ListFacesResult& WithFaces(const Aws::Vector<Face>& value) { SetFaces(value); return *this;}

    /**
     * <p>An array of <code>Face</code> objects. </p>
     */
    inline ListFacesResult& WithFaces(Aws::Vector<Face>&& value) { SetFaces(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Face</code> objects. </p>
     */
    inline ListFacesResult& AddFaces(const Face& value) { m_faces.push_back(value); return *this; }

    /**
     * <p>An array of <code>Face</code> objects. </p>
     */
    inline ListFacesResult& AddFaces(Face&& value) { m_faces.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of faces.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of faces.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of faces.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of faces.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of faces.</p>
     */
    inline ListFacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of faces.</p>
     */
    inline ListFacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of faces.</p>
     */
    inline ListFacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListFacesResult& WithFaceModelVersion(const Aws::String& value) { SetFaceModelVersion(value); return *this;}

    /**
     * <p>Version number of the face detection model associated with the input
     * collection (<code>CollectionId</code>).</p>
     */
    inline ListFacesResult& WithFaceModelVersion(Aws::String&& value) { SetFaceModelVersion(std::move(value)); return *this;}

    /**
     * <p>Version number of the face detection model associated with the input
     * collection (<code>CollectionId</code>).</p>
     */
    inline ListFacesResult& WithFaceModelVersion(const char* value) { SetFaceModelVersion(value); return *this;}

  private:

    Aws::Vector<Face> m_faces;

    Aws::String m_nextToken;

    Aws::String m_faceModelVersion;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
