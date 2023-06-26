/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

CapacityProviderStrategyItem::CapacityProviderStrategyItem() : 
    m_capacityProviderHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false),
    m_base(0),
    m_baseHasBeenSet(false)
{
}

CapacityProviderStrategyItem::CapacityProviderStrategyItem(JsonView jsonValue) : 
    m_capacityProviderHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false),
    m_base(0),
    m_baseHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityProviderStrategyItem& CapacityProviderStrategyItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("capacityProvider"))
  {
    m_capacityProvider = jsonValue.GetString("capacityProvider");

    m_capacityProviderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("weight"))
  {
    m_weight = jsonValue.GetInteger("weight");

    m_weightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("base"))
  {
    m_base = jsonValue.GetInteger("base");

    m_baseHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityProviderStrategyItem::Jsonize() const
{
  JsonValue payload;

  if(m_capacityProviderHasBeenSet)
  {
   payload.WithString("capacityProvider", m_capacityProvider);

  }

  if(m_weightHasBeenSet)
  {
   payload.WithInteger("weight", m_weight);

  }

  if(m_baseHasBeenSet)
  {
   payload.WithInteger("base", m_base);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
