/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/BatchCreateAttendeeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchCreateAttendeeRequest::BatchCreateAttendeeRequest() : 
    m_meetingIdHasBeenSet(false),
    m_attendeesHasBeenSet(false)
{
}

Aws::String BatchCreateAttendeeRequest::SerializePayload() const
{
  JsonValue payload;

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




