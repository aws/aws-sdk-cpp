/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/InvocationInput.h>
#include <aws/bedrock-agent-runtime/model/ModelInvocationInput.h>
#include <aws/bedrock-agent-runtime/model/OrchestrationModelInvocationOutput.h>
#include <aws/bedrock-agent-runtime/model/Observation.h>
#include <aws/bedrock-agent-runtime/model/Rationale.h>
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
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationTrace();
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information pertaining to the action group or knowledge base that is
     * being invoked.</p>
     */
    inline const InvocationInput& GetInvocationInput() const{ return m_invocationInput; }
    inline bool InvocationInputHasBeenSet() const { return m_invocationInputHasBeenSet; }
    inline void SetInvocationInput(const InvocationInput& value) { m_invocationInputHasBeenSet = true; m_invocationInput = value; }
    inline void SetInvocationInput(InvocationInput&& value) { m_invocationInputHasBeenSet = true; m_invocationInput = std::move(value); }
    inline OrchestrationTrace& WithInvocationInput(const InvocationInput& value) { SetInvocationInput(value); return *this;}
    inline OrchestrationTrace& WithInvocationInput(InvocationInput&& value) { SetInvocationInput(std::move(value)); return *this;}
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
    inline const ModelInvocationInput& GetModelInvocationInput() const{ return m_modelInvocationInput; }
    inline bool ModelInvocationInputHasBeenSet() const { return m_modelInvocationInputHasBeenSet; }
    inline void SetModelInvocationInput(const ModelInvocationInput& value) { m_modelInvocationInputHasBeenSet = true; m_modelInvocationInput = value; }
    inline void SetModelInvocationInput(ModelInvocationInput&& value) { m_modelInvocationInputHasBeenSet = true; m_modelInvocationInput = std::move(value); }
    inline OrchestrationTrace& WithModelInvocationInput(const ModelInvocationInput& value) { SetModelInvocationInput(value); return *this;}
    inline OrchestrationTrace& WithModelInvocationInput(ModelInvocationInput&& value) { SetModelInvocationInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information pertaining to the output from the foundation model that
     * is being invoked.</p>
     */
    inline const OrchestrationModelInvocationOutput& GetModelInvocationOutput() const{ return m_modelInvocationOutput; }
    inline bool ModelInvocationOutputHasBeenSet() const { return m_modelInvocationOutputHasBeenSet; }
    inline void SetModelInvocationOutput(const OrchestrationModelInvocationOutput& value) { m_modelInvocationOutputHasBeenSet = true; m_modelInvocationOutput = value; }
    inline void SetModelInvocationOutput(OrchestrationModelInvocationOutput&& value) { m_modelInvocationOutputHasBeenSet = true; m_modelInvocationOutput = std::move(value); }
    inline OrchestrationTrace& WithModelInvocationOutput(const OrchestrationModelInvocationOutput& value) { SetModelInvocationOutput(value); return *this;}
    inline OrchestrationTrace& WithModelInvocationOutput(OrchestrationModelInvocationOutput&& value) { SetModelInvocationOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the observation (the output of the action group Lambda or
     * knowledge base) made by the agent.</p>
     */
    inline const Observation& GetObservation() const{ return m_observation; }
    inline bool ObservationHasBeenSet() const { return m_observationHasBeenSet; }
    inline void SetObservation(const Observation& value) { m_observationHasBeenSet = true; m_observation = value; }
    inline void SetObservation(Observation&& value) { m_observationHasBeenSet = true; m_observation = std::move(value); }
    inline OrchestrationTrace& WithObservation(const Observation& value) { SetObservation(value); return *this;}
    inline OrchestrationTrace& WithObservation(Observation&& value) { SetObservation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the reasoning, based on the input, that the agent uses to
     * justify carrying out an action group or getting information from a knowledge
     * base.</p>
     */
    inline const Rationale& GetRationale() const{ return m_rationale; }
    inline bool RationaleHasBeenSet() const { return m_rationaleHasBeenSet; }
    inline void SetRationale(const Rationale& value) { m_rationaleHasBeenSet = true; m_rationale = value; }
    inline void SetRationale(Rationale&& value) { m_rationaleHasBeenSet = true; m_rationale = std::move(value); }
    inline OrchestrationTrace& WithRationale(const Rationale& value) { SetRationale(value); return *this;}
    inline OrchestrationTrace& WithRationale(Rationale&& value) { SetRationale(std::move(value)); return *this;}
    ///@}
  private:

    InvocationInput m_invocationInput;
    bool m_invocationInputHasBeenSet = false;

    ModelInvocationInput m_modelInvocationInput;
    bool m_modelInvocationInputHasBeenSet = false;

    OrchestrationModelInvocationOutput m_modelInvocationOutput;
    bool m_modelInvocationOutputHasBeenSet = false;

    Observation m_observation;
    bool m_observationHasBeenSet = false;

    Rationale m_rationale;
    bool m_rationaleHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
