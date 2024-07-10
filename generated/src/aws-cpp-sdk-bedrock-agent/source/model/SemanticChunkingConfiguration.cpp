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

SemanticChunkingConfiguration::SemanticChunkingConfiguration() : 
    m_breakpointPercentileThreshold(0),
    m_breakpointPercentileThresholdHasBeenSet(false),
    m_bufferSize(0),
    m_bufferSizeHasBeenSet(false),
    m_maxTokens(0),
    m_maxTokensHasBeenSet(false)
{
}

SemanticChunkingConfiguration::SemanticChunkingConfiguration(JsonView jsonValue)
  : SemanticChunkingConfiguration()
{
  *this = jsonValue;
}

SemanticChunkingConfiguration& SemanticChunkingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("breakpointPercentileThreshold"))
  {
    m_breakpointPercentileThreshold = jsonValue.GetInteger("breakpointPercentileThreshold");

    m_breakpointPercentileThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bufferSize"))
  {
    m_bufferSize = jsonValue.GetInteger("bufferSize");

    m_bufferSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxTokens"))
  {
    m_maxTokens = jsonValue.GetInteger("maxTokens");

    m_maxTokensHasBeenSet = true;
  }

  return *this;
}

JsonValue SemanticChunkingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_breakpointPercentileThresholdHasBeenSet)
  {
   payload.WithInteger("breakpointPercentileThreshold", m_breakpointPercentileThreshold);

  }

  if(m_bufferSizeHasBeenSet)
  {
   payload.WithInteger("bufferSize", m_bufferSize);

  }

  if(m_maxTokensHasBeenSet)
  {
   payload.WithInteger("maxTokens", m_maxTokens);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
