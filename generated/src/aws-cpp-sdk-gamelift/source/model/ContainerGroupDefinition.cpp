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

ContainerGroupDefinition::ContainerGroupDefinition(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ContainerGroupType"))
  {
    m_containerGroupType = ContainerGroupTypeMapper::GetContainerGroupTypeForName(jsonValue.GetString("ContainerGroupType"));
    m_containerGroupTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalMemoryLimitMebibytes"))
  {
    m_totalMemoryLimitMebibytes = jsonValue.GetInteger("TotalMemoryLimitMebibytes");
    m_totalMemoryLimitMebibytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalVcpuLimit"))
  {
    m_totalVcpuLimit = jsonValue.GetDouble("TotalVcpuLimit");
    m_totalVcpuLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GameServerContainerDefinition"))
  {
    m_gameServerContainerDefinition = jsonValue.GetObject("GameServerContainerDefinition");
    m_gameServerContainerDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportContainerDefinitions"))
  {
    Aws::Utils::Array<JsonView> supportContainerDefinitionsJsonList = jsonValue.GetArray("SupportContainerDefinitions");
    for(unsigned supportContainerDefinitionsIndex = 0; supportContainerDefinitionsIndex < supportContainerDefinitionsJsonList.GetLength(); ++supportContainerDefinitionsIndex)
    {
      m_supportContainerDefinitions.push_back(supportContainerDefinitionsJsonList[supportContainerDefinitionsIndex].AsObject());
    }
    m_supportContainerDefinitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInteger("VersionNumber");
    m_versionNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionDescription"))
  {
    m_versionDescription = jsonValue.GetString("VersionDescription");
    m_versionDescriptionHasBeenSet = true;
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

  if(m_containerGroupTypeHasBeenSet)
  {
   payload.WithString("ContainerGroupType", ContainerGroupTypeMapper::GetNameForContainerGroupType(m_containerGroupType));
  }

  if(m_totalMemoryLimitMebibytesHasBeenSet)
  {
   payload.WithInteger("TotalMemoryLimitMebibytes", m_totalMemoryLimitMebibytes);

  }

  if(m_totalVcpuLimitHasBeenSet)
  {
   payload.WithDouble("TotalVcpuLimit", m_totalVcpuLimit);

  }

  if(m_gameServerContainerDefinitionHasBeenSet)
  {
   payload.WithObject("GameServerContainerDefinition", m_gameServerContainerDefinition.Jsonize());

  }

  if(m_supportContainerDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportContainerDefinitionsJsonList(m_supportContainerDefinitions.size());
   for(unsigned supportContainerDefinitionsIndex = 0; supportContainerDefinitionsIndex < supportContainerDefinitionsJsonList.GetLength(); ++supportContainerDefinitionsIndex)
   {
     supportContainerDefinitionsJsonList[supportContainerDefinitionsIndex].AsObject(m_supportContainerDefinitions[supportContainerDefinitionsIndex].Jsonize());
   }
   payload.WithArray("SupportContainerDefinitions", std::move(supportContainerDefinitionsJsonList));

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInteger("VersionNumber", m_versionNumber);

  }

  if(m_versionDescriptionHasBeenSet)
  {
   payload.WithString("VersionDescription", m_versionDescription);

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
