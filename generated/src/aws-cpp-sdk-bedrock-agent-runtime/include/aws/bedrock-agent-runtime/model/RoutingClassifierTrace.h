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
    AWS_BEDROCKAGENTRUNTIME_API RoutingClassifierTrace();
    AWS_BEDROCKAGENTRUNTIME_API RoutingClassifierTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RoutingClassifierTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The classifier's invocation input.</p>
     */
    inline const InvocationInput& GetInvocationInput() const{ return m_invocationInput; }
    inline bool InvocationInputHasBeenSet() const { return m_invocationInputHasBeenSet; }
    inline void SetInvocationInput(const InvocationInput& value) { m_invocationInputHasBeenSet = true; m_invocationInput = value; }
    inline void SetInvocationInput(InvocationInput&& value) { m_invocationInputHasBeenSet = true; m_invocationInput = std::move(value); }
    inline RoutingClassifierTrace& WithInvocationInput(const InvocationInput& value) { SetInvocationInput(value); return *this;}
    inline RoutingClassifierTrace& WithInvocationInput(InvocationInput&& value) { SetInvocationInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classifier's model invocation input.</p>
     */
    inline const ModelInvocationInput& GetModelInvocationInput() const{ return m_modelInvocationInput; }
    inline bool ModelInvocationInputHasBeenSet() const { return m_modelInvocationInputHasBeenSet; }
    inline void SetModelInvocationInput(const ModelInvocationInput& value) { m_modelInvocationInputHasBeenSet = true; m_modelInvocationInput = value; }
    inline void SetModelInvocationInput(ModelInvocationInput&& value) { m_modelInvocationInputHasBeenSet = true; m_modelInvocationInput = std::move(value); }
    inline RoutingClassifierTrace& WithModelInvocationInput(const ModelInvocationInput& value) { SetModelInvocationInput(value); return *this;}
    inline RoutingClassifierTrace& WithModelInvocationInput(ModelInvocationInput&& value) { SetModelInvocationInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classifier's model invocation output.</p>
     */
    inline const RoutingClassifierModelInvocationOutput& GetModelInvocationOutput() const{ return m_modelInvocationOutput; }
    inline bool ModelInvocationOutputHasBeenSet() const { return m_modelInvocationOutputHasBeenSet; }
    inline void SetModelInvocationOutput(const RoutingClassifierModelInvocationOutput& value) { m_modelInvocationOutputHasBeenSet = true; m_modelInvocationOutput = value; }
    inline void SetModelInvocationOutput(RoutingClassifierModelInvocationOutput&& value) { m_modelInvocationOutputHasBeenSet = true; m_modelInvocationOutput = std::move(value); }
    inline RoutingClassifierTrace& WithModelInvocationOutput(const RoutingClassifierModelInvocationOutput& value) { SetModelInvocationOutput(value); return *this;}
    inline RoutingClassifierTrace& WithModelInvocationOutput(RoutingClassifierModelInvocationOutput&& value) { SetModelInvocationOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classifier's observation.</p>
     */
    inline const Observation& GetObservation() const{ return m_observation; }
    inline bool ObservationHasBeenSet() const { return m_observationHasBeenSet; }
    inline void SetObservation(const Observation& value) { m_observationHasBeenSet = true; m_observation = value; }
    inline void SetObservation(Observation&& value) { m_observationHasBeenSet = true; m_observation = std::move(value); }
    inline RoutingClassifierTrace& WithObservation(const Observation& value) { SetObservation(value); return *this;}
    inline RoutingClassifierTrace& WithObservation(Observation&& value) { SetObservation(std::move(value)); return *this;}
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
