/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/UpdateJobTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateJobTemplateRequest::UpdateJobTemplateRequest() : 
    m_accelerationSettingsHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hopDestinationsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_statusUpdateInterval(StatusUpdateInterval::NOT_SET),
    m_statusUpdateIntervalHasBeenSet(false)
{
}

Aws::String UpdateJobTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accelerationSettingsHasBeenSet)
  {
   payload.WithObject("accelerationSettings", m_accelerationSettings.Jsonize());

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", m_category);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_hopDestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hopDestinationsJsonList(m_hopDestinations.size());
   for(unsigned hopDestinationsIndex = 0; hopDestinationsIndex < hopDestinationsJsonList.GetLength(); ++hopDestinationsIndex)
   {
     hopDestinationsJsonList[hopDestinationsIndex].AsObject(m_hopDestinations[hopDestinationsIndex].Jsonize());
   }
   payload.WithArray("hopDestinations", std::move(hopDestinationsJsonList));

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_queueHasBeenSet)
  {
   payload.WithString("queue", m_queue);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("settings", m_settings.Jsonize());

  }

  if(m_statusUpdateIntervalHasBeenSet)
  {
   payload.WithString("statusUpdateInterval", StatusUpdateIntervalMapper::GetNameForStatusUpdateInterval(m_statusUpdateInterval));
  }

  return payload.View().WriteReadable();
}




