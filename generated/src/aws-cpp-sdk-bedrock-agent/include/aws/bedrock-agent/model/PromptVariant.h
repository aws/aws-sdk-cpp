/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/bedrock-agent/model/PromptGenAiResource.h>
#include <aws/bedrock-agent/model/PromptInferenceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/PromptTemplateConfiguration.h>
#include <aws/bedrock-agent/model/PromptTemplateType.h>
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
    AWS_BEDROCKAGENT_API PromptVariant();
    AWS_BEDROCKAGENT_API PromptVariant(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptVariant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains model-specific inference configurations that aren't in the
     * <code>inferenceConfiguration</code> field. To see model-specific inference
     * parameters, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * request parameters and response fields for foundation models</a>.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalModelRequestFields() const{ return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    inline void SetAdditionalModelRequestFields(const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = value; }
    inline void SetAdditionalModelRequestFields(Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::move(value); }
    inline PromptVariant& WithAdditionalModelRequestFields(const Aws::Utils::Document& value) { SetAdditionalModelRequestFields(value); return *this;}
    inline PromptVariant& WithAdditionalModelRequestFields(Aws::Utils::Document&& value) { SetAdditionalModelRequestFields(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a generative AI resource with which to use the prompt.</p>
     */
    inline const PromptGenAiResource& GetGenAiResource() const{ return m_genAiResource; }
    inline bool GenAiResourceHasBeenSet() const { return m_genAiResourceHasBeenSet; }
    inline void SetGenAiResource(const PromptGenAiResource& value) { m_genAiResourceHasBeenSet = true; m_genAiResource = value; }
    inline void SetGenAiResource(PromptGenAiResource&& value) { m_genAiResourceHasBeenSet = true; m_genAiResource = std::move(value); }
    inline PromptVariant& WithGenAiResource(const PromptGenAiResource& value) { SetGenAiResource(value); return *this;}
    inline PromptVariant& WithGenAiResource(PromptGenAiResource&& value) { SetGenAiResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains inference configurations for the prompt variant.</p>
     */
    inline const PromptInferenceConfiguration& GetInferenceConfiguration() const{ return m_inferenceConfiguration; }
    inline bool InferenceConfigurationHasBeenSet() const { return m_inferenceConfigurationHasBeenSet; }
    inline void SetInferenceConfiguration(const PromptInferenceConfiguration& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = value; }
    inline void SetInferenceConfiguration(PromptInferenceConfiguration&& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = std::move(value); }
    inline PromptVariant& WithInferenceConfiguration(const PromptInferenceConfiguration& value) { SetInferenceConfiguration(value); return *this;}
    inline PromptVariant& WithInferenceConfiguration(PromptInferenceConfiguration&& value) { SetInferenceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, each containing a key-value pair that defines a metadata
     * tag and value to attach to a prompt variant.</p>
     */
    inline const Aws::Vector<PromptMetadataEntry>& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::Vector<PromptMetadataEntry>& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::Vector<PromptMetadataEntry>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline PromptVariant& WithMetadata(const Aws::Vector<PromptMetadataEntry>& value) { SetMetadata(value); return *this;}
    inline PromptVariant& WithMetadata(Aws::Vector<PromptMetadataEntry>&& value) { SetMetadata(std::move(value)); return *this;}
    inline PromptVariant& AddMetadata(const PromptMetadataEntry& value) { m_metadataHasBeenSet = true; m_metadata.push_back(value); return *this; }
    inline PromptVariant& AddMetadata(PromptMetadataEntry&& value) { m_metadataHasBeenSet = true; m_metadata.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the model or <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
     * profile</a> with which to run inference on the prompt.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline PromptVariant& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline PromptVariant& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline PromptVariant& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the prompt variant.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PromptVariant& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PromptVariant& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PromptVariant& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for the prompt template.</p>
     */
    inline const PromptTemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    inline void SetTemplateConfiguration(const PromptTemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }
    inline void SetTemplateConfiguration(PromptTemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }
    inline PromptVariant& WithTemplateConfiguration(const PromptTemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}
    inline PromptVariant& WithTemplateConfiguration(PromptTemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of prompt template to use.</p>
     */
    inline const PromptTemplateType& GetTemplateType() const{ return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(const PromptTemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline void SetTemplateType(PromptTemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }
    inline PromptVariant& WithTemplateType(const PromptTemplateType& value) { SetTemplateType(value); return *this;}
    inline PromptVariant& WithTemplateType(PromptTemplateType&& value) { SetTemplateType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_additionalModelRequestFields;
    bool m_additionalModelRequestFieldsHasBeenSet = false;

    PromptGenAiResource m_genAiResource;
    bool m_genAiResourceHasBeenSet = false;

    PromptInferenceConfiguration m_inferenceConfiguration;
    bool m_inferenceConfigurationHasBeenSet = false;

    Aws::Vector<PromptMetadataEntry> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PromptTemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    PromptTemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
