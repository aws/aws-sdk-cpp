/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/PromptType.h>
#include <aws/bedrock-agent-runtime/model/CreationMode.h>
#include <aws/bedrock-agent-runtime/model/InferenceConfiguration.h>
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
    AWS_BEDROCKAGENTRUNTIME_API ModelInvocationInput() = default;
    AWS_BEDROCKAGENTRUNTIME_API ModelInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ModelInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline const Aws::String& GetTraceId() const { return m_traceId; }
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
    template<typename TraceIdT = Aws::String>
    void SetTraceId(TraceIdT&& value) { m_traceIdHasBeenSet = true; m_traceId = std::forward<TraceIdT>(value); }
    template<typename TraceIdT = Aws::String>
    ModelInvocationInput& WithTraceId(TraceIdT&& value) { SetTraceId(std::forward<TraceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text that prompted the agent at this step.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    ModelInvocationInput& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step in the agent sequence.</p>
     */
    inline PromptType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PromptType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ModelInvocationInput& WithType(PromptType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence.</p>
     */
    inline const Aws::String& GetOverrideLambda() const { return m_overrideLambda; }
    inline bool OverrideLambdaHasBeenSet() const { return m_overrideLambdaHasBeenSet; }
    template<typename OverrideLambdaT = Aws::String>
    void SetOverrideLambda(OverrideLambdaT&& value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda = std::forward<OverrideLambdaT>(value); }
    template<typename OverrideLambdaT = Aws::String>
    ModelInvocationInput& WithOverrideLambda(OverrideLambdaT&& value) { SetOverrideLambda(std::forward<OverrideLambdaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the default prompt template was <code>OVERRIDDEN</code>. If
     * it was, the <code>basePromptTemplate</code> that was set in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object when the agent was created or updated is used instead.</p>
     */
    inline CreationMode GetPromptCreationMode() const { return m_promptCreationMode; }
    inline bool PromptCreationModeHasBeenSet() const { return m_promptCreationModeHasBeenSet; }
    inline void SetPromptCreationMode(CreationMode value) { m_promptCreationModeHasBeenSet = true; m_promptCreationMode = value; }
    inline ModelInvocationInput& WithPromptCreationMode(CreationMode value) { SetPromptCreationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications about the inference parameters that were provided alongside
     * the prompt. These are specified in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object that was set when the agent was created or updated. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>.</p>
     */
    inline const InferenceConfiguration& GetInferenceConfiguration() const { return m_inferenceConfiguration; }
    inline bool InferenceConfigurationHasBeenSet() const { return m_inferenceConfigurationHasBeenSet; }
    template<typename InferenceConfigurationT = InferenceConfiguration>
    void SetInferenceConfiguration(InferenceConfigurationT&& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = std::forward<InferenceConfigurationT>(value); }
    template<typename InferenceConfigurationT = InferenceConfiguration>
    ModelInvocationInput& WithInferenceConfiguration(InferenceConfigurationT&& value) { SetInferenceConfiguration(std::forward<InferenceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to override the default parser Lambda function when parsing
     * the raw foundation model output in the part of the agent sequence defined by the
     * <code>promptType</code>.</p>
     */
    inline CreationMode GetParserMode() const { return m_parserMode; }
    inline bool ParserModeHasBeenSet() const { return m_parserModeHasBeenSet; }
    inline void SetParserMode(CreationMode value) { m_parserModeHasBeenSet = true; m_parserMode = value; }
    inline ModelInvocationInput& WithParserMode(CreationMode value) { SetParserMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a foundation model.</p>
     */
    inline const Aws::String& GetFoundationModel() const { return m_foundationModel; }
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }
    template<typename FoundationModelT = Aws::String>
    void SetFoundationModel(FoundationModelT&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::forward<FoundationModelT>(value); }
    template<typename FoundationModelT = Aws::String>
    ModelInvocationInput& WithFoundationModel(FoundationModelT&& value) { SetFoundationModel(std::forward<FoundationModelT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    PromptType m_type{PromptType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_overrideLambda;
    bool m_overrideLambdaHasBeenSet = false;

    CreationMode m_promptCreationMode{CreationMode::NOT_SET};
    bool m_promptCreationModeHasBeenSet = false;

    InferenceConfiguration m_inferenceConfiguration;
    bool m_inferenceConfigurationHasBeenSet = false;

    CreationMode m_parserMode{CreationMode::NOT_SET};
    bool m_parserModeHasBeenSet = false;

    Aws::String m_foundationModel;
    bool m_foundationModelHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
