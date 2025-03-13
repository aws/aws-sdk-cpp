/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/StageConditionsExecution.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ConditionState.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The state of a run of a condition for a stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StageConditionState">AWS
   * API Reference</a></p>
   */
  class StageConditionState
  {
  public:
    AWS_CODEPIPELINE_API StageConditionState() = default;
    AWS_CODEPIPELINE_API StageConditionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API StageConditionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents information about the latest run of a condition for a stage.</p>
     */
    inline const StageConditionsExecution& GetLatestExecution() const { return m_latestExecution; }
    inline bool LatestExecutionHasBeenSet() const { return m_latestExecutionHasBeenSet; }
    template<typename LatestExecutionT = StageConditionsExecution>
    void SetLatestExecution(LatestExecutionT&& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = std::forward<LatestExecutionT>(value); }
    template<typename LatestExecutionT = StageConditionsExecution>
    StageConditionState& WithLatestExecution(LatestExecutionT&& value) { SetLatestExecution(std::forward<LatestExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The states of the conditions for a run of a condition for a stage.</p>
     */
    inline const Aws::Vector<ConditionState>& GetConditionStates() const { return m_conditionStates; }
    inline bool ConditionStatesHasBeenSet() const { return m_conditionStatesHasBeenSet; }
    template<typename ConditionStatesT = Aws::Vector<ConditionState>>
    void SetConditionStates(ConditionStatesT&& value) { m_conditionStatesHasBeenSet = true; m_conditionStates = std::forward<ConditionStatesT>(value); }
    template<typename ConditionStatesT = Aws::Vector<ConditionState>>
    StageConditionState& WithConditionStates(ConditionStatesT&& value) { SetConditionStates(std::forward<ConditionStatesT>(value)); return *this;}
    template<typename ConditionStatesT = ConditionState>
    StageConditionState& AddConditionStates(ConditionStatesT&& value) { m_conditionStatesHasBeenSet = true; m_conditionStates.emplace_back(std::forward<ConditionStatesT>(value)); return *this; }
    ///@}
  private:

    StageConditionsExecution m_latestExecution;
    bool m_latestExecutionHasBeenSet = false;

    Aws::Vector<ConditionState> m_conditionStates;
    bool m_conditionStatesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
