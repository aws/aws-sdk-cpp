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
   Array<JsonValue> bgpPeersJsonList(m_bgpPeers.size());
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




