/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/CreateRoomRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRoomRequest::CreateRoomRequest() : 
    m_roomNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_profileArnHasBeenSet(false),
    m_providerCalendarIdHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateRoomRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roomNameHasBeenSet)
  {
   payload.WithString("RoomName", m_roomName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_profileArnHasBeenSet)
  {
   payload.WithString("ProfileArn", m_profileArn);

  }

  if(m_providerCalendarIdHasBeenSet)
  {
   payload.WithString("ProviderCalendarId", m_providerCalendarId);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

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

Aws::Http::HeaderValueCollection CreateRoomRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.CreateRoom"));
  return headers;

}




