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

ChimeWebhookConfiguration::ChimeWebhookConfiguration(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");
    m_stateReasonHasBeenSet = true;
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws
