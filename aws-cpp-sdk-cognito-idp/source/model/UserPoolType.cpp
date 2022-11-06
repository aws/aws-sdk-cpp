/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserPoolType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

UserPoolType::UserPoolType() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policiesHasBeenSet(false),
    m_deletionProtection(DeletionProtectionType::NOT_SET),
    m_deletionProtectionHasBeenSet(false),
    m_lambdaConfigHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_schemaAttributesHasBeenSet(false),
    m_autoVerifiedAttributesHasBeenSet(false),
    m_aliasAttributesHasBeenSet(false),
    m_usernameAttributesHasBeenSet(false),
    m_smsVerificationMessageHasBeenSet(false),
    m_emailVerificationMessageHasBeenSet(false),
    m_emailVerificationSubjectHasBeenSet(false),
    m_verificationMessageTemplateHasBeenSet(false),
    m_smsAuthenticationMessageHasBeenSet(false),
    m_userAttributeUpdateSettingsHasBeenSet(false),
    m_mfaConfiguration(UserPoolMfaType::NOT_SET),
    m_mfaConfigurationHasBeenSet(false),
    m_deviceConfigurationHasBeenSet(false),
    m_estimatedNumberOfUsers(0),
    m_estimatedNumberOfUsersHasBeenSet(false),
    m_emailConfigurationHasBeenSet(false),
    m_smsConfigurationHasBeenSet(false),
    m_userPoolTagsHasBeenSet(false),
    m_smsConfigurationFailureHasBeenSet(false),
    m_emailConfigurationFailureHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_customDomainHasBeenSet(false),
    m_adminCreateUserConfigHasBeenSet(false),
    m_userPoolAddOnsHasBeenSet(false),
    m_usernameConfigurationHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_accountRecoverySettingHasBeenSet(false)
{
}

