/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/UpdateDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDatasetRequest::UpdateDatasetRequest() : 
    m_datasetNameHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_contentDeliveryRulesHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_versioningConfigurationHasBeenSet(false),
    m_lateDataRulesHasBeenSet(false)
{
}

Aws::String UpdateDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("actions", std::move(actionsJsonList));

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

  if(m_contentDeliveryRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentDeliveryRulesJsonList(m_contentDeliveryRules.size());
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

  if(m_lateDataRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lateDataRulesJsonList(m_lateDataRules.size());
   for(unsigned lateDataRulesIndex = 0; lateDataRulesIndex < lateDataRulesJsonList.GetLength(); ++lateDataRulesIndex)
   {
     lateDataRulesJsonList[lateDataRulesIndex].AsObject(m_lateDataRules[lateDataRulesIndex].Jsonize());
   }
   payload.WithArray("lateDataRules", std::move(lateDataRulesJsonList));

  }

  return payload.View().WriteReadable();
}




