/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BucketCountByEncryptionType.h>
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

BucketCountByEncryptionType::BucketCountByEncryptionType() : 
    m_kmsManaged(0),
    m_kmsManagedHasBeenSet(false),
    m_s3Managed(0),
    m_s3ManagedHasBeenSet(false),
    m_unencrypted(0),
    m_unencryptedHasBeenSet(false)
{
}

BucketCountByEncryptionType::BucketCountByEncryptionType(JsonView jsonValue) : 
    m_kmsManaged(0),
    m_kmsManagedHasBeenSet(false),
    m_s3Managed(0),
    m_s3ManagedHasBeenSet(false),
    m_unencrypted(0),
    m_unencryptedHasBeenSet(false)
{
  *this = jsonValue;
}

BucketCountByEncryptionType& BucketCountByEncryptionType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsManaged"))
  {
    m_kmsManaged = jsonValue.GetInt64("kmsManaged");

    m_kmsManagedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Managed"))
  {
    m_s3Managed = jsonValue.GetInt64("s3Managed");

    m_s3ManagedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unencrypted"))
  {
    m_unencrypted = jsonValue.GetInt64("unencrypted");

    m_unencryptedHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketCountByEncryptionType::Jsonize() const
{
  JsonValue payload;

  if(m_kmsManagedHasBeenSet)
  {
   payload.WithInt64("kmsManaged", m_kmsManaged);

  }

  if(m_s3ManagedHasBeenSet)
  {
   payload.WithInt64("s3Managed", m_s3Managed);

  }

  if(m_unencryptedHasBeenSet)
  {
   payload.WithInt64("unencrypted", m_unencrypted);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
