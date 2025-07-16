/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DeleteMemoryStrategyInput.h>
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

DeleteMemoryStrategyInput::DeleteMemoryStrategyInput(JsonView jsonValue)
{
  *this = jsonValue;
}

DeleteMemoryStrategyInput& DeleteMemoryStrategyInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("memoryStrategyId"))
  {
    m_memoryStrategyId = jsonValue.GetString("memoryStrategyId");
    m_memoryStrategyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DeleteMemoryStrategyInput::Jsonize() const
{
  JsonValue payload;

  if(m_memoryStrategyIdHasBeenSet)
  {
   payload.WithString("memoryStrategyId", m_memoryStrategyId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
