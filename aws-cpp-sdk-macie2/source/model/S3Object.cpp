/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/S3Object.h>
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

S3Object::S3Object() : 
    m_bucketArnHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_extensionHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_publicAccess(false),
    m_publicAccessHasBeenSet(false),
    m_serverSideEncryptionHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_storageClass(StorageClass::NOT_SET),
    m_storageClassHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

S3Object::S3Object(JsonView jsonValue) : 
    m_bucketArnHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_extensionHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_publicAccess(false),
    m_publicAccessHasBeenSet(false),
    m_serverSideEncryptionHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_storageClass(StorageClass::NOT_SET),
    m_storageClassHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
  *this = jsonValue;
}

S3Object& S3Object::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketArn"))
  {
    m_bucketArn = jsonValue.GetString("bucketArn");

    m_bucketArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eTag"))
  {
    m_eTag = jsonValue.GetString("eTag");

    m_eTagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("extension"))
  {
    m_extension = jsonValue.GetString("extension");

    m_extensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModified"))
  {
    m_lastModified = jsonValue.GetString("lastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicAccess"))
  {
    m_publicAccess = jsonValue.GetBool("publicAccess");

    m_publicAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverSideEncryption"))
  {
    m_serverSideEncryption = jsonValue.GetObject("serverSideEncryption");

    m_serverSideEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetInt64("size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageClass"))
  {
    m_storageClass = StorageClassMapper::GetStorageClassForName(jsonValue.GetString("storageClass"));

    m_storageClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionId"))
  {
    m_versionId = jsonValue.GetString("versionId");

    m_versionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Object::Jsonize() const
{
  JsonValue payload;

  if(m_bucketArnHasBeenSet)
  {
   payload.WithString("bucketArn", m_bucketArn);

  }

  if(m_eTagHasBeenSet)
  {
   payload.WithString("eTag", m_eTag);

  }

  if(m_extensionHasBeenSet)
  {
   payload.WithString("extension", m_extension);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithString("lastModified", m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_publicAccessHasBeenSet)
  {
   payload.WithBool("publicAccess", m_publicAccess);

  }

  if(m_serverSideEncryptionHasBeenSet)
  {
   payload.WithObject("serverSideEncryption", m_serverSideEncryption.Jsonize());

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInt64("size", m_size);

  }

  if(m_storageClassHasBeenSet)
  {
   payload.WithString("storageClass", StorageClassMapper::GetNameForStorageClass(m_storageClass));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("versionId", m_versionId);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
