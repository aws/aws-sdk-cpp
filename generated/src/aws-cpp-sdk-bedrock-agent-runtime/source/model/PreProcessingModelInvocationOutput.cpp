/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PreProcessingModelInvocationOutput.h>
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

PreProcessingModelInvocationOutput::PreProcessingModelInvocationOutput() : 
    m_parsedResponseHasBeenSet(false),
    m_traceIdHasBeenSet(false)
{
}

PreProcessingModelInvocationOutput::PreProcessingModelInvocationOutput(JsonView jsonValue) : 
    m_parsedResponseHasBeenSet(false),
    m_traceIdHasBeenSet(false)
{
  *this = jsonValue;
}

PreProcessingModelInvocationOutput& PreProcessingModelInvocationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parsedResponse"))
  {
    m_parsedResponse = jsonValue.GetObject("parsedResponse");

    m_parsedResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("traceId"))
  {
    m_traceId = jsonValue.GetString("traceId");

    m_traceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PreProcessingModelInvocationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_parsedResponseHasBeenSet)
  {
   payload.WithObject("parsedResponse", m_parsedResponse.Jsonize());

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
