/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/FlowCondition.h>
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
   * <p>Contains configurations for the controller node of a DoWhile loop in the
   * flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/LoopControllerFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class LoopControllerFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API LoopControllerFlowNodeConfiguration() = default;
    AWS_BEDROCKAGENT_API LoopControllerFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API LoopControllerFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the condition that determines when the flow exits the DoWhile loop.
     * The loop executes until this condition evaluates to true.</p>
     */
    inline const FlowCondition& GetContinueCondition() const { return m_continueCondition; }
    inline bool ContinueConditionHasBeenSet() const { return m_continueConditionHasBeenSet; }
    template<typename ContinueConditionT = FlowCondition>
    void SetContinueCondition(ContinueConditionT&& value) { m_continueConditionHasBeenSet = true; m_continueCondition = std::forward<ContinueConditionT>(value); }
    template<typename ContinueConditionT = FlowCondition>
    LoopControllerFlowNodeConfiguration& WithContinueCondition(ContinueConditionT&& value) { SetContinueCondition(std::forward<ContinueConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of times the DoWhile loop can iterate before the
     * flow exits the loop.</p>
     */
    inline int GetMaxIterations() const { return m_maxIterations; }
    inline bool MaxIterationsHasBeenSet() const { return m_maxIterationsHasBeenSet; }
    inline void SetMaxIterations(int value) { m_maxIterationsHasBeenSet = true; m_maxIterations = value; }
    inline LoopControllerFlowNodeConfiguration& WithMaxIterations(int value) { SetMaxIterations(value); return *this;}
    ///@}
  private:

    FlowCondition m_continueCondition;
    bool m_continueConditionHasBeenSet = false;

    int m_maxIterations{0};
    bool m_maxIterationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
