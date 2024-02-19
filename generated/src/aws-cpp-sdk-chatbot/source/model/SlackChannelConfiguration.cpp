/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/SlackChannelConfiguration.h>
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

SlackChannelConfiguration::SlackChannelConfiguration() : 
    m_slackTeamNameHasBeenSet(false),
    m_slackTeamIdHasBeenSet(false),
    m_slackChannelIdHasBeenSet(false),
    m_slackChannelNameHasBeenSet(false),
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

SlackChannelConfiguration::SlackChannelConfiguration(JsonView jsonValue) : 
    m_slackTeamNameHasBeenSet(false),
    m_slackTeamIdHasBeenSet(false),
    m_slackChannelIdHasBeenSet(false),
    m_slackChannelNameHasBeenSet(false),
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

SlackChannelConfiguration& SlackChannelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SlackTeamName"))
  {
    m_slackTeamName = jsonValue.GetString("SlackTeamName");

    m_slackTeamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SlackTeamId"))
  {
    m_slackTeamId = jsonValue.GetString("SlackTeamId");

    m_slackTeamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SlackChannelId"))
  {
    m_slackChannelId = jsonValue.GetString("SlackChannelId");

    m_slackChannelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SlackChannelName"))
  {
    m_slackChannelName = jsonValue.GetString("SlackChannelName");

    m_slackChannelNameHasBeenSet = true;
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

JsonValue SlackChannelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_slackTeamNameHasBeenSet)
  {
   payload.WithString("SlackTeamName", m_slackTeamName);

  }

  if(m_slackTeamIdHasBeenSet)
  {
   payload.WithString("SlackTeamId", m_slackTeamId);

  }

  if(m_slackChannelIdHasBeenSet)
  {
   payload.WithString("SlackChannelId", m_slackChannelId);

  }

  if(m_slackChannelNameHasBeenSet)
  {
   payload.WithString("SlackChannelName", m_slackChannelName);

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
