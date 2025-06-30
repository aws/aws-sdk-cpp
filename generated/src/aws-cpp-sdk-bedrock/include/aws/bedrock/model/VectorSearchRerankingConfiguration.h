/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/VectorSearchRerankingConfigurationType.h>
#include <aws/bedrock/model/VectorSearchBedrockRerankingConfiguration.h>
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
   * <p>Configuration for reranking vector search results to improve relevance.
   * Reranking applies additional relevance models to reorder the initial vector
   * search results based on more sophisticated criteria.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/VectorSearchRerankingConfiguration">AWS
   * API Reference</a></p>
   */
  class VectorSearchRerankingConfiguration
  {
  public:
    AWS_BEDROCK_API VectorSearchRerankingConfiguration() = default;
    AWS_BEDROCK_API VectorSearchRerankingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API VectorSearchRerankingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of reranking to apply to vector search results. Currently, the only
     * supported value is BEDROCK, which uses Amazon Bedrock foundation models for
     * reranking.</p>
     */
    inline VectorSearchRerankingConfigurationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(VectorSearchRerankingConfigurationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline VectorSearchRerankingConfiguration& WithType(VectorSearchRerankingConfigurationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for using Amazon Bedrock foundation models to rerank search
     * results. This is required when the reranking type is set to BEDROCK.</p>
     */
    inline const VectorSearchBedrockRerankingConfiguration& GetBedrockRerankingConfiguration() const { return m_bedrockRerankingConfiguration; }
    inline bool BedrockRerankingConfigurationHasBeenSet() const { return m_bedrockRerankingConfigurationHasBeenSet; }
    template<typename BedrockRerankingConfigurationT = VectorSearchBedrockRerankingConfiguration>
    void SetBedrockRerankingConfiguration(BedrockRerankingConfigurationT&& value) { m_bedrockRerankingConfigurationHasBeenSet = true; m_bedrockRerankingConfiguration = std::forward<BedrockRerankingConfigurationT>(value); }
    template<typename BedrockRerankingConfigurationT = VectorSearchBedrockRerankingConfiguration>
    VectorSearchRerankingConfiguration& WithBedrockRerankingConfiguration(BedrockRerankingConfigurationT&& value) { SetBedrockRerankingConfiguration(std::forward<BedrockRerankingConfigurationT>(value)); return *this;}
    ///@}
  private:

    VectorSearchRerankingConfigurationType m_type{VectorSearchRerankingConfigurationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    VectorSearchBedrockRerankingConfiguration m_bedrockRerankingConfiguration;
    bool m_bedrockRerankingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
