/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/AssociateDeviceWithNetworkProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateDeviceWithNetworkProfileRequest::AssociateDeviceWithNetworkProfileRequest() : 
    m_deviceArnHasBeenSet(false),
    m_networkProfileArnHasBeenSet(false)
{
}

Aws::String AssociateDeviceWithNetworkProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("DeviceArn", m_deviceArn);

  }

  if(m_networkProfileArnHasBeenSet)
  {
   payload.WithString("NetworkProfileArn", m_networkProfileArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateDeviceWithNetworkProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.AssociateDeviceWithNetworkProfile"));
  return headers;

}




