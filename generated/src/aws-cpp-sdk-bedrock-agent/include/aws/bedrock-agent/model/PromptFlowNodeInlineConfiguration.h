/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/PromptTemplateType.h>
#include <aws/bedrock-agent/model/PromptTemplateConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/PromptInferenceConfiguration.h>
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
    AWS_BEDROCKAGENT_API PromptFlowNodeInlineConfiguration() = default;
    AWS_BEDROCKAGENT_API PromptFlowNodeInlineConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptFlowNodeInlineConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of prompt template.</p>
     */
    inline PromptTemplateType GetTemplateType() const { return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(PromptTemplateType value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline PromptFlowNodeInlineConfiguration& WithTemplateType(PromptTemplateType value) { SetTemplateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a prompt and variables in the prompt that can be replaced with
     * values at runtime.</p>
     */
    inline const PromptTemplateConfiguration& GetTemplateConfiguration() const { return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    template<typename TemplateConfigurationT = PromptTemplateConfiguration>
    void SetTemplateConfiguration(TemplateConfigurationT&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::forward<TemplateConfigurationT>(value); }
    template<typename TemplateConfigurationT = PromptTemplateConfiguration>
    PromptFlowNodeInlineConfiguration& WithTemplateConfiguration(TemplateConfigurationT&& value) { SetTemplateConfiguration(std::forward<TemplateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the model or <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
     * profile</a> to run inference with.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    PromptFlowNodeInlineConfiguration& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
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
    PromptFlowNodeInlineConfiguration& WithInferenceConfiguration(InferenceConfigurationT&& value) { SetInferenceConfiguration(std::forward<InferenceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional fields to be included in the model request for the Prompt
     * node.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalModelRequestFields() const { return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    template<typename AdditionalModelRequestFieldsT = Aws::Utils::Document>
    void SetAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::forward<AdditionalModelRequestFieldsT>(value); }
    template<typename AdditionalModelRequestFieldsT = Aws::Utils::Document>
    PromptFlowNodeInlineConfiguration& WithAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) { SetAdditionalModelRequestFields(std::forward<AdditionalModelRequestFieldsT>(value)); return *this;}
    ///@}
  private:

    PromptTemplateType m_templateType{PromptTemplateType::NOT_SET};
    bool m_templateTypeHasBeenSet = false;

    PromptTemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    PromptInferenceConfiguration m_inferenceConfiguration;
    bool m_inferenceConfigurationHasBeenSet = false;

    Aws::Utils::Document m_additionalModelRequestFields;
    bool m_additionalModelRequestFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
