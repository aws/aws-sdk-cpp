/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CreateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateJobRequest::CreateJobRequest() : 
    m_accelerationSettingsHasBeenSet(false),
    m_billingTagsSource(BillingTagsSource::NOT_SET),
    m_billingTagsSourceHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_hopDestinationsHasBeenSet(false),
    m_jobTemplateHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_simulateReservedQueue(SimulateReservedQueue::NOT_SET),
    m_simulateReservedQueueHasBeenSet(false),
    m_statusUpdateInterval(StatusUpdateInterval::NOT_SET),
    m_statusUpdateIntervalHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userMetadataHasBeenSet(false)
{
}

Aws::String CreateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accelerationSettingsHasBeenSet)
  {
   payload.WithObject("accelerationSettings", m_accelerationSettings.Jsonize());

  }

  if(m_billingTagsSourceHasBeenSet)
  {
   payload.WithString("billingTagsSource", BillingTagsSourceMapper::GetNameForBillingTagsSource(m_billingTagsSource));
  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

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

  if(m_jobTemplateHasBeenSet)
  {
   payload.WithString("jobTemplate", m_jobTemplate);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_queueHasBeenSet)
  {
   payload.WithString("queue", m_queue);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", m_role);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("settings", m_settings.Jsonize());

  }

  if(m_simulateReservedQueueHasBeenSet)
  {
   payload.WithString("simulateReservedQueue", SimulateReservedQueueMapper::GetNameForSimulateReservedQueue(m_simulateReservedQueue));
  }

  if(m_statusUpdateIntervalHasBeenSet)
  {
   payload.WithString("statusUpdateInterval", StatusUpdateIntervalMapper::GetNameForStatusUpdateInterval(m_statusUpdateInterval));
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

  if(m_userMetadataHasBeenSet)
  {
   JsonValue userMetadataJsonMap;
   for(auto& userMetadataItem : m_userMetadata)
   {
     userMetadataJsonMap.WithString(userMetadataItem.first, userMetadataItem.second);
   }
   payload.WithObject("userMetadata", std::move(userMetadataJsonMap));

  }

  return payload.View().WriteReadable();
}




