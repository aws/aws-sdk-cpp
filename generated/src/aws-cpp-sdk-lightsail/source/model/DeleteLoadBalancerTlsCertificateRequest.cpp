/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DeleteLoadBalancerTlsCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLoadBalancerTlsCertificateRequest::DeleteLoadBalancerTlsCertificateRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String DeleteLoadBalancerTlsCertificateRequest::SerializePayload() const
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

  if(m_forceHasBeenSet)
  {
   payload.WithBool("force", m_force);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteLoadBalancerTlsCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DeleteLoadBalancerTlsCertificate"));
  return headers;

}




