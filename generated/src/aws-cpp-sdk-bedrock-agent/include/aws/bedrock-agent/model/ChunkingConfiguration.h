/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ChunkingStrategy.h>
#include <aws/bedrock-agent/model/FixedSizeChunkingConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Configures chunking strategy</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ChunkingConfiguration">AWS
   * API Reference</a></p>
   */
  class ChunkingConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API ChunkingConfiguration();
    AWS_BEDROCKAGENT_API ChunkingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ChunkingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ChunkingStrategy& GetChunkingStrategy() const{ return m_chunkingStrategy; }

    
    inline bool ChunkingStrategyHasBeenSet() const { return m_chunkingStrategyHasBeenSet; }

    
    inline void SetChunkingStrategy(const ChunkingStrategy& value) { m_chunkingStrategyHasBeenSet = true; m_chunkingStrategy = value; }

    
    inline void SetChunkingStrategy(ChunkingStrategy&& value) { m_chunkingStrategyHasBeenSet = true; m_chunkingStrategy = std::move(value); }

    
    inline ChunkingConfiguration& WithChunkingStrategy(const ChunkingStrategy& value) { SetChunkingStrategy(value); return *this;}

    
    inline ChunkingConfiguration& WithChunkingStrategy(ChunkingStrategy&& value) { SetChunkingStrategy(std::move(value)); return *this;}


    
    inline const FixedSizeChunkingConfiguration& GetFixedSizeChunkingConfiguration() const{ return m_fixedSizeChunkingConfiguration; }

    
    inline bool FixedSizeChunkingConfigurationHasBeenSet() const { return m_fixedSizeChunkingConfigurationHasBeenSet; }

    
    inline void SetFixedSizeChunkingConfiguration(const FixedSizeChunkingConfiguration& value) { m_fixedSizeChunkingConfigurationHasBeenSet = true; m_fixedSizeChunkingConfiguration = value; }

    
    inline void SetFixedSizeChunkingConfiguration(FixedSizeChunkingConfiguration&& value) { m_fixedSizeChunkingConfigurationHasBeenSet = true; m_fixedSizeChunkingConfiguration = std::move(value); }

    
    inline ChunkingConfiguration& WithFixedSizeChunkingConfiguration(const FixedSizeChunkingConfiguration& value) { SetFixedSizeChunkingConfiguration(value); return *this;}

    
    inline ChunkingConfiguration& WithFixedSizeChunkingConfiguration(FixedSizeChunkingConfiguration&& value) { SetFixedSizeChunkingConfiguration(std::move(value)); return *this;}

  private:

    ChunkingStrategy m_chunkingStrategy;
    bool m_chunkingStrategyHasBeenSet = false;

    FixedSizeChunkingConfiguration m_fixedSizeChunkingConfiguration;
    bool m_fixedSizeChunkingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
