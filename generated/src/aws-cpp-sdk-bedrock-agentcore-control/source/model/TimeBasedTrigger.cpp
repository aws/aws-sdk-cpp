/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/TimeBasedTrigger.h>
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

TimeBasedTrigger::TimeBasedTrigger(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeBasedTrigger& TimeBasedTrigger::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idleSessionTimeout"))
  {
    m_idleSessionTimeout = jsonValue.GetInteger("idleSessionTimeout");
    m_idleSessionTimeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeBasedTrigger::Jsonize() const
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
