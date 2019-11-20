/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/chime/model/CreateMeetingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMeetingRequest::CreateMeetingRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_meetingHostIdHasBeenSet(false),
    m_mediaRegionHasBeenSet(false),
    m_notificationsConfigurationHasBeenSet(false)
{
}

Aws::String CreateMeetingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_meetingHostIdHasBeenSet)
  {
   payload.WithString("MeetingHostId", m_meetingHostId);

  }

  if(m_mediaRegionHasBeenSet)
  {
   payload.WithString("MediaRegion", m_mediaRegion);

  }

  if(m_notificationsConfigurationHasBeenSet)
  {
   payload.WithObject("NotificationsConfiguration", m_notificationsConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




