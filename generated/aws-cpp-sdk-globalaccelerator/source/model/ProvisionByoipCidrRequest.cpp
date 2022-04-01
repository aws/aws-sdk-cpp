/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ProvisionByoipCidrRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ProvisionByoipCidrRequest::ProvisionByoipCidrRequest() : 
    m_cidrHasBeenSet(false),
    m_cidrAuthorizationContextHasBeenSet(false)
{
}

Aws::String ProvisionByoipCidrRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cidrHasBeenSet)
  {
   payload.WithString("Cidr", m_cidr);

  }

  if(m_cidrAuthorizationContextHasBeenSet)
  {
   payload.WithObject("CidrAuthorizationContext", m_cidrAuthorizationContext.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ProvisionByoipCidrRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.ProvisionByoipCidr"));
  return headers;

}




