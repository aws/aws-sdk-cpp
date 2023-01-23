/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ConfirmDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConfirmDeviceRequest::ConfirmDeviceRequest() : 
    m_accessTokenHasBeenSet(false),
    m_deviceKeyHasBeenSet(false),
    m_deviceSecretVerifierConfigHasBeenSet(false),
    m_deviceNameHasBeenSet(false)
{
}

Aws::String ConfirmDeviceRequest::SerializePayload() const
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

  if(m_deviceSecretVerifierConfigHasBeenSet)
  {
   payload.WithObject("DeviceSecretVerifierConfig", m_deviceSecretVerifierConfig.Jsonize());

  }

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ConfirmDeviceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.ConfirmDevice"));
  return headers;

}




