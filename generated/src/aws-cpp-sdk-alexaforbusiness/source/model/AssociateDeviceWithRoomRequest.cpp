/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/AssociateDeviceWithRoomRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateDeviceWithRoomRequest::AssociateDeviceWithRoomRequest() : 
    m_deviceArnHasBeenSet(false),
    m_roomArnHasBeenSet(false)
{
}

Aws::String AssociateDeviceWithRoomRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("DeviceArn", m_deviceArn);

  }

  if(m_roomArnHasBeenSet)
  {
   payload.WithString("RoomArn", m_roomArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateDeviceWithRoomRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.AssociateDeviceWithRoom"));
  return headers;

}




