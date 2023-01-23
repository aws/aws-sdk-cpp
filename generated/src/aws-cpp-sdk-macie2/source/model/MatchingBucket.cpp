/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/MatchingBucket.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

MatchingBucket::MatchingBucket() : 
    m_accountIdHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_classifiableObjectCount(0),
    m_classifiableObjectCountHasBeenSet(false),
    m_classifiableSizeInBytes(0),
    m_classifiableSizeInBytesHasBeenSet(false),
    m_errorCode(BucketMetadataErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_jobDetailsHasBeenSet(false),
    m_lastAutomatedDiscoveryTimeHasBeenSet(false),
    m_objectCount(0),
    m_objectCountHasBeenSet(false),
    m_objectCountByEncryptionTypeHasBeenSet(false),
    m_sensitivityScore(0),
    m_sensitivityScoreHasBeenSet(false),
    m_sizeInBytes(0),
    m_sizeInBytesHasBeenSet(false),
    m_sizeInBytesCompressed(0),
    m_sizeInBytesCompressedHasBeenSet(false),
    m_unclassifiableObjectCountHasBeenSet(false),
    m_unclassifiableObjectSizeInBytesHasBeenSet(false)
{
}

MatchingBucket::MatchingBucket(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_classifiableObjectCount(0),
    m_classifiableObjectCountHasBeenSet(false),
    m_classifiableSizeInBytes(0),
    m_classifiableSizeInBytesHasBeenSet(false),
    m_errorCode(BucketMetadataErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_jobDetailsHasBeenSet(false),
    m_lastAutomatedDiscoveryTimeHasBeenSet(false),
    m_objectCount(0),
    m_objectCountHasBeenSet(false),
    m_objectCountByEncryptionTypeHasBeenSet(false),
    m_sensitivityScore(0),
    m_sensitivityScoreHasBeenSet(false),
    m_sizeInBytes(0),
    m_sizeInBytesHasBeenSet(false),
    m_sizeInBytesCompressed(0),
    m_sizeInBytesCompressedHasBeenSet(false),
    m_unclassifiableObjectCountHasBeenSet(false),
    m_unclassifiableObjectSizeInBytesHasBeenSet(false)
{
  *this = jsonValue;
}

MatchingBucket& MatchingBucket::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = BucketMetadataErrorCodeMapper::GetBucketMetadataErrorCodeForName(jsonValue.GetString("errorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobDetails"))
  {
    m_jobDetails = jsonValue.GetObject("jobDetails");

    m_jobDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastAutomatedDiscoveryTime"))
  {
    m_lastAutomatedDiscoveryTime = jsonValue.GetString("lastAutomatedDiscoveryTime");

    m_lastAutomatedDiscoveryTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objectCount"))
  {
    m_objectCount = jsonValue.GetInt64("objectCount");

    m_objectCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objectCountByEncryptionType"))
  {
    m_objectCountByEncryptionType = jsonValue.GetObject("objectCountByEncryptionType");

    m_objectCountByEncryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sensitivityScore"))
  {
    m_sensitivityScore = jsonValue.GetInteger("sensitivityScore");

    m_sensitivityScoreHasBeenSet = true;
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

  return *this;
}

JsonValue MatchingBucket::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_classifiableObjectCountHasBeenSet)
  {
   payload.WithInt64("classifiableObjectCount", m_classifiableObjectCount);

  }

  if(m_classifiableSizeInBytesHasBeenSet)
  {
   payload.WithInt64("classifiableSizeInBytes", m_classifiableSizeInBytes);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", BucketMetadataErrorCodeMapper::GetNameForBucketMetadataErrorCode(m_errorCode));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_jobDetailsHasBeenSet)
  {
   payload.WithObject("jobDetails", m_jobDetails.Jsonize());

  }

  if(m_lastAutomatedDiscoveryTimeHasBeenSet)
  {
   payload.WithString("lastAutomatedDiscoveryTime", m_lastAutomatedDiscoveryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_objectCountHasBeenSet)
  {
   payload.WithInt64("objectCount", m_objectCount);

  }

  if(m_objectCountByEncryptionTypeHasBeenSet)
  {
   payload.WithObject("objectCountByEncryptionType", m_objectCountByEncryptionType.Jsonize());

  }

  if(m_sensitivityScoreHasBeenSet)
  {
   payload.WithInteger("sensitivityScore", m_sensitivityScore);

  }

  if(m_sizeInBytesHasBeenSet)
  {
   payload.WithInt64("sizeInBytes", m_sizeInBytes);

  }

  if(m_sizeInBytesCompressedHasBeenSet)
  {
   payload.WithInt64("sizeInBytesCompressed", m_sizeInBytesCompressed);

  }

  if(m_unclassifiableObjectCountHasBeenSet)
  {
   payload.WithObject("unclassifiableObjectCount", m_unclassifiableObjectCount.Jsonize());

  }

  if(m_unclassifiableObjectSizeInBytesHasBeenSet)
  {
   payload.WithObject("unclassifiableObjectSizeInBytes", m_unclassifiableObjectSizeInBytes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
