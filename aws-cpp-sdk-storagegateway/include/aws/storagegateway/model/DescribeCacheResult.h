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
  class AWS_STORAGEGATEWAY_API DescribeCacheResult
  {
  public:
    DescribeCacheResult();
    DescribeCacheResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCacheResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DescribeCacheResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeCacheResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeCacheResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetDiskIds() const{ return m_diskIds; }

    
    inline void SetDiskIds(const Aws::Vector<Aws::String>& value) { m_diskIds = value; }

    
    inline void SetDiskIds(Aws::Vector<Aws::String>&& value) { m_diskIds = value; }

    
    inline DescribeCacheResult& WithDiskIds(const Aws::Vector<Aws::String>& value) { SetDiskIds(value); return *this;}

    
    inline DescribeCacheResult& WithDiskIds(Aws::Vector<Aws::String>&& value) { SetDiskIds(value); return *this;}

    
    inline DescribeCacheResult& AddDiskIds(const Aws::String& value) { m_diskIds.push_back(value); return *this; }

    
    inline DescribeCacheResult& AddDiskIds(Aws::String&& value) { m_diskIds.push_back(value); return *this; }

    
    inline DescribeCacheResult& AddDiskIds(const char* value) { m_diskIds.push_back(value); return *this; }

    
    inline long long GetCacheAllocatedInBytes() const{ return m_cacheAllocatedInBytes; }

    
    inline void SetCacheAllocatedInBytes(long long value) { m_cacheAllocatedInBytes = value; }

    
    inline DescribeCacheResult& WithCacheAllocatedInBytes(long long value) { SetCacheAllocatedInBytes(value); return *this;}

    
    inline double GetCacheUsedPercentage() const{ return m_cacheUsedPercentage; }

    
    inline void SetCacheUsedPercentage(double value) { m_cacheUsedPercentage = value; }

    
    inline DescribeCacheResult& WithCacheUsedPercentage(double value) { SetCacheUsedPercentage(value); return *this;}

    
    inline double GetCacheDirtyPercentage() const{ return m_cacheDirtyPercentage; }

    
    inline void SetCacheDirtyPercentage(double value) { m_cacheDirtyPercentage = value; }

    
    inline DescribeCacheResult& WithCacheDirtyPercentage(double value) { SetCacheDirtyPercentage(value); return *this;}

    
    inline double GetCacheHitPercentage() const{ return m_cacheHitPercentage; }

    
    inline void SetCacheHitPercentage(double value) { m_cacheHitPercentage = value; }

    
    inline DescribeCacheResult& WithCacheHitPercentage(double value) { SetCacheHitPercentage(value); return *this;}

    
    inline double GetCacheMissPercentage() const{ return m_cacheMissPercentage; }

    
    inline void SetCacheMissPercentage(double value) { m_cacheMissPercentage = value; }

    
    inline DescribeCacheResult& WithCacheMissPercentage(double value) { SetCacheMissPercentage(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    Aws::Vector<Aws::String> m_diskIds;
    long long m_cacheAllocatedInBytes;
    double m_cacheUsedPercentage;
    double m_cacheDirtyPercentage;
    double m_cacheHitPercentage;
    double m_cacheMissPercentage;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
