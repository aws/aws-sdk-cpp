/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/AssociateSubnetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateSubnetsRequest::AssociateSubnetsRequest() : 
    m_updateTokenHasBeenSet(false),
    m_firewallArnHasBeenSet(false),
    m_firewallNameHasBeenSet(false),
    m_subnetMappingsHasBeenSet(false)
{
}

Aws::String AssociateSubnetsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updateTokenHasBeenSet)
  {
   payload.WithString("UpdateToken", m_updateToken);

  }

  if(m_firewallArnHasBeenSet)
  {
   payload.WithString("FirewallArn", m_firewallArn);

  }

  if(m_firewallNameHasBeenSet)
  {
   payload.WithString("FirewallName", m_firewallName);

  }

  if(m_subnetMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetMappingsJsonList(m_subnetMappings.size());
   for(unsigned subnetMappingsIndex = 0; subnetMappingsIndex < subnetMappingsJsonList.GetLength(); ++subnetMappingsIndex)
   {
     subnetMappingsJsonList[subnetMappingsIndex].AsObject(m_subnetMappings[subnetMappingsIndex].Jsonize());
   }
   payload.WithArray("SubnetMappings", std::move(subnetMappingsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateSubnetsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.AssociateSubnets"));
  return headers;

}




