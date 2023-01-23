/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/RegisterJobDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterJobDefinitionRequest::RegisterJobDefinitionRequest() : 
    m_jobDefinitionNameHasBeenSet(false),
    m_type(JobDefinitionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_schedulingPriority(0),
    m_schedulingPriorityHasBeenSet(false),
    m_containerPropertiesHasBeenSet(false),
    m_nodePropertiesHasBeenSet(false),
    m_retryStrategyHasBeenSet(false),
    m_propagateTags(false),
    m_propagateTagsHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_platformCapabilitiesHasBeenSet(false),
    m_eksPropertiesHasBeenSet(false)
{
}

Aws::String RegisterJobDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobDefinitionNameHasBeenSet)
  {
   payload.WithString("jobDefinitionName", m_jobDefinitionName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", JobDefinitionTypeMapper::GetNameForJobDefinitionType(m_type));
  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_schedulingPriorityHasBeenSet)
  {
   payload.WithInteger("schedulingPriority", m_schedulingPriority);

  }

  if(m_containerPropertiesHasBeenSet)
  {
   payload.WithObject("containerProperties", m_containerProperties.Jsonize());

  }

  if(m_nodePropertiesHasBeenSet)
  {
   payload.WithObject("nodeProperties", m_nodeProperties.Jsonize());

  }

  if(m_retryStrategyHasBeenSet)
  {
   payload.WithObject("retryStrategy", m_retryStrategy.Jsonize());

  }

  if(m_propagateTagsHasBeenSet)
  {
   payload.WithBool("propagateTags", m_propagateTags);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithObject("timeout", m_timeout.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_platformCapabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> platformCapabilitiesJsonList(m_platformCapabilities.size());
   for(unsigned platformCapabilitiesIndex = 0; platformCapabilitiesIndex < platformCapabilitiesJsonList.GetLength(); ++platformCapabilitiesIndex)
   {
     platformCapabilitiesJsonList[platformCapabilitiesIndex].AsString(PlatformCapabilityMapper::GetNameForPlatformCapability(m_platformCapabilities[platformCapabilitiesIndex]));
   }
   payload.WithArray("platformCapabilities", std::move(platformCapabilitiesJsonList));

  }

  if(m_eksPropertiesHasBeenSet)
  {
   payload.WithObject("eksProperties", m_eksProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}




