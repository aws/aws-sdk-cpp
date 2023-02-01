/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/GetVehicleStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetVehicleStatusRequest::GetVehicleStatusRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_vehicleNameHasBeenSet(false)
{
}

Aws::String GetVehicleStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_vehicleNameHasBeenSet)
  {
   payload.WithString("vehicleName", m_vehicleName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetVehicleStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.GetVehicleStatus"));
  return headers;

}




