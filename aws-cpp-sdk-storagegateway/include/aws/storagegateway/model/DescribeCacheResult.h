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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace StorageGateway
{
namespace Model
{
  class AWS_STORAGEGATEWAY_API DescribeCacheResult
  {
  public:
    DescribeCacheResult();
    DescribeCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DescribeCacheResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeCacheResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline DescribeCacheResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDiskIds() const{ return m_diskIds; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline void SetDiskIds(const Aws::Vector<Aws::String>& value) { m_diskIds = value; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline void SetDiskIds(Aws::Vector<Aws::String>&& value) { m_diskIds = std::move(value); }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline DescribeCacheResult& WithDiskIds(const Aws::Vector<Aws::String>& value) { SetDiskIds(value); return *this;}

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline DescribeCacheResult& WithDiskIds(Aws::Vector<Aws::String>&& value) { SetDiskIds(std::move(value)); return *this;}

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline DescribeCacheResult& AddDiskIds(const Aws::String& value) { m_diskIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline DescribeCacheResult& AddDiskIds(Aws::String&& value) { m_diskIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline DescribeCacheResult& AddDiskIds(const char* value) { m_diskIds.push_back(value); return *this; }


    /**
     * <p>The amount of cache in bytes allocated to the a gateway.</p>
     */
    inline long long GetCacheAllocatedInBytes() const{ return m_cacheAllocatedInBytes; }

    /**
     * <p>The amount of cache in bytes allocated to the a gateway.</p>
     */
    inline void SetCacheAllocatedInBytes(long long value) { m_cacheAllocatedInBytes = value; }

    /**
     * <p>The amount of cache in bytes allocated to the a gateway.</p>
     */
    inline DescribeCacheResult& WithCacheAllocatedInBytes(long long value) { SetCacheAllocatedInBytes(value); return *this;}


    /**
     * <p>Percent use of the gateway's cache storage. This metric applies only to the
     * gateway-cached volume setup. The sample is taken at the end of the reporting
     * period.</p>
     */
    inline double GetCacheUsedPercentage() const{ return m_cacheUsedPercentage; }

    /**
     * <p>Percent use of the gateway's cache storage. This metric applies only to the
     * gateway-cached volume setup. The sample is taken at the end of the reporting
     * period.</p>
     */
    inline void SetCacheUsedPercentage(double value) { m_cacheUsedPercentage = value; }

    /**
     * <p>Percent use of the gateway's cache storage. This metric applies only to the
     * gateway-cached volume setup. The sample is taken at the end of the reporting
     * period.</p>
     */
    inline DescribeCacheResult& WithCacheUsedPercentage(double value) { SetCacheUsedPercentage(value); return *this;}


    /**
     * <p>The file share's contribution to the overall percentage of the gateway's
     * cache that has not been persisted to AWS. The sample is taken at the end of the
     * reporting period.</p>
     */
    inline double GetCacheDirtyPercentage() const{ return m_cacheDirtyPercentage; }

    /**
     * <p>The file share's contribution to the overall percentage of the gateway's
     * cache that has not been persisted to AWS. The sample is taken at the end of the
     * reporting period.</p>
     */
    inline void SetCacheDirtyPercentage(double value) { m_cacheDirtyPercentage = value; }

    /**
     * <p>The file share's contribution to the overall percentage of the gateway's
     * cache that has not been persisted to AWS. The sample is taken at the end of the
     * reporting period.</p>
     */
    inline DescribeCacheResult& WithCacheDirtyPercentage(double value) { SetCacheDirtyPercentage(value); return *this;}


    /**
     * <p>Percent of application read operations from the file shares that are served
     * from cache. The sample is taken at the end of the reporting period.</p>
     */
    inline double GetCacheHitPercentage() const{ return m_cacheHitPercentage; }

    /**
     * <p>Percent of application read operations from the file shares that are served
     * from cache. The sample is taken at the end of the reporting period.</p>
     */
    inline void SetCacheHitPercentage(double value) { m_cacheHitPercentage = value; }

    /**
     * <p>Percent of application read operations from the file shares that are served
     * from cache. The sample is taken at the end of the reporting period.</p>
     */
    inline DescribeCacheResult& WithCacheHitPercentage(double value) { SetCacheHitPercentage(value); return *this;}


    /**
     * <p>Percent of application read operations from the file shares that are not
     * served from cache. The sample is taken at the end of the reporting period.</p>
     */
    inline double GetCacheMissPercentage() const{ return m_cacheMissPercentage; }

    /**
     * <p>Percent of application read operations from the file shares that are not
     * served from cache. The sample is taken at the end of the reporting period.</p>
     */
    inline void SetCacheMissPercentage(double value) { m_cacheMissPercentage = value; }

    /**
     * <p>Percent of application read operations from the file shares that are not
     * served from cache. The sample is taken at the end of the reporting period.</p>
     */
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
