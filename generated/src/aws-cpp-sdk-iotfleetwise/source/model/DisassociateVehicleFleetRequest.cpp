/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/DisassociateVehicleFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateVehicleFleetRequest::DisassociateVehicleFleetRequest() : 
    m_vehicleNameHasBeenSet(false),
    m_fleetIdHasBeenSet(false)
{
}

Aws::String DisassociateVehicleFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vehicleNameHasBeenSet)
  {
   payload.WithString("vehicleName", m_vehicleName);

  }

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("fleetId", m_fleetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateVehicleFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.DisassociateVehicleFleet"));
  return headers;

}




