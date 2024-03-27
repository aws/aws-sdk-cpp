/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/InferenceConfiguration.h>
#include <aws/bedrock-agent/model/CreationMode.h>
#include <aws/bedrock-agent/model/PromptState.h>
#include <aws/bedrock-agent/model/PromptType.h>
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
    AWS_BEDROCKAGENT_API PromptConfiguration();
    AWS_BEDROCKAGENT_API PromptConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the prompt template with which to replace the default prompt
     * template. You can use placeholder variables in the base prompt template to
     * customize the prompt. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline const Aws::String& GetBasePromptTemplate() const{ return m_basePromptTemplate; }

    /**
     * <p>Defines the prompt template with which to replace the default prompt
     * template. You can use placeholder variables in the base prompt template to
     * customize the prompt. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline bool BasePromptTemplateHasBeenSet() const { return m_basePromptTemplateHasBeenSet; }

    /**
     * <p>Defines the prompt template with which to replace the default prompt
     * template. You can use placeholder variables in the base prompt template to
     * customize the prompt. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline void SetBasePromptTemplate(const Aws::String& value) { m_basePromptTemplateHasBeenSet = true; m_basePromptTemplate = value; }

    /**
     * <p>Defines the prompt template with which to replace the default prompt
     * template. You can use placeholder variables in the base prompt template to
     * customize the prompt. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline void SetBasePromptTemplate(Aws::String&& value) { m_basePromptTemplateHasBeenSet = true; m_basePromptTemplate = std::move(value); }

    /**
     * <p>Defines the prompt template with which to replace the default prompt
     * template. You can use placeholder variables in the base prompt template to
     * customize the prompt. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline void SetBasePromptTemplate(const char* value) { m_basePromptTemplateHasBeenSet = true; m_basePromptTemplate.assign(value); }

    /**
     * <p>Defines the prompt template with which to replace the default prompt
     * template. You can use placeholder variables in the base prompt template to
     * customize the prompt. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline PromptConfiguration& WithBasePromptTemplate(const Aws::String& value) { SetBasePromptTemplate(value); return *this;}

    /**
     * <p>Defines the prompt template with which to replace the default prompt
     * template. You can use placeholder variables in the base prompt template to
     * customize the prompt. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline PromptConfiguration& WithBasePromptTemplate(Aws::String&& value) { SetBasePromptTemplate(std::move(value)); return *this;}

    /**
     * <p>Defines the prompt template with which to replace the default prompt
     * template. You can use placeholder variables in the base prompt template to
     * customize the prompt. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline PromptConfiguration& WithBasePromptTemplate(const char* value) { SetBasePromptTemplate(value); return *this;}


    /**
     * <p>Contains inference parameters to use when the agent invokes a foundation
     * model in the part of the agent sequence defined by the <code>promptType</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline const InferenceConfiguration& GetInferenceConfiguration() const{ return m_inferenceConfiguration; }

    /**
     * <p>Contains inference parameters to use when the agent invokes a foundation
     * model in the part of the agent sequence defined by the <code>promptType</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline bool InferenceConfigurationHasBeenSet() const { return m_inferenceConfigurationHasBeenSet; }

    /**
     * <p>Contains inference parameters to use when the agent invokes a foundation
     * model in the part of the agent sequence defined by the <code>promptType</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline void SetInferenceConfiguration(const InferenceConfiguration& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = value; }

    /**
     * <p>Contains inference parameters to use when the agent invokes a foundation
     * model in the part of the agent sequence defined by the <code>promptType</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline void SetInferenceConfiguration(InferenceConfiguration&& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = std::move(value); }

    /**
     * <p>Contains inference parameters to use when the agent invokes a foundation
     * model in the part of the agent sequence defined by the <code>promptType</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline PromptConfiguration& WithInferenceConfiguration(const InferenceConfiguration& value) { SetInferenceConfiguration(value); return *this;}

    /**
     * <p>Contains inference parameters to use when the agent invokes a foundation
     * model in the part of the agent sequence defined by the <code>promptType</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline PromptConfiguration& WithInferenceConfiguration(InferenceConfiguration&& value) { SetInferenceConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>. If you set the field as <code>OVERRIDEN</code>, the
     * <code>overrideLambda</code> field in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * must be specified with the ARN of a Lambda function.</p>
     */
    inline const CreationMode& GetParserMode() const{ return m_parserMode; }

    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>. If you set the field as <code>OVERRIDEN</code>, the
     * <code>overrideLambda</code> field in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * must be specified with the ARN of a Lambda function.</p>
     */
    inline bool ParserModeHasBeenSet() const { return m_parserModeHasBeenSet; }

    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>. If you set the field as <code>OVERRIDEN</code>, the
     * <code>overrideLambda</code> field in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * must be specified with the ARN of a Lambda function.</p>
     */
    inline void SetParserMode(const CreationMode& value) { m_parserModeHasBeenSet = true; m_parserMode = value; }

    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>. If you set the field as <code>OVERRIDEN</code>, the
     * <code>overrideLambda</code> field in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * must be specified with the ARN of a Lambda function.</p>
     */
    inline void SetParserMode(CreationMode&& value) { m_parserModeHasBeenSet = true; m_parserMode = std::move(value); }

    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>. If you set the field as <code>OVERRIDEN</code>, the
     * <code>overrideLambda</code> field in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * must be specified with the ARN of a Lambda function.</p>
     */
    inline PromptConfiguration& WithParserMode(const CreationMode& value) { SetParserMode(value); return *this;}

    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>. If you set the field as <code>OVERRIDEN</code>, the
     * <code>overrideLambda</code> field in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * must be specified with the ARN of a Lambda function.</p>
     */
    inline PromptConfiguration& WithParserMode(CreationMode&& value) { SetParserMode(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to override the default prompt template for this
     * <code>promptType</code>. Set this value to <code>OVERRIDDEN</code> to use the
     * prompt that you provide in the <code>basePromptTemplate</code>. If you leave it
     * as <code>DEFAULT</code>, the agent uses a default prompt template.</p>
     */
    inline const CreationMode& GetPromptCreationMode() const{ return m_promptCreationMode; }

    /**
     * <p>Specifies whether to override the default prompt template for this
     * <code>promptType</code>. Set this value to <code>OVERRIDDEN</code> to use the
     * prompt that you provide in the <code>basePromptTemplate</code>. If you leave it
     * as <code>DEFAULT</code>, the agent uses a default prompt template.</p>
     */
    inline bool PromptCreationModeHasBeenSet() const { return m_promptCreationModeHasBeenSet; }

    /**
     * <p>Specifies whether to override the default prompt template for this
     * <code>promptType</code>. Set this value to <code>OVERRIDDEN</code> to use the
     * prompt that you provide in the <code>basePromptTemplate</code>. If you leave it
     * as <code>DEFAULT</code>, the agent uses a default prompt template.</p>
     */
    inline void SetPromptCreationMode(const CreationMode& value) { m_promptCreationModeHasBeenSet = true; m_promptCreationMode = value; }

    /**
     * <p>Specifies whether to override the default prompt template for this
     * <code>promptType</code>. Set this value to <code>OVERRIDDEN</code> to use the
     * prompt that you provide in the <code>basePromptTemplate</code>. If you leave it
     * as <code>DEFAULT</code>, the agent uses a default prompt template.</p>
     */
    inline void SetPromptCreationMode(CreationMode&& value) { m_promptCreationModeHasBeenSet = true; m_promptCreationMode = std::move(value); }

    /**
     * <p>Specifies whether to override the default prompt template for this
     * <code>promptType</code>. Set this value to <code>OVERRIDDEN</code> to use the
     * prompt that you provide in the <code>basePromptTemplate</code>. If you leave it
     * as <code>DEFAULT</code>, the agent uses a default prompt template.</p>
     */
    inline PromptConfiguration& WithPromptCreationMode(const CreationMode& value) { SetPromptCreationMode(value); return *this;}

    /**
     * <p>Specifies whether to override the default prompt template for this
     * <code>promptType</code>. Set this value to <code>OVERRIDDEN</code> to use the
     * prompt that you provide in the <code>basePromptTemplate</code>. If you leave it
     * as <code>DEFAULT</code>, the agent uses a default prompt template.</p>
     */
    inline PromptConfiguration& WithPromptCreationMode(CreationMode&& value) { SetPromptCreationMode(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to allow the agent to carry out the step specified in the
     * <code>promptType</code>. If you set this value to <code>DISABLED</code>, the
     * agent skips that step. The default state for each <code>promptType</code> is as
     * follows.</p> <ul> <li> <p> <code>PRE_PROCESSING</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>ORCHESTRATION</code> – <code>ENABLED</code> </p> </li>
     * <li> <p> <code>KNOWLEDGE_BASE_RESPONSE_GENERATION</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>POST_PROCESSING</code> – <code>DISABLED</code> </p>
     * </li> </ul>
     */
    inline const PromptState& GetPromptState() const{ return m_promptState; }

    /**
     * <p>Specifies whether to allow the agent to carry out the step specified in the
     * <code>promptType</code>. If you set this value to <code>DISABLED</code>, the
     * agent skips that step. The default state for each <code>promptType</code> is as
     * follows.</p> <ul> <li> <p> <code>PRE_PROCESSING</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>ORCHESTRATION</code> – <code>ENABLED</code> </p> </li>
     * <li> <p> <code>KNOWLEDGE_BASE_RESPONSE_GENERATION</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>POST_PROCESSING</code> – <code>DISABLED</code> </p>
     * </li> </ul>
     */
    inline bool PromptStateHasBeenSet() const { return m_promptStateHasBeenSet; }

    /**
     * <p>Specifies whether to allow the agent to carry out the step specified in the
     * <code>promptType</code>. If you set this value to <code>DISABLED</code>, the
     * agent skips that step. The default state for each <code>promptType</code> is as
     * follows.</p> <ul> <li> <p> <code>PRE_PROCESSING</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>ORCHESTRATION</code> – <code>ENABLED</code> </p> </li>
     * <li> <p> <code>KNOWLEDGE_BASE_RESPONSE_GENERATION</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>POST_PROCESSING</code> – <code>DISABLED</code> </p>
     * </li> </ul>
     */
    inline void SetPromptState(const PromptState& value) { m_promptStateHasBeenSet = true; m_promptState = value; }

    /**
     * <p>Specifies whether to allow the agent to carry out the step specified in the
     * <code>promptType</code>. If you set this value to <code>DISABLED</code>, the
     * agent skips that step. The default state for each <code>promptType</code> is as
     * follows.</p> <ul> <li> <p> <code>PRE_PROCESSING</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>ORCHESTRATION</code> – <code>ENABLED</code> </p> </li>
     * <li> <p> <code>KNOWLEDGE_BASE_RESPONSE_GENERATION</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>POST_PROCESSING</code> – <code>DISABLED</code> </p>
     * </li> </ul>
     */
    inline void SetPromptState(PromptState&& value) { m_promptStateHasBeenSet = true; m_promptState = std::move(value); }

    /**
     * <p>Specifies whether to allow the agent to carry out the step specified in the
     * <code>promptType</code>. If you set this value to <code>DISABLED</code>, the
     * agent skips that step. The default state for each <code>promptType</code> is as
     * follows.</p> <ul> <li> <p> <code>PRE_PROCESSING</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>ORCHESTRATION</code> – <code>ENABLED</code> </p> </li>
     * <li> <p> <code>KNOWLEDGE_BASE_RESPONSE_GENERATION</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>POST_PROCESSING</code> – <code>DISABLED</code> </p>
     * </li> </ul>
     */
    inline PromptConfiguration& WithPromptState(const PromptState& value) { SetPromptState(value); return *this;}

    /**
     * <p>Specifies whether to allow the agent to carry out the step specified in the
     * <code>promptType</code>. If you set this value to <code>DISABLED</code>, the
     * agent skips that step. The default state for each <code>promptType</code> is as
     * follows.</p> <ul> <li> <p> <code>PRE_PROCESSING</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>ORCHESTRATION</code> – <code>ENABLED</code> </p> </li>
     * <li> <p> <code>KNOWLEDGE_BASE_RESPONSE_GENERATION</code> – <code>ENABLED</code>
     * </p> </li> <li> <p> <code>POST_PROCESSING</code> – <code>DISABLED</code> </p>
     * </li> </ul>
     */
    inline PromptConfiguration& WithPromptState(PromptState&& value) { SetPromptState(std::move(value)); return *this;}


    /**
     * <p>The step in the agent sequence that this prompt configuration applies to.</p>
     */
    inline const PromptType& GetPromptType() const{ return m_promptType; }

    /**
     * <p>The step in the agent sequence that this prompt configuration applies to.</p>
     */
    inline bool PromptTypeHasBeenSet() const { return m_promptTypeHasBeenSet; }

    /**
     * <p>The step in the agent sequence that this prompt configuration applies to.</p>
     */
    inline void SetPromptType(const PromptType& value) { m_promptTypeHasBeenSet = true; m_promptType = value; }

    /**
     * <p>The step in the agent sequence that this prompt configuration applies to.</p>
     */
    inline void SetPromptType(PromptType&& value) { m_promptTypeHasBeenSet = true; m_promptType = std::move(value); }

    /**
     * <p>The step in the agent sequence that this prompt configuration applies to.</p>
     */
    inline PromptConfiguration& WithPromptType(const PromptType& value) { SetPromptType(value); return *this;}

    /**
     * <p>The step in the agent sequence that this prompt configuration applies to.</p>
     */
    inline PromptConfiguration& WithPromptType(PromptType&& value) { SetPromptType(std::move(value)); return *this;}

  private:

    Aws::String m_basePromptTemplate;
    bool m_basePromptTemplateHasBeenSet = false;

    InferenceConfiguration m_inferenceConfiguration;
    bool m_inferenceConfigurationHasBeenSet = false;

    CreationMode m_parserMode;
    bool m_parserModeHasBeenSet = false;

    CreationMode m_promptCreationMode;
    bool m_promptCreationModeHasBeenSet = false;

    PromptState m_promptState;
    bool m_promptStateHasBeenSet = false;

    PromptType m_promptType;
    bool m_promptTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
