/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/S3BucketDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

S3BucketDetail::S3BucketDetail() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_defaultServerSideEncryptionHasBeenSet(false),
    m_publicAccessHasBeenSet(false)
{
}

S3BucketDetail::S3BucketDetail(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_defaultServerSideEncryptionHasBeenSet(false),
    m_publicAccessHasBeenSet(false)
{
  *this = jsonValue;
}

S3BucketDetail& S3BucketDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetObject("owner");

    m_ownerHasBeenSet = true;
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

  if(jsonValue.ValueExists("defaultServerSideEncryption"))
  {
    m_defaultServerSideEncryption = jsonValue.GetObject("defaultServerSideEncryption");

    m_defaultServerSideEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicAccess"))
  {
    m_publicAccess = jsonValue.GetObject("publicAccess");

    m_publicAccessHasBeenSet = true;
  }

  return *this;
}

JsonValue S3BucketDetail::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_ownerHasBeenSet)
  {
   payload.WithObject("owner", m_owner.Jsonize());

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

  if(m_defaultServerSideEncryptionHasBeenSet)
  {
   payload.WithObject("defaultServerSideEncryption", m_defaultServerSideEncryption.Jsonize());

  }

  if(m_publicAccessHasBeenSet)
  {
   payload.WithObject("publicAccess", m_publicAccess.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
