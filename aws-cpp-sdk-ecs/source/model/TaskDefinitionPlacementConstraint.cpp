/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TaskDefinitionPlacementConstraint.h>
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

TaskDefinitionPlacementConstraint::TaskDefinitionPlacementConstraint() : 
    m_type(TaskDefinitionPlacementConstraintType::NOT_SET),
    m_typeHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

TaskDefinitionPlacementConstraint::TaskDefinitionPlacementConstraint(JsonView jsonValue) : 
    m_type(TaskDefinitionPlacementConstraintType::NOT_SET),
    m_typeHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
  *this = jsonValue;
}

TaskDefinitionPlacementConstraint& TaskDefinitionPlacementConstraint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = TaskDefinitionPlacementConstraintTypeMapper::GetTaskDefinitionPlacementConstraintTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");

    m_expressionHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskDefinitionPlacementConstraint::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TaskDefinitionPlacementConstraintTypeMapper::GetNameForTaskDefinitionPlacementConstraintType(m_type));
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
