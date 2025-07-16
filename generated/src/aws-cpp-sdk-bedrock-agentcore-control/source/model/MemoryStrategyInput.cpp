/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MemoryStrategyInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

MemoryStrategyInput::MemoryStrategyInput(JsonView jsonValue)
{
  *this = jsonValue;
}

MemoryStrategyInput& MemoryStrategyInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("semanticMemoryStrategy"))
  {
    m_semanticMemoryStrategy = jsonValue.GetObject("semanticMemoryStrategy");
    m_semanticMemoryStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("summaryMemoryStrategy"))
  {
    m_summaryMemoryStrategy = jsonValue.GetObject("summaryMemoryStrategy");
    m_summaryMemoryStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userPreferenceMemoryStrategy"))
  {
    m_userPreferenceMemoryStrategy = jsonValue.GetObject("userPreferenceMemoryStrategy");
    m_userPreferenceMemoryStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customMemoryStrategy"))
  {
    m_customMemoryStrategy = jsonValue.GetObject("customMemoryStrategy");
    m_customMemoryStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryStrategyInput::Jsonize() const
{
  JsonValue payload;

  if(m_semanticMemoryStrategyHasBeenSet)
  {
   payload.WithObject("semanticMemoryStrategy", m_semanticMemoryStrategy.Jsonize());

  }

  if(m_summaryMemoryStrategyHasBeenSet)
  {
   payload.WithObject("summaryMemoryStrategy", m_summaryMemoryStrategy.Jsonize());

  }

  if(m_userPreferenceMemoryStrategyHasBeenSet)
  {
   payload.WithObject("userPreferenceMemoryStrategy", m_userPreferenceMemoryStrategy.Jsonize());

  }

  if(m_customMemoryStrategyHasBeenSet)
  {
   payload.WithObject("customMemoryStrategy", m_customMemoryStrategy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
