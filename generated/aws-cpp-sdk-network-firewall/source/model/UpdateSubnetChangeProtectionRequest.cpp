/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/UpdateSubnetChangeProtectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSubnetChangeProtectionRequest::UpdateSubnetChangeProtectionRequest() : 
    m_updateTokenHasBeenSet(false),
    m_firewallArnHasBeenSet(false),
    m_firewallNameHasBeenSet(false),
    m_subnetChangeProtection(false),
    m_subnetChangeProtectionHasBeenSet(false)
{
}

Aws::String UpdateSubnetChangeProtectionRequest::SerializePayload() const
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

  if(m_subnetChangeProtectionHasBeenSet)
  {
   payload.WithBool("SubnetChangeProtection", m_subnetChangeProtection);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSubnetChangeProtectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.UpdateSubnetChangeProtection"));
  return headers;

}




