/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/S3ItemFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

S3ItemFilter::S3ItemFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

S3ItemFilter& S3ItemFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectKeys"))
  {
    Aws::Utils::Array<JsonView> objectKeysJsonList = jsonValue.GetArray("ObjectKeys");
    for(unsigned objectKeysIndex = 0; objectKeysIndex < objectKeysJsonList.GetLength(); ++objectKeysIndex)
    {
      m_objectKeys.push_back(objectKeysJsonList[objectKeysIndex].AsObject());
    }
    m_objectKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sizes"))
  {
    Aws::Utils::Array<JsonView> sizesJsonList = jsonValue.GetArray("Sizes");
    for(unsigned sizesIndex = 0; sizesIndex < sizesJsonList.GetLength(); ++sizesIndex)
    {
      m_sizes.push_back(sizesJsonList[sizesIndex].AsObject());
    }
    m_sizesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTimes"))
  {
    Aws::Utils::Array<JsonView> creationTimesJsonList = jsonValue.GetArray("CreationTimes");
    for(unsigned creationTimesIndex = 0; creationTimesIndex < creationTimesJsonList.GetLength(); ++creationTimesIndex)
    {
      m_creationTimes.push_back(creationTimesJsonList[creationTimesIndex].AsObject());
    }
    m_creationTimesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionIds"))
  {
    Aws::Utils::Array<JsonView> versionIdsJsonList = jsonValue.GetArray("VersionIds");
    for(unsigned versionIdsIndex = 0; versionIdsIndex < versionIdsJsonList.GetLength(); ++versionIdsIndex)
    {
      m_versionIds.push_back(versionIdsJsonList[versionIdsIndex].AsObject());
    }
    m_versionIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ETags"))
  {
    Aws::Utils::Array<JsonView> eTagsJsonList = jsonValue.GetArray("ETags");
    for(unsigned eTagsIndex = 0; eTagsIndex < eTagsJsonList.GetLength(); ++eTagsIndex)
    {
      m_eTags.push_back(eTagsJsonList[eTagsIndex].AsObject());
    }
    m_eTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue S3ItemFilter::Jsonize() const
{
  JsonValue payload;

  if(m_objectKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectKeysJsonList(m_objectKeys.size());
   for(unsigned objectKeysIndex = 0; objectKeysIndex < objectKeysJsonList.GetLength(); ++objectKeysIndex)
   {
     objectKeysJsonList[objectKeysIndex].AsObject(m_objectKeys[objectKeysIndex].Jsonize());
   }
   payload.WithArray("ObjectKeys", std::move(objectKeysJsonList));

  }

  if(m_sizesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sizesJsonList(m_sizes.size());
   for(unsigned sizesIndex = 0; sizesIndex < sizesJsonList.GetLength(); ++sizesIndex)
   {
     sizesJsonList[sizesIndex].AsObject(m_sizes[sizesIndex].Jsonize());
   }
   payload.WithArray("Sizes", std::move(sizesJsonList));

  }

  if(m_creationTimesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> creationTimesJsonList(m_creationTimes.size());
   for(unsigned creationTimesIndex = 0; creationTimesIndex < creationTimesJsonList.GetLength(); ++creationTimesIndex)
   {
     creationTimesJsonList[creationTimesIndex].AsObject(m_creationTimes[creationTimesIndex].Jsonize());
   }
   payload.WithArray("CreationTimes", std::move(creationTimesJsonList));

  }

  if(m_versionIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> versionIdsJsonList(m_versionIds.size());
   for(unsigned versionIdsIndex = 0; versionIdsIndex < versionIdsJsonList.GetLength(); ++versionIdsIndex)
   {
     versionIdsJsonList[versionIdsIndex].AsObject(m_versionIds[versionIdsIndex].Jsonize());
   }
   payload.WithArray("VersionIds", std::move(versionIdsJsonList));

  }

  if(m_eTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eTagsJsonList(m_eTags.size());
   for(unsigned eTagsIndex = 0; eTagsIndex < eTagsJsonList.GetLength(); ++eTagsIndex)
   {
     eTagsJsonList[eTagsIndex].AsObject(m_eTags[eTagsIndex].Jsonize());
   }
   payload.WithArray("ETags", std::move(eTagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
