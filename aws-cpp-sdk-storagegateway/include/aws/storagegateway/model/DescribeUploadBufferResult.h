/*
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
namespace StorageGateway
{
namespace Model
{
  class AWS_STORAGEGATEWAY_API DescribeUploadBufferResult
  {
  public:
    DescribeUploadBufferResult();
    DescribeUploadBufferResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeUploadBufferResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DescribeUploadBufferResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeUploadBufferResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeUploadBufferResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetDiskIds() const{ return m_diskIds; }

    
    inline void SetDiskIds(const Aws::Vector<Aws::String>& value) { m_diskIds = value; }

    
    inline void SetDiskIds(Aws::Vector<Aws::String>&& value) { m_diskIds = value; }

    
    inline DescribeUploadBufferResult& WithDiskIds(const Aws::Vector<Aws::String>& value) { SetDiskIds(value); return *this;}

    
    inline DescribeUploadBufferResult& WithDiskIds(Aws::Vector<Aws::String>&& value) { SetDiskIds(value); return *this;}

    
    inline DescribeUploadBufferResult& AddDiskIds(const Aws::String& value) { m_diskIds.push_back(value); return *this; }

    
    inline DescribeUploadBufferResult& AddDiskIds(Aws::String&& value) { m_diskIds.push_back(value); return *this; }

    
    inline DescribeUploadBufferResult& AddDiskIds(const char* value) { m_diskIds.push_back(value); return *this; }

    
    inline long long GetUploadBufferUsedInBytes() const{ return m_uploadBufferUsedInBytes; }

    
    inline void SetUploadBufferUsedInBytes(long long value) { m_uploadBufferUsedInBytes = value; }

    
    inline DescribeUploadBufferResult& WithUploadBufferUsedInBytes(long long value) { SetUploadBufferUsedInBytes(value); return *this;}

    
    inline long long GetUploadBufferAllocatedInBytes() const{ return m_uploadBufferAllocatedInBytes; }

    
    inline void SetUploadBufferAllocatedInBytes(long long value) { m_uploadBufferAllocatedInBytes = value; }

    
    inline DescribeUploadBufferResult& WithUploadBufferAllocatedInBytes(long long value) { SetUploadBufferAllocatedInBytes(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    Aws::Vector<Aws::String> m_diskIds;
    long long m_uploadBufferUsedInBytes;
    long long m_uploadBufferAllocatedInBytes;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
