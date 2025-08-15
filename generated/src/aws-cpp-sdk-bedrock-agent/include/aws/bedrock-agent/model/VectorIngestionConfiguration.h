/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ChunkingConfiguration.h>
#include <aws/bedrock-agent/model/CustomTransformationConfiguration.h>
#include <aws/bedrock-agent/model/ParsingConfiguration.h>
#include <aws/bedrock-agent/model/ContextEnrichmentConfiguration.h>
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
    AWS_BEDROCKAGENT_API VectorIngestionConfiguration() = default;
    AWS_BEDROCKAGENT_API VectorIngestionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API VectorIngestionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about how to chunk the documents in the data source. A <i>chunk</i>
     * refers to an excerpt from a data source that is returned when the knowledge base
     * that it belongs to is queried.</p>
     */
    inline const ChunkingConfiguration& GetChunkingConfiguration() const { return m_chunkingConfiguration; }
    inline bool ChunkingConfigurationHasBeenSet() const { return m_chunkingConfigurationHasBeenSet; }
    template<typename ChunkingConfigurationT = ChunkingConfiguration>
    void SetChunkingConfiguration(ChunkingConfigurationT&& value) { m_chunkingConfigurationHasBeenSet = true; m_chunkingConfiguration = std::forward<ChunkingConfigurationT>(value); }
    template<typename ChunkingConfigurationT = ChunkingConfiguration>
    VectorIngestionConfiguration& WithChunkingConfiguration(ChunkingConfigurationT&& value) { SetChunkingConfiguration(std::forward<ChunkingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom document transformer for parsed data source documents.</p>
     */
    inline const CustomTransformationConfiguration& GetCustomTransformationConfiguration() const { return m_customTransformationConfiguration; }
    inline bool CustomTransformationConfigurationHasBeenSet() const { return m_customTransformationConfigurationHasBeenSet; }
    template<typename CustomTransformationConfigurationT = CustomTransformationConfiguration>
    void SetCustomTransformationConfiguration(CustomTransformationConfigurationT&& value) { m_customTransformationConfigurationHasBeenSet = true; m_customTransformationConfiguration = std::forward<CustomTransformationConfigurationT>(value); }
    template<typename CustomTransformationConfigurationT = CustomTransformationConfiguration>
    VectorIngestionConfiguration& WithCustomTransformationConfiguration(CustomTransformationConfigurationT&& value) { SetCustomTransformationConfiguration(std::forward<CustomTransformationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations for a parser to use for parsing documents in your data source.
     * If you exclude this field, the default parser will be used.</p>
     */
    inline const ParsingConfiguration& GetParsingConfiguration() const { return m_parsingConfiguration; }
    inline bool ParsingConfigurationHasBeenSet() const { return m_parsingConfigurationHasBeenSet; }
    template<typename ParsingConfigurationT = ParsingConfiguration>
    void SetParsingConfiguration(ParsingConfigurationT&& value) { m_parsingConfigurationHasBeenSet = true; m_parsingConfiguration = std::forward<ParsingConfigurationT>(value); }
    template<typename ParsingConfigurationT = ParsingConfiguration>
    VectorIngestionConfiguration& WithParsingConfiguration(ParsingConfigurationT&& value) { SetParsingConfiguration(std::forward<ParsingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The context enrichment configuration used for ingestion of the data into the
     * vector store.</p>
     */
    inline const ContextEnrichmentConfiguration& GetContextEnrichmentConfiguration() const { return m_contextEnrichmentConfiguration; }
    inline bool ContextEnrichmentConfigurationHasBeenSet() const { return m_contextEnrichmentConfigurationHasBeenSet; }
    template<typename ContextEnrichmentConfigurationT = ContextEnrichmentConfiguration>
    void SetContextEnrichmentConfiguration(ContextEnrichmentConfigurationT&& value) { m_contextEnrichmentConfigurationHasBeenSet = true; m_contextEnrichmentConfiguration = std::forward<ContextEnrichmentConfigurationT>(value); }
    template<typename ContextEnrichmentConfigurationT = ContextEnrichmentConfiguration>
    VectorIngestionConfiguration& WithContextEnrichmentConfiguration(ContextEnrichmentConfigurationT&& value) { SetContextEnrichmentConfiguration(std::forward<ContextEnrichmentConfigurationT>(value)); return *this;}
    ///@}
  private:

    ChunkingConfiguration m_chunkingConfiguration;
    bool m_chunkingConfigurationHasBeenSet = false;

    CustomTransformationConfiguration m_customTransformationConfiguration;
    bool m_customTransformationConfigurationHasBeenSet = false;

    ParsingConfiguration m_parsingConfiguration;
    bool m_parsingConfigurationHasBeenSet = false;

    ContextEnrichmentConfiguration m_contextEnrichmentConfiguration;
    bool m_contextEnrichmentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
