﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PromptTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

PromptTemplate::PromptTemplate() : 
    m_textPromptTemplateHasBeenSet(false)
{
}

PromptTemplate::PromptTemplate(JsonView jsonValue)
  : PromptTemplate()
{
  *this = jsonValue;
}

PromptTemplate& PromptTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textPromptTemplate"))
  {
    m_textPromptTemplate = jsonValue.GetString("textPromptTemplate");

    m_textPromptTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue PromptTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_textPromptTemplateHasBeenSet)
  {
   payload.WithString("textPromptTemplate", m_textPromptTemplate);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
