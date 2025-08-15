/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/PromptType.h>
#include <aws/bedrock-agent/model/CreationMode.h>
#include <aws/bedrock-agent/model/PromptState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/InferenceConfiguration.h>
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
   * <p>Contains configurations to override a prompt template in one part of an agent
   * sequence. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
   * prompts</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptConfiguration">AWS
   * API Reference</a></p>
   */
  class PromptConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PromptConfiguration() = default;
    AWS_BEDROCKAGENT_API PromptConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step in the agent sequence that this prompt configuration applies to.</p>
     */
    inline PromptType GetPromptType() const { return m_promptType; }
    inline bool PromptTypeHasBeenSet() const { return m_promptTypeHasBeenSet; }
    inline void SetPromptType(PromptType value) { m_promptTypeHasBeenSet = true; m_promptType = value; }
    inline PromptConfiguration& WithPromptType(PromptType value) { SetPromptType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to override the default prompt template for this
     * <code>promptType</code>. Set this value to <code>OVERRIDDEN</code> to use the
     * prompt that you provide in the <code>basePromptTemplate</code>. If you leave it
     * as <code>DEFAULT</code>, the agent uses a default prompt template.</p>
     */
    inline CreationMode GetPromptCreationMode() const { return m_promptCreationMode; }
    inline bool PromptCreationModeHasBeenSet() const { return m_promptCreationModeHasBeenSet; }
    inline void SetPromptCreationMode(CreationMode value) { m_promptCreationModeHasBeenSet = true; m_promptCreationMode = value; }
    inline PromptConfiguration& WithPromptCreationMode(CreationMode value) { SetPromptCreationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to allow the agent to carry out the step specified in the
     * <code>promptType</code>. If you set this value to <code>DISABLED</code>, the
     * agent skips that step. The default state for each <code>promptType</code> is as
     * follows.</p> <ul> <li> <p> <code>PRE_PROCESSING</code> – <code>DISABLED</code>
     * </p> </li> <li> <p> <code>ORCHESTRATION</code> – <code>ENABLED</code> </p> </li>
     * <li> <p> <code>KNOWLEDGE_BASE_RESPONSE_GENERATION</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>POST_PROCESSING</code> – <code>DISABLED</code> </p>
     * </li> </ul>
     */
    inline PromptState GetPromptState() const { return m_promptState; }
    inline bool PromptStateHasBeenSet() const { return m_promptStateHasBeenSet; }
    inline void SetPromptState(PromptState value) { m_promptStateHasBeenSet = true; m_promptState = value; }
    inline PromptConfiguration& WithPromptState(PromptState value) { SetPromptState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the prompt template with which to replace the default prompt
     * template. You can use placeholder variables in the base prompt template to
     * customize the prompt. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts-configure.html">Configure
     * the prompt templates</a>.</p>
     */
    inline const Aws::String& GetBasePromptTemplate() const { return m_basePromptTemplate; }
    inline bool BasePromptTemplateHasBeenSet() const { return m_basePromptTemplateHasBeenSet; }
    template<typename BasePromptTemplateT = Aws::String>
    void SetBasePromptTemplate(BasePromptTemplateT&& value) { m_basePromptTemplateHasBeenSet = true; m_basePromptTemplate = std::forward<BasePromptTemplateT>(value); }
    template<typename BasePromptTemplateT = Aws::String>
    PromptConfiguration& WithBasePromptTemplate(BasePromptTemplateT&& value) { SetBasePromptTemplate(std::forward<BasePromptTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains inference parameters to use when the agent invokes a foundation
     * model in the part of the agent sequence defined by the <code>promptType</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline const InferenceConfiguration& GetInferenceConfiguration() const { return m_inferenceConfiguration; }
    inline bool InferenceConfigurationHasBeenSet() const { return m_inferenceConfigurationHasBeenSet; }
    template<typename InferenceConfigurationT = InferenceConfiguration>
    void SetInferenceConfiguration(InferenceConfigurationT&& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = std::forward<InferenceConfigurationT>(value); }
    template<typename InferenceConfigurationT = InferenceConfiguration>
    PromptConfiguration& WithInferenceConfiguration(InferenceConfigurationT&& value) { SetInferenceConfiguration(std::forward<InferenceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>. If you set the field as <code>OVERRIDDEN</code>, the
     * <code>overrideLambda</code> field in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * must be specified with the ARN of a Lambda function.</p>
     */
    inline CreationMode GetParserMode() const { return m_parserMode; }
    inline bool ParserModeHasBeenSet() const { return m_parserModeHasBeenSet; }
    inline void SetParserMode(CreationMode value) { m_parserModeHasBeenSet = true; m_parserMode = value; }
    inline PromptConfiguration& WithParserMode(CreationMode value) { SetParserMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent's foundation model.</p>
     */
    inline const Aws::String& GetFoundationModel() const { return m_foundationModel; }
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }
    template<typename FoundationModelT = Aws::String>
    void SetFoundationModel(FoundationModelT&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::forward<FoundationModelT>(value); }
    template<typename FoundationModelT = Aws::String>
    PromptConfiguration& WithFoundationModel(FoundationModelT&& value) { SetFoundationModel(std::forward<FoundationModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the Converse or ConverseStream operations support the model,
     * <code>additionalModelRequestFields</code> contains additional inference
     * parameters, beyond the base set of inference parameters in the
     * <code>inferenceConfiguration</code> field. </p> <p>For more information, see
     * <i>Inference request parameters and response fields for foundation models</i> in
     * the Amazon Bedrock user guide.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalModelRequestFields() const { return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    template<typename AdditionalModelRequestFieldsT = Aws::Utils::Document>
    void SetAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::forward<AdditionalModelRequestFieldsT>(value); }
    template<typename AdditionalModelRequestFieldsT = Aws::Utils::Document>
    PromptConfiguration& WithAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) { SetAdditionalModelRequestFields(std::forward<AdditionalModelRequestFieldsT>(value)); return *this;}
    ///@}
  private:

    PromptType m_promptType{PromptType::NOT_SET};
    bool m_promptTypeHasBeenSet = false;

    CreationMode m_promptCreationMode{CreationMode::NOT_SET};
    bool m_promptCreationModeHasBeenSet = false;

    PromptState m_promptState{PromptState::NOT_SET};
    bool m_promptStateHasBeenSet = false;

    Aws::String m_basePromptTemplate;
    bool m_basePromptTemplateHasBeenSet = false;

    InferenceConfiguration m_inferenceConfiguration;
    bool m_inferenceConfigurationHasBeenSet = false;

    CreationMode m_parserMode{CreationMode::NOT_SET};
    bool m_parserModeHasBeenSet = false;

    Aws::String m_foundationModel;
    bool m_foundationModelHasBeenSet = false;

    Aws::Utils::Document m_additionalModelRequestFields;
    bool m_additionalModelRequestFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
