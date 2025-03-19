/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/InvocationInput.h>
#include <aws/bedrock-agent-runtime/model/ModelInvocationInput.h>
#include <aws/bedrock-agent-runtime/model/RoutingClassifierModelInvocationOutput.h>
#include <aws/bedrock-agent-runtime/model/Observation.h>
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
   * <p>A trace for a routing classifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RoutingClassifierTrace">AWS
   * API Reference</a></p>
   */
  class RoutingClassifierTrace
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RoutingClassifierTrace() = default;
    AWS_BEDROCKAGENTRUNTIME_API RoutingClassifierTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RoutingClassifierTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The classifier's invocation input.</p>
     */
    inline const InvocationInput& GetInvocationInput() const { return m_invocationInput; }
    inline bool InvocationInputHasBeenSet() const { return m_invocationInputHasBeenSet; }
    template<typename InvocationInputT = InvocationInput>
    void SetInvocationInput(InvocationInputT&& value) { m_invocationInputHasBeenSet = true; m_invocationInput = std::forward<InvocationInputT>(value); }
    template<typename InvocationInputT = InvocationInput>
    RoutingClassifierTrace& WithInvocationInput(InvocationInputT&& value) { SetInvocationInput(std::forward<InvocationInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classifier's model invocation input.</p>
     */
    inline const ModelInvocationInput& GetModelInvocationInput() const { return m_modelInvocationInput; }
    inline bool ModelInvocationInputHasBeenSet() const { return m_modelInvocationInputHasBeenSet; }
    template<typename ModelInvocationInputT = ModelInvocationInput>
    void SetModelInvocationInput(ModelInvocationInputT&& value) { m_modelInvocationInputHasBeenSet = true; m_modelInvocationInput = std::forward<ModelInvocationInputT>(value); }
    template<typename ModelInvocationInputT = ModelInvocationInput>
    RoutingClassifierTrace& WithModelInvocationInput(ModelInvocationInputT&& value) { SetModelInvocationInput(std::forward<ModelInvocationInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classifier's model invocation output.</p>
     */
    inline const RoutingClassifierModelInvocationOutput& GetModelInvocationOutput() const { return m_modelInvocationOutput; }
    inline bool ModelInvocationOutputHasBeenSet() const { return m_modelInvocationOutputHasBeenSet; }
    template<typename ModelInvocationOutputT = RoutingClassifierModelInvocationOutput>
    void SetModelInvocationOutput(ModelInvocationOutputT&& value) { m_modelInvocationOutputHasBeenSet = true; m_modelInvocationOutput = std::forward<ModelInvocationOutputT>(value); }
    template<typename ModelInvocationOutputT = RoutingClassifierModelInvocationOutput>
    RoutingClassifierTrace& WithModelInvocationOutput(ModelInvocationOutputT&& value) { SetModelInvocationOutput(std::forward<ModelInvocationOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classifier's observation.</p>
     */
    inline const Observation& GetObservation() const { return m_observation; }
    inline bool ObservationHasBeenSet() const { return m_observationHasBeenSet; }
    template<typename ObservationT = Observation>
    void SetObservation(ObservationT&& value) { m_observationHasBeenSet = true; m_observation = std::forward<ObservationT>(value); }
    template<typename ObservationT = Observation>
    RoutingClassifierTrace& WithObservation(ObservationT&& value) { SetObservation(std::forward<ObservationT>(value)); return *this;}
    ///@}
  private:

    InvocationInput m_invocationInput;
    bool m_invocationInputHasBeenSet = false;

    ModelInvocationInput m_modelInvocationInput;
    bool m_modelInvocationInputHasBeenSet = false;

    RoutingClassifierModelInvocationOutput m_modelInvocationOutput;
    bool m_modelInvocationOutputHasBeenSet = false;

    Observation m_observation;
    bool m_observationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
