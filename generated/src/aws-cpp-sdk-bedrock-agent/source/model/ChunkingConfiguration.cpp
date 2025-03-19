/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ChunkingConfiguration.h>
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

ChunkingConfiguration::ChunkingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ChunkingConfiguration& ChunkingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("chunkingStrategy"))
  {
    m_chunkingStrategy = ChunkingStrategyMapper::GetChunkingStrategyForName(jsonValue.GetString("chunkingStrategy"));
    m_chunkingStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fixedSizeChunkingConfiguration"))
  {
    m_fixedSizeChunkingConfiguration = jsonValue.GetObject("fixedSizeChunkingConfiguration");
    m_fixedSizeChunkingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hierarchicalChunkingConfiguration"))
  {
    m_hierarchicalChunkingConfiguration = jsonValue.GetObject("hierarchicalChunkingConfiguration");
    m_hierarchicalChunkingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("semanticChunkingConfiguration"))
  {
    m_semanticChunkingConfiguration = jsonValue.GetObject("semanticChunkingConfiguration");
    m_semanticChunkingConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ChunkingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_chunkingStrategyHasBeenSet)
  {
   payload.WithString("chunkingStrategy", ChunkingStrategyMapper::GetNameForChunkingStrategy(m_chunkingStrategy));
  }

  if(m_fixedSizeChunkingConfigurationHasBeenSet)
  {
   payload.WithObject("fixedSizeChunkingConfiguration", m_fixedSizeChunkingConfiguration.Jsonize());

  }

  if(m_hierarchicalChunkingConfigurationHasBeenSet)
  {
   payload.WithObject("hierarchicalChunkingConfiguration", m_hierarchicalChunkingConfiguration.Jsonize());

  }

  if(m_semanticChunkingConfigurationHasBeenSet)
  {
   payload.WithObject("semanticChunkingConfiguration", m_semanticChunkingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
