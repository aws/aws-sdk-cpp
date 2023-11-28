/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ChunkingConfiguration.h>
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
   * <p>Configures ingestion for a vector knowledge base</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/VectorIngestionConfiguration">AWS
   * API Reference</a></p>
   */
  class VectorIngestionConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API VectorIngestionConfiguration();
    AWS_BEDROCKAGENT_API VectorIngestionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API VectorIngestionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ChunkingConfiguration& GetChunkingConfiguration() const{ return m_chunkingConfiguration; }

    
    inline bool ChunkingConfigurationHasBeenSet() const { return m_chunkingConfigurationHasBeenSet; }

    
    inline void SetChunkingConfiguration(const ChunkingConfiguration& value) { m_chunkingConfigurationHasBeenSet = true; m_chunkingConfiguration = value; }

    
    inline void SetChunkingConfiguration(ChunkingConfiguration&& value) { m_chunkingConfigurationHasBeenSet = true; m_chunkingConfiguration = std::move(value); }

    
    inline VectorIngestionConfiguration& WithChunkingConfiguration(const ChunkingConfiguration& value) { SetChunkingConfiguration(value); return *this;}

    
    inline VectorIngestionConfiguration& WithChunkingConfiguration(ChunkingConfiguration&& value) { SetChunkingConfiguration(std::move(value)); return *this;}

  private:

    ChunkingConfiguration m_chunkingConfiguration;
    bool m_chunkingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
