/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/CreateFirewallRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFirewallRequest::CreateFirewallRequest() : 
    m_firewallNameHasBeenSet(false),
    m_firewallPolicyArnHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetMappingsHasBeenSet(false),
    m_deleteProtection(false),
    m_deleteProtectionHasBeenSet(false),
    m_subnetChangeProtection(false),
    m_subnetChangeProtectionHasBeenSet(false),
    m_firewallPolicyChangeProtection(false),
    m_firewallPolicyChangeProtectionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false)
{
}

Aws::String CreateFirewallRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallNameHasBeenSet)
  {
   payload.WithString("FirewallName", m_firewallName);

  }

  if(m_firewallPolicyArnHasBeenSet)
  {
   payload.WithString("FirewallPolicyArn", m_firewallPolicyArn);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

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

  if(m_deleteProtectionHasBeenSet)
  {
   payload.WithBool("DeleteProtection", m_deleteProtection);

  }

  if(m_subnetChangeProtectionHasBeenSet)
  {
   payload.WithBool("SubnetChangeProtection", m_subnetChangeProtection);

  }

  if(m_firewallPolicyChangeProtectionHasBeenSet)
  {
   payload.WithBool("FirewallPolicyChangeProtection", m_firewallPolicyChangeProtection);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFirewallRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.CreateFirewall"));
  return headers;

}




