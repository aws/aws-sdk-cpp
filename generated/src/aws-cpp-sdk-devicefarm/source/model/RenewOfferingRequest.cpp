/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/RenewOfferingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RenewOfferingRequest::RenewOfferingRequest() : 
    m_offeringIdHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false)
{
}

Aws::String RenewOfferingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_offeringIdHasBeenSet)
  {
   payload.WithString("offeringId", m_offeringId);

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithInteger("quantity", m_quantity);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RenewOfferingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.RenewOffering"));
  return headers;

}




