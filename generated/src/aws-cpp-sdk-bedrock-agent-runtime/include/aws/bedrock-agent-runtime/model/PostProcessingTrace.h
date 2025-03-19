/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ModelInvocationInput.h>
#include <aws/bedrock-agent-runtime/model/PostProcessingModelInvocationOutput.h>
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
   * <p>Details about the post-processing step, in which the agent shapes the
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PostProcessingTrace">AWS
   * API Reference</a></p>
   */
  class PostProcessingTrace
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PostProcessingTrace() = default;
    AWS_BEDROCKAGENTRUNTIME_API PostProcessingTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PostProcessingTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input for the post-processing step.</p> <ul> <li> <p>The
     * <code>type</code> is <code>POST_PROCESSING</code>.</p> </li> <li> <p>The
     * <code>text</code> contains the prompt.</p> </li> <li> <p>The
     * <code>inferenceConfiguration</code>, <code>parserMode</code>, and
     * <code>overrideLambda</code> values are set in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object that was set when the agent was created or updated.</p> </li> </ul>
     */
    inline const ModelInvocationInput& GetModelInvocationInput() const { return m_modelInvocationInput; }
    inline bool ModelInvocationInputHasBeenSet() const { return m_modelInvocationInputHasBeenSet; }
    template<typename ModelInvocationInputT = ModelInvocationInput>
    void SetModelInvocationInput(ModelInvocationInputT&& value) { m_modelInvocationInputHasBeenSet = true; m_modelInvocationInput = std::forward<ModelInvocationInputT>(value); }
    template<typename ModelInvocationInputT = ModelInvocationInput>
    PostProcessingTrace& WithModelInvocationInput(ModelInvocationInputT&& value) { SetModelInvocationInput(std::forward<ModelInvocationInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foundation model output from the post-processing step.</p>
     */
    inline const PostProcessingModelInvocationOutput& GetModelInvocationOutput() const { return m_modelInvocationOutput; }
    inline bool ModelInvocationOutputHasBeenSet() const { return m_modelInvocationOutputHasBeenSet; }
    template<typename ModelInvocationOutputT = PostProcessingModelInvocationOutput>
    void SetModelInvocationOutput(ModelInvocationOutputT&& value) { m_modelInvocationOutputHasBeenSet = true; m_modelInvocationOutput = std::forward<ModelInvocationOutputT>(value); }
    template<typename ModelInvocationOutputT = PostProcessingModelInvocationOutput>
    PostProcessingTrace& WithModelInvocationOutput(ModelInvocationOutputT&& value) { SetModelInvocationOutput(std::forward<ModelInvocationOutputT>(value)); return *this;}
    ///@}
  private:

    ModelInvocationInput m_modelInvocationInput;
    bool m_modelInvocationInputHasBeenSet = false;

    PostProcessingModelInvocationOutput m_modelInvocationOutput;
    bool m_modelInvocationOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
