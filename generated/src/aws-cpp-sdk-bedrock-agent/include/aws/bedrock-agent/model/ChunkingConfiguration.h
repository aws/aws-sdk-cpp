/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ChunkingStrategy.h>
#include <aws/bedrock-agent/model/FixedSizeChunkingConfiguration.h>
#include <aws/bedrock-agent/model/HierarchicalChunkingConfiguration.h>
#include <aws/bedrock-agent/model/SemanticChunkingConfiguration.h>
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
   * <p>Details about how to chunk the documents in the data source. A <i>chunk</i>
   * refers to an excerpt from a data source that is returned when the knowledge base
   * that it belongs to is queried.</p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>Knowledge base can split your source data into chunks. A <i>chunk</i> refers
     * to an excerpt from a data source that is returned when the knowledge base that
     * it belongs to is queried. You have the following options for chunking your data.
     * If you opt for <code>NONE</code>, then you may want to pre-process your files by
     * splitting them up such that each file corresponds to a chunk.</p> <ul> <li> <p>
     * <code>FIXED_SIZE</code> – Amazon Bedrock splits your source data into chunks of
     * the approximate size that you set in the
     * <code>fixedSizeChunkingConfiguration</code>.</p> </li> <li> <p>
     * <code>HIERARCHICAL</code> – Split documents into layers of chunks where the
     * first layer contains large chunks, and the second layer contains smaller chunks
     * derived from the first layer.</p> </li> <li> <p> <code>SEMANTIC</code> – Split
     * documents into chunks based on groups of similar content derived with natural
     * language processing.</p> </li> <li> <p> <code>NONE</code> – Amazon Bedrock
     * treats each file as one chunk. If you choose this option, you may want to
     * pre-process your documents by splitting them into separate files.</p> </li>
     * </ul>
     */
    inline const ChunkingStrategy& GetChunkingStrategy() const{ return m_chunkingStrategy; }
    inline bool ChunkingStrategyHasBeenSet() const { return m_chunkingStrategyHasBeenSet; }
    inline void SetChunkingStrategy(const ChunkingStrategy& value) { m_chunkingStrategyHasBeenSet = true; m_chunkingStrategy = value; }
    inline void SetChunkingStrategy(ChunkingStrategy&& value) { m_chunkingStrategyHasBeenSet = true; m_chunkingStrategy = std::move(value); }
    inline ChunkingConfiguration& WithChunkingStrategy(const ChunkingStrategy& value) { SetChunkingStrategy(value); return *this;}
    inline ChunkingConfiguration& WithChunkingStrategy(ChunkingStrategy&& value) { SetChunkingStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations for when you choose fixed-size chunking. If you set the
     * <code>chunkingStrategy</code> as <code>NONE</code>, exclude this field.</p>
     */
    inline const FixedSizeChunkingConfiguration& GetFixedSizeChunkingConfiguration() const{ return m_fixedSizeChunkingConfiguration; }
    inline bool FixedSizeChunkingConfigurationHasBeenSet() const { return m_fixedSizeChunkingConfigurationHasBeenSet; }
    inline void SetFixedSizeChunkingConfiguration(const FixedSizeChunkingConfiguration& value) { m_fixedSizeChunkingConfigurationHasBeenSet = true; m_fixedSizeChunkingConfiguration = value; }
    inline void SetFixedSizeChunkingConfiguration(FixedSizeChunkingConfiguration&& value) { m_fixedSizeChunkingConfigurationHasBeenSet = true; m_fixedSizeChunkingConfiguration = std::move(value); }
    inline ChunkingConfiguration& WithFixedSizeChunkingConfiguration(const FixedSizeChunkingConfiguration& value) { SetFixedSizeChunkingConfiguration(value); return *this;}
    inline ChunkingConfiguration& WithFixedSizeChunkingConfiguration(FixedSizeChunkingConfiguration&& value) { SetFixedSizeChunkingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for hierarchical document chunking for a data source. Hierarchical
     * chunking splits documents into layers of chunks where the first layer contains
     * large chunks, and the second layer contains smaller chunks derived from the
     * first layer.</p>
     */
    inline const HierarchicalChunkingConfiguration& GetHierarchicalChunkingConfiguration() const{ return m_hierarchicalChunkingConfiguration; }
    inline bool HierarchicalChunkingConfigurationHasBeenSet() const { return m_hierarchicalChunkingConfigurationHasBeenSet; }
    inline void SetHierarchicalChunkingConfiguration(const HierarchicalChunkingConfiguration& value) { m_hierarchicalChunkingConfigurationHasBeenSet = true; m_hierarchicalChunkingConfiguration = value; }
    inline void SetHierarchicalChunkingConfiguration(HierarchicalChunkingConfiguration&& value) { m_hierarchicalChunkingConfigurationHasBeenSet = true; m_hierarchicalChunkingConfiguration = std::move(value); }
    inline ChunkingConfiguration& WithHierarchicalChunkingConfiguration(const HierarchicalChunkingConfiguration& value) { SetHierarchicalChunkingConfiguration(value); return *this;}
    inline ChunkingConfiguration& WithHierarchicalChunkingConfiguration(HierarchicalChunkingConfiguration&& value) { SetHierarchicalChunkingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for semantic document chunking for a data source. Semantic chunking
     * splits a document into into smaller documents based on groups of similar content
     * derived from the text with natural language processing.</p>
     */
    inline const SemanticChunkingConfiguration& GetSemanticChunkingConfiguration() const{ return m_semanticChunkingConfiguration; }
    inline bool SemanticChunkingConfigurationHasBeenSet() const { return m_semanticChunkingConfigurationHasBeenSet; }
    inline void SetSemanticChunkingConfiguration(const SemanticChunkingConfiguration& value) { m_semanticChunkingConfigurationHasBeenSet = true; m_semanticChunkingConfiguration = value; }
    inline void SetSemanticChunkingConfiguration(SemanticChunkingConfiguration&& value) { m_semanticChunkingConfigurationHasBeenSet = true; m_semanticChunkingConfiguration = std::move(value); }
    inline ChunkingConfiguration& WithSemanticChunkingConfiguration(const SemanticChunkingConfiguration& value) { SetSemanticChunkingConfiguration(value); return *this;}
    inline ChunkingConfiguration& WithSemanticChunkingConfiguration(SemanticChunkingConfiguration&& value) { SetSemanticChunkingConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ChunkingStrategy m_chunkingStrategy;
    bool m_chunkingStrategyHasBeenSet = false;

    FixedSizeChunkingConfiguration m_fixedSizeChunkingConfiguration;
    bool m_fixedSizeChunkingConfigurationHasBeenSet = false;

    HierarchicalChunkingConfiguration m_hierarchicalChunkingConfiguration;
    bool m_hierarchicalChunkingConfigurationHasBeenSet = false;

    SemanticChunkingConfiguration m_semanticChunkingConfiguration;
    bool m_semanticChunkingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
