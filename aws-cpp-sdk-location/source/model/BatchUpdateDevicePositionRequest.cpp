/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/BatchUpdateDevicePositionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdateDevicePositionRequest::BatchUpdateDevicePositionRequest() : 
    m_trackerNameHasBeenSet(false),
    m_updatesHasBeenSet(false)
{
}

Aws::String BatchUpdateDevicePositionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updatesJsonList(m_updates.size());
   for(unsigned updatesIndex = 0; updatesIndex < updatesJsonList.GetLength(); ++updatesIndex)
   {
     updatesJsonList[updatesIndex].AsObject(m_updates[updatesIndex].Jsonize());
   }
   payload.WithArray("Updates", std::move(updatesJsonList));

  }

  return payload.View().WriteReadable();
}




