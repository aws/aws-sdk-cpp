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
#include <aws/core/utils/DateTime.h>
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
  class AWS_REKOGNITION_API DescribeCollectionResult
  {
  public:
    DescribeCollectionResult();
    DescribeCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of faces that are indexed into the collection. To index faces into
     * a collection, use <a>IndexFaces</a>.</p>
     */
    inline long long GetFaceCount() const{ return m_faceCount; }

    /**
     * <p>The number of faces that are indexed into the collection. To index faces into
     * a collection, use <a>IndexFaces</a>.</p>
     */
    inline void SetFaceCount(long long value) { m_faceCount = value; }

    /**
     * <p>The number of faces that are indexed into the collection. To index faces into
     * a collection, use <a>IndexFaces</a>.</p>
     */
    inline DescribeCollectionResult& WithFaceCount(long long value) { SetFaceCount(value); return *this;}


    /**
     * <p>The version of the face model that's used by the collection for face
     * detection.</p> <p>For more information, see Model Versioning in the Amazon
     * Rekognition Developer Guide.</p>
     */
    inline const Aws::String& GetFaceModelVersion() const{ return m_faceModelVersion; }

    /**
     * <p>The version of the face model that's used by the collection for face
     * detection.</p> <p>For more information, see Model Versioning in the Amazon
     * Rekognition Developer Guide.</p>
     */
    inline void SetFaceModelVersion(const Aws::String& value) { m_faceModelVersion = value; }

    /**
     * <p>The version of the face model that's used by the collection for face
     * detection.</p> <p>For more information, see Model Versioning in the Amazon
     * Rekognition Developer Guide.</p>
     */
    inline void SetFaceModelVersion(Aws::String&& value) { m_faceModelVersion = std::move(value); }

    /**
     * <p>The version of the face model that's used by the collection for face
     * detection.</p> <p>For more information, see Model Versioning in the Amazon
     * Rekognition Developer Guide.</p>
     */
    inline void SetFaceModelVersion(const char* value) { m_faceModelVersion.assign(value); }

    /**
     * <p>The version of the face model that's used by the collection for face
     * detection.</p> <p>For more information, see Model Versioning in the Amazon
     * Rekognition Developer Guide.</p>
     */
    inline DescribeCollectionResult& WithFaceModelVersion(const Aws::String& value) { SetFaceModelVersion(value); return *this;}

    /**
     * <p>The version of the face model that's used by the collection for face
     * detection.</p> <p>For more information, see Model Versioning in the Amazon
     * Rekognition Developer Guide.</p>
     */
    inline DescribeCollectionResult& WithFaceModelVersion(Aws::String&& value) { SetFaceModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the face model that's used by the collection for face
     * detection.</p> <p>For more information, see Model Versioning in the Amazon
     * Rekognition Developer Guide.</p>
     */
    inline DescribeCollectionResult& WithFaceModelVersion(const char* value) { SetFaceModelVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline const Aws::String& GetCollectionARN() const{ return m_collectionARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline void SetCollectionARN(const Aws::String& value) { m_collectionARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline void SetCollectionARN(Aws::String&& value) { m_collectionARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline void SetCollectionARN(const char* value) { m_collectionARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline DescribeCollectionResult& WithCollectionARN(const Aws::String& value) { SetCollectionARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline DescribeCollectionResult& WithCollectionARN(Aws::String&& value) { SetCollectionARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline DescribeCollectionResult& WithCollectionARN(const char* value) { SetCollectionARN(value); return *this;}


    /**
     * <p>The number of milliseconds since the Unix epoch time until the creation of
     * the collection. The Unix epoch time is 00:00:00 Coordinated Universal Time
     * (UTC), Thursday, 1 January 1970.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The number of milliseconds since the Unix epoch time until the creation of
     * the collection. The Unix epoch time is 00:00:00 Coordinated Universal Time
     * (UTC), Thursday, 1 January 1970.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }

    /**
     * <p>The number of milliseconds since the Unix epoch time until the creation of
     * the collection. The Unix epoch time is 00:00:00 Coordinated Universal Time
     * (UTC), Thursday, 1 January 1970.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }

    /**
     * <p>The number of milliseconds since the Unix epoch time until the creation of
     * the collection. The Unix epoch time is 00:00:00 Coordinated Universal Time
     * (UTC), Thursday, 1 January 1970.</p>
     */
    inline DescribeCollectionResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The number of milliseconds since the Unix epoch time until the creation of
     * the collection. The Unix epoch time is 00:00:00 Coordinated Universal Time
     * (UTC), Thursday, 1 January 1970.</p>
     */
    inline DescribeCollectionResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}

  private:

    long long m_faceCount;

    Aws::String m_faceModelVersion;

    Aws::String m_collectionARN;

    Aws::Utils::DateTime m_creationTimestamp;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
