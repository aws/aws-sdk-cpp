/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/TokenBasedTriggerInput.h>
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

TokenBasedTriggerInput::TokenBasedTriggerInput(JsonView jsonValue)
{
  *this = jsonValue;
}

TokenBasedTriggerInput& TokenBasedTriggerInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tokenCount"))
  {
    m_tokenCount = jsonValue.GetInteger("tokenCount");
    m_tokenCountHasBeenSet = true;
  }
  return *this;
}

JsonValue TokenBasedTriggerInput::Jsonize() const
{
  JsonValue payload;

  if(m_tokenCountHasBeenSet)
  {
   payload.WithInteger("tokenCount", m_tokenCount);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
