/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/UpdateFleetCapacityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFleetCapacityRequest::UpdateFleetCapacityRequest() : 
    m_fleetIdHasBeenSet(false),
    m_desiredInstances(0),
    m_desiredInstancesHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false)
{
}

Aws::String UpdateFleetCapacityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_desiredInstancesHasBeenSet)
  {
   payload.WithInteger("DesiredInstances", m_desiredInstances);

  }

  if(m_minSizeHasBeenSet)
  {
   payload.WithInteger("MinSize", m_minSize);

  }

  if(m_maxSizeHasBeenSet)
  {
   payload.WithInteger("MaxSize", m_maxSize);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFleetCapacityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateFleetCapacity"));
  return headers;

}




