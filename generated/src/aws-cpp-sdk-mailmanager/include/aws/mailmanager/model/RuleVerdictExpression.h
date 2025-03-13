/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleVerdictToEvaluate.h>
#include <aws/mailmanager/model/RuleVerdictOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/RuleVerdict.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>A verdict expression is evaluated against verdicts of the
   * email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleVerdictExpression">AWS
   * API Reference</a></p>
   */
  class RuleVerdictExpression
  {
  public:
    AWS_MAILMANAGER_API RuleVerdictExpression() = default;
    AWS_MAILMANAGER_API RuleVerdictExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleVerdictExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The verdict to evaluate in a verdict condition expression.</p>
     */
    inline const RuleVerdictToEvaluate& GetEvaluate() const { return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    template<typename EvaluateT = RuleVerdictToEvaluate>
    void SetEvaluate(EvaluateT&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::forward<EvaluateT>(value); }
    template<typename EvaluateT = RuleVerdictToEvaluate>
    RuleVerdictExpression& WithEvaluate(EvaluateT&& value) { SetEvaluate(std::forward<EvaluateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matching operator for a verdict condition expression.</p>
     */
    inline RuleVerdictOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(RuleVerdictOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline RuleVerdictExpression& WithOperator(RuleVerdictOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to match with the email's verdict using the given operator. For
     * the EQUALS operator, if multiple values are given, the condition is deemed to
     * match if any of the given verdicts match that of the email. For the NOT_EQUALS
     * operator, if multiple values are given, the condition is deemed to match of none
     * of the given verdicts match the verdict of the email.</p>
     */
    inline const Aws::Vector<RuleVerdict>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<RuleVerdict>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<RuleVerdict>>
    RuleVerdictExpression& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    inline RuleVerdictExpression& AddValues(RuleVerdict value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    RuleVerdictToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    RuleVerdictOperator m_operator{RuleVerdictOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::Vector<RuleVerdict> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
