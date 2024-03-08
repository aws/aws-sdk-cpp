/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/CreateMicrosoftTeamsChannelConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMicrosoftTeamsChannelConfigurationRequest::CreateMicrosoftTeamsChannelConfigurationRequest() : 
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_snsTopicArnsHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_configurationNameHasBeenSet(false),
    m_loggingLevelHasBeenSet(false),
    m_guardrailPolicyArnsHasBeenSet(false),
    m_userAuthorizationRequired(false),
    m_userAuthorizationRequiredHasBeenSet(false)
{
}

Aws::String CreateMicrosoftTeamsChannelConfigurationRequest::SerializePayload() const
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

  if(m_snsTopicArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> snsTopicArnsJsonList(m_snsTopicArns.size());
   for(unsigned snsTopicArnsIndex = 0; snsTopicArnsIndex < snsTopicArnsJsonList.GetLength(); ++snsTopicArnsIndex)
   {
     snsTopicArnsJsonList[snsTopicArnsIndex].AsString(m_snsTopicArns[snsTopicArnsIndex]);
   }
   payload.WithArray("SnsTopicArns", std::move(snsTopicArnsJsonList));

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

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

  return payload.View().WriteReadable();
}




