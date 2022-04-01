/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CacheBehaviorPerPath.h>
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

CacheBehaviorPerPath::CacheBehaviorPerPath() : 
    m_pathHasBeenSet(false),
    m_behavior(BehaviorEnum::NOT_SET),
    m_behaviorHasBeenSet(false)
{
}

CacheBehaviorPerPath::CacheBehaviorPerPath(JsonView jsonValue) : 
    m_pathHasBeenSet(false),
    m_behavior(BehaviorEnum::NOT_SET),
    m_behaviorHasBeenSet(false)
{
  *this = jsonValue;
}

CacheBehaviorPerPath& CacheBehaviorPerPath::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("behavior"))
  {
    m_behavior = BehaviorEnumMapper::GetBehaviorEnumForName(jsonValue.GetString("behavior"));

    m_behaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue CacheBehaviorPerPath::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_behaviorHasBeenSet)
  {
   payload.WithString("behavior", BehaviorEnumMapper::GetNameForBehaviorEnum(m_behavior));
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
