/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/CreateLocationSmbRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateLocationSmbRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

  }

  if(m_serverHostnameHasBeenSet)
  {
   payload.WithString("ServerHostname", m_serverHostname);

  }

  if(m_userHasBeenSet)
  {
   payload.WithString("User", m_user);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_agentArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentArnsJsonList(m_agentArns.size());
   for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
   {
     agentArnsJsonList[agentArnsIndex].AsString(m_agentArns[agentArnsIndex]);
   }
   payload.WithArray("AgentArns", std::move(agentArnsJsonList));

  }

  if(m_mountOptionsHasBeenSet)
  {
   payload.WithObject("MountOptions", m_mountOptions.Jsonize());

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

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", SmbAuthenticationTypeMapper::GetNameForSmbAuthenticationType(m_authenticationType));
  }

  if(m_dnsIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsIpAddressesJsonList(m_dnsIpAddresses.size());
   for(unsigned dnsIpAddressesIndex = 0; dnsIpAddressesIndex < dnsIpAddressesJsonList.GetLength(); ++dnsIpAddressesIndex)
   {
     dnsIpAddressesJsonList[dnsIpAddressesIndex].AsString(m_dnsIpAddresses[dnsIpAddressesIndex]);
   }
   payload.WithArray("DnsIpAddresses", std::move(dnsIpAddressesJsonList));

  }

  if(m_kerberosPrincipalHasBeenSet)
  {
   payload.WithString("KerberosPrincipal", m_kerberosPrincipal);

  }

  if(m_kerberosKeytabHasBeenSet)
  {
   payload.WithString("KerberosKeytab", HashingUtils::Base64Encode(m_kerberosKeytab));
  }

  if(m_kerberosKrb5ConfHasBeenSet)
  {
   payload.WithString("KerberosKrb5Conf", HashingUtils::Base64Encode(m_kerberosKrb5Conf));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLocationSmbRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.CreateLocationSmb"));
  return headers;

}




