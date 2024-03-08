/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/OrchestrationTrace.h>
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

OrchestrationTrace::OrchestrationTrace() : 
    m_invocationInputHasBeenSet(false),
    m_modelInvocationInputHasBeenSet(false),
    m_observationHasBeenSet(false),
    m_rationaleHasBeenSet(false)
{
}

OrchestrationTrace::OrchestrationTrace(JsonView jsonValue) : 
    m_invocationInputHasBeenSet(false),
    m_modelInvocationInputHasBeenSet(false),
    m_observationHasBeenSet(false),
    m_rationaleHasBeenSet(false)
{
  *this = jsonValue;
}

OrchestrationTrace& OrchestrationTrace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invocationInput"))
  {
    m_invocationInput = jsonValue.GetObject("invocationInput");

    m_invocationInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelInvocationInput"))
  {
    m_modelInvocationInput = jsonValue.GetObject("modelInvocationInput");

    m_modelInvocationInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("observation"))
  {
    m_observation = jsonValue.GetObject("observation");

    m_observationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rationale"))
  {
    m_rationale = jsonValue.GetObject("rationale");

    m_rationaleHasBeenSet = true;
  }

  return *this;
}

JsonValue OrchestrationTrace::Jsonize() const
{
  JsonValue payload;

  if(m_invocationInputHasBeenSet)
  {
   payload.WithObject("invocationInput", m_invocationInput.Jsonize());

  }

  if(m_modelInvocationInputHasBeenSet)
  {
   payload.WithObject("modelInvocationInput", m_modelInvocationInput.Jsonize());

  }

  if(m_observationHasBeenSet)
  {
   payload.WithObject("observation", m_observation.Jsonize());

  }

  if(m_rationaleHasBeenSet)
  {
   payload.WithObject("rationale", m_rationale.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
