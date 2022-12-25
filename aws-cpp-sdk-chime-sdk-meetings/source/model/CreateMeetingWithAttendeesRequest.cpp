/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/CreateMeetingWithAttendeesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMeetings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMeetingWithAttendeesRequest::CreateMeetingWithAttendeesRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_mediaRegionHasBeenSet(false),
    m_meetingHostIdHasBeenSet(false),
    m_externalMeetingIdHasBeenSet(false),
    m_meetingFeaturesHasBeenSet(false),
    m_notificationsConfigurationHasBeenSet(false),
    m_attendeesHasBeenSet(false),
    m_primaryMeetingIdHasBeenSet(false),
    m_tenantIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateMeetingWithAttendeesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_mediaRegionHasBeenSet)
  {
   payload.WithString("MediaRegion", m_mediaRegion);

  }

  if(m_meetingHostIdHasBeenSet)
  {
   payload.WithString("MeetingHostId", m_meetingHostId);

  }

  if(m_externalMeetingIdHasBeenSet)
  {
   payload.WithString("ExternalMeetingId", m_externalMeetingId);

  }

  if(m_meetingFeaturesHasBeenSet)
  {
   payload.WithObject("MeetingFeatures", m_meetingFeatures.Jsonize());

  }

  if(m_notificationsConfigurationHasBeenSet)
  {
   payload.WithObject("NotificationsConfiguration", m_notificationsConfiguration.Jsonize());

  }

  if(m_attendeesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attendeesJsonList(m_attendees.size());
   for(unsigned attendeesIndex = 0; attendeesIndex < attendeesJsonList.GetLength(); ++attendeesIndex)
   {
     attendeesJsonList[attendeesIndex].AsObject(m_attendees[attendeesIndex].Jsonize());
   }
   payload.WithArray("Attendees", std::move(attendeesJsonList));

  }

  if(m_primaryMeetingIdHasBeenSet)
  {
   payload.WithString("PrimaryMeetingId", m_primaryMeetingId);

  }

  if(m_tenantIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tenantIdsJsonList(m_tenantIds.size());
   for(unsigned tenantIdsIndex = 0; tenantIdsIndex < tenantIdsJsonList.GetLength(); ++tenantIdsIndex)
   {
     tenantIdsJsonList[tenantIdsIndex].AsString(m_tenantIds[tenantIdsIndex]);
   }
   payload.WithArray("TenantIds", std::move(tenantIdsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




