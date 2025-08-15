/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ChatPromptTemplateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

ChatPromptTemplateConfiguration::ChatPromptTemplateConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ChatPromptTemplateConfiguration& ChatPromptTemplateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messages"))
  {
    Aws::Utils::Array<JsonView> messagesJsonList = jsonValue.GetArray("messages");
    for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
    {
      m_messages.push_back(messagesJsonList[messagesIndex].AsObject());
    }
    m_messagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("system"))
  {
    Aws::Utils::Array<JsonView> systemJsonList = jsonValue.GetArray("system");
    for(unsigned systemIndex = 0; systemIndex < systemJsonList.GetLength(); ++systemIndex)
    {
      m_system.push_back(systemJsonList[systemIndex].AsObject());
    }
    m_systemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputVariables"))
  {
    Aws::Utils::Array<JsonView> inputVariablesJsonList = jsonValue.GetArray("inputVariables");
    for(unsigned inputVariablesIndex = 0; inputVariablesIndex < inputVariablesJsonList.GetLength(); ++inputVariablesIndex)
    {
      m_inputVariables.push_back(inputVariablesJsonList[inputVariablesIndex].AsObject());
    }
    m_inputVariablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("toolConfiguration"))
  {
    m_toolConfiguration = jsonValue.GetObject("toolConfiguration");
    m_toolConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ChatPromptTemplateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_messagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
   for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
   {
     messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
   }
   payload.WithArray("messages", std::move(messagesJsonList));

  }

  if(m_systemHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> systemJsonList(m_system.size());
   for(unsigned systemIndex = 0; systemIndex < systemJsonList.GetLength(); ++systemIndex)
   {
     systemJsonList[systemIndex].AsObject(m_system[systemIndex].Jsonize());
   }
   payload.WithArray("system", std::move(systemJsonList));

  }

  if(m_inputVariablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputVariablesJsonList(m_inputVariables.size());
   for(unsigned inputVariablesIndex = 0; inputVariablesIndex < inputVariablesJsonList.GetLength(); ++inputVariablesIndex)
   {
     inputVariablesJsonList[inputVariablesIndex].AsObject(m_inputVariables[inputVariablesIndex].Jsonize());
   }
   payload.WithArray("inputVariables", std::move(inputVariablesJsonList));

  }

  if(m_toolConfigurationHasBeenSet)
  {
   payload.WithObject("toolConfiguration", m_toolConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
