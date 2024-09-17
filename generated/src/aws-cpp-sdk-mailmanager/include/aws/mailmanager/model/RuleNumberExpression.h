/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleNumberToEvaluate.h>
#include <aws/mailmanager/model/RuleNumberOperator.h>
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
   * <p>A number expression to match numeric conditions with integers from the
   * incoming email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleNumberExpression">AWS
   * API Reference</a></p>
   */
  class RuleNumberExpression
  {
  public:
    AWS_MAILMANAGER_API RuleNumberExpression();
    AWS_MAILMANAGER_API RuleNumberExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleNumberExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number to evaluate in a numeric condition expression.</p>
     */
    inline const RuleNumberToEvaluate& GetEvaluate() const{ return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    inline void SetEvaluate(const RuleNumberToEvaluate& value) { m_evaluateHasBeenSet = true; m_evaluate = value; }
    inline void SetEvaluate(RuleNumberToEvaluate&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::move(value); }
    inline RuleNumberExpression& WithEvaluate(const RuleNumberToEvaluate& value) { SetEvaluate(value); return *this;}
    inline RuleNumberExpression& WithEvaluate(RuleNumberToEvaluate&& value) { SetEvaluate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator for a numeric condition expression.</p>
     */
    inline const RuleNumberOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const RuleNumberOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(RuleNumberOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline RuleNumberExpression& WithOperator(const RuleNumberOperator& value) { SetOperator(value); return *this;}
    inline RuleNumberExpression& WithOperator(RuleNumberOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to evaluate in a numeric condition expression.</p>
     */
    inline double GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline RuleNumberExpression& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    RuleNumberToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    RuleNumberOperator m_operator;
    bool m_operatorHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
