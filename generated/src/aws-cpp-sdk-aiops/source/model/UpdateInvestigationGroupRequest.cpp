/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/aiops/model/UpdateInvestigationGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AIOps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateInvestigationGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_tagKeyBoundariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagKeyBoundariesJsonList(m_tagKeyBoundaries.size());
   for(unsigned tagKeyBoundariesIndex = 0; tagKeyBoundariesIndex < tagKeyBoundariesJsonList.GetLength(); ++tagKeyBoundariesIndex)
   {
     tagKeyBoundariesJsonList[tagKeyBoundariesIndex].AsString(m_tagKeyBoundaries[tagKeyBoundariesIndex]);
   }
   payload.WithArray("tagKeyBoundaries", std::move(tagKeyBoundariesJsonList));

  }

  if(m_chatbotNotificationChannelHasBeenSet)
  {
   JsonValue chatbotNotificationChannelJsonMap;
   for(auto& chatbotNotificationChannelItem : m_chatbotNotificationChannel)
   {
     Aws::Utils::Array<JsonValue> chatConfigurationArnsJsonList(chatbotNotificationChannelItem.second.size());
     for(unsigned chatConfigurationArnsIndex = 0; chatConfigurationArnsIndex < chatConfigurationArnsJsonList.GetLength(); ++chatConfigurationArnsIndex)
     {
       chatConfigurationArnsJsonList[chatConfigurationArnsIndex].AsString(chatbotNotificationChannelItem.second[chatConfigurationArnsIndex]);
     }
     chatbotNotificationChannelJsonMap.WithArray(chatbotNotificationChannelItem.first, std::move(chatConfigurationArnsJsonList));
   }
   payload.WithObject("chatbotNotificationChannel", std::move(chatbotNotificationChannelJsonMap));

  }

  if(m_isCloudTrailEventHistoryEnabledHasBeenSet)
  {
   payload.WithBool("isCloudTrailEventHistoryEnabled", m_isCloudTrailEventHistoryEnabled);

  }

  if(m_crossAccountConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> crossAccountConfigurationsJsonList(m_crossAccountConfigurations.size());
   for(unsigned crossAccountConfigurationsIndex = 0; crossAccountConfigurationsIndex < crossAccountConfigurationsJsonList.GetLength(); ++crossAccountConfigurationsIndex)
   {
     crossAccountConfigurationsJsonList[crossAccountConfigurationsIndex].AsObject(m_crossAccountConfigurations[crossAccountConfigurationsIndex].Jsonize());
   }
   payload.WithArray("crossAccountConfigurations", std::move(crossAccountConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}




