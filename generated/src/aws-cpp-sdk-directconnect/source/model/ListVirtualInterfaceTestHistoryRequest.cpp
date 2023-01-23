/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/ListVirtualInterfaceTestHistoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListVirtualInterfaceTestHistoryRequest::ListVirtualInterfaceTestHistoryRequest() : 
    m_testIdHasBeenSet(false),
    m_virtualInterfaceIdHasBeenSet(false),
    m_bgpPeersHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListVirtualInterfaceTestHistoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_testIdHasBeenSet)
  {
   payload.WithString("testId", m_testId);

  }

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListVirtualInterfaceTestHistoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.ListVirtualInterfaceTestHistory"));
  return headers;

}




