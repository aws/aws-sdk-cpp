/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateDeviceStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDeviceStatusRequest::UpdateDeviceStatusRequest() : 
    m_accessTokenHasBeenSet(false),
    m_deviceKeyHasBeenSet(false),
    m_deviceRememberedStatus(DeviceRememberedStatusType::NOT_SET),
    m_deviceRememberedStatusHasBeenSet(false)
{
}

Aws::String UpdateDeviceStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  if(m_deviceKeyHasBeenSet)
  {
   payload.WithString("DeviceKey", m_deviceKey);

  }

  if(m_deviceRememberedStatusHasBeenSet)
  {
   payload.WithString("DeviceRememberedStatus", DeviceRememberedStatusTypeMapper::GetNameForDeviceRememberedStatusType(m_deviceRememberedStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDeviceStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateDeviceStatus"));
  return headers;

}




