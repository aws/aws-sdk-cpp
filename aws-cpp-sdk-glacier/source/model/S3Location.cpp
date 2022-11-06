/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/S3Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

S3Location::S3Location() : 
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_cannedACL(CannedACL::NOT_SET),
    m_cannedACLHasBeenSet(false),
    m_accessControlListHasBeenSet(false),
    m_taggingHasBeenSet(false),
    m_userMetadataHasBeenSet(false),
    m_storageClass(StorageClass::NOT_SET),
    m_storageClassHasBeenSet(false)
{
}

S3Location::S3Location(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_cannedACL(CannedACL::NOT_SET),
    m_cannedACLHasBeenSet(false),
    m_accessControlListHasBeenSet(false),
    m_taggingHasBeenSet(false),
    m_userMetadataHasBeenSet(false),
    m_storageClass(StorageClass::NOT_SET),
    m_storageClassHasBeenSet(false)
{
  *this = jsonValue;
}

S3Location& S3Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encryption"))
  {
    m_encryption = jsonValue.GetObject("Encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CannedACL"))
  {
    m_cannedACL = CannedACLMapper::GetCannedACLForName(jsonValue.GetString("CannedACL"));

    m_cannedACLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessControlList"))
  {
    Aws::Utils::Array<JsonView> accessControlListJsonList = jsonValue.GetArray("AccessControlList");
    for(unsigned accessControlListIndex = 0; accessControlListIndex < accessControlListJsonList.GetLength(); ++accessControlListIndex)
    {
      m_accessControlList.push_back(accessControlListJsonList[accessControlListIndex].AsObject());
    }
    m_accessControlListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tagging"))
  {
    Aws::Map<Aws::String, JsonView> taggingJsonMap = jsonValue.GetObject("Tagging").GetAllObjects();
    for(auto& taggingItem : taggingJsonMap)
    {
      m_tagging[taggingItem.first] = taggingItem.second.AsString();
    }
    m_taggingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserMetadata"))
  {
    Aws::Map<Aws::String, JsonView> userMetadataJsonMap = jsonValue.GetObject("UserMetadata").GetAllObjects();
    for(auto& userMetadataItem : userMetadataJsonMap)
    {
      m_userMetadata[userMetadataItem.first] = userMetadataItem.second.AsString();
    }
    m_userMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageClass"))
  {
    m_storageClass = StorageClassMapper::GetStorageClassForName(jsonValue.GetString("StorageClass"));

    m_storageClassHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Location::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("Encryption", m_encryption.Jsonize());

  }

  if(m_cannedACLHasBeenSet)
  {
   payload.WithString("CannedACL", CannedACLMapper::GetNameForCannedACL(m_cannedACL));
  }

  if(m_accessControlListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessControlListJsonList(m_accessControlList.size());
   for(unsigned accessControlListIndex = 0; accessControlListIndex < accessControlListJsonList.GetLength(); ++accessControlListIndex)
   {
     accessControlListJsonList[accessControlListIndex].AsObject(m_accessControlList[accessControlListIndex].Jsonize());
   }
   payload.WithArray("AccessControlList", std::move(accessControlListJsonList));

  }

  if(m_taggingHasBeenSet)
  {
   JsonValue taggingJsonMap;
   for(auto& taggingItem : m_tagging)
   {
     taggingJsonMap.WithString(taggingItem.first, taggingItem.second);
   }
   payload.WithObject("Tagging", std::move(taggingJsonMap));

  }

  if(m_userMetadataHasBeenSet)
  {
   JsonValue userMetadataJsonMap;
   for(auto& userMetadataItem : m_userMetadata)
   {
     userMetadataJsonMap.WithString(userMetadataItem.first, userMetadataItem.second);
   }
   payload.WithObject("UserMetadata", std::move(userMetadataJsonMap));

  }

  if(m_storageClassHasBeenSet)
  {
   payload.WithString("StorageClass", StorageClassMapper::GetNameForStorageClass(m_storageClass));
  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
