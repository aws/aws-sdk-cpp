/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/InstanceDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

InstanceDefinition::InstanceDefinition() : 
    m_instanceType(GameServerGroupInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_weightedCapacityHasBeenSet(false)
{
}

InstanceDefinition::InstanceDefinition(JsonView jsonValue) : 
    m_instanceType(GameServerGroupInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_weightedCapacityHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceDefinition& InstanceDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = GameServerGroupInstanceTypeMapper::GetGameServerGroupInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WeightedCapacity"))
  {
    m_weightedCapacity = jsonValue.GetString("WeightedCapacity");

    m_weightedCapacityHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", GameServerGroupInstanceTypeMapper::GetNameForGameServerGroupInstanceType(m_instanceType));
  }

  if(m_weightedCapacityHasBeenSet)
  {
   payload.WithString("WeightedCapacity", m_weightedCapacity);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
