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
    AWS_MAILMANAGER_API RuleBooleanExpression();
    AWS_MAILMANAGER_API RuleBooleanExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleBooleanExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operand on which to perform a boolean condition operation.</p>
     */
    inline const RuleBooleanToEvaluate& GetEvaluate() const{ return m_evaluate; }

    /**
     * <p>The operand on which to perform a boolean condition operation.</p>
     */
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }

    /**
     * <p>The operand on which to perform a boolean condition operation.</p>
     */
    inline void SetEvaluate(const RuleBooleanToEvaluate& value) { m_evaluateHasBeenSet = true; m_evaluate = value; }

    /**
     * <p>The operand on which to perform a boolean condition operation.</p>
     */
    inline void SetEvaluate(RuleBooleanToEvaluate&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::move(value); }

    /**
     * <p>The operand on which to perform a boolean condition operation.</p>
     */
    inline RuleBooleanExpression& WithEvaluate(const RuleBooleanToEvaluate& value) { SetEvaluate(value); return *this;}

    /**
     * <p>The operand on which to perform a boolean condition operation.</p>
     */
    inline RuleBooleanExpression& WithEvaluate(RuleBooleanToEvaluate&& value) { SetEvaluate(std::move(value)); return *this;}


    /**
     * <p>The matching operator for a boolean condition expression.</p>
     */
    inline const RuleBooleanOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The matching operator for a boolean condition expression.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The matching operator for a boolean condition expression.</p>
     */
    inline void SetOperator(const RuleBooleanOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The matching operator for a boolean condition expression.</p>
     */
    inline void SetOperator(RuleBooleanOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The matching operator for a boolean condition expression.</p>
     */
    inline RuleBooleanExpression& WithOperator(const RuleBooleanOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The matching operator for a boolean condition expression.</p>
     */
    inline RuleBooleanExpression& WithOperator(RuleBooleanOperator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    RuleBooleanToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    RuleBooleanOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
