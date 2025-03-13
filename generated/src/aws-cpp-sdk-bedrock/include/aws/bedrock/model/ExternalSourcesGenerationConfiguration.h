/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/PromptTemplate.h>
#include <aws/bedrock/model/GuardrailConfiguration.h>
#include <aws/bedrock/model/KbInferenceConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The response generation configuration of the external source wrapper
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ExternalSourcesGenerationConfiguration">AWS
   * API Reference</a></p>
   */
  class ExternalSourcesGenerationConfiguration
  {
  public:
    AWS_BEDROCK_API ExternalSourcesGenerationConfiguration() = default;
    AWS_BEDROCK_API ExternalSourcesGenerationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ExternalSourcesGenerationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the template for the prompt for the external source wrapper
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
     * <p>Configuration details for the guardrail.</p>
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
     * <p>Configuration details for inference when using
     * <code>RetrieveAndGenerate</code> to generate responses while using an external
     * source.</p>
     */
    inline const KbInferenceConfig& GetKbInferenceConfig() const { return m_kbInferenceConfig; }
    inline bool KbInferenceConfigHasBeenSet() const { return m_kbInferenceConfigHasBeenSet; }
    template<typename KbInferenceConfigT = KbInferenceConfig>
    void SetKbInferenceConfig(KbInferenceConfigT&& value) { m_kbInferenceConfigHasBeenSet = true; m_kbInferenceConfig = std::forward<KbInferenceConfigT>(value); }
    template<typename KbInferenceConfigT = KbInferenceConfig>
    ExternalSourcesGenerationConfiguration& WithKbInferenceConfig(KbInferenceConfigT&& value) { SetKbInferenceConfig(std::forward<KbInferenceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional model parameters and their corresponding values not included in
     * the text inference configuration for an external source. Takes in custom model
     * parameters specific to the language model being used.</p>
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
  private:

    PromptTemplate m_promptTemplate;
    bool m_promptTemplateHasBeenSet = false;

    GuardrailConfiguration m_guardrailConfiguration;
    bool m_guardrailConfigurationHasBeenSet = false;

    KbInferenceConfig m_kbInferenceConfig;
    bool m_kbInferenceConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Utils::Document> m_additionalModelRequestFields;
    bool m_additionalModelRequestFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
