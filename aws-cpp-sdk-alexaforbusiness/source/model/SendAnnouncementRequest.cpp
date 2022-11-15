/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SendAnnouncementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendAnnouncementRequest::SendAnnouncementRequest() : 
    m_roomFiltersHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_timeToLiveInSeconds(0),
    m_timeToLiveInSecondsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String SendAnnouncementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roomFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> roomFiltersJsonList(m_roomFilters.size());
   for(unsigned roomFiltersIndex = 0; roomFiltersIndex < roomFiltersJsonList.GetLength(); ++roomFiltersIndex)
   {
     roomFiltersJsonList[roomFiltersIndex].AsObject(m_roomFilters[roomFiltersIndex].Jsonize());
   }
   payload.WithArray("RoomFilters", std::move(roomFiltersJsonList));

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("Content", m_content.Jsonize());

  }

  if(m_timeToLiveInSecondsHasBeenSet)
  {
   payload.WithInteger("TimeToLiveInSeconds", m_timeToLiveInSeconds);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendAnnouncementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.SendAnnouncement"));
  return headers;

}




