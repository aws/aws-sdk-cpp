/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerGroupDefinitionProperty.h>
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

ContainerGroupDefinitionProperty::ContainerGroupDefinitionProperty() : 
    m_schedulingStrategy(ContainerSchedulingStrategy::NOT_SET),
    m_schedulingStrategyHasBeenSet(false),
    m_containerGroupDefinitionNameHasBeenSet(false)
{
}

ContainerGroupDefinitionProperty::ContainerGroupDefinitionProperty(JsonView jsonValue) : 
    m_schedulingStrategy(ContainerSchedulingStrategy::NOT_SET),
    m_schedulingStrategyHasBeenSet(false),
    m_containerGroupDefinitionNameHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerGroupDefinitionProperty& ContainerGroupDefinitionProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchedulingStrategy"))
  {
    m_schedulingStrategy = ContainerSchedulingStrategyMapper::GetContainerSchedulingStrategyForName(jsonValue.GetString("SchedulingStrategy"));

    m_schedulingStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerGroupDefinitionName"))
  {
    m_containerGroupDefinitionName = jsonValue.GetString("ContainerGroupDefinitionName");

    m_containerGroupDefinitionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerGroupDefinitionProperty::Jsonize() const
{
  JsonValue payload;

  if(m_schedulingStrategyHasBeenSet)
  {
   payload.WithString("SchedulingStrategy", ContainerSchedulingStrategyMapper::GetNameForContainerSchedulingStrategy(m_schedulingStrategy));
  }

  if(m_containerGroupDefinitionNameHasBeenSet)
  {
   payload.WithString("ContainerGroupDefinitionName", m_containerGroupDefinitionName);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
