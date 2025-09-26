/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/Rationale.h>
#include <aws/bedrock-agent-runtime/model/InvocationInput.h>
#include <aws/bedrock-agent-runtime/model/Observation.h>
#include <aws/bedrock-agent-runtime/model/ModelInvocationInput.h>
#include <aws/bedrock-agent-runtime/model/OrchestrationModelInvocationOutput.h>
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
   * <p>Details about the orchestration step, in which the agent determines the order
   * in which actions are executed and which knowledge bases are
   * retrieved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/OrchestrationTrace">AWS
   * API Reference</a></p>
   */
  class OrchestrationTrace
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationTrace() = default;
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the reasoning, based on the input, that the agent uses to
     * justify carrying out an action group or getting information from a knowledge
     * base.</p>
     */
    inline const Rationale& GetRationale() const { return m_rationale; }
    inline bool RationaleHasBeenSet() const { return m_rationaleHasBeenSet; }
    template<typename RationaleT = Rationale>
    void SetRationale(RationaleT&& value) { m_rationaleHasBeenSet = true; m_rationale = std::forward<RationaleT>(value); }
    template<typename RationaleT = Rationale>
    OrchestrationTrace& WithRationale(RationaleT&& value) { SetRationale(std::forward<RationaleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information pertaining to the action group or knowledge base that is
     * being invoked.</p>
     */
    inline const InvocationInput& GetInvocationInput() const { return m_invocationInput; }
    inline bool InvocationInputHasBeenSet() const { return m_invocationInputHasBeenSet; }
    template<typename InvocationInputT = InvocationInput>
    void SetInvocationInput(InvocationInputT&& value) { m_invocationInputHasBeenSet = true; m_invocationInput = std::forward<InvocationInputT>(value); }
    template<typename InvocationInputT = InvocationInput>
    OrchestrationTrace& WithInvocationInput(InvocationInputT&& value) { SetInvocationInput(std::forward<InvocationInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the observation (the output of the action group Lambda or
     * knowledge base) made by the agent.</p>
     */
    inline const Observation& GetObservation() const { return m_observation; }
    inline bool ObservationHasBeenSet() const { return m_observationHasBeenSet; }
    template<typename ObservationT = Observation>
    void SetObservation(ObservationT&& value) { m_observationHasBeenSet = true; m_observation = std::forward<ObservationT>(value); }
    template<typename ObservationT = Observation>
    OrchestrationTrace& WithObservation(ObservationT&& value) { SetObservation(std::forward<ObservationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input for the orchestration step.</p> <ul> <li> <p>The <code>type</code>
     * is <code>ORCHESTRATION</code>.</p> </li> <li> <p>The <code>text</code> contains
     * the prompt.</p> </li> <li> <p>The <code>inferenceConfiguration</code>,
     * <code>parserMode</code>, and <code>overrideLambda</code> values are set in the
     * <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
     * object that was set when the agent was created or updated.</p> </li> </ul>
     */
    inline const ModelInvocationInput& GetModelInvocationInput() const { return m_modelInvocationInput; }
    inline bool ModelInvocationInputHasBeenSet() const { return m_modelInvocationInputHasBeenSet; }
    template<typename ModelInvocationInputT = ModelInvocationInput>
    void SetModelInvocationInput(ModelInvocationInputT&& value) { m_modelInvocationInputHasBeenSet = true; m_modelInvocationInput = std::forward<ModelInvocationInputT>(value); }
    template<typename ModelInvocationInputT = ModelInvocationInput>
    OrchestrationTrace& WithModelInvocationInput(ModelInvocationInputT&& value) { SetModelInvocationInput(std::forward<ModelInvocationInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information pertaining to the output from the foundation model that
     * is being invoked.</p>
     */
    inline const OrchestrationModelInvocationOutput& GetModelInvocationOutput() const { return m_modelInvocationOutput; }
    inline bool ModelInvocationOutputHasBeenSet() const { return m_modelInvocationOutputHasBeenSet; }
    template<typename ModelInvocationOutputT = OrchestrationModelInvocationOutput>
    void SetModelInvocationOutput(ModelInvocationOutputT&& value) { m_modelInvocationOutputHasBeenSet = true; m_modelInvocationOutput = std::forward<ModelInvocationOutputT>(value); }
    template<typename ModelInvocationOutputT = OrchestrationModelInvocationOutput>
    OrchestrationTrace& WithModelInvocationOutput(ModelInvocationOutputT&& value) { SetModelInvocationOutput(std::forward<ModelInvocationOutputT>(value)); return *this;}
    ///@}
  private:

    Rationale m_rationale;
    bool m_rationaleHasBeenSet = false;

    InvocationInput m_invocationInput;
    bool m_invocationInputHasBeenSet = false;

    Observation m_observation;
    bool m_observationHasBeenSet = false;

    ModelInvocationInput m_modelInvocationInput;
    bool m_modelInvocationInputHasBeenSet = false;

    OrchestrationModelInvocationOutput m_modelInvocationOutput;
    bool m_modelInvocationOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
