/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BucketMetadata.h>
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

BucketMetadata::BucketMetadata() : 
    m_accountIdHasBeenSet(false),
    m_bucketArnHasBeenSet(false),
    m_bucketCreatedAtHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_classifiableObjectCount(0),
    m_classifiableObjectCountHasBeenSet(false),
    m_classifiableSizeInBytes(0),
    m_classifiableSizeInBytesHasBeenSet(false),
    m_jobDetailsHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_objectCount(0),
    m_objectCountHasBeenSet(false),
    m_objectCountByEncryptionTypeHasBeenSet(false),
    m_publicAccessHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_replicationDetailsHasBeenSet(false),
    m_sharedAccess(SharedAccess::NOT_SET),
    m_sharedAccessHasBeenSet(false),
    m_sizeInBytes(0),
    m_sizeInBytesHasBeenSet(false),
    m_sizeInBytesCompressed(0),
    m_sizeInBytesCompressedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_unclassifiableObjectCountHasBeenSet(false),
    m_unclassifiableObjectSizeInBytesHasBeenSet(false),
    m_versioning(false),
    m_versioningHasBeenSet(false)
{
}

BucketMetadata::BucketMetadata(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_bucketArnHasBeenSet(false),
    m_bucketCreatedAtHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_classifiableObjectCount(0),
    m_classifiableObjectCountHasBeenSet(false),
    m_classifiableSizeInBytes(0),
    m_classifiableSizeInBytesHasBeenSet(false),
    m_jobDetailsHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_objectCount(0),
    m_objectCountHasBeenSet(false),
    m_objectCountByEncryptionTypeHasBeenSet(false),
    m_publicAccessHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_replicationDetailsHasBeenSet(false),
    m_sharedAccess(SharedAccess::NOT_SET),
    m_sharedAccessHasBeenSet(false),
    m_sizeInBytes(0),
    m_sizeInBytesHasBeenSet(false),
    m_sizeInBytesCompressed(0),
    m_sizeInBytesCompressedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_unclassifiableObjectCountHasBeenSet(false),
    m_unclassifiableObjectSizeInBytesHasBeenSet(false),
    m_versioning(false),
    m_versioningHasBeenSet(false)
{
  *this = jsonValue;
}

BucketMetadata& BucketMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketArn"))
  {
    m_bucketArn = jsonValue.GetString("bucketArn");

    m_bucketArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketCreatedAt"))
  {
    m_bucketCreatedAt = jsonValue.GetString("bucketCreatedAt");

    m_bucketCreatedAtHasBeenSet = true;
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

  if(jsonValue.ValueExists("jobDetails"))
  {
    m_jobDetails = jsonValue.GetObject("jobDetails");

    m_jobDetailsHasBeenSet = true;
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

  if(jsonValue.ValueExists("objectCountByEncryptionType"))
  {
    m_objectCountByEncryptionType = jsonValue.GetObject("objectCountByEncryptionType");

    m_objectCountByEncryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicAccess"))
  {
    m_publicAccess = jsonValue.GetObject("publicAccess");

    m_publicAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationDetails"))
  {
    m_replicationDetails = jsonValue.GetObject("replicationDetails");

    m_replicationDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sharedAccess"))
  {
    m_sharedAccess = SharedAccessMapper::GetSharedAccessForName(jsonValue.GetString("sharedAccess"));

    m_sharedAccessHasBeenSet = true;
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

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
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

  if(jsonValue.ValueExists("versioning"))
  {
    m_versioning = jsonValue.GetBool("versioning");

    m_versioningHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_bucketArnHasBeenSet)
  {
   payload.WithString("bucketArn", m_bucketArn);

  }

  if(m_bucketCreatedAtHasBeenSet)
  {
   payload.WithString("bucketCreatedAt", m_bucketCreatedAt.ToGmtString(DateFormat::ISO_8601));
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

  if(m_jobDetailsHasBeenSet)
  {
   payload.WithObject("jobDetails", m_jobDetails.Jsonize());

  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithString("lastUpdated", m_lastUpdated.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_objectCountHasBeenSet)
  {
   payload.WithInt64("objectCount", m_objectCount);

  }

  if(m_objectCountByEncryptionTypeHasBeenSet)
  {
   payload.WithObject("objectCountByEncryptionType", m_objectCountByEncryptionType.Jsonize());

  }

  if(m_publicAccessHasBeenSet)
  {
   payload.WithObject("publicAccess", m_publicAccess.Jsonize());

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_replicationDetailsHasBeenSet)
  {
   payload.WithObject("replicationDetails", m_replicationDetails.Jsonize());

  }

  if(m_sharedAccessHasBeenSet)
  {
   payload.WithString("sharedAccess", SharedAccessMapper::GetNameForSharedAccess(m_sharedAccess));
  }

  if(m_sizeInBytesHasBeenSet)
  {
   payload.WithInt64("sizeInBytes", m_sizeInBytes);

  }

  if(m_sizeInBytesCompressedHasBeenSet)
  {
   payload.WithInt64("sizeInBytesCompressed", m_sizeInBytesCompressed);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_unclassifiableObjectCountHasBeenSet)
  {
   payload.WithObject("unclassifiableObjectCount", m_unclassifiableObjectCount.Jsonize());

  }

  if(m_unclassifiableObjectSizeInBytesHasBeenSet)
  {
   payload.WithObject("unclassifiableObjectSizeInBytes", m_unclassifiableObjectSizeInBytes.Jsonize());

  }

  if(m_versioningHasBeenSet)
  {
   payload.WithBool("versioning", m_versioning);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
