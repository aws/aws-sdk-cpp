/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PromptTemplateConfiguration.h>
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

PromptTemplateConfiguration::PromptTemplateConfiguration() : 
    m_chatHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

PromptTemplateConfiguration::PromptTemplateConfiguration(JsonView jsonValue)
  : PromptTemplateConfiguration()
{
  *this = jsonValue;
}

PromptTemplateConfiguration& PromptTemplateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("chat"))
  {
    m_chat = jsonValue.GetObject("chat");

    m_chatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetObject("text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue PromptTemplateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_chatHasBeenSet)
  {
   payload.WithObject("chat", m_chat.Jsonize());

  }

  if(m_textHasBeenSet)
  {
   payload.WithObject("text", m_text.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
