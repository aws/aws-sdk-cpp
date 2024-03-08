/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/InferenceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/CreationMode.h>
#include <aws/bedrock-agent-runtime/model/PromptType.h>
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
   * <p>The input for the pre-processing step.</p> <ul> <li> <p>The <code>type</code>
   * matches the agent step.</p> </li> <li> <p>The <code>text</code> contains the
   * prompt.</p> </li> <li> <p>The <code>inferenceConfiguration</code>,
   * <code>parserMode</code>, and <code>overrideLambda</code> values are set in the
   * <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
   * object that was set when the agent was created or updated.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ModelInvocationInput">AWS
   * API Reference</a></p>
   */
  class ModelInvocationInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ModelInvocationInput();
    AWS_BEDROCKAGENTRUNTIME_API ModelInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ModelInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifications about the inference parameters that were provided alongside
     * the prompt. These are specified in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object that was set when the agent was created or updated. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline const InferenceConfiguration& GetInferenceConfiguration() const{ return m_inferenceConfiguration; }

    /**
     * <p>Specifications about the inference parameters that were provided alongside
     * the prompt. These are specified in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object that was set when the agent was created or updated. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline bool InferenceConfigurationHasBeenSet() const { return m_inferenceConfigurationHasBeenSet; }

    /**
     * <p>Specifications about the inference parameters that were provided alongside
     * the prompt. These are specified in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object that was set when the agent was created or updated. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline void SetInferenceConfiguration(const InferenceConfiguration& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = value; }

    /**
     * <p>Specifications about the inference parameters that were provided alongside
     * the prompt. These are specified in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object that was set when the agent was created or updated. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline void SetInferenceConfiguration(InferenceConfiguration&& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = std::move(value); }

    /**
     * <p>Specifications about the inference parameters that were provided alongside
     * the prompt. These are specified in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object that was set when the agent was created or updated. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline ModelInvocationInput& WithInferenceConfiguration(const InferenceConfiguration& value) { SetInferenceConfiguration(value); return *this;}

    /**
     * <p>Specifications about the inference parameters that were provided alongside
     * the prompt. These are specified in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object that was set when the agent was created or updated. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline ModelInvocationInput& WithInferenceConfiguration(InferenceConfiguration&& value) { SetInferenceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence.</p>
     */
    inline const Aws::String& GetOverrideLambda() const{ return m_overrideLambda; }

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence.</p>
     */
    inline bool OverrideLambdaHasBeenSet() const { return m_overrideLambdaHasBeenSet; }

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence.</p>
     */
    inline void SetOverrideLambda(const Aws::String& value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda = value; }

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence.</p>
     */
    inline void SetOverrideLambda(Aws::String&& value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda = std::move(value); }

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence.</p>
     */
    inline void SetOverrideLambda(const char* value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda.assign(value); }

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence.</p>
     */
    inline ModelInvocationInput& WithOverrideLambda(const Aws::String& value) { SetOverrideLambda(value); return *this;}

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence.</p>
     */
    inline ModelInvocationInput& WithOverrideLambda(Aws::String&& value) { SetOverrideLambda(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence.</p>
     */
    inline ModelInvocationInput& WithOverrideLambda(const char* value) { SetOverrideLambda(value); return *this;}


    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>.</p>
     */
    inline const CreationMode& GetParserMode() const{ return m_parserMode; }

    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>.</p>
     */
    inline bool ParserModeHasBeenSet() const { return m_parserModeHasBeenSet; }

    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>.</p>
     */
    inline void SetParserMode(const CreationMode& value) { m_parserModeHasBeenSet = true; m_parserMode = value; }

    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>.</p>
     */
    inline void SetParserMode(CreationMode&& value) { m_parserModeHasBeenSet = true; m_parserMode = std::move(value); }

    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>.</p>
     */
    inline ModelInvocationInput& WithParserMode(const CreationMode& value) { SetParserMode(value); return *this;}

    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>.</p>
     */
    inline ModelInvocationInput& WithParserMode(CreationMode&& value) { SetParserMode(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the default prompt template was <code>OVERRIDDEN</code>. If
     * it was, the <code>basePromptTemplate</code> that was set in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object when the agent was created or updated is used instead.</p>
     */
    inline const CreationMode& GetPromptCreationMode() const{ return m_promptCreationMode; }

    /**
     * <p>Specifies whether the default prompt template was <code>OVERRIDDEN</code>. If
     * it was, the <code>basePromptTemplate</code> that was set in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object when the agent was created or updated is used instead.</p>
     */
    inline bool PromptCreationModeHasBeenSet() const { return m_promptCreationModeHasBeenSet; }

    /**
     * <p>Specifies whether the default prompt template was <code>OVERRIDDEN</code>. If
     * it was, the <code>basePromptTemplate</code> that was set in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object when the agent was created or updated is used instead.</p>
     */
    inline void SetPromptCreationMode(const CreationMode& value) { m_promptCreationModeHasBeenSet = true; m_promptCreationMode = value; }

    /**
     * <p>Specifies whether the default prompt template was <code>OVERRIDDEN</code>. If
     * it was, the <code>basePromptTemplate</code> that was set in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object when the agent was created or updated is used instead.</p>
     */
    inline void SetPromptCreationMode(CreationMode&& value) { m_promptCreationModeHasBeenSet = true; m_promptCreationMode = std::move(value); }

    /**
     * <p>Specifies whether the default prompt template was <code>OVERRIDDEN</code>. If
     * it was, the <code>basePromptTemplate</code> that was set in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object when the agent was created or updated is used instead.</p>
     */
    inline ModelInvocationInput& WithPromptCreationMode(const CreationMode& value) { SetPromptCreationMode(value); return *this;}

    /**
     * <p>Specifies whether the default prompt template was <code>OVERRIDDEN</code>. If
     * it was, the <code>basePromptTemplate</code> that was set in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object when the agent was created or updated is used instead.</p>
     */
    inline ModelInvocationInput& WithPromptCreationMode(CreationMode&& value) { SetPromptCreationMode(std::move(value)); return *this;}


    /**
     * <p>The text that prompted the agent at this step.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text that prompted the agent at this step.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text that prompted the agent at this step.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text that prompted the agent at this step.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text that prompted the agent at this step.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text that prompted the agent at this step.</p>
     */
    inline ModelInvocationInput& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text that prompted the agent at this step.</p>
     */
    inline ModelInvocationInput& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text that prompted the agent at this step.</p>
     */
    inline ModelInvocationInput& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline const Aws::String& GetTraceId() const{ return m_traceId; }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline void SetTraceId(const Aws::String& value) { m_traceIdHasBeenSet = true; m_traceId = value; }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline void SetTraceId(Aws::String&& value) { m_traceIdHasBeenSet = true; m_traceId = std::move(value); }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline void SetTraceId(const char* value) { m_traceIdHasBeenSet = true; m_traceId.assign(value); }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline ModelInvocationInput& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline ModelInvocationInput& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline ModelInvocationInput& WithTraceId(const char* value) { SetTraceId(value); return *this;}


    /**
     * <p>The step in the agent sequence.</p>
     */
    inline const PromptType& GetType() const{ return m_type; }

    /**
     * <p>The step in the agent sequence.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The step in the agent sequence.</p>
     */
    inline void SetType(const PromptType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The step in the agent sequence.</p>
     */
    inline void SetType(PromptType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The step in the agent sequence.</p>
     */
    inline ModelInvocationInput& WithType(const PromptType& value) { SetType(value); return *this;}

    /**
     * <p>The step in the agent sequence.</p>
     */
    inline ModelInvocationInput& WithType(PromptType&& value) { SetType(std::move(value)); return *this;}

  private:

    InferenceConfiguration m_inferenceConfiguration;
    bool m_inferenceConfigurationHasBeenSet = false;

    Aws::String m_overrideLambda;
    bool m_overrideLambdaHasBeenSet = false;

    CreationMode m_parserMode;
    bool m_parserModeHasBeenSet = false;

    CreationMode m_promptCreationMode;
    bool m_promptCreationModeHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;

    PromptType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
