/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gamelift/model/UpdateFleetCapacityRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateFleetCapacityRequest::SerializePayload() const {
  JsonValue payload;

  if (m_fleetIdHasBeenSet) {
    payload.WithString("FleetId", m_fleetId);
  }

  if (m_desiredInstancesHasBeenSet) {
    payload.WithInteger("DesiredInstances", m_desiredInstances);
  }

  if (m_minSizeHasBeenSet) {
    payload.WithInteger("MinSize", m_minSize);
  }

  if (m_maxSizeHasBeenSet) {
    payload.WithInteger("MaxSize", m_maxSize);
  }

  if (m_locationHasBeenSet) {
    payload.WithString("Location", m_location);
  }

  if (m_managedCapacityConfigurationHasBeenSet) {
    payload.WithObject("ManagedCapacityConfiguration", m_managedCapacityConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFleetCapacityRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateFleetCapacity"));
  return headers;
}
