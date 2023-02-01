/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/DeleteVehicleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteVehicleRequest::DeleteVehicleRequest() : 
    m_vehicleNameHasBeenSet(false)
{
}

Aws::String DeleteVehicleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vehicleNameHasBeenSet)
  {
   payload.WithString("vehicleName", m_vehicleName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteVehicleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.DeleteVehicle"));
  return headers;

}




