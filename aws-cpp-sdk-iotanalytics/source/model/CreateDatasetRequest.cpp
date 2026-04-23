/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iotanalytics/model/CreateDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatasetRequest::CreateDatasetRequest() : 
    m_datasetNameHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_contentDeliveryRulesHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_versioningConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("datasetName", m_datasetName);

  }

  if(m_actionsHasBeenSet)
  {
   Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

  if(m_triggersHasBeenSet)
  {
   Array<JsonValue> triggersJsonList(m_triggers.size());
   for(unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex)
   {
     triggersJsonList[triggersIndex].AsObject(m_triggers[triggersIndex].Jsonize());
   }
   payload.WithArray("triggers", std::move(triggersJsonList));

  }

  if(m_contentDeliveryRulesHasBeenSet)
  {
   Array<JsonValue> contentDeliveryRulesJsonList(m_contentDeliveryRules.size());
   for(unsigned contentDeliveryRulesIndex = 0; contentDeliveryRulesIndex < contentDeliveryRulesJsonList.GetLength(); ++contentDeliveryRulesIndex)
   {
     contentDeliveryRulesJsonList[contentDeliveryRulesIndex].AsObject(m_contentDeliveryRules[contentDeliveryRulesIndex].Jsonize());
   }
   payload.WithArray("contentDeliveryRules", std::move(contentDeliveryRulesJsonList));

  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithObject("retentionPeriod", m_retentionPeriod.Jsonize());

  }

  if(m_versioningConfigurationHasBeenSet)
  {
   payload.WithObject("versioningConfiguration", m_versioningConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




