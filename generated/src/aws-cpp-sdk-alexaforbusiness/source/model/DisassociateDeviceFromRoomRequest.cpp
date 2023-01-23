/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DisassociateDeviceFromRoomRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateDeviceFromRoomRequest::DisassociateDeviceFromRoomRequest() : 
    m_deviceArnHasBeenSet(false)
{
}

Aws::String DisassociateDeviceFromRoomRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("DeviceArn", m_deviceArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateDeviceFromRoomRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.DisassociateDeviceFromRoom"));
  return headers;

}




