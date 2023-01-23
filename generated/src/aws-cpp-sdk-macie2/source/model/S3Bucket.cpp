/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/S3Bucket.h>
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

S3Bucket::S3Bucket() : 
    m_allowsUnencryptedObjectUploads(AllowsUnencryptedObjectUploads::NOT_SET),
    m_allowsUnencryptedObjectUploadsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_defaultServerSideEncryptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_publicAccessHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

S3Bucket::S3Bucket(JsonView jsonValue) : 
    m_allowsUnencryptedObjectUploads(AllowsUnencryptedObjectUploads::NOT_SET),
    m_allowsUnencryptedObjectUploadsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_defaultServerSideEncryptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_publicAccessHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

S3Bucket& S3Bucket::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowsUnencryptedObjectUploads"))
  {
    m_allowsUnencryptedObjectUploads = AllowsUnencryptedObjectUploadsMapper::GetAllowsUnencryptedObjectUploadsForName(jsonValue.GetString("allowsUnencryptedObjectUploads"));

    m_allowsUnencryptedObjectUploadsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultServerSideEncryption"))
  {
    m_defaultServerSideEncryption = jsonValue.GetObject("defaultServerSideEncryption");

    m_defaultServerSideEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetObject("owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicAccess"))
  {
    m_publicAccess = jsonValue.GetObject("publicAccess");

    m_publicAccessHasBeenSet = true;
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

  return *this;
}

JsonValue S3Bucket::Jsonize() const
{
  JsonValue payload;

  if(m_allowsUnencryptedObjectUploadsHasBeenSet)
  {
   payload.WithString("allowsUnencryptedObjectUploads", AllowsUnencryptedObjectUploadsMapper::GetNameForAllowsUnencryptedObjectUploads(m_allowsUnencryptedObjectUploads));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_defaultServerSideEncryptionHasBeenSet)
  {
   payload.WithObject("defaultServerSideEncryption", m_defaultServerSideEncryption.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithObject("owner", m_owner.Jsonize());

  }

  if(m_publicAccessHasBeenSet)
  {
   payload.WithObject("publicAccess", m_publicAccess.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
