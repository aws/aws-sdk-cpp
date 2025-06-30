/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/VectorSearchBedrockRerankingModelConfiguration.h>
#include <aws/bedrock/model/MetadataConfigurationForReranking.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Configuration for using Amazon Bedrock foundation models to rerank Knowledge
   * Base vector search results. This enables more sophisticated relevance ranking
   * using large language models.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/VectorSearchBedrockRerankingConfiguration">AWS
   * API Reference</a></p>
   */
  class VectorSearchBedrockRerankingConfiguration
  {
  public:
    AWS_BEDROCK_API VectorSearchBedrockRerankingConfiguration() = default;
    AWS_BEDROCK_API VectorSearchBedrockRerankingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API VectorSearchBedrockRerankingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration for the Amazon Bedrock foundation model used for reranking.
     * This includes the model ARN and any additional request fields required by the
     * model.</p>
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
     * <p>The maximum number of results to rerank. This limits how many of the initial
     * vector search results will be processed by the reranking model. A smaller number
     * improves performance but may exclude potentially relevant results.</p>
     */
    inline int GetNumberOfRerankedResults() const { return m_numberOfRerankedResults; }
    inline bool NumberOfRerankedResultsHasBeenSet() const { return m_numberOfRerankedResultsHasBeenSet; }
    inline void SetNumberOfRerankedResults(int value) { m_numberOfRerankedResultsHasBeenSet = true; m_numberOfRerankedResults = value; }
    inline VectorSearchBedrockRerankingConfiguration& WithNumberOfRerankedResults(int value) { SetNumberOfRerankedResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for how document metadata should be used during the reranking
     * process. This determines which metadata fields are included when reordering
     * search results.</p>
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
} // namespace Bedrock
} // namespace Aws
