/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/CreateExperimentTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateExperimentTemplateRequest::CreateExperimentTemplateRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_stopConditionsHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateExperimentTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_stopConditionsHasBeenSet)
  {
   Array<JsonValue> stopConditionsJsonList(m_stopConditions.size());
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




