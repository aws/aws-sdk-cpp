/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/SubmitJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SubmitJobRequest::SubmitJobRequest() : 
    m_jobNameHasBeenSet(false),
    m_jobQueueHasBeenSet(false),
    m_shareIdentifierHasBeenSet(false),
    m_schedulingPriorityOverride(0),
    m_schedulingPriorityOverrideHasBeenSet(false),
    m_arrayPropertiesHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_jobDefinitionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_containerOverridesHasBeenSet(false),
    m_nodeOverridesHasBeenSet(false),
    m_retryStrategyHasBeenSet(false),
    m_propagateTags(false),
    m_propagateTagsHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_eksPropertiesOverrideHasBeenSet(false)
{
}

Aws::String SubmitJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_jobQueueHasBeenSet)
  {
   payload.WithString("jobQueue", m_jobQueue);

  }

  if(m_shareIdentifierHasBeenSet)
  {
   payload.WithString("shareIdentifier", m_shareIdentifier);

  }

  if(m_schedulingPriorityOverrideHasBeenSet)
  {
   payload.WithInteger("schedulingPriorityOverride", m_schedulingPriorityOverride);

  }

  if(m_arrayPropertiesHasBeenSet)
  {
   payload.WithObject("arrayProperties", m_arrayProperties.Jsonize());

  }

  if(m_dependsOnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
   for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
   {
     dependsOnJsonList[dependsOnIndex].AsObject(m_dependsOn[dependsOnIndex].Jsonize());
   }
   payload.WithArray("dependsOn", std::move(dependsOnJsonList));

  }

  if(m_jobDefinitionHasBeenSet)
  {
   payload.WithString("jobDefinition", m_jobDefinition);

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

  if(m_containerOverridesHasBeenSet)
  {
   payload.WithObject("containerOverrides", m_containerOverrides.Jsonize());

  }

  if(m_nodeOverridesHasBeenSet)
  {
   payload.WithObject("nodeOverrides", m_nodeOverrides.Jsonize());

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

  if(m_eksPropertiesOverrideHasBeenSet)
  {
   payload.WithObject("eksPropertiesOverride", m_eksPropertiesOverride.Jsonize());

  }

  return payload.View().WriteReadable();
}




