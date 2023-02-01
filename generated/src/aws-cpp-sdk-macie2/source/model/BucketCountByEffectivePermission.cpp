/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BucketCountByEffectivePermission.h>
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

BucketCountByEffectivePermission::BucketCountByEffectivePermission() : 
    m_publiclyAccessible(0),
    m_publiclyAccessibleHasBeenSet(false),
    m_publiclyReadable(0),
    m_publiclyReadableHasBeenSet(false),
    m_publiclyWritable(0),
    m_publiclyWritableHasBeenSet(false),
    m_unknown(0),
    m_unknownHasBeenSet(false)
{
}

BucketCountByEffectivePermission::BucketCountByEffectivePermission(JsonView jsonValue) : 
    m_publiclyAccessible(0),
    m_publiclyAccessibleHasBeenSet(false),
    m_publiclyReadable(0),
    m_publiclyReadableHasBeenSet(false),
    m_publiclyWritable(0),
    m_publiclyWritableHasBeenSet(false),
    m_unknown(0),
    m_unknownHasBeenSet(false)
{
  *this = jsonValue;
}

BucketCountByEffectivePermission& BucketCountByEffectivePermission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("publiclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetInt64("publiclyAccessible");

    m_publiclyAccessibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publiclyReadable"))
  {
    m_publiclyReadable = jsonValue.GetInt64("publiclyReadable");

    m_publiclyReadableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publiclyWritable"))
  {
    m_publiclyWritable = jsonValue.GetInt64("publiclyWritable");

    m_publiclyWritableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unknown"))
  {
    m_unknown = jsonValue.GetInt64("unknown");

    m_unknownHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketCountByEffectivePermission::Jsonize() const
{
  JsonValue payload;

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithInt64("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_publiclyReadableHasBeenSet)
  {
   payload.WithInt64("publiclyReadable", m_publiclyReadable);

  }

  if(m_publiclyWritableHasBeenSet)
  {
   payload.WithInt64("publiclyWritable", m_publiclyWritable);

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
