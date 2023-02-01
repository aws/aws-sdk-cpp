/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateMeetingWithAttendeesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMeetingWithAttendeesRequest::CreateMeetingWithAttendeesRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_externalMeetingIdHasBeenSet(false),
    m_meetingHostIdHasBeenSet(false),
    m_mediaRegionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_notificationsConfigurationHasBeenSet(false),
    m_attendeesHasBeenSet(false)
{
}

Aws::String CreateMeetingWithAttendeesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_externalMeetingIdHasBeenSet)
  {
   payload.WithString("ExternalMeetingId", m_externalMeetingId);

  }

  if(m_meetingHostIdHasBeenSet)
  {
   payload.WithString("MeetingHostId", m_meetingHostId);

  }

  if(m_mediaRegionHasBeenSet)
  {
   payload.WithString("MediaRegion", m_mediaRegion);

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

  return payload.View().WriteReadable();
}




