/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateUserPoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserPoolRequest::UpdateUserPoolRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_policiesHasBeenSet(false),
    m_deletionProtection(DeletionProtectionType::NOT_SET),
    m_deletionProtectionHasBeenSet(false),
    m_lambdaConfigHasBeenSet(false),
    m_autoVerifiedAttributesHasBeenSet(false),
    m_smsVerificationMessageHasBeenSet(false),
    m_emailVerificationMessageHasBeenSet(false),
    m_emailVerificationSubjectHasBeenSet(false),
    m_verificationMessageTemplateHasBeenSet(false),
    m_smsAuthenticationMessageHasBeenSet(false),
    m_userAttributeUpdateSettingsHasBeenSet(false),
    m_mfaConfiguration(UserPoolMfaType::NOT_SET),
    m_mfaConfigurationHasBeenSet(false),
    m_deviceConfigurationHasBeenSet(false),
    m_emailConfigurationHasBeenSet(false),
    m_smsConfigurationHasBeenSet(false),
    m_userPoolTagsHasBeenSet(false),
    m_adminCreateUserConfigHasBeenSet(false),
    m_userPoolAddOnsHasBeenSet(false),
    m_accountRecoverySettingHasBeenSet(false)
{
}

Aws::String UpdateUserPoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_policiesHasBeenSet)
  {
   payload.WithObject("Policies", m_policies.Jsonize());

  }

  if(m_deletionProtectionHasBeenSet)
  {
   payload.WithString("DeletionProtection", DeletionProtectionTypeMapper::GetNameForDeletionProtectionType(m_deletionProtection));
  }

  if(m_lambdaConfigHasBeenSet)
  {
   payload.WithObject("LambdaConfig", m_lambdaConfig.Jsonize());

  }

  if(m_autoVerifiedAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoVerifiedAttributesJsonList(m_autoVerifiedAttributes.size());
   for(unsigned autoVerifiedAttributesIndex = 0; autoVerifiedAttributesIndex < autoVerifiedAttributesJsonList.GetLength(); ++autoVerifiedAttributesIndex)
   {
     autoVerifiedAttributesJsonList[autoVerifiedAttributesIndex].AsString(VerifiedAttributeTypeMapper::GetNameForVerifiedAttributeType(m_autoVerifiedAttributes[autoVerifiedAttributesIndex]));
   }
   payload.WithArray("AutoVerifiedAttributes", std::move(autoVerifiedAttributesJsonList));

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

  if(m_verificationMessageTemplateHasBeenSet)
  {
   payload.WithObject("VerificationMessageTemplate", m_verificationMessageTemplate.Jsonize());

  }

  if(m_smsAuthenticationMessageHasBeenSet)
  {
   payload.WithString("SmsAuthenticationMessage", m_smsAuthenticationMessage);

  }

  if(m_userAttributeUpdateSettingsHasBeenSet)
  {
   payload.WithObject("UserAttributeUpdateSettings", m_userAttributeUpdateSettings.Jsonize());

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

  if(m_userPoolTagsHasBeenSet)
  {
   JsonValue userPoolTagsJsonMap;
   for(auto& userPoolTagsItem : m_userPoolTags)
   {
     userPoolTagsJsonMap.WithString(userPoolTagsItem.first, userPoolTagsItem.second);
   }
   payload.WithObject("UserPoolTags", std::move(userPoolTagsJsonMap));

  }

  if(m_adminCreateUserConfigHasBeenSet)
  {
   payload.WithObject("AdminCreateUserConfig", m_adminCreateUserConfig.Jsonize());

  }

  if(m_userPoolAddOnsHasBeenSet)
  {
   payload.WithObject("UserPoolAddOns", m_userPoolAddOns.Jsonize());

  }

  if(m_accountRecoverySettingHasBeenSet)
  {
   payload.WithObject("AccountRecoverySetting", m_accountRecoverySetting.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateUserPoolRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateUserPool"));
  return headers;

}




