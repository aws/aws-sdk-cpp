/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-idp/model/ConfirmForgotPasswordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConfirmForgotPasswordRequest::ConfirmForgotPasswordRequest() : 
    m_clientIdHasBeenSet(false),
    m_secretHashHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_confirmationCodeHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

Aws::String ConfirmForgotPasswordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_secretHashHasBeenSet)
  {
   payload.WithString("SecretHash", m_secretHash);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_confirmationCodeHasBeenSet)
  {
   payload.WithString("ConfirmationCode", m_confirmationCode);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ConfirmForgotPasswordRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.ConfirmForgotPassword"));
  return headers;

}



