/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/bedrock-agent/model/PromptInferenceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/PromptTemplateConfiguration.h>
#include <aws/bedrock-agent/model/PromptTemplateType.h>
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
   * <p>Contains configurations for a prompt defined inline in the
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptFlowNodeInlineConfiguration">AWS
   * API Reference</a></p>
   */
  class PromptFlowNodeInlineConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PromptFlowNodeInlineConfiguration();
    AWS_BEDROCKAGENT_API PromptFlowNodeInlineConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptFlowNodeInlineConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional fields to be included in the model request for the Prompt
     * node.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalModelRequestFields() const{ return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    inline void SetAdditionalModelRequestFields(const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = value; }
    inline void SetAdditionalModelRequestFields(Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::move(value); }
    inline PromptFlowNodeInlineConfiguration& WithAdditionalModelRequestFields(const Aws::Utils::Document& value) { SetAdditionalModelRequestFields(value); return *this;}
    inline PromptFlowNodeInlineConfiguration& WithAdditionalModelRequestFields(Aws::Utils::Document&& value) { SetAdditionalModelRequestFields(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains inference configurations for the prompt.</p>
     */
    inline const PromptInferenceConfiguration& GetInferenceConfiguration() const{ return m_inferenceConfiguration; }
    inline bool InferenceConfigurationHasBeenSet() const { return m_inferenceConfigurationHasBeenSet; }
    inline void SetInferenceConfiguration(const PromptInferenceConfiguration& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = value; }
    inline void SetInferenceConfiguration(PromptInferenceConfiguration&& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = std::move(value); }
    inline PromptFlowNodeInlineConfiguration& WithInferenceConfiguration(const PromptInferenceConfiguration& value) { SetInferenceConfiguration(value); return *this;}
    inline PromptFlowNodeInlineConfiguration& WithInferenceConfiguration(PromptInferenceConfiguration&& value) { SetInferenceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the model or <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
     * profile</a> to run inference with.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline PromptFlowNodeInlineConfiguration& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline PromptFlowNodeInlineConfiguration& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline PromptFlowNodeInlineConfiguration& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a prompt and variables in the prompt that can be replaced with
     * values at runtime.</p>
     */
    inline const PromptTemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    inline void SetTemplateConfiguration(const PromptTemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }
    inline void SetTemplateConfiguration(PromptTemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }
    inline PromptFlowNodeInlineConfiguration& WithTemplateConfiguration(const PromptTemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}
    inline PromptFlowNodeInlineConfiguration& WithTemplateConfiguration(PromptTemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of prompt template.</p>
     */
    inline const PromptTemplateType& GetTemplateType() const{ return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(const PromptTemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline void SetTemplateType(PromptTemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }
    inline PromptFlowNodeInlineConfiguration& WithTemplateType(const PromptTemplateType& value) { SetTemplateType(value); return *this;}
    inline PromptFlowNodeInlineConfiguration& WithTemplateType(PromptTemplateType&& value) { SetTemplateType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_additionalModelRequestFields;
    bool m_additionalModelRequestFieldsHasBeenSet = false;

    PromptInferenceConfiguration m_inferenceConfiguration;
    bool m_inferenceConfigurationHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    PromptTemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    PromptTemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
