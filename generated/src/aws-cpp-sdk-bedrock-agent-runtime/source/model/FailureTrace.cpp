/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FailureTrace.h>
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

FailureTrace::FailureTrace() : 
    m_failureReasonHasBeenSet(false),
    m_traceIdHasBeenSet(false)
{
}

FailureTrace::FailureTrace(JsonView jsonValue) : 
    m_failureReasonHasBeenSet(false),
    m_traceIdHasBeenSet(false)
{
  *this = jsonValue;
}

FailureTrace& FailureTrace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("traceId"))
  {
    m_traceId = jsonValue.GetString("traceId");

    m_traceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue FailureTrace::Jsonize() const
{
  JsonValue payload;

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_traceIdHasBeenSet)
  {
   payload.WithString("traceId", m_traceId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
