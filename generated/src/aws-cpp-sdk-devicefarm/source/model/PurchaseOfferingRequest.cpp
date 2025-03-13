/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/PurchaseOfferingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PurchaseOfferingRequest::SerializePayload() const
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

  if(m_offeringPromotionIdHasBeenSet)
  {
   payload.WithString("offeringPromotionId", m_offeringPromotionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PurchaseOfferingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.PurchaseOffering"));
  return headers;

}




