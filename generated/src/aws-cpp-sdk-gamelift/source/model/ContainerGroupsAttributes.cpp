/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerGroupsAttributes.h>
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

ContainerGroupsAttributes::ContainerGroupsAttributes() : 
    m_containerGroupDefinitionPropertiesHasBeenSet(false),
    m_connectionPortRangeHasBeenSet(false),
    m_containerGroupsPerInstanceHasBeenSet(false)
{
}

ContainerGroupsAttributes::ContainerGroupsAttributes(JsonView jsonValue) : 
    m_containerGroupDefinitionPropertiesHasBeenSet(false),
    m_connectionPortRangeHasBeenSet(false),
    m_containerGroupsPerInstanceHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerGroupsAttributes& ContainerGroupsAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerGroupDefinitionProperties"))
  {
    Aws::Utils::Array<JsonView> containerGroupDefinitionPropertiesJsonList = jsonValue.GetArray("ContainerGroupDefinitionProperties");
    for(unsigned containerGroupDefinitionPropertiesIndex = 0; containerGroupDefinitionPropertiesIndex < containerGroupDefinitionPropertiesJsonList.GetLength(); ++containerGroupDefinitionPropertiesIndex)
    {
      m_containerGroupDefinitionProperties.push_back(containerGroupDefinitionPropertiesJsonList[containerGroupDefinitionPropertiesIndex].AsObject());
    }
    m_containerGroupDefinitionPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionPortRange"))
  {
    m_connectionPortRange = jsonValue.GetObject("ConnectionPortRange");

    m_connectionPortRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerGroupsPerInstance"))
  {
    m_containerGroupsPerInstance = jsonValue.GetObject("ContainerGroupsPerInstance");

    m_containerGroupsPerInstanceHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerGroupsAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_containerGroupDefinitionPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerGroupDefinitionPropertiesJsonList(m_containerGroupDefinitionProperties.size());
   for(unsigned containerGroupDefinitionPropertiesIndex = 0; containerGroupDefinitionPropertiesIndex < containerGroupDefinitionPropertiesJsonList.GetLength(); ++containerGroupDefinitionPropertiesIndex)
   {
     containerGroupDefinitionPropertiesJsonList[containerGroupDefinitionPropertiesIndex].AsObject(m_containerGroupDefinitionProperties[containerGroupDefinitionPropertiesIndex].Jsonize());
   }
   payload.WithArray("ContainerGroupDefinitionProperties", std::move(containerGroupDefinitionPropertiesJsonList));

  }

  if(m_connectionPortRangeHasBeenSet)
  {
   payload.WithObject("ConnectionPortRange", m_connectionPortRange.Jsonize());

  }

  if(m_containerGroupsPerInstanceHasBeenSet)
  {
   payload.WithObject("ContainerGroupsPerInstance", m_containerGroupsPerInstance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
