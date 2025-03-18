/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/Result.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/RuleDeclaration.h>
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
   * <p>The condition for the stage. A condition is made up of the rules and the
   * result for the condition. For more information about conditions, see <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/stage-conditions.html">Stage
   * conditions</a> and <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/concepts-how-it-works-conditions.html">How
   * do stage conditions work?</a>.. For more information about rules, see the <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/rule-reference.html">CodePipeline
   * rule reference</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/Condition">AWS
   * API Reference</a></p>
   */
  class Condition
  {
  public:
    AWS_CODEPIPELINE_API Condition() = default;
    AWS_CODEPIPELINE_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to be done when the condition is met. For example, rolling back an
     * execution for a failure condition.</p>
     */
    inline Result GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(Result value) { m_resultHasBeenSet = true; m_result = value; }
    inline Condition& WithResult(Result value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules that make up the condition.</p>
     */
    inline const Aws::Vector<RuleDeclaration>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<RuleDeclaration>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<RuleDeclaration>>
    Condition& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = RuleDeclaration>
    Condition& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}
  private:

    Result m_result{Result::NOT_SET};
    bool m_resultHasBeenSet = false;

    Aws::Vector<RuleDeclaration> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
