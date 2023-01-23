/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/PlacementStrategy.h>
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

PlacementStrategy::PlacementStrategy() : 
    m_type(PlacementStrategyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_fieldHasBeenSet(false)
{
}

PlacementStrategy::PlacementStrategy(JsonView jsonValue) : 
    m_type(PlacementStrategyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_fieldHasBeenSet(false)
{
  *this = jsonValue;
}

PlacementStrategy& PlacementStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = PlacementStrategyTypeMapper::GetPlacementStrategyTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("field"))
  {
    m_field = jsonValue.GetString("field");

    m_fieldHasBeenSet = true;
  }

  return *this;
}

JsonValue PlacementStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PlacementStrategyTypeMapper::GetNameForPlacementStrategyType(m_type));
  }

  if(m_fieldHasBeenSet)
  {
   payload.WithString("field", m_field);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
