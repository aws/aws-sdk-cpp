/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/UpdateExperimentTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateExperimentTemplateRequest::UpdateExperimentTemplateRequest() : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_stopConditionsHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_logConfigurationHasBeenSet(false)
{
}

Aws::String UpdateExperimentTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_stopConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stopConditionsJsonList(m_stopConditions.size());
   for(unsigned stopConditionsIndex = 0; stopConditionsIndex < stopConditionsJsonList.GetLength(); ++stopConditionsIndex)
   {
     stopConditionsJsonList[stopConditionsIndex].AsObject(m_stopConditions[stopConditionsIndex].Jsonize());
   }
   payload.WithArray("stopConditions", std::move(stopConditionsJsonList));

  }

  if(m_targetsHasBeenSet)
  {
   JsonValue targetsJsonMap;
   for(auto& targetsItem : m_targets)
   {
     targetsJsonMap.WithObject(targetsItem.first, targetsItem.second.Jsonize());
   }
   payload.WithObject("targets", std::move(targetsJsonMap));

  }

  if(m_actionsHasBeenSet)
  {
   JsonValue actionsJsonMap;
   for(auto& actionsItem : m_actions)
   {
     actionsJsonMap.WithObject(actionsItem.first, actionsItem.second.Jsonize());
   }
   payload.WithObject("actions", std::move(actionsJsonMap));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("logConfiguration", m_logConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




