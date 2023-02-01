/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/BatchDeleteDevicePositionHistoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteDevicePositionHistoryRequest::BatchDeleteDevicePositionHistoryRequest() : 
    m_deviceIdsHasBeenSet(false),
    m_trackerNameHasBeenSet(false)
{
}

Aws::String BatchDeleteDevicePositionHistoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceIdsJsonList(m_deviceIds.size());
   for(unsigned deviceIdsIndex = 0; deviceIdsIndex < deviceIdsJsonList.GetLength(); ++deviceIdsIndex)
   {
     deviceIdsJsonList[deviceIdsIndex].AsString(m_deviceIds[deviceIdsIndex]);
   }
   payload.WithArray("DeviceIds", std::move(deviceIdsJsonList));

  }

  return payload.View().WriteReadable();
}




