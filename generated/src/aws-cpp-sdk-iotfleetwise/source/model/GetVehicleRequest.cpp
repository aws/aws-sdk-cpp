/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/GetVehicleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetVehicleRequest::GetVehicleRequest() : 
    m_vehicleNameHasBeenSet(false)
{
}

Aws::String GetVehicleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vehicleNameHasBeenSet)
  {
   payload.WithString("vehicleName", m_vehicleName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetVehicleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.GetVehicle"));
  return headers;

}




