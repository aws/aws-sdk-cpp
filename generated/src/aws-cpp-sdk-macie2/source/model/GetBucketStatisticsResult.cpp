/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_classifiableSizeInBytes(0),
    m_objectCount(0),
    m_sizeInBytes(0),
    m_sizeInBytesCompressed(0)
{
}

GetBucketStatisticsResult::GetBucketStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_bucketCount(0),
    m_classifiableObjectCount(0),
    m_classifiableSizeInBytes(0),
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

  if(jsonValue.ValueExists("bucketCountByObjectEncryptionRequirement"))
  {
    m_bucketCountByObjectEncryptionRequirement = jsonValue.GetObject("bucketCountByObjectEncryptionRequirement");

  }

  if(jsonValue.ValueExists("bucketCountBySharedAccessType"))
  {
    m_bucketCountBySharedAccessType = jsonValue.GetObject("bucketCountBySharedAccessType");

  }

  if(jsonValue.ValueExists("bucketStatisticsBySensitivity"))
  {
    m_bucketStatisticsBySensitivity = jsonValue.GetObject("bucketStatisticsBySensitivity");

  }

  if(jsonValue.ValueExists("classifiableObjectCount"))
  {
    m_classifiableObjectCount = jsonValue.GetInt64("classifiableObjectCount");

  }

  if(jsonValue.ValueExists("classifiableSizeInBytes"))
  {
    m_classifiableSizeInBytes = jsonValue.GetInt64("classifiableSizeInBytes");

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

  if(jsonValue.ValueExists("unclassifiableObjectCount"))
  {
    m_unclassifiableObjectCount = jsonValue.GetObject("unclassifiableObjectCount");

  }

  if(jsonValue.ValueExists("unclassifiableObjectSizeInBytes"))
  {
    m_unclassifiableObjectSizeInBytes = jsonValue.GetObject("unclassifiableObjectSizeInBytes");

  }



  return *this;
}
