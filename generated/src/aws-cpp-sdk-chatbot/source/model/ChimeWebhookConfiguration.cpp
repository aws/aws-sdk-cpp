/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/ChimeWebhookConfiguration.h>
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

ChimeWebhookConfiguration::ChimeWebhookConfiguration() : 
    m_webhookDescriptionHasBeenSet(false),
    m_chatConfigurationArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_snsTopicArnsHasBeenSet(false),
    m_configurationNameHasBeenSet(false),
    m_loggingLevelHasBeenSet(false)
{
}

ChimeWebhookConfiguration::ChimeWebhookConfiguration(JsonView jsonValue) : 
    m_webhookDescriptionHasBeenSet(false),
    m_chatConfigurationArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_snsTopicArnsHasBeenSet(false),
    m_configurationNameHasBeenSet(false),
    m_loggingLevelHasBeenSet(false)
{
  *this = jsonValue;
}

ChimeWebhookConfiguration& ChimeWebhookConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WebhookDescription"))
  {
    m_webhookDescription = jsonValue.GetString("WebhookDescription");

    m_webhookDescriptionHasBeenSet = true;
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

  return *this;
}

JsonValue ChimeWebhookConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_webhookDescriptionHasBeenSet)
  {
   payload.WithString("WebhookDescription", m_webhookDescription);

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

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws
