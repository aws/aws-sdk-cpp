/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/StartBgpFailoverTestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartBgpFailoverTestRequest::StartBgpFailoverTestRequest() : 
    m_virtualInterfaceIdHasBeenSet(false),
    m_bgpPeersHasBeenSet(false),
    m_testDurationInMinutes(0),
    m_testDurationInMinutesHasBeenSet(false)
{
}

Aws::String StartBgpFailoverTestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_virtualInterfaceIdHasBeenSet)
  {
   payload.WithString("virtualInterfaceId", m_virtualInterfaceId);

  }

  if(m_bgpPeersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bgpPeersJsonList(m_bgpPeers.size());
   for(unsigned bgpPeersIndex = 0; bgpPeersIndex < bgpPeersJsonList.GetLength(); ++bgpPeersIndex)
   {
     bgpPeersJsonList[bgpPeersIndex].AsString(m_bgpPeers[bgpPeersIndex]);
   }
   payload.WithArray("bgpPeers", std::move(bgpPeersJsonList));

  }

  if(m_testDurationInMinutesHasBeenSet)
  {
   payload.WithInteger("testDurationInMinutes", m_testDurationInMinutes);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartBgpFailoverTestRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.StartBgpFailoverTest"));
  return headers;

}




