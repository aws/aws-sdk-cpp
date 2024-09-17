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

CreateContainerGroupDefinitionRequest::CreateContainerGroupDefinitionRequest() : 
    m_nameHasBeenSet(false),
    m_schedulingStrategy(ContainerSchedulingStrategy::NOT_SET),
    m_schedulingStrategyHasBeenSet(false),
    m_totalMemoryLimit(0),
    m_totalMemoryLimitHasBeenSet(false),
    m_totalCpuLimit(0),
    m_totalCpuLimitHasBeenSet(false),
    m_containerDefinitionsHasBeenSet(false),
    m_operatingSystem(ContainerOperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateContainerGroupDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", ContainerOperatingSystemMapper::GetNameForContainerOperatingSystem(m_operatingSystem));
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




