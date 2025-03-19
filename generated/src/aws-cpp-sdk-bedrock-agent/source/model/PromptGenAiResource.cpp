/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PromptGenAiResource.h>
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

PromptGenAiResource::PromptGenAiResource(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptGenAiResource& PromptGenAiResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agent"))
  {
    m_agent = jsonValue.GetObject("agent");
    m_agentHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptGenAiResource::Jsonize() const
{
  JsonValue payload;

  if(m_agentHasBeenSet)
  {
   payload.WithObject("agent", m_agent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
