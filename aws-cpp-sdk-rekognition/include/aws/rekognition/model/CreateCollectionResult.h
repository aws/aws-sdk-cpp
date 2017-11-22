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
  class AWS_REKOGNITION_API CreateCollectionResult
  {
  public:
    CreateCollectionResult();
    CreateCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>HTTP status code indicating the result of the operation.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>HTTP status code indicating the result of the operation.</p>
     */
    inline void SetStatusCode(int value) { m_statusCode = value; }

    /**
     * <p>HTTP status code indicating the result of the operation.</p>
     */
    inline CreateCollectionResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the collection. You can use this to manage
     * permissions on your resources. </p>
     */
    inline const Aws::String& GetCollectionArn() const{ return m_collectionArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the collection. You can use this to manage
     * permissions on your resources. </p>
     */
    inline void SetCollectionArn(const Aws::String& value) { m_collectionArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the collection. You can use this to manage
     * permissions on your resources. </p>
     */
    inline void SetCollectionArn(Aws::String&& value) { m_collectionArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the collection. You can use this to manage
     * permissions on your resources. </p>
     */
    inline void SetCollectionArn(const char* value) { m_collectionArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the collection. You can use this to manage
     * permissions on your resources. </p>
     */
    inline CreateCollectionResult& WithCollectionArn(const Aws::String& value) { SetCollectionArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the collection. You can use this to manage
     * permissions on your resources. </p>
     */
    inline CreateCollectionResult& WithCollectionArn(Aws::String&& value) { SetCollectionArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the collection. You can use this to manage
     * permissions on your resources. </p>
     */
    inline CreateCollectionResult& WithCollectionArn(const char* value) { SetCollectionArn(value); return *this;}


    /**
     * <p>Version number of the face detection model associated with the collection you
     * are creating.</p>
     */
    inline const Aws::String& GetFaceModelVersion() const{ return m_faceModelVersion; }

    /**
     * <p>Version number of the face detection model associated with the collection you
     * are creating.</p>
     */
    inline void SetFaceModelVersion(const Aws::String& value) { m_faceModelVersion = value; }

    /**
     * <p>Version number of the face detection model associated with the collection you
     * are creating.</p>
     */
    inline void SetFaceModelVersion(Aws::String&& value) { m_faceModelVersion = std::move(value); }

    /**
     * <p>Version number of the face detection model associated with the collection you
     * are creating.</p>
     */
    inline void SetFaceModelVersion(const char* value) { m_faceModelVersion.assign(value); }

    /**
     * <p>Version number of the face detection model associated with the collection you
     * are creating.</p>
     */
    inline CreateCollectionResult& WithFaceModelVersion(const Aws::String& value) { SetFaceModelVersion(value); return *this;}

    /**
     * <p>Version number of the face detection model associated with the collection you
     * are creating.</p>
     */
    inline CreateCollectionResult& WithFaceModelVersion(Aws::String&& value) { SetFaceModelVersion(std::move(value)); return *this;}

    /**
     * <p>Version number of the face detection model associated with the collection you
     * are creating.</p>
     */
    inline CreateCollectionResult& WithFaceModelVersion(const char* value) { SetFaceModelVersion(value); return *this;}

  private:

    int m_statusCode;

    Aws::String m_collectionArn;

    Aws::String m_faceModelVersion;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
