/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BucketCountPolicyAllowsUnencryptedObjectUploads.h>
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

BucketCountPolicyAllowsUnencryptedObjectUploads::BucketCountPolicyAllowsUnencryptedObjectUploads() : 
    m_allowsUnencryptedObjectUploads(0),
    m_allowsUnencryptedObjectUploadsHasBeenSet(false),
    m_deniesUnencryptedObjectUploads(0),
    m_deniesUnencryptedObjectUploadsHasBeenSet(false),
    m_unknown(0),
    m_unknownHasBeenSet(false)
{
}

BucketCountPolicyAllowsUnencryptedObjectUploads::BucketCountPolicyAllowsUnencryptedObjectUploads(JsonView jsonValue) : 
    m_allowsUnencryptedObjectUploads(0),
    m_allowsUnencryptedObjectUploadsHasBeenSet(false),
    m_deniesUnencryptedObjectUploads(0),
    m_deniesUnencryptedObjectUploadsHasBeenSet(false),
    m_unknown(0),
    m_unknownHasBeenSet(false)
{
  *this = jsonValue;
}

BucketCountPolicyAllowsUnencryptedObjectUploads& BucketCountPolicyAllowsUnencryptedObjectUploads::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowsUnencryptedObjectUploads"))
  {
    m_allowsUnencryptedObjectUploads = jsonValue.GetInt64("allowsUnencryptedObjectUploads");

    m_allowsUnencryptedObjectUploadsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deniesUnencryptedObjectUploads"))
  {
    m_deniesUnencryptedObjectUploads = jsonValue.GetInt64("deniesUnencryptedObjectUploads");

    m_deniesUnencryptedObjectUploadsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unknown"))
  {
    m_unknown = jsonValue.GetInt64("unknown");

    m_unknownHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketCountPolicyAllowsUnencryptedObjectUploads::Jsonize() const
{
  JsonValue payload;

  if(m_allowsUnencryptedObjectUploadsHasBeenSet)
  {
   payload.WithInt64("allowsUnencryptedObjectUploads", m_allowsUnencryptedObjectUploads);

  }

  if(m_deniesUnencryptedObjectUploadsHasBeenSet)
  {
   payload.WithInt64("deniesUnencryptedObjectUploads", m_deniesUnencryptedObjectUploads);

  }

  if(m_unknownHasBeenSet)
  {
   payload.WithInt64("unknown", m_unknown);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
