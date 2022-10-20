/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/BatchUpdateAttendeeCapabilitiesExceptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMeetings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdateAttendeeCapabilitiesExceptRequest::BatchUpdateAttendeeCapabilitiesExceptRequest() : 
    m_meetingIdHasBeenSet(false),
    m_excludedAttendeeIdsHasBeenSet(false),
    m_capabilitiesHasBeenSet(false)
{
}

Aws::String BatchUpdateAttendeeCapabilitiesExceptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_excludedAttendeeIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludedAttendeeIdsJsonList(m_excludedAttendeeIds.size());
   for(unsigned excludedAttendeeIdsIndex = 0; excludedAttendeeIdsIndex < excludedAttendeeIdsJsonList.GetLength(); ++excludedAttendeeIdsIndex)
   {
     excludedAttendeeIdsJsonList[excludedAttendeeIdsIndex].AsObject(m_excludedAttendeeIds[excludedAttendeeIdsIndex].Jsonize());
   }
   payload.WithArray("ExcludedAttendeeIds", std::move(excludedAttendeeIdsJsonList));

  }

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithObject("Capabilities", m_capabilities.Jsonize());

  }

  return payload.View().WriteReadable();
}




