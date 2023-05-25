/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CrossChannelBehavior.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

CrossChannelBehavior::CrossChannelBehavior() : 
    m_behaviorType(BehaviorType::NOT_SET),
    m_behaviorTypeHasBeenSet(false)
{
}

CrossChannelBehavior::CrossChannelBehavior(JsonView jsonValue) : 
    m_behaviorType(BehaviorType::NOT_SET),
    m_behaviorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CrossChannelBehavior& CrossChannelBehavior::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BehaviorType"))
  {
    m_behaviorType = BehaviorTypeMapper::GetBehaviorTypeForName(jsonValue.GetString("BehaviorType"));

    m_behaviorTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CrossChannelBehavior::Jsonize() const
{
  JsonValue payload;

  if(m_behaviorTypeHasBeenSet)
  {
   payload.WithString("BehaviorType", BehaviorTypeMapper::GetNameForBehaviorType(m_behaviorType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
