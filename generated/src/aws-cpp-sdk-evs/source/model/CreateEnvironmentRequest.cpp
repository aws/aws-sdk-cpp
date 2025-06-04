/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/CreateEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_serviceAccessSecurityGroupsHasBeenSet)
  {
   payload.WithObject("serviceAccessSecurityGroups", m_serviceAccessSecurityGroups.Jsonize());

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  if(m_serviceAccessSubnetIdHasBeenSet)
  {
   payload.WithString("serviceAccessSubnetId", m_serviceAccessSubnetId);

  }

  if(m_vcfVersionHasBeenSet)
  {
   payload.WithString("vcfVersion", VcfVersionMapper::GetNameForVcfVersion(m_vcfVersion));
  }

  if(m_termsAcceptedHasBeenSet)
  {
   payload.WithBool("termsAccepted", m_termsAccepted);

  }

  if(m_licenseInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseInfoJsonList(m_licenseInfo.size());
   for(unsigned licenseInfoIndex = 0; licenseInfoIndex < licenseInfoJsonList.GetLength(); ++licenseInfoIndex)
   {
     licenseInfoJsonList[licenseInfoIndex].AsObject(m_licenseInfo[licenseInfoIndex].Jsonize());
   }
   payload.WithArray("licenseInfo", std::move(licenseInfoJsonList));

  }

  if(m_initialVlansHasBeenSet)
  {
   payload.WithObject("initialVlans", m_initialVlans.Jsonize());

  }

  if(m_hostsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hostsJsonList(m_hosts.size());
   for(unsigned hostsIndex = 0; hostsIndex < hostsJsonList.GetLength(); ++hostsIndex)
   {
     hostsJsonList[hostsIndex].AsObject(m_hosts[hostsIndex].Jsonize());
   }
   payload.WithArray("hosts", std::move(hostsJsonList));

  }

  if(m_connectivityInfoHasBeenSet)
  {
   payload.WithObject("connectivityInfo", m_connectivityInfo.Jsonize());

  }

  if(m_vcfHostnamesHasBeenSet)
  {
   payload.WithObject("vcfHostnames", m_vcfHostnames.Jsonize());

  }

  if(m_siteIdHasBeenSet)
  {
   payload.WithString("siteId", m_siteId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEnvironmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonElasticVMwareService.CreateEnvironment"));
  return headers;

}




