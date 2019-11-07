/*
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

#include <aws/sso-oidc/model/CreateTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOOIDC::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTokenRequest::CreateTokenRequest() : 
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_grantTypeHasBeenSet(false),
    m_deviceCodeHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_redirectUriHasBeenSet(false)
{
}

Aws::String CreateTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("clientSecret", m_clientSecret);

  }

  if(m_grantTypeHasBeenSet)
  {
   payload.WithString("grantType", m_grantType);

  }

  if(m_deviceCodeHasBeenSet)
  {
   payload.WithString("deviceCode", m_deviceCode);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_refreshTokenHasBeenSet)
  {
   payload.WithString("refreshToken", m_refreshToken);

  }

  if(m_scopeHasBeenSet)
  {
   Array<JsonValue> scopeJsonList(m_scope.size());
   for(unsigned scopeIndex = 0; scopeIndex < scopeJsonList.GetLength(); ++scopeIndex)
   {
     scopeJsonList[scopeIndex].AsString(m_scope[scopeIndex]);
   }
   payload.WithArray("scope", std::move(scopeJsonList));

  }

  if(m_redirectUriHasBeenSet)
  {
   payload.WithString("redirectUri", m_redirectUri);

  }

  return payload.View().WriteReadable();
}




