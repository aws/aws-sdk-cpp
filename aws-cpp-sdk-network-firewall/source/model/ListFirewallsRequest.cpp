/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ListFirewallsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListFirewallsRequest::ListFirewallsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_vpcIdsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListFirewallsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_vpcIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcIdsJsonList(m_vpcIds.size());
   for(unsigned vpcIdsIndex = 0; vpcIdsIndex < vpcIdsJsonList.GetLength(); ++vpcIdsIndex)
   {
     vpcIdsJsonList[vpcIdsIndex].AsString(m_vpcIds[vpcIdsIndex]);
   }
   payload.WithArray("VpcIds", std::move(vpcIdsJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListFirewallsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.ListFirewalls"));
  return headers;

}




