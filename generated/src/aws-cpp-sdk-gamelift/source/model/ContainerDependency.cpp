/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerDependency.h>
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

ContainerDependency::ContainerDependency() : 
    m_containerNameHasBeenSet(false),
    m_condition(ContainerDependencyCondition::NOT_SET),
    m_conditionHasBeenSet(false)
{
}

ContainerDependency::ContainerDependency(JsonView jsonValue) : 
    m_containerNameHasBeenSet(false),
    m_condition(ContainerDependencyCondition::NOT_SET),
    m_conditionHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerDependency& ContainerDependency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerName"))
  {
    m_containerName = jsonValue.GetString("ContainerName");

    m_containerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = ContainerDependencyConditionMapper::GetContainerDependencyConditionForName(jsonValue.GetString("Condition"));

    m_conditionHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerDependency::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("ContainerName", m_containerName);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("Condition", ContainerDependencyConditionMapper::GetNameForContainerDependencyCondition(m_condition));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
