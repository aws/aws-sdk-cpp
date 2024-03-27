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
   * <p>Contains details about how to ingest the documents in a data
   * source.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>Details about how to chunk the documents in the data source. A <i>chunk</i>
     * refers to an excerpt from a data source that is returned when the knowledge base
     * that it belongs to is queried.</p>
     */
    inline const ChunkingConfiguration& GetChunkingConfiguration() const{ return m_chunkingConfiguration; }

    /**
     * <p>Details about how to chunk the documents in the data source. A <i>chunk</i>
     * refers to an excerpt from a data source that is returned when the knowledge base
     * that it belongs to is queried.</p>
     */
    inline bool ChunkingConfigurationHasBeenSet() const { return m_chunkingConfigurationHasBeenSet; }

    /**
     * <p>Details about how to chunk the documents in the data source. A <i>chunk</i>
     * refers to an excerpt from a data source that is returned when the knowledge base
     * that it belongs to is queried.</p>
     */
    inline void SetChunkingConfiguration(const ChunkingConfiguration& value) { m_chunkingConfigurationHasBeenSet = true; m_chunkingConfiguration = value; }

    /**
     * <p>Details about how to chunk the documents in the data source. A <i>chunk</i>
     * refers to an excerpt from a data source that is returned when the knowledge base
     * that it belongs to is queried.</p>
     */
    inline void SetChunkingConfiguration(ChunkingConfiguration&& value) { m_chunkingConfigurationHasBeenSet = true; m_chunkingConfiguration = std::move(value); }

    /**
     * <p>Details about how to chunk the documents in the data source. A <i>chunk</i>
     * refers to an excerpt from a data source that is returned when the knowledge base
     * that it belongs to is queried.</p>
     */
    inline VectorIngestionConfiguration& WithChunkingConfiguration(const ChunkingConfiguration& value) { SetChunkingConfiguration(value); return *this;}

    /**
     * <p>Details about how to chunk the documents in the data source. A <i>chunk</i>
     * refers to an excerpt from a data source that is returned when the knowledge base
     * that it belongs to is queried.</p>
     */
    inline VectorIngestionConfiguration& WithChunkingConfiguration(ChunkingConfiguration&& value) { SetChunkingConfiguration(std::move(value)); return *this;}

  private:

    ChunkingConfiguration m_chunkingConfiguration;
    bool m_chunkingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
