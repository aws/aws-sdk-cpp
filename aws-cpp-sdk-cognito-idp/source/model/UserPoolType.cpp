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
    m_lambdaConfigHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_schemaAttributesHasBeenSet(false),
    m_autoVerifiedAttributesHasBeenSet(false),
    m_aliasAttributesHasBeenSet(false),
    m_smsVerificationMessageHasBeenSet(false),
    m_emailVerificationMessageHasBeenSet(false),
    m_emailVerificationSubjectHasBeenSet(false),
    m_smsAuthenticationMessageHasBeenSet(false),
    m_mfaConfiguration(UserPoolMfaType::NOT_SET),
    m_mfaConfigurationHasBeenSet(false),
    m_deviceConfigurationHasBeenSet(false),
    m_estimatedNumberOfUsers(0),
    m_estimatedNumberOfUsersHasBeenSet(false),
    m_emailConfigurationHasBeenSet(false),
    m_smsConfigurationHasBeenSet(false),
    m_smsConfigurationFailureHasBeenSet(false),
    m_emailConfigurationFailureHasBeenSet(false),
    m_adminCreateUserConfigHasBeenSet(false)
{
}

UserPoolType::UserPoolType(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policiesHasBeenSet(false),
    m_lambdaConfigHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_schemaAttributesHasBeenSet(false),
    m_autoVerifiedAttributesHasBeenSet(false),
    m_aliasAttributesHasBeenSet(false),
    m_smsVerificationMessageHasBeenSet(false),
    m_emailVerificationMessageHasBeenSet(false),
    m_emailVerificationSubjectHasBeenSet(false),
    m_smsAuthenticationMessageHasBeenSet(false),
    m_mfaConfiguration(UserPoolMfaType::NOT_SET),
    m_mfaConfigurationHasBeenSet(false),
    m_deviceConfigurationHasBeenSet(false),
    m_estimatedNumberOfUsers(0),
    m_estimatedNumberOfUsersHasBeenSet(false),
    m_emailConfigurationHasBeenSet(false),
    m_smsConfigurationHasBeenSet(false),
    m_smsConfigurationFailureHasBeenSet(false),
    m_emailConfigurationFailureHasBeenSet(false),
    m_adminCreateUserConfigHasBeenSet(false)
{
  *this = jsonValue;
}

UserPoolType& UserPoolType::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> schemaAttributesJsonList = jsonValue.GetArray("SchemaAttributes");
    for(unsigned schemaAttributesIndex = 0; schemaAttributesIndex < schemaAttributesJsonList.GetLength(); ++schemaAttributesIndex)
    {
      m_schemaAttributes.push_back(schemaAttributesJsonList[schemaAttributesIndex].AsObject());
    }
    m_schemaAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoVerifiedAttributes"))
  {
    Array<JsonValue> autoVerifiedAttributesJsonList = jsonValue.GetArray("AutoVerifiedAttributes");
    for(unsigned autoVerifiedAttributesIndex = 0; autoVerifiedAttributesIndex < autoVerifiedAttributesJsonList.GetLength(); ++autoVerifiedAttributesIndex)
    {
      m_autoVerifiedAttributes.push_back(VerifiedAttributeTypeMapper::GetVerifiedAttributeTypeForName(autoVerifiedAttributesJsonList[autoVerifiedAttributesIndex].AsString()));
    }
    m_autoVerifiedAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AliasAttributes"))
  {
    Array<JsonValue> aliasAttributesJsonList = jsonValue.GetArray("AliasAttributes");
    for(unsigned aliasAttributesIndex = 0; aliasAttributesIndex < aliasAttributesJsonList.GetLength(); ++aliasAttributesIndex)
    {
      m_aliasAttributes.push_back(AliasAttributeTypeMapper::GetAliasAttributeTypeForName(aliasAttributesJsonList[aliasAttributesIndex].AsString()));
    }
    m_aliasAttributesHasBeenSet = true;
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

  if(jsonValue.ValueExists("SmsAuthenticationMessage"))
  {
    m_smsAuthenticationMessage = jsonValue.GetString("SmsAuthenticationMessage");

    m_smsAuthenticationMessageHasBeenSet = true;
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

  if(jsonValue.ValueExists("AdminCreateUserConfig"))
  {
    m_adminCreateUserConfig = jsonValue.GetObject("AdminCreateUserConfig");

    m_adminCreateUserConfigHasBeenSet = true;
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
   Array<JsonValue> schemaAttributesJsonList(m_schemaAttributes.size());
   for(unsigned schemaAttributesIndex = 0; schemaAttributesIndex < schemaAttributesJsonList.GetLength(); ++schemaAttributesIndex)
   {
     schemaAttributesJsonList[schemaAttributesIndex].AsObject(m_schemaAttributes[schemaAttributesIndex].Jsonize());
   }
   payload.WithArray("SchemaAttributes", std::move(schemaAttributesJsonList));

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

  if(m_smsConfigurationFailureHasBeenSet)
  {
   payload.WithString("SmsConfigurationFailure", m_smsConfigurationFailure);

  }

  if(m_emailConfigurationFailureHasBeenSet)
  {
   payload.WithString("EmailConfigurationFailure", m_emailConfigurationFailure);

  }

  if(m_adminCreateUserConfigHasBeenSet)
  {
   payload.WithObject("AdminCreateUserConfig", m_adminCreateUserConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws