/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AgentTurnResult.h>
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

AgentTurnResult::AgentTurnResult() : 
    m_expectedAgentPromptHasBeenSet(false),
    m_actualAgentPromptHasBeenSet(false),
    m_errorDetailsHasBeenSet(false),
    m_actualElicitedSlotHasBeenSet(false),
    m_actualIntentHasBeenSet(false)
{
}

AgentTurnResult::AgentTurnResult(JsonView jsonValue) : 
    m_expectedAgentPromptHasBeenSet(false),
    m_actualAgentPromptHasBeenSet(false),
    m_errorDetailsHasBeenSet(false),
    m_actualElicitedSlotHasBeenSet(false),
    m_actualIntentHasBeenSet(false)
{
  *this = jsonValue;
}

AgentTurnResult& AgentTurnResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expectedAgentPrompt"))
  {
    m_expectedAgentPrompt = jsonValue.GetString("expectedAgentPrompt");

    m_expectedAgentPromptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actualAgentPrompt"))
  {
    m_actualAgentPrompt = jsonValue.GetString("actualAgentPrompt");

    m_actualAgentPromptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorDetails"))
  {
    m_errorDetails = jsonValue.GetObject("errorDetails");

    m_errorDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actualElicitedSlot"))
  {
    m_actualElicitedSlot = jsonValue.GetString("actualElicitedSlot");

    m_actualElicitedSlotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actualIntent"))
  {
    m_actualIntent = jsonValue.GetString("actualIntent");

    m_actualIntentHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentTurnResult::Jsonize() const
{
  JsonValue payload;

  if(m_expectedAgentPromptHasBeenSet)
  {
   payload.WithString("expectedAgentPrompt", m_expectedAgentPrompt);

  }

  if(m_actualAgentPromptHasBeenSet)
  {
   payload.WithString("actualAgentPrompt", m_actualAgentPrompt);

  }

  if(m_errorDetailsHasBeenSet)
  {
   payload.WithObject("errorDetails", m_errorDetails.Jsonize());

  }

  if(m_actualElicitedSlotHasBeenSet)
  {
   payload.WithString("actualElicitedSlot", m_actualElicitedSlot);

  }

  if(m_actualIntentHasBeenSet)
  {
   payload.WithString("actualIntent", m_actualIntent);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
