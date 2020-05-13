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

#include <aws/macie2/model/GetBucketStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBucketStatisticsResult::GetBucketStatisticsResult() : 
    m_bucketCount(0),
    m_classifiableObjectCount(0),
    m_objectCount(0),
    m_sizeInBytes(0),
    m_sizeInBytesCompressed(0)
{
}

GetBucketStatisticsResult::GetBucketStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_bucketCount(0),
    m_classifiableObjectCount(0),
    m_objectCount(0),
    m_sizeInBytes(0),
    m_sizeInBytesCompressed(0)
{
  *this = result;
}

GetBucketStatisticsResult& GetBucketStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("bucketCount"))
  {
    m_bucketCount = jsonValue.GetInt64("bucketCount");

  }

  if(jsonValue.ValueExists("bucketCountByEffectivePermission"))
  {
    m_bucketCountByEffectivePermission = jsonValue.GetObject("bucketCountByEffectivePermission");

  }

  if(jsonValue.ValueExists("bucketCountByEncryptionType"))
  {
    m_bucketCountByEncryptionType = jsonValue.GetObject("bucketCountByEncryptionType");

  }

  if(jsonValue.ValueExists("bucketCountBySharedAccessType"))
  {
    m_bucketCountBySharedAccessType = jsonValue.GetObject("bucketCountBySharedAccessType");

  }

  if(jsonValue.ValueExists("classifiableObjectCount"))
  {
    m_classifiableObjectCount = jsonValue.GetInt64("classifiableObjectCount");

  }

  if(jsonValue.ValueExists("lastUpdated"))
  {
    m_lastUpdated = jsonValue.GetString("lastUpdated");

  }

  if(jsonValue.ValueExists("objectCount"))
  {
    m_objectCount = jsonValue.GetInt64("objectCount");

  }

  if(jsonValue.ValueExists("sizeInBytes"))
  {
    m_sizeInBytes = jsonValue.GetInt64("sizeInBytes");

  }

  if(jsonValue.ValueExists("sizeInBytesCompressed"))
  {
    m_sizeInBytesCompressed = jsonValue.GetInt64("sizeInBytesCompressed");

  }



  return *this;
}
