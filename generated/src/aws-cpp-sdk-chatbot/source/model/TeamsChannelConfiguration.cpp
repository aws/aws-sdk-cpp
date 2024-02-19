/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/TeamsChannelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace chatbot
{
namespace Model
{

TeamsChannelConfiguration::TeamsChannelConfiguration() : 
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_chatConfigurationArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_snsTopicArnsHasBeenSet(false),
    m_configurationNameHasBeenSet(false),
    m_loggingLevelHasBeenSet(false),
    m_guardrailPolicyArnsHasBeenSet(false),
    m_userAuthorizationRequired(false),
    m_userAuthorizationRequiredHasBeenSet(false)
{
}

TeamsChannelConfiguration::TeamsChannelConfiguration(JsonView jsonValue) : 
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_chatConfigurationArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_snsTopicArnsHasBeenSet(false),
    m_configurationNameHasBeenSet(false),
    m_loggingLevelHasBeenSet(false),
    m_guardrailPolicyArnsHasBeenSet(false),
    m_userAuthorizationRequired(false),
    m_userAuthorizationRequiredHasBeenSet(false)
{
  *this = jsonValue;
}

TeamsChannelConfiguration& TeamsChannelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelId"))
  {
    m_channelId = jsonValue.GetString("ChannelId");

    m_channelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");

    m_channelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TeamId"))
  {
    m_teamId = jsonValue.GetString("TeamId");

    m_teamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TeamName"))
  {
    m_teamName = jsonValue.GetString("TeamName");

    m_teamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TenantId"))
  {
    m_tenantId = jsonValue.GetString("TenantId");

    m_tenantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChatConfigurationArn"))
  {
    m_chatConfigurationArn = jsonValue.GetString("ChatConfigurationArn");

    m_chatConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicArns"))
  {
    Aws::Utils::Array<JsonView> snsTopicArnsJsonList = jsonValue.GetArray("SnsTopicArns");
    for(unsigned snsTopicArnsIndex = 0; snsTopicArnsIndex < snsTopicArnsJsonList.GetLength(); ++snsTopicArnsIndex)
    {
      m_snsTopicArns.push_back(snsTopicArnsJsonList[snsTopicArnsIndex].AsString());
    }
    m_snsTopicArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationName"))
  {
    m_configurationName = jsonValue.GetString("ConfigurationName");

    m_configurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoggingLevel"))
  {
    m_loggingLevel = jsonValue.GetString("LoggingLevel");

    m_loggingLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GuardrailPolicyArns"))
  {
    Aws::Utils::Array<JsonView> guardrailPolicyArnsJsonList = jsonValue.GetArray("GuardrailPolicyArns");
    for(unsigned guardrailPolicyArnsIndex = 0; guardrailPolicyArnsIndex < guardrailPolicyArnsJsonList.GetLength(); ++guardrailPolicyArnsIndex)
    {
      m_guardrailPolicyArns.push_back(guardrailPolicyArnsJsonList[guardrailPolicyArnsIndex].AsString());
    }
    m_guardrailPolicyArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserAuthorizationRequired"))
  {
    m_userAuthorizationRequired = jsonValue.GetBool("UserAuthorizationRequired");

    m_userAuthorizationRequiredHasBeenSet = true;
  }

  return *this;
}

JsonValue TeamsChannelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("ChannelId", m_channelId);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("ChannelName", m_channelName);

  }

  if(m_teamIdHasBeenSet)
  {
   payload.WithString("TeamId", m_teamId);

  }

  if(m_teamNameHasBeenSet)
  {
   payload.WithString("TeamName", m_teamName);

  }

  if(m_tenantIdHasBeenSet)
  {
   payload.WithString("TenantId", m_tenantId);

  }

  if(m_chatConfigurationArnHasBeenSet)
  {
   payload.WithString("ChatConfigurationArn", m_chatConfigurationArn);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_snsTopicArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> snsTopicArnsJsonList(m_snsTopicArns.size());
   for(unsigned snsTopicArnsIndex = 0; snsTopicArnsIndex < snsTopicArnsJsonList.GetLength(); ++snsTopicArnsIndex)
   {
     snsTopicArnsJsonList[snsTopicArnsIndex].AsString(m_snsTopicArns[snsTopicArnsIndex]);
   }
   payload.WithArray("SnsTopicArns", std::move(snsTopicArnsJsonList));

  }

  if(m_configurationNameHasBeenSet)
  {
   payload.WithString("ConfigurationName", m_configurationName);

  }

  if(m_loggingLevelHasBeenSet)
  {
   payload.WithString("LoggingLevel", m_loggingLevel);

  }

  if(m_guardrailPolicyArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> guardrailPolicyArnsJsonList(m_guardrailPolicyArns.size());
   for(unsigned guardrailPolicyArnsIndex = 0; guardrailPolicyArnsIndex < guardrailPolicyArnsJsonList.GetLength(); ++guardrailPolicyArnsIndex)
   {
     guardrailPolicyArnsJsonList[guardrailPolicyArnsIndex].AsString(m_guardrailPolicyArns[guardrailPolicyArnsIndex]);
   }
   payload.WithArray("GuardrailPolicyArns", std::move(guardrailPolicyArnsJsonList));

  }

  if(m_userAuthorizationRequiredHasBeenSet)
  {
   payload.WithBool("UserAuthorizationRequired", m_userAuthorizationRequired);

  }

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws
