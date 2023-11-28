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

ChunkingConfiguration::ChunkingConfiguration() : 
    m_chunkingStrategy(ChunkingStrategy::NOT_SET),
    m_chunkingStrategyHasBeenSet(false),
    m_fixedSizeChunkingConfigurationHasBeenSet(false)
{
}

ChunkingConfiguration::ChunkingConfiguration(JsonView jsonValue) : 
    m_chunkingStrategy(ChunkingStrategy::NOT_SET),
    m_chunkingStrategyHasBeenSet(false),
    m_fixedSizeChunkingConfigurationHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
