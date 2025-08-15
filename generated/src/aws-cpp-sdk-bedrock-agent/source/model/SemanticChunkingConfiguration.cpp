/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SemanticChunkingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

SemanticChunkingConfiguration::SemanticChunkingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SemanticChunkingConfiguration& SemanticChunkingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxTokens"))
  {
    m_maxTokens = jsonValue.GetInteger("maxTokens");
    m_maxTokensHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bufferSize"))
  {
    m_bufferSize = jsonValue.GetInteger("bufferSize");
    m_bufferSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("breakpointPercentileThreshold"))
  {
    m_breakpointPercentileThreshold = jsonValue.GetInteger("breakpointPercentileThreshold");
    m_breakpointPercentileThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue SemanticChunkingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_maxTokensHasBeenSet)
  {
   payload.WithInteger("maxTokens", m_maxTokens);

  }

  if(m_bufferSizeHasBeenSet)
  {
   payload.WithInteger("bufferSize", m_bufferSize);

  }

  if(m_breakpointPercentileThresholdHasBeenSet)
  {
   payload.WithInteger("breakpointPercentileThreshold", m_breakpointPercentileThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
