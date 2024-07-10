/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/TextPromptTemplateConfiguration.h>
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

TextPromptTemplateConfiguration::TextPromptTemplateConfiguration() : 
    m_inputVariablesHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

TextPromptTemplateConfiguration::TextPromptTemplateConfiguration(JsonView jsonValue)
  : TextPromptTemplateConfiguration()
{
  *this = jsonValue;
}

TextPromptTemplateConfiguration& TextPromptTemplateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputVariables"))
  {
    Aws::Utils::Array<JsonView> inputVariablesJsonList = jsonValue.GetArray("inputVariables");
    for(unsigned inputVariablesIndex = 0; inputVariablesIndex < inputVariablesJsonList.GetLength(); ++inputVariablesIndex)
    {
      m_inputVariables.push_back(inputVariablesJsonList[inputVariablesIndex].AsObject());
    }
    m_inputVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue TextPromptTemplateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inputVariablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputVariablesJsonList(m_inputVariables.size());
   for(unsigned inputVariablesIndex = 0; inputVariablesIndex < inputVariablesJsonList.GetLength(); ++inputVariablesIndex)
   {
     inputVariablesJsonList[inputVariablesIndex].AsObject(m_inputVariables[inputVariablesIndex].Jsonize());
   }
   payload.WithArray("inputVariables", std::move(inputVariablesJsonList));

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
