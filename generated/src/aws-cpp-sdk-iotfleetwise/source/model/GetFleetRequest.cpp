/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/GetFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFleetRequest::GetFleetRequest() : 
    m_fleetIdHasBeenSet(false)
{
}

Aws::String GetFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("fleetId", m_fleetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.GetFleet"));
  return headers;

}




