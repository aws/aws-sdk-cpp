/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/MetadataConfigurationForReranking.h>
#include <aws/bedrock-agent-runtime/model/VectorSearchBedrockRerankingModelConfiguration.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains configurations for reranking with an Amazon Bedrock reranker
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/VectorSearchBedrockRerankingConfiguration">AWS
   * API Reference</a></p>
   */
  class VectorSearchBedrockRerankingConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API VectorSearchBedrockRerankingConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API VectorSearchBedrockRerankingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API VectorSearchBedrockRerankingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for the metadata to use in reranking.</p>
     */
    inline const MetadataConfigurationForReranking& GetMetadataConfiguration() const{ return m_metadataConfiguration; }
    inline bool MetadataConfigurationHasBeenSet() const { return m_metadataConfigurationHasBeenSet; }
    inline void SetMetadataConfiguration(const MetadataConfigurationForReranking& value) { m_metadataConfigurationHasBeenSet = true; m_metadataConfiguration = value; }
    inline void SetMetadataConfiguration(MetadataConfigurationForReranking&& value) { m_metadataConfigurationHasBeenSet = true; m_metadataConfiguration = std::move(value); }
    inline VectorSearchBedrockRerankingConfiguration& WithMetadataConfiguration(const MetadataConfigurationForReranking& value) { SetMetadataConfiguration(value); return *this;}
    inline VectorSearchBedrockRerankingConfiguration& WithMetadataConfiguration(MetadataConfigurationForReranking&& value) { SetMetadataConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for the reranker model.</p>
     */
    inline const VectorSearchBedrockRerankingModelConfiguration& GetModelConfiguration() const{ return m_modelConfiguration; }
    inline bool ModelConfigurationHasBeenSet() const { return m_modelConfigurationHasBeenSet; }
    inline void SetModelConfiguration(const VectorSearchBedrockRerankingModelConfiguration& value) { m_modelConfigurationHasBeenSet = true; m_modelConfiguration = value; }
    inline void SetModelConfiguration(VectorSearchBedrockRerankingModelConfiguration&& value) { m_modelConfigurationHasBeenSet = true; m_modelConfiguration = std::move(value); }
    inline VectorSearchBedrockRerankingConfiguration& WithModelConfiguration(const VectorSearchBedrockRerankingModelConfiguration& value) { SetModelConfiguration(value); return *this;}
    inline VectorSearchBedrockRerankingConfiguration& WithModelConfiguration(VectorSearchBedrockRerankingModelConfiguration&& value) { SetModelConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of results to return after reranking.</p>
     */
    inline int GetNumberOfRerankedResults() const{ return m_numberOfRerankedResults; }
    inline bool NumberOfRerankedResultsHasBeenSet() const { return m_numberOfRerankedResultsHasBeenSet; }
    inline void SetNumberOfRerankedResults(int value) { m_numberOfRerankedResultsHasBeenSet = true; m_numberOfRerankedResults = value; }
    inline VectorSearchBedrockRerankingConfiguration& WithNumberOfRerankedResults(int value) { SetNumberOfRerankedResults(value); return *this;}
    ///@}
  private:

    MetadataConfigurationForReranking m_metadataConfiguration;
    bool m_metadataConfigurationHasBeenSet = false;

    VectorSearchBedrockRerankingModelConfiguration m_modelConfiguration;
    bool m_modelConfigurationHasBeenSet = false;

    int m_numberOfRerankedResults;
    bool m_numberOfRerankedResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
