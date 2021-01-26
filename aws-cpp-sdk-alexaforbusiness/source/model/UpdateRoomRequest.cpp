/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/UpdateRoomRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRoomRequest::UpdateRoomRequest() : 
    m_roomArnHasBeenSet(false),
    m_roomNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_providerCalendarIdHasBeenSet(false),
    m_profileArnHasBeenSet(false)
{
}

Aws::String UpdateRoomRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roomArnHasBeenSet)
  {
   payload.WithString("RoomArn", m_roomArn);

  }

  if(m_roomNameHasBeenSet)
  {
   payload.WithString("RoomName", m_roomName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_providerCalendarIdHasBeenSet)
  {
   payload.WithString("ProviderCalendarId", m_providerCalendarId);

  }

  if(m_profileArnHasBeenSet)
  {
   payload.WithString("ProfileArn", m_profileArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRoomRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.UpdateRoom"));
  return headers;

}




