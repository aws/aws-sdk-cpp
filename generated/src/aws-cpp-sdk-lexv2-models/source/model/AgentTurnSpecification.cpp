/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AgentTurnSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

AgentTurnSpecification::AgentTurnSpecification() : 
    m_agentPromptHasBeenSet(false)
{
}

AgentTurnSpecification::AgentTurnSpecification(JsonView jsonValue) : 
    m_agentPromptHasBeenSet(false)
{
  *this = jsonValue;
}

AgentTurnSpecification& AgentTurnSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentPrompt"))
  {
    m_agentPrompt = jsonValue.GetString("agentPrompt");

    m_agentPromptHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentTurnSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_agentPromptHasBeenSet)
  {
   payload.WithString("agentPrompt", m_agentPrompt);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
