/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/UpdateAlarmModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAlarmModelRequest::UpdateAlarmModelRequest() : 
    m_alarmModelNameHasBeenSet(false),
    m_alarmModelDescriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_severity(0),
    m_severityHasBeenSet(false),
    m_alarmRuleHasBeenSet(false),
    m_alarmNotificationHasBeenSet(false),
    m_alarmEventActionsHasBeenSet(false),
    m_alarmCapabilitiesHasBeenSet(false)
{
}

Aws::String UpdateAlarmModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_alarmModelDescriptionHasBeenSet)
  {
   payload.WithString("alarmModelDescription", m_alarmModelDescription);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

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




