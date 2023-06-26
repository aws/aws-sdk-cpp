/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CacheBehavior.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

CacheBehavior::CacheBehavior() : 
    m_behavior(BehaviorEnum::NOT_SET),
    m_behaviorHasBeenSet(false)
{
}

CacheBehavior::CacheBehavior(JsonView jsonValue) : 
    m_behavior(BehaviorEnum::NOT_SET),
    m_behaviorHasBeenSet(false)
{
  *this = jsonValue;
}

CacheBehavior& CacheBehavior::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("behavior"))
  {
    m_behavior = BehaviorEnumMapper::GetBehaviorEnumForName(jsonValue.GetString("behavior"));

    m_behaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue CacheBehavior::Jsonize() const
{
  JsonValue payload;

  if(m_behaviorHasBeenSet)
  {
   payload.WithString("behavior", BehaviorEnumMapper::GetNameForBehaviorEnum(m_behavior));
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
