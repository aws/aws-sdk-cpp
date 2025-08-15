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

PromptTemplateConfiguration::PromptTemplateConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptTemplateConfiguration& PromptTemplateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetObject("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("chat"))
  {
    m_chat = jsonValue.GetObject("chat");
    m_chatHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptTemplateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithObject("text", m_text.Jsonize());

  }

  if(m_chatHasBeenSet)
  {
   payload.WithObject("chat", m_chat.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
