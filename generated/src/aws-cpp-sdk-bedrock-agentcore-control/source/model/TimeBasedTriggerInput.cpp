/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/TimeBasedTriggerInput.h>
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

TimeBasedTriggerInput::TimeBasedTriggerInput(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeBasedTriggerInput& TimeBasedTriggerInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idleSessionTimeout"))
  {
    m_idleSessionTimeout = jsonValue.GetInteger("idleSessionTimeout");
    m_idleSessionTimeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeBasedTriggerInput::Jsonize() const
{
  JsonValue payload;

  if(m_idleSessionTimeoutHasBeenSet)
  {
   payload.WithInteger("idleSessionTimeout", m_idleSessionTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
