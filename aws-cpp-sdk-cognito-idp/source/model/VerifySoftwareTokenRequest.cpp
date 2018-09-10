﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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




