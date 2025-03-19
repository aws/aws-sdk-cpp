/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminSetUserMFAPreferenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AdminSetUserMFAPreferenceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sMSMfaSettingsHasBeenSet)
  {
   payload.WithObject("SMSMfaSettings", m_sMSMfaSettings.Jsonize());

  }

  if(m_softwareTokenMfaSettingsHasBeenSet)
  {
   payload.WithObject("SoftwareTokenMfaSettings", m_softwareTokenMfaSettings.Jsonize());

  }

  if(m_emailMfaSettingsHasBeenSet)
  {
   payload.WithObject("EmailMfaSettings", m_emailMfaSettings.Jsonize());

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AdminSetUserMFAPreferenceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminSetUserMFAPreference"));
  return headers;

}




