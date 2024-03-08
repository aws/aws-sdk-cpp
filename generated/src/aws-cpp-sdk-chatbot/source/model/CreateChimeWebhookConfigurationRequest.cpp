/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/CreateChimeWebhookConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateChimeWebhookConfigurationRequest::CreateChimeWebhookConfigurationRequest() : 
    m_webhookDescriptionHasBeenSet(false),
    m_webhookUrlHasBeenSet(false),
    m_snsTopicArnsHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_configurationNameHasBeenSet(false),
    m_loggingLevelHasBeenSet(false)
{
}

Aws::String CreateChimeWebhookConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_webhookDescriptionHasBeenSet)
  {
   payload.WithString("WebhookDescription", m_webhookDescription);

  }

  if(m_webhookUrlHasBeenSet)
  {
   payload.WithString("WebhookUrl", m_webhookUrl);

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

  return payload.View().WriteReadable();
}




