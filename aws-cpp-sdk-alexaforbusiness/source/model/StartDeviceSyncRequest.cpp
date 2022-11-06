/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/StartDeviceSyncRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDeviceSyncRequest::StartDeviceSyncRequest() : 
    m_roomArnHasBeenSet(false),
    m_deviceArnHasBeenSet(false),
    m_featuresHasBeenSet(false)
{
}

Aws::String StartDeviceSyncRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roomArnHasBeenSet)
  {
   payload.WithString("RoomArn", m_roomArn);

  }

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("DeviceArn", m_deviceArn);

  }

  if(m_featuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
   for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
   {
     featuresJsonList[featuresIndex].AsString(FeatureMapper::GetNameForFeature(m_features[featuresIndex]));
   }
   payload.WithArray("Features", std::move(featuresJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartDeviceSyncRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.StartDeviceSync"));
  return headers;

}




