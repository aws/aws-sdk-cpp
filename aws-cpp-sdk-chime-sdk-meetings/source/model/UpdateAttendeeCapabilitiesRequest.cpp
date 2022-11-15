/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/UpdateAttendeeCapabilitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMeetings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAttendeeCapabilitiesRequest::UpdateAttendeeCapabilitiesRequest() : 
    m_meetingIdHasBeenSet(false),
    m_attendeeIdHasBeenSet(false),
    m_capabilitiesHasBeenSet(false)
{
}

Aws::String UpdateAttendeeCapabilitiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithObject("Capabilities", m_capabilities.Jsonize());

  }

  return payload.View().WriteReadable();
}




