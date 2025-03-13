/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailInvocationMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

GuardrailInvocationMetrics::GuardrailInvocationMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailInvocationMetrics& GuardrailInvocationMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("guardrailProcessingLatency"))
  {
    m_guardrailProcessingLatency = jsonValue.GetInt64("guardrailProcessingLatency");
    m_guardrailProcessingLatencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usage"))
  {
    m_usage = jsonValue.GetObject("usage");
    m_usageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardrailCoverage"))
  {
    m_guardrailCoverage = jsonValue.GetObject("guardrailCoverage");
    m_guardrailCoverageHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailInvocationMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_guardrailProcessingLatencyHasBeenSet)
  {
   payload.WithInt64("guardrailProcessingLatency", m_guardrailProcessingLatency);

  }

  if(m_usageHasBeenSet)
  {
   payload.WithObject("usage", m_usage.Jsonize());

  }

  if(m_guardrailCoverageHasBeenSet)
  {
   payload.WithObject("guardrailCoverage", m_guardrailCoverage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
