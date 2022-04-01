/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/PurchaseReservedElasticsearchInstanceOfferingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PurchaseReservedElasticsearchInstanceOfferingRequest::PurchaseReservedElasticsearchInstanceOfferingRequest() : 
    m_reservedElasticsearchInstanceOfferingIdHasBeenSet(false),
    m_reservationNameHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false)
{
}

Aws::String PurchaseReservedElasticsearchInstanceOfferingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reservedElasticsearchInstanceOfferingIdHasBeenSet)
  {
   payload.WithString("ReservedElasticsearchInstanceOfferingId", m_reservedElasticsearchInstanceOfferingId);

  }

  if(m_reservationNameHasBeenSet)
  {
   payload.WithString("ReservationName", m_reservationName);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  return payload.View().WriteReadable();
}




