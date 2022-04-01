/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/UpdateJobShipmentStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateJobShipmentStateRequest::UpdateJobShipmentStateRequest() : 
    m_jobIdHasBeenSet(false),
    m_shipmentState(ShipmentState::NOT_SET),
    m_shipmentStateHasBeenSet(false)
{
}

Aws::String UpdateJobShipmentStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_shipmentStateHasBeenSet)
  {
   payload.WithString("ShipmentState", ShipmentStateMapper::GetNameForShipmentState(m_shipmentState));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateJobShipmentStateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIESnowballJobManagementService.UpdateJobShipmentState"));
  return headers;

}




