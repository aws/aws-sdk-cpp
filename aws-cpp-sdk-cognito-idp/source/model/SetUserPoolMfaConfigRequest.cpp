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

#include <aws/cognito-idp/model/SetUserPoolMfaConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetUserPoolMfaConfigRequest::SetUserPoolMfaConfigRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_smsMfaConfigurationHasBeenSet(false),
    m_softwareTokenMfaConfigurationHasBeenSet(false),
    m_mfaConfiguration(UserPoolMfaType::NOT_SET),
    m_mfaConfigurationHasBeenSet(false)
{
}

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

  if(m_mfaConfigurationHasBeenSet)
  {
   payload.WithString("MfaConfiguration", UserPoolMfaTypeMapper::GetNameForUserPoolMfaType(m_mfaConfiguration));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SetUserPoolMfaConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.SetUserPoolMfaConfig"));
  return headers;

}




