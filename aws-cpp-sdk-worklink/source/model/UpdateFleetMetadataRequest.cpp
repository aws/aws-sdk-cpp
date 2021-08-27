/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/UpdateFleetMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFleetMetadataRequest::UpdateFleetMetadataRequest() : 
    m_fleetArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_optimizeForEndUserLocation(false),
    m_optimizeForEndUserLocationHasBeenSet(false)
{
}

Aws::String UpdateFleetMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_optimizeForEndUserLocationHasBeenSet)
  {
   payload.WithBool("OptimizeForEndUserLocation", m_optimizeForEndUserLocation);

  }

  return payload.View().WriteReadable();
}




