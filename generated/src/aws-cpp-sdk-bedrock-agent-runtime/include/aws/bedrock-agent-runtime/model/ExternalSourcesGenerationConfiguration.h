/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/PromptTemplate.h>
#include <aws/bedrock-agent-runtime/model/GuardrailConfiguration.h>
#include <aws/bedrock-agent-runtime/model/InferenceConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agent-runtime/model/PerformanceConfiguration.h>
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
   * <p>Contains the generation configuration of the external source wrapper
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ExternalSourcesGenerationConfiguration">AWS
   * API Reference</a></p>
   */
  class ExternalSourcesGenerationConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ExternalSourcesGenerationConfiguration() = default;
    AWS_BEDROCKAGENTRUNTIME_API ExternalSourcesGenerationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ExternalSourcesGenerationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contain the textPromptTemplate string for the external source wrapper
     * object.</p>
     */
    inline const PromptTemplate& GetPromptTemplate() const { return m_promptTemplate; }
    inline bool PromptTemplateHasBeenSet() const { return m_promptTemplateHasBeenSet; }
    template<typename PromptTemplateT = PromptTemplate>
    void SetPromptTemplate(PromptTemplateT&& value) { m_promptTemplateHasBeenSet = true; m_promptTemplate = std::forward<PromptTemplateT>(value); }
    template<typename PromptTemplateT = PromptTemplate>
    ExternalSourcesGenerationConfiguration& WithPromptTemplate(PromptTemplateT&& value) { SetPromptTemplate(std::forward<PromptTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for the guardrail.</p>
     */
    inline const GuardrailConfiguration& GetGuardrailConfiguration() const { return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    template<typename GuardrailConfigurationT = GuardrailConfiguration>
    void SetGuardrailConfiguration(GuardrailConfigurationT&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::forward<GuardrailConfigurationT>(value); }
    template<typename GuardrailConfigurationT = GuardrailConfiguration>
    ExternalSourcesGenerationConfiguration& WithGuardrailConfiguration(GuardrailConfigurationT&& value) { SetGuardrailConfiguration(std::forward<GuardrailConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration settings for inference when using RetrieveAndGenerate to
     * generate responses while using an external source.</p>
     */
    inline const InferenceConfig& GetInferenceConfig() const { return m_inferenceConfig; }
    inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }
    template<typename InferenceConfigT = InferenceConfig>
    void SetInferenceConfig(InferenceConfigT&& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = std::forward<InferenceConfigT>(value); }
    template<typename InferenceConfigT = InferenceConfig>
    ExternalSourcesGenerationConfiguration& WithInferenceConfig(InferenceConfigT&& value) { SetInferenceConfig(std::forward<InferenceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional model parameters and their corresponding values not included in
     * the textInferenceConfig structure for an external source. Takes in custom model
     * parameters specific to the language model being used. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetAdditionalModelRequestFields() const { return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    template<typename AdditionalModelRequestFieldsT = Aws::Map<Aws::String, Aws::Utils::Document>>
    void SetAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::forward<AdditionalModelRequestFieldsT>(value); }
    template<typename AdditionalModelRequestFieldsT = Aws::Map<Aws::String, Aws::Utils::Document>>
    ExternalSourcesGenerationConfiguration& WithAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) { SetAdditionalModelRequestFields(std::forward<AdditionalModelRequestFieldsT>(value)); return *this;}
    template<typename AdditionalModelRequestFieldsKeyT = Aws::String, typename AdditionalModelRequestFieldsValueT = Aws::Utils::Document>
    ExternalSourcesGenerationConfiguration& AddAdditionalModelRequestFields(AdditionalModelRequestFieldsKeyT&& key, AdditionalModelRequestFieldsValueT&& value) {
      m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(std::forward<AdditionalModelRequestFieldsKeyT>(key), std::forward<AdditionalModelRequestFieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The latency configuration for the model.</p>
     */
    inline const PerformanceConfiguration& GetPerformanceConfig() const { return m_performanceConfig; }
    inline bool PerformanceConfigHasBeenSet() const { return m_performanceConfigHasBeenSet; }
    template<typename PerformanceConfigT = PerformanceConfiguration>
    void SetPerformanceConfig(PerformanceConfigT&& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = std::forward<PerformanceConfigT>(value); }
    template<typename PerformanceConfigT = PerformanceConfiguration>
    ExternalSourcesGenerationConfiguration& WithPerformanceConfig(PerformanceConfigT&& value) { SetPerformanceConfig(std::forward<PerformanceConfigT>(value)); return *this;}
    ///@}
  private:

    PromptTemplate m_promptTemplate;
    bool m_promptTemplateHasBeenSet = false;

    GuardrailConfiguration m_guardrailConfiguration;
    bool m_guardrailConfigurationHasBeenSet = false;

    InferenceConfig m_inferenceConfig;
    bool m_inferenceConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Utils::Document> m_additionalModelRequestFields;
    bool m_additionalModelRequestFieldsHasBeenSet = false;

    PerformanceConfiguration m_performanceConfig;
    bool m_performanceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
