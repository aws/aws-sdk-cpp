/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/VectorSearchBedrockRerankingModelConfiguration.h>
#include <aws/bedrock-agent/model/MetadataConfigurationForReranking.h>
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
   * <p>Configures the Amazon Bedrock reranker model to improve the relevance of
   * retrieved results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/VectorSearchBedrockRerankingConfiguration">AWS
   * API Reference</a></p>
   */
  class VectorSearchBedrockRerankingConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API VectorSearchBedrockRerankingConfiguration() = default;
    AWS_BEDROCKAGENT_API VectorSearchBedrockRerankingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API VectorSearchBedrockRerankingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the configuration for the Amazon Bedrock reranker model.</p>
     */
    inline const VectorSearchBedrockRerankingModelConfiguration& GetModelConfiguration() const { return m_modelConfiguration; }
    inline bool ModelConfigurationHasBeenSet() const { return m_modelConfigurationHasBeenSet; }
    template<typename ModelConfigurationT = VectorSearchBedrockRerankingModelConfiguration>
    void SetModelConfiguration(ModelConfigurationT&& value) { m_modelConfigurationHasBeenSet = true; m_modelConfiguration = std::forward<ModelConfigurationT>(value); }
    template<typename ModelConfigurationT = VectorSearchBedrockRerankingModelConfiguration>
    VectorSearchBedrockRerankingConfiguration& WithModelConfiguration(ModelConfigurationT&& value) { SetModelConfiguration(std::forward<ModelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of results to return after reranking.</p>
     */
    inline int GetNumberOfRerankedResults() const { return m_numberOfRerankedResults; }
    inline bool NumberOfRerankedResultsHasBeenSet() const { return m_numberOfRerankedResultsHasBeenSet; }
    inline void SetNumberOfRerankedResults(int value) { m_numberOfRerankedResultsHasBeenSet = true; m_numberOfRerankedResults = value; }
    inline VectorSearchBedrockRerankingConfiguration& WithNumberOfRerankedResults(int value) { SetNumberOfRerankedResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how metadata fields should be handled during the reranking
     * process.</p>
     */
    inline const MetadataConfigurationForReranking& GetMetadataConfiguration() const { return m_metadataConfiguration; }
    inline bool MetadataConfigurationHasBeenSet() const { return m_metadataConfigurationHasBeenSet; }
    template<typename MetadataConfigurationT = MetadataConfigurationForReranking>
    void SetMetadataConfiguration(MetadataConfigurationT&& value) { m_metadataConfigurationHasBeenSet = true; m_metadataConfiguration = std::forward<MetadataConfigurationT>(value); }
    template<typename MetadataConfigurationT = MetadataConfigurationForReranking>
    VectorSearchBedrockRerankingConfiguration& WithMetadataConfiguration(MetadataConfigurationT&& value) { SetMetadataConfiguration(std::forward<MetadataConfigurationT>(value)); return *this;}
    ///@}
  private:

    VectorSearchBedrockRerankingModelConfiguration m_modelConfiguration;
    bool m_modelConfigurationHasBeenSet = false;

    int m_numberOfRerankedResults{0};
    bool m_numberOfRerankedResultsHasBeenSet = false;

    MetadataConfigurationForReranking m_metadataConfiguration;
    bool m_metadataConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
