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


    /**
     * <p>The number to evaluate in a numeric condition expression.</p>
     */
    inline const RuleNumberToEvaluate& GetEvaluate() const{ return m_evaluate; }

    /**
     * <p>The number to evaluate in a numeric condition expression.</p>
     */
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }

    /**
     * <p>The number to evaluate in a numeric condition expression.</p>
     */
    inline void SetEvaluate(const RuleNumberToEvaluate& value) { m_evaluateHasBeenSet = true; m_evaluate = value; }

    /**
     * <p>The number to evaluate in a numeric condition expression.</p>
     */
    inline void SetEvaluate(RuleNumberToEvaluate&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::move(value); }

    /**
     * <p>The number to evaluate in a numeric condition expression.</p>
     */
    inline RuleNumberExpression& WithEvaluate(const RuleNumberToEvaluate& value) { SetEvaluate(value); return *this;}

    /**
     * <p>The number to evaluate in a numeric condition expression.</p>
     */
    inline RuleNumberExpression& WithEvaluate(RuleNumberToEvaluate&& value) { SetEvaluate(std::move(value)); return *this;}


    /**
     * <p>The operator for a numeric condition expression.</p>
     */
    inline const RuleNumberOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator for a numeric condition expression.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator for a numeric condition expression.</p>
     */
    inline void SetOperator(const RuleNumberOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator for a numeric condition expression.</p>
     */
    inline void SetOperator(RuleNumberOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator for a numeric condition expression.</p>
     */
    inline RuleNumberExpression& WithOperator(const RuleNumberOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator for a numeric condition expression.</p>
     */
    inline RuleNumberExpression& WithOperator(RuleNumberOperator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>The value to evaluate in a numeric condition expression.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value to evaluate in a numeric condition expression.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value to evaluate in a numeric condition expression.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to evaluate in a numeric condition expression.</p>
     */
    inline RuleNumberExpression& WithValue(double value) { SetValue(value); return *this;}

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
