/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FixedSizeChunkingConfiguration.h>
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

FixedSizeChunkingConfiguration::FixedSizeChunkingConfiguration() : 
    m_maxTokens(0),
    m_maxTokensHasBeenSet(false),
    m_overlapPercentage(0),
    m_overlapPercentageHasBeenSet(false)
{
}

FixedSizeChunkingConfiguration::FixedSizeChunkingConfiguration(JsonView jsonValue) : 
    m_maxTokens(0),
    m_maxTokensHasBeenSet(false),
    m_overlapPercentage(0),
    m_overlapPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

FixedSizeChunkingConfiguration& FixedSizeChunkingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxTokens"))
  {
    m_maxTokens = jsonValue.GetInteger("maxTokens");

    m_maxTokensHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overlapPercentage"))
  {
    m_overlapPercentage = jsonValue.GetInteger("overlapPercentage");

    m_overlapPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue FixedSizeChunkingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_maxTokensHasBeenSet)
  {
   payload.WithInteger("maxTokens", m_maxTokens);

  }

  if(m_overlapPercentageHasBeenSet)
  {
   payload.WithInteger("overlapPercentage", m_overlapPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
