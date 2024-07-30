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
    AWS_CODEPIPELINE_API ConditionState();
    AWS_CODEPIPELINE_API ConditionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ConditionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the latest run of the rule.</p>
     */
    inline const ConditionExecution& GetLatestExecution() const{ return m_latestExecution; }
    inline bool LatestExecutionHasBeenSet() const { return m_latestExecutionHasBeenSet; }
    inline void SetLatestExecution(const ConditionExecution& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = value; }
    inline void SetLatestExecution(ConditionExecution&& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = std::move(value); }
    inline ConditionState& WithLatestExecution(const ConditionExecution& value) { SetLatestExecution(value); return *this;}
    inline ConditionState& WithLatestExecution(ConditionExecution&& value) { SetLatestExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the rules for the condition.</p>
     */
    inline const Aws::Vector<RuleState>& GetRuleStates() const{ return m_ruleStates; }
    inline bool RuleStatesHasBeenSet() const { return m_ruleStatesHasBeenSet; }
    inline void SetRuleStates(const Aws::Vector<RuleState>& value) { m_ruleStatesHasBeenSet = true; m_ruleStates = value; }
    inline void SetRuleStates(Aws::Vector<RuleState>&& value) { m_ruleStatesHasBeenSet = true; m_ruleStates = std::move(value); }
    inline ConditionState& WithRuleStates(const Aws::Vector<RuleState>& value) { SetRuleStates(value); return *this;}
    inline ConditionState& WithRuleStates(Aws::Vector<RuleState>&& value) { SetRuleStates(std::move(value)); return *this;}
    inline ConditionState& AddRuleStates(const RuleState& value) { m_ruleStatesHasBeenSet = true; m_ruleStates.push_back(value); return *this; }
    inline ConditionState& AddRuleStates(RuleState&& value) { m_ruleStatesHasBeenSet = true; m_ruleStates.push_back(std::move(value)); return *this; }
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
