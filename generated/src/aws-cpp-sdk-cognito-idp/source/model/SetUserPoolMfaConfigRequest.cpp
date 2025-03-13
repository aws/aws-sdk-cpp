/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SetUserPoolMfaConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SetUserPoolMfaConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_smsMfaConfigurationHasBeenSet)
  {
   payload.WithObject("SmsMfaConfiguration", m_smsMfaConfiguration.Jsonize());

  }

  if(m_softwareTokenMfaConfigurationHasBeenSet)
  {
   payload.WithObject("SoftwareTokenMfaConfiguration", m_softwareTokenMfaConfiguration.Jsonize());

  }

  if(m_emailMfaConfigurationHasBeenSet)
  {
   payload.WithObject("EmailMfaConfiguration", m_emailMfaConfiguration.Jsonize());

  }

  if(m_mfaConfigurationHasBeenSet)
  {
   payload.WithString("MfaConfiguration", UserPoolMfaTypeMapper::GetNameForUserPoolMfaType(m_mfaConfiguration));
  }

  if(m_webAuthnConfigurationHasBeenSet)
  {
   payload.WithObject("WebAuthnConfiguration", m_webAuthnConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetUserPoolMfaConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.SetUserPoolMfaConfig"));
  return headers;

}




