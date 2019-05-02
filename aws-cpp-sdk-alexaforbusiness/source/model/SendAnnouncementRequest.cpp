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
   Array<JsonValue> roomFiltersJsonList(m_roomFilters.size());
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




