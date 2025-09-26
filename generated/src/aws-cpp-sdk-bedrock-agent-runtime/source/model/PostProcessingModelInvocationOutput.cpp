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

PostProcessingModelInvocationOutput::PostProcessingModelInvocationOutput(JsonView jsonValue)
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
  if(jsonValue.ValueExists("rawResponse"))
  {
    m_rawResponse = jsonValue.GetObject("rawResponse");
    m_rawResponseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reasoningContent"))
  {
    m_reasoningContent = jsonValue.GetObject("reasoningContent");
    m_reasoningContentHasBeenSet = true;
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

  if(m_rawResponseHasBeenSet)
  {
   payload.WithObject("rawResponse", m_rawResponse.Jsonize());

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  if(m_reasoningContentHasBeenSet)
  {
   payload.WithObject("reasoningContent", m_reasoningContent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
