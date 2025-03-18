/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/S3Bucket.h>
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

S3Bucket::S3Bucket(JsonView jsonValue)
{
  *this = jsonValue;
}

S3Bucket& S3Bucket::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ownerId"))
  {
    m_ownerId = jsonValue.GetString("ownerId");
    m_ownerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = jsonValue.GetString("encryptionType");
    m_encryptionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("encryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("effectivePermission"))
  {
    m_effectivePermission = jsonValue.GetString("effectivePermission");
    m_effectivePermissionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publicReadAccess"))
  {
    m_publicReadAccess = PublicAccessStatusMapper::GetPublicAccessStatusForName(jsonValue.GetString("publicReadAccess"));
    m_publicReadAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publicWriteAccess"))
  {
    m_publicWriteAccess = PublicAccessStatusMapper::GetPublicAccessStatusForName(jsonValue.GetString("publicWriteAccess"));
    m_publicWriteAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountPublicAccess"))
  {
    m_accountPublicAccess = jsonValue.GetObject("accountPublicAccess");
    m_accountPublicAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bucketPublicAccess"))
  {
    m_bucketPublicAccess = jsonValue.GetObject("bucketPublicAccess");
    m_bucketPublicAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3ObjectUids"))
  {
    Aws::Utils::Array<JsonView> s3ObjectUidsJsonList = jsonValue.GetArray("s3ObjectUids");
    for(unsigned s3ObjectUidsIndex = 0; s3ObjectUidsIndex < s3ObjectUidsJsonList.GetLength(); ++s3ObjectUidsIndex)
    {
      m_s3ObjectUids.push_back(s3ObjectUidsJsonList[s3ObjectUidsIndex].AsString());
    }
    m_s3ObjectUidsHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Bucket::Jsonize() const
{
  JsonValue payload;

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("ownerId", m_ownerId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", m_encryptionType);

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("encryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_effectivePermissionHasBeenSet)
  {
   payload.WithString("effectivePermission", m_effectivePermission);

  }

  if(m_publicReadAccessHasBeenSet)
  {
   payload.WithString("publicReadAccess", PublicAccessStatusMapper::GetNameForPublicAccessStatus(m_publicReadAccess));
  }

  if(m_publicWriteAccessHasBeenSet)
  {
   payload.WithString("publicWriteAccess", PublicAccessStatusMapper::GetNameForPublicAccessStatus(m_publicWriteAccess));
  }

  if(m_accountPublicAccessHasBeenSet)
  {
   payload.WithObject("accountPublicAccess", m_accountPublicAccess.Jsonize());

  }

  if(m_bucketPublicAccessHasBeenSet)
  {
   payload.WithObject("bucketPublicAccess", m_bucketPublicAccess.Jsonize());

  }

  if(m_s3ObjectUidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3ObjectUidsJsonList(m_s3ObjectUids.size());
   for(unsigned s3ObjectUidsIndex = 0; s3ObjectUidsIndex < s3ObjectUidsJsonList.GetLength(); ++s3ObjectUidsIndex)
   {
     s3ObjectUidsJsonList[s3ObjectUidsIndex].AsString(m_s3ObjectUids[s3ObjectUidsIndex]);
   }
   payload.WithArray("s3ObjectUids", std::move(s3ObjectUidsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
