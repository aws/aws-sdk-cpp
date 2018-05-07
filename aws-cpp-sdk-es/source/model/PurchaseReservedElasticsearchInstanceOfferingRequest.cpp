/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}




