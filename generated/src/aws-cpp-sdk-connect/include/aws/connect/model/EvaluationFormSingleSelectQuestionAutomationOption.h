/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SingleSelectQuestionRuleCategoryAutomation.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the automation option of a single select
   * question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormSingleSelectQuestionAutomationOption">AWS
   * API Reference</a></p>
   */
  class EvaluationFormSingleSelectQuestionAutomationOption
  {
  public:
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionAutomationOption();
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionAutomationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionAutomationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The automation option based on a rule category for the single select
     * question.</p>
     */
    inline const SingleSelectQuestionRuleCategoryAutomation& GetRuleCategory() const{ return m_ruleCategory; }

    /**
     * <p>The automation option based on a rule category for the single select
     * question.</p>
     */
    inline bool RuleCategoryHasBeenSet() const { return m_ruleCategoryHasBeenSet; }

    /**
     * <p>The automation option based on a rule category for the single select
     * question.</p>
     */
    inline void SetRuleCategory(const SingleSelectQuestionRuleCategoryAutomation& value) { m_ruleCategoryHasBeenSet = true; m_ruleCategory = value; }

    /**
     * <p>The automation option based on a rule category for the single select
     * question.</p>
     */
    inline void SetRuleCategory(SingleSelectQuestionRuleCategoryAutomation&& value) { m_ruleCategoryHasBeenSet = true; m_ruleCategory = std::move(value); }

    /**
     * <p>The automation option based on a rule category for the single select
     * question.</p>
     */
    inline EvaluationFormSingleSelectQuestionAutomationOption& WithRuleCategory(const SingleSelectQuestionRuleCategoryAutomation& value) { SetRuleCategory(value); return *this;}

    /**
     * <p>The automation option based on a rule category for the single select
     * question.</p>
     */
    inline EvaluationFormSingleSelectQuestionAutomationOption& WithRuleCategory(SingleSelectQuestionRuleCategoryAutomation&& value) { SetRuleCategory(std::move(value)); return *this;}

  private:

    SingleSelectQuestionRuleCategoryAutomation m_ruleCategory;
    bool m_ruleCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
