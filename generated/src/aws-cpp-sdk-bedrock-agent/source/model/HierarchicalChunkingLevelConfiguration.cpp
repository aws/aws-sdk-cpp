/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/HierarchicalChunkingLevelConfiguration.h>
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

HierarchicalChunkingLevelConfiguration::HierarchicalChunkingLevelConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

HierarchicalChunkingLevelConfiguration& HierarchicalChunkingLevelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxTokens"))
  {
    m_maxTokens = jsonValue.GetInteger("maxTokens");
    m_maxTokensHasBeenSet = true;
  }
  return *this;
}

JsonValue HierarchicalChunkingLevelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_maxTokensHasBeenSet)
  {
   payload.WithInteger("maxTokens", m_maxTokens);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
