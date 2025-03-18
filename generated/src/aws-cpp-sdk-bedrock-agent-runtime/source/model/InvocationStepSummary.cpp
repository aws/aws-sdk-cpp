/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvocationStepSummary.h>
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

InvocationStepSummary::InvocationStepSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

InvocationStepSummary& InvocationStepSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invocationId"))
  {
    m_invocationId = jsonValue.GetString("invocationId");
    m_invocationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("invocationStepId"))
  {
    m_invocationStepId = jsonValue.GetString("invocationStepId");
    m_invocationStepIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("invocationStepTime"))
  {
    m_invocationStepTime = jsonValue.GetString("invocationStepTime");
    m_invocationStepTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  return *this;
}

JsonValue InvocationStepSummary::Jsonize() const
{
  JsonValue payload;

  if(m_invocationIdHasBeenSet)
  {
   payload.WithString("invocationId", m_invocationId);

  }

  if(m_invocationStepIdHasBeenSet)
  {
   payload.WithString("invocationStepId", m_invocationStepId);

  }

  if(m_invocationStepTimeHasBeenSet)
  {
   payload.WithString("invocationStepTime", m_invocationStepTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
