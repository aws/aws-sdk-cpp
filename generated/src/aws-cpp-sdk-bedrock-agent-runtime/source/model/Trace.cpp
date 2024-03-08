/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/Trace.h>
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

Trace::Trace() : 
    m_failureTraceHasBeenSet(false),
    m_orchestrationTraceHasBeenSet(false),
    m_postProcessingTraceHasBeenSet(false),
    m_preProcessingTraceHasBeenSet(false)
{
}

Trace::Trace(JsonView jsonValue) : 
    m_failureTraceHasBeenSet(false),
    m_orchestrationTraceHasBeenSet(false),
    m_postProcessingTraceHasBeenSet(false),
    m_preProcessingTraceHasBeenSet(false)
{
  *this = jsonValue;
}

Trace& Trace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failureTrace"))
  {
    m_failureTrace = jsonValue.GetObject("failureTrace");

    m_failureTraceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orchestrationTrace"))
  {
    m_orchestrationTrace = jsonValue.GetObject("orchestrationTrace");

    m_orchestrationTraceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postProcessingTrace"))
  {
    m_postProcessingTrace = jsonValue.GetObject("postProcessingTrace");

    m_postProcessingTraceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preProcessingTrace"))
  {
    m_preProcessingTrace = jsonValue.GetObject("preProcessingTrace");

    m_preProcessingTraceHasBeenSet = true;
  }

  return *this;
}

JsonValue Trace::Jsonize() const
{
  JsonValue payload;

  if(m_failureTraceHasBeenSet)
  {
   payload.WithObject("failureTrace", m_failureTrace.Jsonize());

  }

  if(m_orchestrationTraceHasBeenSet)
  {
   payload.WithObject("orchestrationTrace", m_orchestrationTrace.Jsonize());

  }

  if(m_postProcessingTraceHasBeenSet)
  {
   payload.WithObject("postProcessingTrace", m_postProcessingTrace.Jsonize());

  }

  if(m_preProcessingTraceHasBeenSet)
  {
   payload.WithObject("preProcessingTrace", m_preProcessingTrace.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
