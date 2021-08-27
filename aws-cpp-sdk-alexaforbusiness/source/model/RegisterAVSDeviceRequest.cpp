/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/RegisterAVSDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterAVSDeviceRequest::RegisterAVSDeviceRequest() : 
    m_clientIdHasBeenSet(false),
    m_userCodeHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceSerialNumberHasBeenSet(false),
    m_amazonIdHasBeenSet(false),
    m_roomArnHasBeenSet(false)
{
}

Aws::String RegisterAVSDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_userCodeHasBeenSet)
  {
   payload.WithString("UserCode", m_userCode);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_deviceSerialNumberHasBeenSet)
  {
   payload.WithString("DeviceSerialNumber", m_deviceSerialNumber);

  }

  if(m_amazonIdHasBeenSet)
  {
   payload.WithString("AmazonId", m_amazonId);

  }

  if(m_roomArnHasBeenSet)
  {
   payload.WithString("RoomArn", m_roomArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterAVSDeviceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.RegisterAVSDevice"));
  return headers;

}




