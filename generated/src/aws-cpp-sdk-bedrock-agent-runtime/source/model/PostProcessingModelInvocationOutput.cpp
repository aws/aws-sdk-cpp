/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PostProcessingModelInvocationOutput.h>
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

PostProcessingModelInvocationOutput::PostProcessingModelInvocationOutput() : 
    m_traceIdHasBeenSet(false),
    m_parsedResponseHasBeenSet(false)
{
}

PostProcessingModelInvocationOutput::PostProcessingModelInvocationOutput(JsonView jsonValue) : 
    m_traceIdHasBeenSet(false),
    m_parsedResponseHasBeenSet(false)
{
  *this = jsonValue;
}

PostProcessingModelInvocationOutput& PostProcessingModelInvocationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("traceId"))
  {
    m_traceId = jsonValue.GetString("traceId");

    m_traceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parsedResponse"))
  {
    m_parsedResponse = jsonValue.GetObject("parsedResponse");

    m_parsedResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue PostProcessingModelInvocationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_traceIdHasBeenSet)
  {
   payload.WithString("traceId", m_traceId);

  }

  if(m_parsedResponseHasBeenSet)
  {
   payload.WithObject("parsedResponse", m_parsedResponse.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
