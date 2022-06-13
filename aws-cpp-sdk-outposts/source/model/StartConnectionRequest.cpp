/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/StartConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartConnectionRequest::StartConnectionRequest() : 
    m_deviceSerialNumberHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_clientPublicKeyHasBeenSet(false),
    m_networkInterfaceDeviceIndex(0),
    m_networkInterfaceDeviceIndexHasBeenSet(false)
{
}

Aws::String StartConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceSerialNumberHasBeenSet)
  {
   payload.WithString("DeviceSerialNumber", m_deviceSerialNumber);

  }

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("AssetId", m_assetId);

  }

  if(m_clientPublicKeyHasBeenSet)
  {
   payload.WithString("ClientPublicKey", m_clientPublicKey);

  }

  if(m_networkInterfaceDeviceIndexHasBeenSet)
  {
   payload.WithInteger("NetworkInterfaceDeviceIndex", m_networkInterfaceDeviceIndex);

  }

  return payload.View().WriteReadable();
}




