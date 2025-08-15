/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/GuardrailConfiguration.h>
#include <aws/bedrock-agent/model/KnowledgeBasePromptTemplate.h>
#include <aws/bedrock-agent/model/PromptInferenceConfiguration.h>
#include <aws/bedrock-agent/model/VectorSearchRerankingConfiguration.h>
#include <aws/bedrock-agent/model/KnowledgeBaseOrchestrationConfiguration.h>
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
   * <p>Contains configurations for a knowledge base node in a flow. This node takes
   * a query as the input and returns, as the output, the retrieved responses
   * directly (as an array) or a response generated based on the retrieved responses.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-nodes.html">Node
   * types in a flow</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/KnowledgeBaseFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API KnowledgeBaseFlowNodeConfiguration() = default;
    AWS_BEDROCKAGENT_API KnowledgeBaseFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KnowledgeBaseFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the knowledge base to query.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    KnowledgeBaseFlowNodeConfiguration& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the model or <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
     * profile</a> to use to generate a response from the query results. Omit this
     * field if you want to return the retrieved results as an array.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    KnowledgeBaseFlowNodeConfiguration& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a guardrail to apply during query and response
     * generation for the knowledge base in this configuration.</p>
     */
    inline const GuardrailConfiguration& GetGuardrailConfiguration() const { return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    template<typename GuardrailConfigurationT = GuardrailConfiguration>
    void SetGuardrailConfiguration(GuardrailConfigurationT&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::forward<GuardrailConfigurationT>(value); }
    template<typename GuardrailConfigurationT = GuardrailConfiguration>
    KnowledgeBaseFlowNodeConfiguration& WithGuardrailConfiguration(GuardrailConfigurationT&& value) { SetGuardrailConfiguration(std::forward<GuardrailConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of results to retrieve from the knowledge base.</p>
     */
    inline int GetNumberOfResults() const { return m_numberOfResults; }
    inline bool NumberOfResultsHasBeenSet() const { return m_numberOfResultsHasBeenSet; }
    inline void SetNumberOfResults(int value) { m_numberOfResultsHasBeenSet = true; m_numberOfResults = value; }
    inline KnowledgeBaseFlowNodeConfiguration& WithNumberOfResults(int value) { SetNumberOfResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom prompt template to use with the knowledge base for generating
     * responses.</p>
     */
    inline const KnowledgeBasePromptTemplate& GetPromptTemplate() const { return m_promptTemplate; }
    inline bool PromptTemplateHasBeenSet() const { return m_promptTemplateHasBeenSet; }
    template<typename PromptTemplateT = KnowledgeBasePromptTemplate>
    void SetPromptTemplate(PromptTemplateT&& value) { m_promptTemplateHasBeenSet = true; m_promptTemplate = std::forward<PromptTemplateT>(value); }
    template<typename PromptTemplateT = KnowledgeBasePromptTemplate>
    KnowledgeBaseFlowNodeConfiguration& WithPromptTemplate(PromptTemplateT&& value) { SetPromptTemplate(std::forward<PromptTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains inference configurations for the prompt.</p>
     */
    inline const PromptInferenceConfiguration& GetInferenceConfiguration() const { return m_inferenceConfiguration; }
    inline bool InferenceConfigurationHasBeenSet() const { return m_inferenceConfigurationHasBeenSet; }
    template<typename InferenceConfigurationT = PromptInferenceConfiguration>
    void SetInferenceConfiguration(InferenceConfigurationT&& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = std::forward<InferenceConfigurationT>(value); }
    template<typename InferenceConfigurationT = PromptInferenceConfiguration>
    KnowledgeBaseFlowNodeConfiguration& WithInferenceConfiguration(InferenceConfigurationT&& value) { SetInferenceConfiguration(std::forward<InferenceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for reranking the retrieved results from the knowledge base
     * to improve relevance.</p>
     */
    inline const VectorSearchRerankingConfiguration& GetRerankingConfiguration() const { return m_rerankingConfiguration; }
    inline bool RerankingConfigurationHasBeenSet() const { return m_rerankingConfigurationHasBeenSet; }
    template<typename RerankingConfigurationT = VectorSearchRerankingConfiguration>
    void SetRerankingConfiguration(RerankingConfigurationT&& value) { m_rerankingConfigurationHasBeenSet = true; m_rerankingConfiguration = std::forward<RerankingConfigurationT>(value); }
    template<typename RerankingConfigurationT = VectorSearchRerankingConfiguration>
    KnowledgeBaseFlowNodeConfiguration& WithRerankingConfiguration(RerankingConfigurationT&& value) { SetRerankingConfiguration(std::forward<RerankingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for orchestrating the retrieval and generation process in
     * the knowledge base node.</p>
     */
    inline const KnowledgeBaseOrchestrationConfiguration& GetOrchestrationConfiguration() const { return m_orchestrationConfiguration; }
    inline bool OrchestrationConfigurationHasBeenSet() const { return m_orchestrationConfigurationHasBeenSet; }
    template<typename OrchestrationConfigurationT = KnowledgeBaseOrchestrationConfiguration>
    void SetOrchestrationConfiguration(OrchestrationConfigurationT&& value) { m_orchestrationConfigurationHasBeenSet = true; m_orchestrationConfiguration = std::forward<OrchestrationConfigurationT>(value); }
    template<typename OrchestrationConfigurationT = KnowledgeBaseOrchestrationConfiguration>
    KnowledgeBaseFlowNodeConfiguration& WithOrchestrationConfiguration(OrchestrationConfigurationT&& value) { SetOrchestrationConfiguration(std::forward<OrchestrationConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    GuardrailConfiguration m_guardrailConfiguration;
    bool m_guardrailConfigurationHasBeenSet = false;

    int m_numberOfResults{0};
    bool m_numberOfResultsHasBeenSet = false;

    KnowledgeBasePromptTemplate m_promptTemplate;
    bool m_promptTemplateHasBeenSet = false;

    PromptInferenceConfiguration m_inferenceConfiguration;
    bool m_inferenceConfigurationHasBeenSet = false;

    VectorSearchRerankingConfiguration m_rerankingConfiguration;
    bool m_rerankingConfigurationHasBeenSet = false;

    KnowledgeBaseOrchestrationConfiguration m_orchestrationConfiguration;
    bool m_orchestrationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
