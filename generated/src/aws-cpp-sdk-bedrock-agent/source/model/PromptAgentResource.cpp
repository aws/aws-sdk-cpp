/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PromptAgentResource.h>
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

PromptAgentResource::PromptAgentResource(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptAgentResource& PromptAgentResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentIdentifier"))
  {
    m_agentIdentifier = jsonValue.GetString("agentIdentifier");
    m_agentIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptAgentResource::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdentifierHasBeenSet)
  {
   payload.WithString("agentIdentifier", m_agentIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
