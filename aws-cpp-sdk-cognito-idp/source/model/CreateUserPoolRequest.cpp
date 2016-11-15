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
#include <aws/cognito-idp/model/CreateUserPoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserPoolRequest::CreateUserPoolRequest() : 
    m_poolNameHasBeenSet(false),
    m_policiesHasBeenSet(false),
    m_lambdaConfigHasBeenSet(false),
    m_autoVerifiedAttributesHasBeenSet(false),
    m_aliasAttributesHasBeenSet(false),
    m_smsVerificationMessageHasBeenSet(false),
    m_emailVerificationMessageHasBeenSet(false),
    m_emailVerificationSubjectHasBeenSet(false),
    m_smsAuthenticationMessageHasBeenSet(false),
    m_mfaConfiguration(UserPoolMfaType::NOT_SET),
    m_mfaConfigurationHasBeenSet(false),
    m_deviceConfigurationHasBeenSet(false),
    m_emailConfigurationHasBeenSet(false),
    m_smsConfigurationHasBeenSet(false),
    m_adminCreateUserConfigHasBeenSet(false),
    m_schemaHasBeenSet(false)
{
}

Aws::String CreateUserPoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_poolNameHasBeenSet)
  {
   payload.WithString("PoolName", m_poolName);

  }

  if(m_policiesHasBeenSet)
  {
   payload.WithObject("Policies", m_policies.Jsonize());

  }

  if(m_lambdaConfigHasBeenSet)
  {
   payload.WithObject("LambdaConfig", m_lambdaConfig.Jsonize());

  }

  if(m_autoVerifiedAttributesHasBeenSet)
  {
   Array<JsonValue> autoVerifiedAttributesJsonList(m_autoVerifiedAttributes.size());
   for(unsigned autoVerifiedAttributesIndex = 0; autoVerifiedAttributesIndex < autoVerifiedAttributesJsonList.GetLength(); ++autoVerifiedAttributesIndex)
   {
     autoVerifiedAttributesJsonList[autoVerifiedAttributesIndex].AsString(VerifiedAttributeTypeMapper::GetNameForVerifiedAttributeType(m_autoVerifiedAttributes[autoVerifiedAttributesIndex]));
   }
   payload.WithArray("AutoVerifiedAttributes", std::move(autoVerifiedAttributesJsonList));

  }

  if(m_aliasAttributesHasBeenSet)
  {
   Array<JsonValue> aliasAttributesJsonList(m_aliasAttributes.size());
   for(unsigned aliasAttributesIndex = 0; aliasAttributesIndex < aliasAttributesJsonList.GetLength(); ++aliasAttributesIndex)
   {
     aliasAttributesJsonList[aliasAttributesIndex].AsString(AliasAttributeTypeMapper::GetNameForAliasAttributeType(m_aliasAttributes[aliasAttributesIndex]));
   }
   payload.WithArray("AliasAttributes", std::move(aliasAttributesJsonList));

  }

  if(m_smsVerificationMessageHasBeenSet)
  {
   payload.WithString("SmsVerificationMessage", m_smsVerificationMessage);

  }

  if(m_emailVerificationMessageHasBeenSet)
  {
   payload.WithString("EmailVerificationMessage", m_emailVerificationMessage);

  }

  if(m_emailVerificationSubjectHasBeenSet)
  {
   payload.WithString("EmailVerificationSubject", m_emailVerificationSubject);

  }

  if(m_smsAuthenticationMessageHasBeenSet)
  {
   payload.WithString("SmsAuthenticationMessage", m_smsAuthenticationMessage);

  }

  if(m_mfaConfigurationHasBeenSet)
  {
   payload.WithString("MfaConfiguration", UserPoolMfaTypeMapper::GetNameForUserPoolMfaType(m_mfaConfiguration));
  }

  if(m_deviceConfigurationHasBeenSet)
  {
   payload.WithObject("DeviceConfiguration", m_deviceConfiguration.Jsonize());

  }

  if(m_emailConfigurationHasBeenSet)
  {
   payload.WithObject("EmailConfiguration", m_emailConfiguration.Jsonize());

  }

  if(m_smsConfigurationHasBeenSet)
  {
   payload.WithObject("SmsConfiguration", m_smsConfiguration.Jsonize());

  }

  if(m_adminCreateUserConfigHasBeenSet)
  {
   payload.WithObject("AdminCreateUserConfig", m_adminCreateUserConfig.Jsonize());

  }

  if(m_schemaHasBeenSet)
  {
   Array<JsonValue> schemaJsonList(m_schema.size());
   for(unsigned schemaIndex = 0; schemaIndex < schemaJsonList.GetLength(); ++schemaIndex)
   {
     schemaJsonList[schemaIndex].AsObject(m_schema[schemaIndex].Jsonize());
   }
   payload.WithArray("Schema", std::move(schemaJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateUserPoolRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.CreateUserPool"));
  return headers;

}



