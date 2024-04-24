/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerGroupsConfiguration.h>
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

ContainerGroupsConfiguration::ContainerGroupsConfiguration() : 
    m_containerGroupDefinitionNamesHasBeenSet(false),
    m_connectionPortRangeHasBeenSet(false),
    m_desiredReplicaContainerGroupsPerInstance(0),
    m_desiredReplicaContainerGroupsPerInstanceHasBeenSet(false)
{
}

ContainerGroupsConfiguration::ContainerGroupsConfiguration(JsonView jsonValue) : 
    m_containerGroupDefinitionNamesHasBeenSet(false),
    m_connectionPortRangeHasBeenSet(false),
    m_desiredReplicaContainerGroupsPerInstance(0),
    m_desiredReplicaContainerGroupsPerInstanceHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerGroupsConfiguration& ContainerGroupsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerGroupDefinitionNames"))
  {
    Aws::Utils::Array<JsonView> containerGroupDefinitionNamesJsonList = jsonValue.GetArray("ContainerGroupDefinitionNames");
    for(unsigned containerGroupDefinitionNamesIndex = 0; containerGroupDefinitionNamesIndex < containerGroupDefinitionNamesJsonList.GetLength(); ++containerGroupDefinitionNamesIndex)
    {
      m_containerGroupDefinitionNames.push_back(containerGroupDefinitionNamesJsonList[containerGroupDefinitionNamesIndex].AsString());
    }
    m_containerGroupDefinitionNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionPortRange"))
  {
    m_connectionPortRange = jsonValue.GetObject("ConnectionPortRange");

    m_connectionPortRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DesiredReplicaContainerGroupsPerInstance"))
  {
    m_desiredReplicaContainerGroupsPerInstance = jsonValue.GetInteger("DesiredReplicaContainerGroupsPerInstance");

    m_desiredReplicaContainerGroupsPerInstanceHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerGroupsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_containerGroupDefinitionNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerGroupDefinitionNamesJsonList(m_containerGroupDefinitionNames.size());
   for(unsigned containerGroupDefinitionNamesIndex = 0; containerGroupDefinitionNamesIndex < containerGroupDefinitionNamesJsonList.GetLength(); ++containerGroupDefinitionNamesIndex)
   {
     containerGroupDefinitionNamesJsonList[containerGroupDefinitionNamesIndex].AsString(m_containerGroupDefinitionNames[containerGroupDefinitionNamesIndex]);
   }
   payload.WithArray("ContainerGroupDefinitionNames", std::move(containerGroupDefinitionNamesJsonList));

  }

  if(m_connectionPortRangeHasBeenSet)
  {
   payload.WithObject("ConnectionPortRange", m_connectionPortRange.Jsonize());

  }

  if(m_desiredReplicaContainerGroupsPerInstanceHasBeenSet)
  {
   payload.WithInteger("DesiredReplicaContainerGroupsPerInstance", m_desiredReplicaContainerGroupsPerInstance);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
