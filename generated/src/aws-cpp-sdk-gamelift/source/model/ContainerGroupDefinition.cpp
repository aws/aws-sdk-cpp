/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerGroupDefinition.h>
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

ContainerGroupDefinition::ContainerGroupDefinition() : 
    m_containerGroupDefinitionArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_operatingSystem(ContainerOperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_schedulingStrategy(ContainerSchedulingStrategy::NOT_SET),
    m_schedulingStrategyHasBeenSet(false),
    m_totalMemoryLimit(0),
    m_totalMemoryLimitHasBeenSet(false),
    m_totalCpuLimit(0),
    m_totalCpuLimitHasBeenSet(false),
    m_containerDefinitionsHasBeenSet(false),
    m_status(ContainerGroupDefinitionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

ContainerGroupDefinition::ContainerGroupDefinition(JsonView jsonValue) : 
    m_containerGroupDefinitionArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_operatingSystem(ContainerOperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_schedulingStrategy(ContainerSchedulingStrategy::NOT_SET),
    m_schedulingStrategyHasBeenSet(false),
    m_totalMemoryLimit(0),
    m_totalMemoryLimitHasBeenSet(false),
    m_totalCpuLimit(0),
    m_totalCpuLimitHasBeenSet(false),
    m_containerDefinitionsHasBeenSet(false),
    m_status(ContainerGroupDefinitionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerGroupDefinition& ContainerGroupDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerGroupDefinitionArn"))
  {
    m_containerGroupDefinitionArn = jsonValue.GetString("ContainerGroupDefinitionArn");

    m_containerGroupDefinitionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = ContainerOperatingSystemMapper::GetContainerOperatingSystemForName(jsonValue.GetString("OperatingSystem"));

    m_operatingSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchedulingStrategy"))
  {
    m_schedulingStrategy = ContainerSchedulingStrategyMapper::GetContainerSchedulingStrategyForName(jsonValue.GetString("SchedulingStrategy"));

    m_schedulingStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalMemoryLimit"))
  {
    m_totalMemoryLimit = jsonValue.GetInteger("TotalMemoryLimit");

    m_totalMemoryLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCpuLimit"))
  {
    m_totalCpuLimit = jsonValue.GetInteger("TotalCpuLimit");

    m_totalCpuLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerDefinitions"))
  {
    Aws::Utils::Array<JsonView> containerDefinitionsJsonList = jsonValue.GetArray("ContainerDefinitions");
    for(unsigned containerDefinitionsIndex = 0; containerDefinitionsIndex < containerDefinitionsJsonList.GetLength(); ++containerDefinitionsIndex)
    {
      m_containerDefinitions.push_back(containerDefinitionsJsonList[containerDefinitionsIndex].AsObject());
    }
    m_containerDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ContainerGroupDefinitionStatusMapper::GetContainerGroupDefinitionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

    m_statusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerGroupDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_containerGroupDefinitionArnHasBeenSet)
  {
   payload.WithString("ContainerGroupDefinitionArn", m_containerGroupDefinitionArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", ContainerOperatingSystemMapper::GetNameForContainerOperatingSystem(m_operatingSystem));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_schedulingStrategyHasBeenSet)
  {
   payload.WithString("SchedulingStrategy", ContainerSchedulingStrategyMapper::GetNameForContainerSchedulingStrategy(m_schedulingStrategy));
  }

  if(m_totalMemoryLimitHasBeenSet)
  {
   payload.WithInteger("TotalMemoryLimit", m_totalMemoryLimit);

  }

  if(m_totalCpuLimitHasBeenSet)
  {
   payload.WithInteger("TotalCpuLimit", m_totalCpuLimit);

  }

  if(m_containerDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerDefinitionsJsonList(m_containerDefinitions.size());
   for(unsigned containerDefinitionsIndex = 0; containerDefinitionsIndex < containerDefinitionsJsonList.GetLength(); ++containerDefinitionsIndex)
   {
     containerDefinitionsJsonList[containerDefinitionsIndex].AsObject(m_containerDefinitions[containerDefinitionsIndex].Jsonize());
   }
   payload.WithArray("ContainerDefinitions", std::move(containerDefinitionsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ContainerGroupDefinitionStatusMapper::GetNameForContainerGroupDefinitionStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
