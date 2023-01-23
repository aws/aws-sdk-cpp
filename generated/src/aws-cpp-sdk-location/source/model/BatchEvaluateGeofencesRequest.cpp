/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/BatchEvaluateGeofencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchEvaluateGeofencesRequest::BatchEvaluateGeofencesRequest() : 
    m_collectionNameHasBeenSet(false),
    m_devicePositionUpdatesHasBeenSet(false)
{
}

Aws::String BatchEvaluateGeofencesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_devicePositionUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> devicePositionUpdatesJsonList(m_devicePositionUpdates.size());
   for(unsigned devicePositionUpdatesIndex = 0; devicePositionUpdatesIndex < devicePositionUpdatesJsonList.GetLength(); ++devicePositionUpdatesIndex)
   {
     devicePositionUpdatesJsonList[devicePositionUpdatesIndex].AsObject(m_devicePositionUpdates[devicePositionUpdatesIndex].Jsonize());
   }
   payload.WithArray("DevicePositionUpdates", std::move(devicePositionUpdatesJsonList));

  }

  return payload.View().WriteReadable();
}




