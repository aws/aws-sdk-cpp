/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SetUserMFAPreferenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetUserMFAPreferenceRequest::SetUserMFAPreferenceRequest() : 
    m_sMSMfaSettingsHasBeenSet(false),
    m_softwareTokenMfaSettingsHasBeenSet(false),
    m_accessTokenHasBeenSet(false)
{
}

Aws::String SetUserMFAPreferenceRequest::SerializePayload() const
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

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetUserMFAPreferenceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.SetUserMFAPreference"));
  return headers;

}




