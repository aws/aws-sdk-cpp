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
    AWS_CODEPIPELINE_API StageConditionState();
    AWS_CODEPIPELINE_API StageConditionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API StageConditionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents information about the latest run of a condition for a stage.</p>
     */
    inline const StageConditionsExecution& GetLatestExecution() const{ return m_latestExecution; }
    inline bool LatestExecutionHasBeenSet() const { return m_latestExecutionHasBeenSet; }
    inline void SetLatestExecution(const StageConditionsExecution& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = value; }
    inline void SetLatestExecution(StageConditionsExecution&& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = std::move(value); }
    inline StageConditionState& WithLatestExecution(const StageConditionsExecution& value) { SetLatestExecution(value); return *this;}
    inline StageConditionState& WithLatestExecution(StageConditionsExecution&& value) { SetLatestExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The states of the conditions for a run of a condition for a stage.</p>
     */
    inline const Aws::Vector<ConditionState>& GetConditionStates() const{ return m_conditionStates; }
    inline bool ConditionStatesHasBeenSet() const { return m_conditionStatesHasBeenSet; }
    inline void SetConditionStates(const Aws::Vector<ConditionState>& value) { m_conditionStatesHasBeenSet = true; m_conditionStates = value; }
    inline void SetConditionStates(Aws::Vector<ConditionState>&& value) { m_conditionStatesHasBeenSet = true; m_conditionStates = std::move(value); }
    inline StageConditionState& WithConditionStates(const Aws::Vector<ConditionState>& value) { SetConditionStates(value); return *this;}
    inline StageConditionState& WithConditionStates(Aws::Vector<ConditionState>&& value) { SetConditionStates(std::move(value)); return *this;}
    inline StageConditionState& AddConditionStates(const ConditionState& value) { m_conditionStatesHasBeenSet = true; m_conditionStates.push_back(value); return *this; }
    inline StageConditionState& AddConditionStates(ConditionState&& value) { m_conditionStatesHasBeenSet = true; m_conditionStates.push_back(std::move(value)); return *this; }
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
