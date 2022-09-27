﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/CreateMeetingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMeetings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMeetingRequest::CreateMeetingRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_mediaRegionHasBeenSet(false),
    m_meetingHostIdHasBeenSet(false),
    m_externalMeetingIdHasBeenSet(false),
    m_notificationsConfigurationHasBeenSet(false),
    m_meetingFeaturesHasBeenSet(false),
    m_primaryMeetingIdHasBeenSet(false)
{
}

Aws::String CreateMeetingRequest::SerializePayload() const
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

  if(m_notificationsConfigurationHasBeenSet)
  {
   payload.WithObject("NotificationsConfiguration", m_notificationsConfiguration.Jsonize());

  }

  if(m_meetingFeaturesHasBeenSet)
  {
   payload.WithObject("MeetingFeatures", m_meetingFeatures.Jsonize());

  }

  if(m_primaryMeetingIdHasBeenSet)
  {
   payload.WithString("PrimaryMeetingId", m_primaryMeetingId);

  }

  return payload.View().WriteReadable();
}




