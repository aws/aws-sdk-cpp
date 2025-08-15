/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/VectorSearchRerankingConfigurationType.h>
#include <aws/bedrock-agent/model/VectorSearchBedrockRerankingConfiguration.h>
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
   * <p>Specifies how retrieved results from a knowledge base are reranked to improve
   * relevance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/VectorSearchRerankingConfiguration">AWS
   * API Reference</a></p>
   */
  class VectorSearchRerankingConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API VectorSearchRerankingConfiguration() = default;
    AWS_BEDROCKAGENT_API VectorSearchRerankingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API VectorSearchRerankingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the type of reranking model to use. Currently, the only supported
     * value is <code>BEDROCK_RERANKING_MODEL</code>.</p>
     */
    inline VectorSearchRerankingConfigurationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(VectorSearchRerankingConfigurationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline VectorSearchRerankingConfiguration& WithType(VectorSearchRerankingConfigurationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration for using an Amazon Bedrock reranker model to
     * rerank retrieved results.</p>
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
} // namespace BedrockAgent
} // namespace Aws
