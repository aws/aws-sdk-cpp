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


    /**
     * <p>Knowledge base can split your source data into chunks. A <i>chunk</i> refers
     * to an excerpt from a data source that is returned when the knowledge base that
     * it belongs to is queried. You have the following options for chunking your data.
     * If you opt for <code>NONE</code>, then you may want to pre-process your files by
     * splitting them up such that each file corresponds to a chunk.</p> <ul> <li> <p>
     * <code>FIXED_SIZE</code> – Amazon Bedrock splits your source data into chunks of
     * the approximate size that you set in the
     * <code>fixedSizeChunkingConfiguration</code>.</p> </li> <li> <p>
     * <code>NONE</code> – Amazon Bedrock treats each file as one chunk. If you choose
     * this option, you may want to pre-process your documents by splitting them into
     * separate files.</p> </li> </ul>
     */
    inline const ChunkingStrategy& GetChunkingStrategy() const{ return m_chunkingStrategy; }

    /**
     * <p>Knowledge base can split your source data into chunks. A <i>chunk</i> refers
     * to an excerpt from a data source that is returned when the knowledge base that
     * it belongs to is queried. You have the following options for chunking your data.
     * If you opt for <code>NONE</code>, then you may want to pre-process your files by
     * splitting them up such that each file corresponds to a chunk.</p> <ul> <li> <p>
     * <code>FIXED_SIZE</code> – Amazon Bedrock splits your source data into chunks of
     * the approximate size that you set in the
     * <code>fixedSizeChunkingConfiguration</code>.</p> </li> <li> <p>
     * <code>NONE</code> – Amazon Bedrock treats each file as one chunk. If you choose
     * this option, you may want to pre-process your documents by splitting them into
     * separate files.</p> </li> </ul>
     */
    inline bool ChunkingStrategyHasBeenSet() const { return m_chunkingStrategyHasBeenSet; }

    /**
     * <p>Knowledge base can split your source data into chunks. A <i>chunk</i> refers
     * to an excerpt from a data source that is returned when the knowledge base that
     * it belongs to is queried. You have the following options for chunking your data.
     * If you opt for <code>NONE</code>, then you may want to pre-process your files by
     * splitting them up such that each file corresponds to a chunk.</p> <ul> <li> <p>
     * <code>FIXED_SIZE</code> – Amazon Bedrock splits your source data into chunks of
     * the approximate size that you set in the
     * <code>fixedSizeChunkingConfiguration</code>.</p> </li> <li> <p>
     * <code>NONE</code> – Amazon Bedrock treats each file as one chunk. If you choose
     * this option, you may want to pre-process your documents by splitting them into
     * separate files.</p> </li> </ul>
     */
    inline void SetChunkingStrategy(const ChunkingStrategy& value) { m_chunkingStrategyHasBeenSet = true; m_chunkingStrategy = value; }

    /**
     * <p>Knowledge base can split your source data into chunks. A <i>chunk</i> refers
     * to an excerpt from a data source that is returned when the knowledge base that
     * it belongs to is queried. You have the following options for chunking your data.
     * If you opt for <code>NONE</code>, then you may want to pre-process your files by
     * splitting them up such that each file corresponds to a chunk.</p> <ul> <li> <p>
     * <code>FIXED_SIZE</code> – Amazon Bedrock splits your source data into chunks of
     * the approximate size that you set in the
     * <code>fixedSizeChunkingConfiguration</code>.</p> </li> <li> <p>
     * <code>NONE</code> – Amazon Bedrock treats each file as one chunk. If you choose
     * this option, you may want to pre-process your documents by splitting them into
     * separate files.</p> </li> </ul>
     */
    inline void SetChunkingStrategy(ChunkingStrategy&& value) { m_chunkingStrategyHasBeenSet = true; m_chunkingStrategy = std::move(value); }

    /**
     * <p>Knowledge base can split your source data into chunks. A <i>chunk</i> refers
     * to an excerpt from a data source that is returned when the knowledge base that
     * it belongs to is queried. You have the following options for chunking your data.
     * If you opt for <code>NONE</code>, then you may want to pre-process your files by
     * splitting them up such that each file corresponds to a chunk.</p> <ul> <li> <p>
     * <code>FIXED_SIZE</code> – Amazon Bedrock splits your source data into chunks of
     * the approximate size that you set in the
     * <code>fixedSizeChunkingConfiguration</code>.</p> </li> <li> <p>
     * <code>NONE</code> – Amazon Bedrock treats each file as one chunk. If you choose
     * this option, you may want to pre-process your documents by splitting them into
     * separate files.</p> </li> </ul>
     */
    inline ChunkingConfiguration& WithChunkingStrategy(const ChunkingStrategy& value) { SetChunkingStrategy(value); return *this;}

    /**
     * <p>Knowledge base can split your source data into chunks. A <i>chunk</i> refers
     * to an excerpt from a data source that is returned when the knowledge base that
     * it belongs to is queried. You have the following options for chunking your data.
     * If you opt for <code>NONE</code>, then you may want to pre-process your files by
     * splitting them up such that each file corresponds to a chunk.</p> <ul> <li> <p>
     * <code>FIXED_SIZE</code> – Amazon Bedrock splits your source data into chunks of
     * the approximate size that you set in the
     * <code>fixedSizeChunkingConfiguration</code>.</p> </li> <li> <p>
     * <code>NONE</code> – Amazon Bedrock treats each file as one chunk. If you choose
     * this option, you may want to pre-process your documents by splitting them into
     * separate files.</p> </li> </ul>
     */
    inline ChunkingConfiguration& WithChunkingStrategy(ChunkingStrategy&& value) { SetChunkingStrategy(std::move(value)); return *this;}


    /**
     * <p>Configurations for when you choose fixed-size chunking. If you set the
     * <code>chunkingStrategy</code> as <code>NONE</code>, exclude this field.</p>
     */
    inline const FixedSizeChunkingConfiguration& GetFixedSizeChunkingConfiguration() const{ return m_fixedSizeChunkingConfiguration; }

    /**
     * <p>Configurations for when you choose fixed-size chunking. If you set the
     * <code>chunkingStrategy</code> as <code>NONE</code>, exclude this field.</p>
     */
    inline bool FixedSizeChunkingConfigurationHasBeenSet() const { return m_fixedSizeChunkingConfigurationHasBeenSet; }

    /**
     * <p>Configurations for when you choose fixed-size chunking. If you set the
     * <code>chunkingStrategy</code> as <code>NONE</code>, exclude this field.</p>
     */
    inline void SetFixedSizeChunkingConfiguration(const FixedSizeChunkingConfiguration& value) { m_fixedSizeChunkingConfigurationHasBeenSet = true; m_fixedSizeChunkingConfiguration = value; }

    /**
     * <p>Configurations for when you choose fixed-size chunking. If you set the
     * <code>chunkingStrategy</code> as <code>NONE</code>, exclude this field.</p>
     */
    inline void SetFixedSizeChunkingConfiguration(FixedSizeChunkingConfiguration&& value) { m_fixedSizeChunkingConfigurationHasBeenSet = true; m_fixedSizeChunkingConfiguration = std::move(value); }

    /**
     * <p>Configurations for when you choose fixed-size chunking. If you set the
     * <code>chunkingStrategy</code> as <code>NONE</code>, exclude this field.</p>
     */
    inline ChunkingConfiguration& WithFixedSizeChunkingConfiguration(const FixedSizeChunkingConfiguration& value) { SetFixedSizeChunkingConfiguration(value); return *this;}

    /**
     * <p>Configurations for when you choose fixed-size chunking. If you set the
     * <code>chunkingStrategy</code> as <code>NONE</code>, exclude this field.</p>
     */
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
