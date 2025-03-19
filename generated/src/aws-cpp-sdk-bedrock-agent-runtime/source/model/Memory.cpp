/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/Memory.h>
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

Memory::Memory(JsonView jsonValue)
{
  *this = jsonValue;
}

Memory& Memory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionSummary"))
  {
    m_sessionSummary = jsonValue.GetObject("sessionSummary");
    m_sessionSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue Memory::Jsonize() const
{
  JsonValue payload;

  if(m_sessionSummaryHasBeenSet)
  {
   payload.WithObject("sessionSummary", m_sessionSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
