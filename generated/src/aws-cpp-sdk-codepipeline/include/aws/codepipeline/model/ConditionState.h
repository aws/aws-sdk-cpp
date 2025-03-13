/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ConditionExecution.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/RuleState.h>
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
   * <p>Information about the state of the condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ConditionState">AWS
   * API Reference</a></p>
   */
  class ConditionState
  {
  public:
    AWS_CODEPIPELINE_API ConditionState() = default;
    AWS_CODEPIPELINE_API ConditionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ConditionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the latest run of the rule.</p>
     */
    inline const ConditionExecution& GetLatestExecution() const { return m_latestExecution; }
    inline bool LatestExecutionHasBeenSet() const { return m_latestExecutionHasBeenSet; }
    template<typename LatestExecutionT = ConditionExecution>
    void SetLatestExecution(LatestExecutionT&& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = std::forward<LatestExecutionT>(value); }
    template<typename LatestExecutionT = ConditionExecution>
    ConditionState& WithLatestExecution(LatestExecutionT&& value) { SetLatestExecution(std::forward<LatestExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the rules for the condition.</p>
     */
    inline const Aws::Vector<RuleState>& GetRuleStates() const { return m_ruleStates; }
    inline bool RuleStatesHasBeenSet() const { return m_ruleStatesHasBeenSet; }
    template<typename RuleStatesT = Aws::Vector<RuleState>>
    void SetRuleStates(RuleStatesT&& value) { m_ruleStatesHasBeenSet = true; m_ruleStates = std::forward<RuleStatesT>(value); }
    template<typename RuleStatesT = Aws::Vector<RuleState>>
    ConditionState& WithRuleStates(RuleStatesT&& value) { SetRuleStates(std::forward<RuleStatesT>(value)); return *this;}
    template<typename RuleStatesT = RuleState>
    ConditionState& AddRuleStates(RuleStatesT&& value) { m_ruleStatesHasBeenSet = true; m_ruleStates.emplace_back(std::forward<RuleStatesT>(value)); return *this; }
    ///@}
  private:

    ConditionExecution m_latestExecution;
    bool m_latestExecutionHasBeenSet = false;

    Aws::Vector<RuleState> m_ruleStates;
    bool m_ruleStatesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
