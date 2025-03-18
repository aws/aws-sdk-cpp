/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BucketCountBySharedAccessType.h>
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

BucketCountBySharedAccessType::BucketCountBySharedAccessType(JsonView jsonValue)
{
  *this = jsonValue;
}

BucketCountBySharedAccessType& BucketCountBySharedAccessType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("external"))
  {
    m_external = jsonValue.GetInt64("external");
    m_externalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("internal"))
  {
    m_internal = jsonValue.GetInt64("internal");
    m_internalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notShared"))
  {
    m_notShared = jsonValue.GetInt64("notShared");
    m_notSharedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unknown"))
  {
    m_unknown = jsonValue.GetInt64("unknown");
    m_unknownHasBeenSet = true;
  }
  return *this;
}

JsonValue BucketCountBySharedAccessType::Jsonize() const
{
  JsonValue payload;

  if(m_externalHasBeenSet)
  {
   payload.WithInt64("external", m_external);

  }

  if(m_internalHasBeenSet)
  {
   payload.WithInt64("internal", m_internal);

  }

  if(m_notSharedHasBeenSet)
  {
   payload.WithInt64("notShared", m_notShared);

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
