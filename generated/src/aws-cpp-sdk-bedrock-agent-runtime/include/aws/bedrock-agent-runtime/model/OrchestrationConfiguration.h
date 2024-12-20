/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agent-runtime/model/InferenceConfig.h>
#include <aws/bedrock-agent-runtime/model/PerformanceConfiguration.h>
#include <aws/bedrock-agent-runtime/model/PromptTemplate.h>
#include <aws/bedrock-agent-runtime/model/QueryTransformationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
   * <p>Settings for how the model processes the prompt prior to retrieval and
   * generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/OrchestrationConfiguration">AWS
   * API Reference</a></p>
   */
  class OrchestrationConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Additional model parameters and corresponding values not included in the
     * textInferenceConfig structure for a knowledge base. This allows users to provide
     * custom model parameters specific to the language model being used. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetAdditionalModelRequestFields() const{ return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    inline void SetAdditionalModelRequestFields(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = value; }
    inline void SetAdditionalModelRequestFields(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::move(value); }
    inline OrchestrationConfiguration& WithAdditionalModelRequestFields(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { SetAdditionalModelRequestFields(value); return *this;}
    inline OrchestrationConfiguration& WithAdditionalModelRequestFields(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { SetAdditionalModelRequestFields(std::move(value)); return *this;}
    inline OrchestrationConfiguration& AddAdditionalModelRequestFields(const Aws::String& key, const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, value); return *this; }
    inline OrchestrationConfiguration& AddAdditionalModelRequestFields(Aws::String&& key, const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(std::move(key), value); return *this; }
    inline OrchestrationConfiguration& AddAdditionalModelRequestFields(const Aws::String& key, Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, std::move(value)); return *this; }
    inline OrchestrationConfiguration& AddAdditionalModelRequestFields(Aws::String&& key, Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(std::move(key), std::move(value)); return *this; }
    inline OrchestrationConfiguration& AddAdditionalModelRequestFields(const char* key, Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, std::move(value)); return *this; }
    inline OrchestrationConfiguration& AddAdditionalModelRequestFields(const char* key, const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Configuration settings for inference when using RetrieveAndGenerate to
     * generate responses while using a knowledge base as a source. </p>
     */
    inline const InferenceConfig& GetInferenceConfig() const{ return m_inferenceConfig; }
    inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }
    inline void SetInferenceConfig(const InferenceConfig& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = value; }
    inline void SetInferenceConfig(InferenceConfig&& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = std::move(value); }
    inline OrchestrationConfiguration& WithInferenceConfig(const InferenceConfig& value) { SetInferenceConfig(value); return *this;}
    inline OrchestrationConfiguration& WithInferenceConfig(InferenceConfig&& value) { SetInferenceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latency configuration for the model.</p>
     */
    inline const PerformanceConfiguration& GetPerformanceConfig() const{ return m_performanceConfig; }
    inline bool PerformanceConfigHasBeenSet() const { return m_performanceConfigHasBeenSet; }
    inline void SetPerformanceConfig(const PerformanceConfiguration& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = value; }
    inline void SetPerformanceConfig(PerformanceConfiguration&& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = std::move(value); }
    inline OrchestrationConfiguration& WithPerformanceConfig(const PerformanceConfiguration& value) { SetPerformanceConfig(value); return *this;}
    inline OrchestrationConfiguration& WithPerformanceConfig(PerformanceConfiguration&& value) { SetPerformanceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the template for the prompt that's sent to the model. Orchestration
     * prompts must include the <code>$conversation_history$</code> and
     * <code>$output_format_instructions$</code> variables. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Use
     * placeholder variables</a> in the user guide.</p>
     */
    inline const PromptTemplate& GetPromptTemplate() const{ return m_promptTemplate; }
    inline bool PromptTemplateHasBeenSet() const { return m_promptTemplateHasBeenSet; }
    inline void SetPromptTemplate(const PromptTemplate& value) { m_promptTemplateHasBeenSet = true; m_promptTemplate = value; }
    inline void SetPromptTemplate(PromptTemplate&& value) { m_promptTemplateHasBeenSet = true; m_promptTemplate = std::move(value); }
    inline OrchestrationConfiguration& WithPromptTemplate(const PromptTemplate& value) { SetPromptTemplate(value); return *this;}
    inline OrchestrationConfiguration& WithPromptTemplate(PromptTemplate&& value) { SetPromptTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To split up the prompt and retrieve multiple sources, set the transformation
     * type to <code>QUERY_DECOMPOSITION</code>.</p>
     */
    inline const QueryTransformationConfiguration& GetQueryTransformationConfiguration() const{ return m_queryTransformationConfiguration; }
    inline bool QueryTransformationConfigurationHasBeenSet() const { return m_queryTransformationConfigurationHasBeenSet; }
    inline void SetQueryTransformationConfiguration(const QueryTransformationConfiguration& value) { m_queryTransformationConfigurationHasBeenSet = true; m_queryTransformationConfiguration = value; }
    inline void SetQueryTransformationConfiguration(QueryTransformationConfiguration&& value) { m_queryTransformationConfigurationHasBeenSet = true; m_queryTransformationConfiguration = std::move(value); }
    inline OrchestrationConfiguration& WithQueryTransformationConfiguration(const QueryTransformationConfiguration& value) { SetQueryTransformationConfiguration(value); return *this;}
    inline OrchestrationConfiguration& WithQueryTransformationConfiguration(QueryTransformationConfiguration&& value) { SetQueryTransformationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Utils::Document> m_additionalModelRequestFields;
    bool m_additionalModelRequestFieldsHasBeenSet = false;

    InferenceConfig m_inferenceConfig;
    bool m_inferenceConfigHasBeenSet = false;

    PerformanceConfiguration m_performanceConfig;
    bool m_performanceConfigHasBeenSet = false;

    PromptTemplate m_promptTemplate;
    bool m_promptTemplateHasBeenSet = false;

    QueryTransformationConfiguration m_queryTransformationConfiguration;
    bool m_queryTransformationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
