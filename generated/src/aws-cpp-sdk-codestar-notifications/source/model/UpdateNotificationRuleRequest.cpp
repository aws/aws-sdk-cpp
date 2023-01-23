/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/UpdateNotificationRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStarNotifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNotificationRuleRequest::UpdateNotificationRuleRequest() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(NotificationRuleStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_eventTypeIdsHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_detailType(DetailType::NOT_SET),
    m_detailTypeHasBeenSet(false)
{
}

Aws::String UpdateNotificationRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", NotificationRuleStatusMapper::GetNameForNotificationRuleStatus(m_status));
  }

  if(m_eventTypeIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventTypeIdsJsonList(m_eventTypeIds.size());
   for(unsigned eventTypeIdsIndex = 0; eventTypeIdsIndex < eventTypeIdsJsonList.GetLength(); ++eventTypeIdsIndex)
   {
     eventTypeIdsJsonList[eventTypeIdsIndex].AsString(m_eventTypeIds[eventTypeIdsIndex]);
   }
   payload.WithArray("EventTypeIds", std::move(eventTypeIdsJsonList));

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_detailTypeHasBeenSet)
  {
   payload.WithString("DetailType", DetailTypeMapper::GetNameForDetailType(m_detailType));
  }

  return payload.View().WriteReadable();
}




