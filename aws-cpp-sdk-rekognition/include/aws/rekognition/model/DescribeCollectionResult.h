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


    
    inline long long GetFaceCount() const{ return m_faceCount; }

    
    inline void SetFaceCount(long long value) { m_faceCount = value; }

    
    inline DescribeCollectionResult& WithFaceCount(long long value) { SetFaceCount(value); return *this;}


    
    inline const Aws::String& GetFaceModelVersion() const{ return m_faceModelVersion; }

    
    inline void SetFaceModelVersion(const Aws::String& value) { m_faceModelVersion = value; }

    
    inline void SetFaceModelVersion(Aws::String&& value) { m_faceModelVersion = std::move(value); }

    
    inline void SetFaceModelVersion(const char* value) { m_faceModelVersion.assign(value); }

    
    inline DescribeCollectionResult& WithFaceModelVersion(const Aws::String& value) { SetFaceModelVersion(value); return *this;}

    
    inline DescribeCollectionResult& WithFaceModelVersion(Aws::String&& value) { SetFaceModelVersion(std::move(value)); return *this;}

    
    inline DescribeCollectionResult& WithFaceModelVersion(const char* value) { SetFaceModelVersion(value); return *this;}


    
    inline const Aws::String& GetCollectionARN() const{ return m_collectionARN; }

    
    inline void SetCollectionARN(const Aws::String& value) { m_collectionARN = value; }

    
    inline void SetCollectionARN(Aws::String&& value) { m_collectionARN = std::move(value); }

    
    inline void SetCollectionARN(const char* value) { m_collectionARN.assign(value); }

    
    inline DescribeCollectionResult& WithCollectionARN(const Aws::String& value) { SetCollectionARN(value); return *this;}

    
    inline DescribeCollectionResult& WithCollectionARN(Aws::String&& value) { SetCollectionARN(std::move(value)); return *this;}

    
    inline DescribeCollectionResult& WithCollectionARN(const char* value) { SetCollectionARN(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }

    
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }

    
    inline DescribeCollectionResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    
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
