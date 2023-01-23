/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/BatchDeleteGeofenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteGeofenceRequest::BatchDeleteGeofenceRequest() : 
    m_collectionNameHasBeenSet(false),
    m_geofenceIdsHasBeenSet(false)
{
}

Aws::String BatchDeleteGeofenceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_geofenceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> geofenceIdsJsonList(m_geofenceIds.size());
   for(unsigned geofenceIdsIndex = 0; geofenceIdsIndex < geofenceIdsJsonList.GetLength(); ++geofenceIdsIndex)
   {
     geofenceIdsJsonList[geofenceIdsIndex].AsString(m_geofenceIds[geofenceIdsIndex]);
   }
   payload.WithArray("GeofenceIds", std::move(geofenceIdsJsonList));

  }

  return payload.View().WriteReadable();
}




