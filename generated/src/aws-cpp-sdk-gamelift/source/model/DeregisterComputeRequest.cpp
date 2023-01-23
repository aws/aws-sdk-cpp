/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DeregisterComputeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterComputeRequest::DeregisterComputeRequest() : 
    m_fleetIdHasBeenSet(false),
    m_computeNameHasBeenSet(false)
{
}

Aws::String DeregisterComputeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_computeNameHasBeenSet)
  {
   payload.WithString("ComputeName", m_computeName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterComputeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DeregisterCompute"));
  return headers;

}




