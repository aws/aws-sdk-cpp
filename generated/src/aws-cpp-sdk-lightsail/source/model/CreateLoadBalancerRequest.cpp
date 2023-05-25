/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateLoadBalancerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLoadBalancerRequest::CreateLoadBalancerRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_certificateDomainNameHasBeenSet(false),
    m_certificateAlternativeNamesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_tlsPolicyNameHasBeenSet(false)
{
}

Aws::String CreateLoadBalancerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loadBalancerNameHasBeenSet)
  {
   payload.WithString("loadBalancerName", m_loadBalancerName);

  }

  if(m_instancePortHasBeenSet)
  {
   payload.WithInteger("instancePort", m_instancePort);

  }

  if(m_healthCheckPathHasBeenSet)
  {
   payload.WithString("healthCheckPath", m_healthCheckPath);

  }

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  if(m_certificateDomainNameHasBeenSet)
  {
   payload.WithString("certificateDomainName", m_certificateDomainName);

  }

  if(m_certificateAlternativeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificateAlternativeNamesJsonList(m_certificateAlternativeNames.size());
   for(unsigned certificateAlternativeNamesIndex = 0; certificateAlternativeNamesIndex < certificateAlternativeNamesJsonList.GetLength(); ++certificateAlternativeNamesIndex)
   {
     certificateAlternativeNamesJsonList[certificateAlternativeNamesIndex].AsString(m_certificateAlternativeNames[certificateAlternativeNamesIndex]);
   }
   payload.WithArray("certificateAlternativeNames", std::move(certificateAlternativeNamesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("ipAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  if(m_tlsPolicyNameHasBeenSet)
  {
   payload.WithString("tlsPolicyName", m_tlsPolicyName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLoadBalancerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateLoadBalancer"));
  return headers;

}




