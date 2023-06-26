/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/VerifySoftwareTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

VerifySoftwareTokenRequest::VerifySoftwareTokenRequest() : 
    m_accessTokenHasBeenSet(false),
    m_sessionHasBeenSet(false),
    m_userCodeHasBeenSet(false),
    m_friendlyDeviceNameHasBeenSet(false)
{
}

Aws::String VerifySoftwareTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  if(m_sessionHasBeenSet)
  {
   payload.WithString("Session", m_session);

  }

  if(m_userCodeHasBeenSet)
  {
   payload.WithString("UserCode", m_userCode);

  }

  if(m_friendlyDeviceNameHasBeenSet)
  {
   payload.WithString("FriendlyDeviceName", m_friendlyDeviceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection VerifySoftwareTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.VerifySoftwareToken"));
  return headers;

}




