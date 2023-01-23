﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/PlacementConstraint.h>
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

PlacementConstraint::PlacementConstraint() : 
    m_type(PlacementConstraintType::NOT_SET),
    m_typeHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

PlacementConstraint::PlacementConstraint(JsonView jsonValue) : 
    m_type(PlacementConstraintType::NOT_SET),
    m_typeHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
  *this = jsonValue;
}

PlacementConstraint& PlacementConstraint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = PlacementConstraintTypeMapper::GetPlacementConstraintTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");

    m_expressionHasBeenSet = true;
  }

  return *this;
}

JsonValue PlacementConstraint::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PlacementConstraintTypeMapper::GetNameForPlacementConstraintType(m_type));
  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
