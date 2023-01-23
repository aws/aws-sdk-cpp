/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ContainerDependency.h>
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

ContainerDependency::ContainerDependency() : 
    m_containerNameHasBeenSet(false),
    m_condition(ContainerCondition::NOT_SET),
    m_conditionHasBeenSet(false)
{
}

ContainerDependency::ContainerDependency(JsonView jsonValue) : 
    m_containerNameHasBeenSet(false),
    m_condition(ContainerCondition::NOT_SET),
    m_conditionHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerDependency& ContainerDependency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerName"))
  {
    m_containerName = jsonValue.GetString("containerName");

    m_containerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("condition"))
  {
    m_condition = ContainerConditionMapper::GetContainerConditionForName(jsonValue.GetString("condition"));

    m_conditionHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerDependency::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("containerName", m_containerName);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("condition", ContainerConditionMapper::GetNameForContainerCondition(m_condition));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
