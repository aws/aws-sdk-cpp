/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminGetDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AdminGetDeviceRequest::AdminGetDeviceRequest() : 
    m_deviceKeyHasBeenSet(false),
    m_userPoolIdHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

Aws::String AdminGetDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceKeyHasBeenSet)
  {
   payload.WithString("DeviceKey", m_deviceKey);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AdminGetDeviceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminGetDevice"));
  return headers;

}




