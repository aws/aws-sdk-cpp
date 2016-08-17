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
#include <aws/storagegateway/model/DescribeCacheResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCacheResult::DescribeCacheResult() : 
    m_cacheAllocatedInBytes(0),
    m_cacheUsedPercentage(0.0),
    m_cacheDirtyPercentage(0.0),
    m_cacheHitPercentage(0.0),
    m_cacheMissPercentage(0.0)
{
}

DescribeCacheResult::DescribeCacheResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_cacheAllocatedInBytes(0),
    m_cacheUsedPercentage(0.0),
    m_cacheDirtyPercentage(0.0),
    m_cacheHitPercentage(0.0),
    m_cacheMissPercentage(0.0)
{
  *this = result;
}

DescribeCacheResult& DescribeCacheResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("DiskIds"))
  {
    Array<JsonValue> diskIdsJsonList = jsonValue.GetArray("DiskIds");
    for(unsigned diskIdsIndex = 0; diskIdsIndex < diskIdsJsonList.GetLength(); ++diskIdsIndex)
    {
      m_diskIds.push_back(diskIdsJsonList[diskIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("CacheAllocatedInBytes"))
  {
    m_cacheAllocatedInBytes = jsonValue.GetInt64("CacheAllocatedInBytes");

  }

  if(jsonValue.ValueExists("CacheUsedPercentage"))
  {
    m_cacheUsedPercentage = jsonValue.GetDouble("CacheUsedPercentage");

  }

  if(jsonValue.ValueExists("CacheDirtyPercentage"))
  {
    m_cacheDirtyPercentage = jsonValue.GetDouble("CacheDirtyPercentage");

  }

  if(jsonValue.ValueExists("CacheHitPercentage"))
  {
    m_cacheHitPercentage = jsonValue.GetDouble("CacheHitPercentage");

  }

  if(jsonValue.ValueExists("CacheMissPercentage"))
  {
    m_cacheMissPercentage = jsonValue.GetDouble("CacheMissPercentage");

  }



  return *this;
}
