/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetBucketStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBucketStatisticsResult::GetBucketStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBucketStatisticsResult& GetBucketStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("bucketCount"))
  {
    m_bucketCount = jsonValue.GetInt64("bucketCount");
    m_bucketCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bucketCountByEffectivePermission"))
  {
    m_bucketCountByEffectivePermission = jsonValue.GetObject("bucketCountByEffectivePermission");
    m_bucketCountByEffectivePermissionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bucketCountByEncryptionType"))
  {
    m_bucketCountByEncryptionType = jsonValue.GetObject("bucketCountByEncryptionType");
    m_bucketCountByEncryptionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bucketCountByObjectEncryptionRequirement"))
  {
    m_bucketCountByObjectEncryptionRequirement = jsonValue.GetObject("bucketCountByObjectEncryptionRequirement");
    m_bucketCountByObjectEncryptionRequirementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bucketCountBySharedAccessType"))
  {
    m_bucketCountBySharedAccessType = jsonValue.GetObject("bucketCountBySharedAccessType");
    m_bucketCountBySharedAccessTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bucketStatisticsBySensitivity"))
  {
    m_bucketStatisticsBySensitivity = jsonValue.GetObject("bucketStatisticsBySensitivity");
    m_bucketStatisticsBySensitivityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("classifiableObjectCount"))
  {
    m_classifiableObjectCount = jsonValue.GetInt64("classifiableObjectCount");
    m_classifiableObjectCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("classifiableSizeInBytes"))
  {
    m_classifiableSizeInBytes = jsonValue.GetInt64("classifiableSizeInBytes");
    m_classifiableSizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdated"))
  {
    m_lastUpdated = jsonValue.GetString("lastUpdated");
    m_lastUpdatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("objectCount"))
  {
    m_objectCount = jsonValue.GetInt64("objectCount");
    m_objectCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sizeInBytes"))
  {
    m_sizeInBytes = jsonValue.GetInt64("sizeInBytes");
    m_sizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sizeInBytesCompressed"))
  {
    m_sizeInBytesCompressed = jsonValue.GetInt64("sizeInBytesCompressed");
    m_sizeInBytesCompressedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unclassifiableObjectCount"))
  {
    m_unclassifiableObjectCount = jsonValue.GetObject("unclassifiableObjectCount");
    m_unclassifiableObjectCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unclassifiableObjectSizeInBytes"))
  {
    m_unclassifiableObjectSizeInBytes = jsonValue.GetObject("unclassifiableObjectSizeInBytes");
    m_unclassifiableObjectSizeInBytesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
