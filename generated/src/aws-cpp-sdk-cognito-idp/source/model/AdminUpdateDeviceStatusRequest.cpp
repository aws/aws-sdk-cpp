/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminUpdateDeviceStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AdminUpdateDeviceStatusRequest::AdminUpdateDeviceStatusRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_deviceKeyHasBeenSet(false),
    m_deviceRememberedStatus(DeviceRememberedStatusType::NOT_SET),
    m_deviceRememberedStatusHasBeenSet(false)
{
}

Aws::String AdminUpdateDeviceStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

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

Aws::Http::HeaderValueCollection AdminUpdateDeviceStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminUpdateDeviceStatus"));
  return headers;

}




