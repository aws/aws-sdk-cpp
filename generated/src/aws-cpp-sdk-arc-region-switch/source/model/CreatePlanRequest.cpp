/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/CreatePlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ARCRegionswitch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_workflowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workflowsJsonList(m_workflows.size());
   for(unsigned workflowsIndex = 0; workflowsIndex < workflowsJsonList.GetLength(); ++workflowsIndex)
   {
     workflowsJsonList[workflowsIndex].AsObject(m_workflows[workflowsIndex].Jsonize());
   }
   payload.WithArray("workflows", std::move(workflowsJsonList));

  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("executionRole", m_executionRole);

  }

  if(m_recoveryTimeObjectiveMinutesHasBeenSet)
  {
   payload.WithInteger("recoveryTimeObjectiveMinutes", m_recoveryTimeObjectiveMinutes);

  }

  if(m_associatedAlarmsHasBeenSet)
  {
   JsonValue associatedAlarmsJsonMap;
   for(auto& associatedAlarmsItem : m_associatedAlarms)
   {
     associatedAlarmsJsonMap.WithObject(associatedAlarmsItem.first, associatedAlarmsItem.second.Jsonize());
   }
   payload.WithObject("associatedAlarms", std::move(associatedAlarmsJsonMap));

  }

  if(m_triggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggersJsonList(m_triggers.size());
   for(unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex)
   {
     triggersJsonList[triggersIndex].AsObject(m_triggers[triggersIndex].Jsonize());
   }
   payload.WithArray("triggers", std::move(triggersJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("regions", std::move(regionsJsonList));

  }

  if(m_recoveryApproachHasBeenSet)
  {
   payload.WithString("recoveryApproach", RecoveryApproachMapper::GetNameForRecoveryApproach(m_recoveryApproach));
  }

  if(m_primaryRegionHasBeenSet)
  {
   payload.WithString("primaryRegion", m_primaryRegion);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ArcRegionSwitch.CreatePlan"));
  return headers;

}



CreatePlanRequest::EndpointParameters CreatePlanRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("UseControlPlaneEndpoint"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


