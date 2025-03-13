/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreateContainerGroupDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateContainerGroupDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", ContainerOperatingSystemMapper::GetNameForContainerOperatingSystem(m_operatingSystem));
  }

  if(m_versionDescriptionHasBeenSet)
  {
   payload.WithString("VersionDescription", m_versionDescription);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateContainerGroupDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.CreateContainerGroupDefinition"));
  return headers;

}




