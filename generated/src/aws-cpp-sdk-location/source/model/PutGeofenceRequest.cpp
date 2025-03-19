/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/PutGeofenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutGeofenceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  if(m_geofencePropertiesHasBeenSet)
  {
   JsonValue geofencePropertiesJsonMap;
   for(auto& geofencePropertiesItem : m_geofenceProperties)
   {
     geofencePropertiesJsonMap.WithString(geofencePropertiesItem.first, geofencePropertiesItem.second);
   }
   payload.WithObject("GeofenceProperties", std::move(geofencePropertiesJsonMap));

  }

  return payload.View().WriteReadable();
}




