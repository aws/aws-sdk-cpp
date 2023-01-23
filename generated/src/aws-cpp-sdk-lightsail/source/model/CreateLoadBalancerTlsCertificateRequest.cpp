/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateLoadBalancerTlsCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLoadBalancerTlsCertificateRequest::CreateLoadBalancerTlsCertificateRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_certificateDomainNameHasBeenSet(false),
    m_certificateAlternativeNamesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLoadBalancerTlsCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loadBalancerNameHasBeenSet)
  {
   payload.WithString("loadBalancerName", m_loadBalancerName);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLoadBalancerTlsCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateLoadBalancerTlsCertificate"));
  return headers;

}




