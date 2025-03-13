/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleBooleanToEvaluate.h>
#include <aws/mailmanager/model/RuleBooleanOperator.h>
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
   * <p>A boolean expression to be used in a rule condition.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleBooleanExpression">AWS
   * API Reference</a></p>
   */
  class RuleBooleanExpression
  {
  public:
    AWS_MAILMANAGER_API RuleBooleanExpression() = default;
    AWS_MAILMANAGER_API RuleBooleanExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleBooleanExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operand on which to perform a boolean condition operation.</p>
     */
    inline const RuleBooleanToEvaluate& GetEvaluate() const { return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    template<typename EvaluateT = RuleBooleanToEvaluate>
    void SetEvaluate(EvaluateT&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::forward<EvaluateT>(value); }
    template<typename EvaluateT = RuleBooleanToEvaluate>
    RuleBooleanExpression& WithEvaluate(EvaluateT&& value) { SetEvaluate(std::forward<EvaluateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matching operator for a boolean condition expression.</p>
     */
    inline RuleBooleanOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(RuleBooleanOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline RuleBooleanExpression& WithOperator(RuleBooleanOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    RuleBooleanToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    RuleBooleanOperator m_operator{RuleBooleanOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
