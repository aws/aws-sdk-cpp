/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/CreateAlarmModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAlarmModelRequest::CreateAlarmModelRequest() : 
    m_alarmModelNameHasBeenSet(false),
    m_alarmModelDescriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_severity(0),
    m_severityHasBeenSet(false),
    m_alarmRuleHasBeenSet(false),
    m_alarmNotificationHasBeenSet(false),
    m_alarmEventActionsHasBeenSet(false),
    m_alarmCapabilitiesHasBeenSet(false)
{
}

Aws::String CreateAlarmModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_alarmModelNameHasBeenSet)
  {
   payload.WithString("alarmModelName", m_alarmModelName);

  }

  if(m_alarmModelDescriptionHasBeenSet)
  {
   payload.WithString("alarmModelDescription", m_alarmModelDescription);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithInteger("severity", m_severity);

  }

  if(m_alarmRuleHasBeenSet)
  {
   payload.WithObject("alarmRule", m_alarmRule.Jsonize());

  }

  if(m_alarmNotificationHasBeenSet)
  {
   payload.WithObject("alarmNotification", m_alarmNotification.Jsonize());

  }

  if(m_alarmEventActionsHasBeenSet)
  {
   payload.WithObject("alarmEventActions", m_alarmEventActions.Jsonize());

  }

  if(m_alarmCapabilitiesHasBeenSet)
  {
   payload.WithObject("alarmCapabilities", m_alarmCapabilities.Jsonize());

  }

  return payload.View().WriteReadable();
}




