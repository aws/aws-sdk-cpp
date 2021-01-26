/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/meteringmarketplace/model/ResolveCustomerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceMetering::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResolveCustomerRequest::ResolveCustomerRequest() : 
    m_registrationTokenHasBeenSet(false)
{
}

Aws::String ResolveCustomerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registrationTokenHasBeenSet)
  {
   payload.WithString("RegistrationToken", m_registrationToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ResolveCustomerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPMeteringService.ResolveCustomer"));
  return headers;

}