UserPoolType::UserPoolType(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policiesHasBeenSet(false),
    m_deletionProtection(DeletionProtectionType::NOT_SET),
    m_deletionProtectionHasBeenSet(false),
    m_lambdaConfigHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_schemaAttributesHasBeenSet(false),
    m_autoVerifiedAttributesHasBeenSet(false),
    m_aliasAttributesHasBeenSet(false),
    m_usernameAttributesHasBeenSet(false),
    m_smsVerificationMessageHasBeenSet(false),
    m_emailVerificationMessageHasBeenSet(false),
    m_emailVerificationSubjectHasBeenSet(false),
    m_verificationMessageTemplateHasBeenSet(false),
    m_smsAuthenticationMessageHasBeenSet(false),
    m_userAttributeUpdateSettingsHasBeenSet(false),
    m_mfaConfiguration(UserPoolMfaType::NOT_SET),
    m_mfaConfigurationHasBeenSet(false),
    m_deviceConfigurationHasBeenSet(false),
    m_estimatedNumberOfUsers(0),
    m_estimatedNumberOfUsersHasBeenSet(false),
    m_emailConfigurationHasBeenSet(false),
    m_smsConfigurationHasBeenSet(false),
    m_userPoolTagsHasBeenSet(false),
    m_smsConfigurationFailureHasBeenSet(false),
    m_emailConfigurationFailureHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_customDomainHasBeenSet(false),
    m_adminCreateUserConfigHasBeenSet(false),
    m_userPoolAddOnsHasBeenSet(false),
    m_usernameConfigurationHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_accountRecoverySettingHasBeenSet(false)
{
  *this = jsonValue;
}

UserPoolType& UserPoolType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Policies"))
  {
    m_policies = jsonValue.GetObject("Policies");

    m_policiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionProtection"))
  {
    m_deletionProtection = DeletionProtectionTypeMapper::GetDeletionProtectionTypeForName(jsonValue.GetString("DeletionProtection"));

    m_deletionProtectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaConfig"))
  {
    m_lambdaConfig = jsonValue.GetObject("LambdaConfig");

    m_lambdaConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusTypeMapper::GetStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaAttributes"))
  {
    Aws::Utils::Array<JsonView> schemaAttributesJsonList = jsonValue.GetArray("SchemaAttributes");
    for(unsigned schemaAttributesIndex = 0; schemaAttributesIndex < schemaAttributesJsonList.GetLength(); ++schemaAttributesIndex)
    {
      m_schemaAttributes.push_back(schemaAttributesJsonList[schemaAttributesIndex].AsObject());
    }
    m_schemaAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoVerifiedAttributes"))
  {
    Aws::Utils::Array<JsonView> autoVerifiedAttributesJsonList = jsonValue.GetArray("AutoVerifiedAttributes");
    for(unsigned autoVerifiedAttributesIndex = 0; autoVerifiedAttributesIndex < autoVerifiedAttributesJsonList.GetLength(); ++autoVerifiedAttributesIndex)
    {
      m_autoVerifiedAttributes.push_back(VerifiedAttributeTypeMapper::GetVerifiedAttributeTypeForName(autoVerifiedAttributesJsonList[autoVerifiedAttributesIndex].AsString()));
    }
    m_autoVerifiedAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AliasAttributes"))
  {
    Aws::Utils::Array<JsonView> aliasAttributesJsonList = jsonValue.GetArray("AliasAttributes");
    for(unsigned aliasAttributesIndex = 0; aliasAttributesIndex < aliasAttributesJsonList.GetLength(); ++aliasAttributesIndex)
    {
      m_aliasAttributes.push_back(AliasAttributeTypeMapper::GetAliasAttributeTypeForName(aliasAttributesJsonList[aliasAttributesIndex].AsString()));
    }
    m_aliasAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsernameAttributes"))
  {
    Aws::Utils::Array<JsonView> usernameAttributesJsonList = jsonValue.GetArray("UsernameAttributes");
    for(unsigned usernameAttributesIndex = 0; usernameAttributesIndex < usernameAttributesJsonList.GetLength(); ++usernameAttributesIndex)
    {
      m_usernameAttributes.push_back(UsernameAttributeTypeMapper::GetUsernameAttributeTypeForName(usernameAttributesJsonList[usernameAttributesIndex].AsString()));
    }
    m_usernameAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SmsVerificationMessage"))
  {
    m_smsVerificationMessage = jsonValue.GetString("SmsVerificationMessage");

    m_smsVerificationMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailVerificationMessage"))
  {
    m_emailVerificationMessage = jsonValue.GetString("EmailVerificationMessage");

    m_emailVerificationMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailVerificationSubject"))
  {
    m_emailVerificationSubject = jsonValue.GetString("EmailVerificationSubject");

    m_emailVerificationSubjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerificationMessageTemplate"))
  {
    m_verificationMessageTemplate = jsonValue.GetObject("VerificationMessageTemplate");

    m_verificationMessageTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SmsAuthenticationMessage"))
  {
    m_smsAuthenticationMessage = jsonValue.GetString("SmsAuthenticationMessage");

    m_smsAuthenticationMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserAttributeUpdateSettings"))
  {
    m_userAttributeUpdateSettings = jsonValue.GetObject("UserAttributeUpdateSettings");

    m_userAttributeUpdateSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MfaConfiguration"))
  {
    m_mfaConfiguration = UserPoolMfaTypeMapper::GetUserPoolMfaTypeForName(jsonValue.GetString("MfaConfiguration"));

    m_mfaConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceConfiguration"))
  {
    m_deviceConfiguration = jsonValue.GetObject("DeviceConfiguration");

    m_deviceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedNumberOfUsers"))
  {
    m_estimatedNumberOfUsers = jsonValue.GetInteger("EstimatedNumberOfUsers");

    m_estimatedNumberOfUsersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailConfiguration"))
  {
    m_emailConfiguration = jsonValue.GetObject("EmailConfiguration");

    m_emailConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SmsConfiguration"))
  {
    m_smsConfiguration = jsonValue.GetObject("SmsConfiguration");

    m_smsConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserPoolTags"))
  {
    Aws::Map<Aws::String, JsonView> userPoolTagsJsonMap = jsonValue.GetObject("UserPoolTags").GetAllObjects();
    for(auto& userPoolTagsItem : userPoolTagsJsonMap)
    {
      m_userPoolTags[userPoolTagsItem.first] = userPoolTagsItem.second.AsString();
    }
    m_userPoolTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SmsConfigurationFailure"))
  {
    m_smsConfigurationFailure = jsonValue.GetString("SmsConfigurationFailure");

    m_smsConfigurationFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailConfigurationFailure"))
  {
    m_emailConfigurationFailure = jsonValue.GetString("EmailConfigurationFailure");

    m_emailConfigurationFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomDomain"))
  {
    m_customDomain = jsonValue.GetString("CustomDomain");

    m_customDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdminCreateUserConfig"))
  {
    m_adminCreateUserConfig = jsonValue.GetObject("AdminCreateUserConfig");

    m_adminCreateUserConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserPoolAddOns"))
  {
    m_userPoolAddOns = jsonValue.GetObject("UserPoolAddOns");

    m_userPoolAddOnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsernameConfiguration"))
  {
    m_usernameConfiguration = jsonValue.GetObject("UsernameConfiguration");

    m_usernameConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountRecoverySetting"))
  {
    m_accountRecoverySetting = jsonValue.GetObject("AccountRecoverySetting");

    m_accountRecoverySettingHasBeenSet = true;
  }

  return *this;
}

JsonValue UserPoolType::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusTypeMapper::GetNameForStatusType(m_status));
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_schemaAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemaAttributesJsonList(m_schemaAttributes.size());
   for(unsigned schemaAttributesIndex = 0; schemaAttributesIndex < schemaAttributesJsonList.GetLength(); ++schemaAttributesIndex)
   {
     schemaAttributesJsonList[schemaAttributesIndex].AsObject(m_schemaAttributes[schemaAttributesIndex].Jsonize());
   }
   payload.WithArray("SchemaAttributes", std::move(schemaAttributesJsonList));

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

  if(m_aliasAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aliasAttributesJsonList(m_aliasAttributes.size());
   for(unsigned aliasAttributesIndex = 0; aliasAttributesIndex < aliasAttributesJsonList.GetLength(); ++aliasAttributesIndex)
   {
     aliasAttributesJsonList[aliasAttributesIndex].AsString(AliasAttributeTypeMapper::GetNameForAliasAttributeType(m_aliasAttributes[aliasAttributesIndex]));
   }
   payload.WithArray("AliasAttributes", std::move(aliasAttributesJsonList));

  }

  if(m_usernameAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usernameAttributesJsonList(m_usernameAttributes.size());
   for(unsigned usernameAttributesIndex = 0; usernameAttributesIndex < usernameAttributesJsonList.GetLength(); ++usernameAttributesIndex)
   {
     usernameAttributesJsonList[usernameAttributesIndex].AsString(UsernameAttributeTypeMapper::GetNameForUsernameAttributeType(m_usernameAttributes[usernameAttributesIndex]));
   }
   payload.WithArray("UsernameAttributes", std::move(usernameAttributesJsonList));

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

  if(m_estimatedNumberOfUsersHasBeenSet)
  {
   payload.WithInteger("EstimatedNumberOfUsers", m_estimatedNumberOfUsers);

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

  if(m_smsConfigurationFailureHasBeenSet)
  {
   payload.WithString("SmsConfigurationFailure", m_smsConfigurationFailure);

  }

  if(m_emailConfigurationFailureHasBeenSet)
  {
   payload.WithString("EmailConfigurationFailure", m_emailConfigurationFailure);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_customDomainHasBeenSet)
  {
   payload.WithString("CustomDomain", m_customDomain);

  }

  if(m_adminCreateUserConfigHasBeenSet)
  {
   payload.WithObject("AdminCreateUserConfig", m_adminCreateUserConfig.Jsonize());

  }

  if(m_userPoolAddOnsHasBeenSet)
  {
   payload.WithObject("UserPoolAddOns", m_userPoolAddOns.Jsonize());

  }

  if(m_usernameConfigurationHasBeenSet)
  {
   payload.WithObject("UsernameConfiguration", m_usernameConfiguration.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_accountRecoverySettingHasBeenSet)
  {
   payload.WithObject("AccountRecoverySetting", m_accountRecoverySetting.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
