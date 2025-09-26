/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/VectorSearchRerankingConfigurationType.h>
#include <aws/bedrock-agent-runtime/model/VectorSearchBedrockRerankingConfiguration.h>
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
   * <p>Contains configurations for reranking the retrieved results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/VectorSearchRerankingConfiguration">AWS
   * API Reference</a></p>
   */
  class VectorSearchRerankingConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API VectorSearchRerankingConfiguration() = default;
    AWS_BEDROCKAGENTRUNTIME_API VectorSearchRerankingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API VectorSearchRerankingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of reranker model.</p>
     */
    inline VectorSearchRerankingConfigurationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(VectorSearchRerankingConfigurationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline VectorSearchRerankingConfiguration& WithType(VectorSearchRerankingConfigurationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for an Amazon Bedrock reranker model.</p>
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
} // namespace BedrockAgentRuntime
} // namespace Aws
