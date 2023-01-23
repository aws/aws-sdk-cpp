/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AttachLoadBalancerTlsCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AttachLoadBalancerTlsCertificateRequest::AttachLoadBalancerTlsCertificateRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_certificateNameHasBeenSet(false)
{
}

Aws::String AttachLoadBalancerTlsCertificateRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AttachLoadBalancerTlsCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.AttachLoadBalancerTlsCertificate"));
  return headers;

}




