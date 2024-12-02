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
   * <p>The configuration details for response generation based on retrieved text
   * chunks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GenerationConfiguration">AWS
   * API Reference</a></p>
   */
  class GenerationConfiguration
  {
  public:
    AWS_BEDROCK_API GenerationConfiguration();
    AWS_BEDROCK_API GenerationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GenerationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the template for the prompt that's sent to the model for response
     * generation.</p>
     */
    inline const PromptTemplate& GetPromptTemplate() const{ return m_promptTemplate; }
    inline bool PromptTemplateHasBeenSet() const { return m_promptTemplateHasBeenSet; }
    inline void SetPromptTemplate(const PromptTemplate& value) { m_promptTemplateHasBeenSet = true; m_promptTemplate = value; }
    inline void SetPromptTemplate(PromptTemplate&& value) { m_promptTemplateHasBeenSet = true; m_promptTemplate = std::move(value); }
    inline GenerationConfiguration& WithPromptTemplate(const PromptTemplate& value) { SetPromptTemplate(value); return *this;}
    inline GenerationConfiguration& WithPromptTemplate(PromptTemplate&& value) { SetPromptTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration details for the guardrail.</p>
     */
    inline const GuardrailConfiguration& GetGuardrailConfiguration() const{ return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    inline void SetGuardrailConfiguration(const GuardrailConfiguration& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = value; }
    inline void SetGuardrailConfiguration(GuardrailConfiguration&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::move(value); }
    inline GenerationConfiguration& WithGuardrailConfiguration(const GuardrailConfiguration& value) { SetGuardrailConfiguration(value); return *this;}
    inline GenerationConfiguration& WithGuardrailConfiguration(GuardrailConfiguration&& value) { SetGuardrailConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration details for inference for knowledge base retrieval and
     * response generation.</p>
     */
    inline const KbInferenceConfig& GetKbInferenceConfig() const{ return m_kbInferenceConfig; }
    inline bool KbInferenceConfigHasBeenSet() const { return m_kbInferenceConfigHasBeenSet; }
    inline void SetKbInferenceConfig(const KbInferenceConfig& value) { m_kbInferenceConfigHasBeenSet = true; m_kbInferenceConfig = value; }
    inline void SetKbInferenceConfig(KbInferenceConfig&& value) { m_kbInferenceConfigHasBeenSet = true; m_kbInferenceConfig = std::move(value); }
    inline GenerationConfiguration& WithKbInferenceConfig(const KbInferenceConfig& value) { SetKbInferenceConfig(value); return *this;}
    inline GenerationConfiguration& WithKbInferenceConfig(KbInferenceConfig&& value) { SetKbInferenceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional model parameters and corresponding values not included in the
     * <code>textInferenceConfig</code> structure for a knowledge base. This allows you
     * to provide custom model parameters specific to the language model being
     * used.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetAdditionalModelRequestFields() const{ return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    inline void SetAdditionalModelRequestFields(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = value; }
    inline void SetAdditionalModelRequestFields(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::move(value); }
    inline GenerationConfiguration& WithAdditionalModelRequestFields(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { SetAdditionalModelRequestFields(value); return *this;}
    inline GenerationConfiguration& WithAdditionalModelRequestFields(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { SetAdditionalModelRequestFields(std::move(value)); return *this;}
    inline GenerationConfiguration& AddAdditionalModelRequestFields(const Aws::String& key, const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, value); return *this; }
    inline GenerationConfiguration& AddAdditionalModelRequestFields(Aws::String&& key, const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(std::move(key), value); return *this; }
    inline GenerationConfiguration& AddAdditionalModelRequestFields(const Aws::String& key, Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, std::move(value)); return *this; }
    inline GenerationConfiguration& AddAdditionalModelRequestFields(Aws::String&& key, Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(std::move(key), std::move(value)); return *this; }
    inline GenerationConfiguration& AddAdditionalModelRequestFields(const char* key, Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, std::move(value)); return *this; }
    inline GenerationConfiguration& AddAdditionalModelRequestFields(const char* key, const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, value); return *this; }
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
