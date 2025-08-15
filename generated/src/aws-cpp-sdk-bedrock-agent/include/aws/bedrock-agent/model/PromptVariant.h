/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/PromptTemplateType.h>
#include <aws/bedrock-agent/model/PromptTemplateConfiguration.h>
#include <aws/bedrock-agent/model/PromptInferenceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Document.h>
#include <aws/bedrock-agent/model/PromptGenAiResource.h>
#include <aws/bedrock-agent/model/PromptMetadataEntry.h>
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
   * <p>Contains details about a variant of the prompt.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptVariant">AWS
   * API Reference</a></p>
   */
  class PromptVariant
  {
  public:
    AWS_BEDROCKAGENT_API PromptVariant() = default;
    AWS_BEDROCKAGENT_API PromptVariant(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptVariant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the prompt variant.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PromptVariant& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of prompt template to use.</p>
     */
    inline PromptTemplateType GetTemplateType() const { return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(PromptTemplateType value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline PromptVariant& WithTemplateType(PromptTemplateType value) { SetTemplateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for the prompt template.</p>
     */
    inline const PromptTemplateConfiguration& GetTemplateConfiguration() const { return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    template<typename TemplateConfigurationT = PromptTemplateConfiguration>
    void SetTemplateConfiguration(TemplateConfigurationT&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::forward<TemplateConfigurationT>(value); }
    template<typename TemplateConfigurationT = PromptTemplateConfiguration>
    PromptVariant& WithTemplateConfiguration(TemplateConfigurationT&& value) { SetTemplateConfiguration(std::forward<TemplateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the model or <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
     * profile</a> with which to run inference on the prompt.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    PromptVariant& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains inference configurations for the prompt variant.</p>
     */
    inline const PromptInferenceConfiguration& GetInferenceConfiguration() const { return m_inferenceConfiguration; }
    inline bool InferenceConfigurationHasBeenSet() const { return m_inferenceConfigurationHasBeenSet; }
    template<typename InferenceConfigurationT = PromptInferenceConfiguration>
    void SetInferenceConfiguration(InferenceConfigurationT&& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = std::forward<InferenceConfigurationT>(value); }
    template<typename InferenceConfigurationT = PromptInferenceConfiguration>
    PromptVariant& WithInferenceConfiguration(InferenceConfigurationT&& value) { SetInferenceConfiguration(std::forward<InferenceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, each containing a key-value pair that defines a metadata
     * tag and value to attach to a prompt variant.</p>
     */
    inline const Aws::Vector<PromptMetadataEntry>& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Vector<PromptMetadataEntry>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Vector<PromptMetadataEntry>>
    PromptVariant& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataT = PromptMetadataEntry>
    PromptVariant& AddMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata.emplace_back(std::forward<MetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains model-specific inference configurations that aren't in the
     * <code>inferenceConfiguration</code> field. To see model-specific inference
     * parameters, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * request parameters and response fields for foundation models</a>.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalModelRequestFields() const { return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    template<typename AdditionalModelRequestFieldsT = Aws::Utils::Document>
    void SetAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::forward<AdditionalModelRequestFieldsT>(value); }
    template<typename AdditionalModelRequestFieldsT = Aws::Utils::Document>
    PromptVariant& WithAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) { SetAdditionalModelRequestFields(std::forward<AdditionalModelRequestFieldsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a generative AI resource with which to use the prompt.</p>
     */
    inline const PromptGenAiResource& GetGenAiResource() const { return m_genAiResource; }
    inline bool GenAiResourceHasBeenSet() const { return m_genAiResourceHasBeenSet; }
    template<typename GenAiResourceT = PromptGenAiResource>
    void SetGenAiResource(GenAiResourceT&& value) { m_genAiResourceHasBeenSet = true; m_genAiResource = std::forward<GenAiResourceT>(value); }
    template<typename GenAiResourceT = PromptGenAiResource>
    PromptVariant& WithGenAiResource(GenAiResourceT&& value) { SetGenAiResource(std::forward<GenAiResourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PromptTemplateType m_templateType{PromptTemplateType::NOT_SET};
    bool m_templateTypeHasBeenSet = false;

    PromptTemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    PromptInferenceConfiguration m_inferenceConfiguration;
    bool m_inferenceConfigurationHasBeenSet = false;

    Aws::Vector<PromptMetadataEntry> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Utils::Document m_additionalModelRequestFields;
    bool m_additionalModelRequestFieldsHasBeenSet = false;

    PromptGenAiResource m_genAiResource;
    bool m_genAiResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
