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
    AWS_BEDROCK_API ExternalSourcesGenerationConfiguration();
    AWS_BEDROCK_API ExternalSourcesGenerationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ExternalSourcesGenerationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the template for the prompt for the external source wrapper
     * object.</p>
     */
    inline const PromptTemplate& GetPromptTemplate() const{ return m_promptTemplate; }
    inline bool PromptTemplateHasBeenSet() const { return m_promptTemplateHasBeenSet; }
    inline void SetPromptTemplate(const PromptTemplate& value) { m_promptTemplateHasBeenSet = true; m_promptTemplate = value; }
    inline void SetPromptTemplate(PromptTemplate&& value) { m_promptTemplateHasBeenSet = true; m_promptTemplate = std::move(value); }
    inline ExternalSourcesGenerationConfiguration& WithPromptTemplate(const PromptTemplate& value) { SetPromptTemplate(value); return *this;}
    inline ExternalSourcesGenerationConfiguration& WithPromptTemplate(PromptTemplate&& value) { SetPromptTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details for the guardrail.</p>
     */
    inline const GuardrailConfiguration& GetGuardrailConfiguration() const{ return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    inline void SetGuardrailConfiguration(const GuardrailConfiguration& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = value; }
    inline void SetGuardrailConfiguration(GuardrailConfiguration&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::move(value); }
    inline ExternalSourcesGenerationConfiguration& WithGuardrailConfiguration(const GuardrailConfiguration& value) { SetGuardrailConfiguration(value); return *this;}
    inline ExternalSourcesGenerationConfiguration& WithGuardrailConfiguration(GuardrailConfiguration&& value) { SetGuardrailConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details for inference when using
     * <code>RetrieveAndGenerate</code> to generate responses while using an external
     * source.</p>
     */
    inline const KbInferenceConfig& GetKbInferenceConfig() const{ return m_kbInferenceConfig; }
    inline bool KbInferenceConfigHasBeenSet() const { return m_kbInferenceConfigHasBeenSet; }
    inline void SetKbInferenceConfig(const KbInferenceConfig& value) { m_kbInferenceConfigHasBeenSet = true; m_kbInferenceConfig = value; }
    inline void SetKbInferenceConfig(KbInferenceConfig&& value) { m_kbInferenceConfigHasBeenSet = true; m_kbInferenceConfig = std::move(value); }
    inline ExternalSourcesGenerationConfiguration& WithKbInferenceConfig(const KbInferenceConfig& value) { SetKbInferenceConfig(value); return *this;}
    inline ExternalSourcesGenerationConfiguration& WithKbInferenceConfig(KbInferenceConfig&& value) { SetKbInferenceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional model parameters and their corresponding values not included in
     * the text inference configuration for an external source. Takes in custom model
     * parameters specific to the language model being used.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetAdditionalModelRequestFields() const{ return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    inline void SetAdditionalModelRequestFields(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = value; }
    inline void SetAdditionalModelRequestFields(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::move(value); }
    inline ExternalSourcesGenerationConfiguration& WithAdditionalModelRequestFields(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { SetAdditionalModelRequestFields(value); return *this;}
    inline ExternalSourcesGenerationConfiguration& WithAdditionalModelRequestFields(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { SetAdditionalModelRequestFields(std::move(value)); return *this;}
    inline ExternalSourcesGenerationConfiguration& AddAdditionalModelRequestFields(const Aws::String& key, const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, value); return *this; }
    inline ExternalSourcesGenerationConfiguration& AddAdditionalModelRequestFields(Aws::String&& key, const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(std::move(key), value); return *this; }
    inline ExternalSourcesGenerationConfiguration& AddAdditionalModelRequestFields(const Aws::String& key, Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, std::move(value)); return *this; }
    inline ExternalSourcesGenerationConfiguration& AddAdditionalModelRequestFields(Aws::String&& key, Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(std::move(key), std::move(value)); return *this; }
    inline ExternalSourcesGenerationConfiguration& AddAdditionalModelRequestFields(const char* key, Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, std::move(value)); return *this; }
    inline ExternalSourcesGenerationConfiguration& AddAdditionalModelRequestFields(const char* key, const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, value); return *this; }
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
