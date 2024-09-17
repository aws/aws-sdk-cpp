/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleStringToEvaluate.h>
#include <aws/mailmanager/model/RuleStringOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A string expression is evaluated against strings or substrings of the
   * email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleStringExpression">AWS
   * API Reference</a></p>
   */
  class RuleStringExpression
  {
  public:
    AWS_MAILMANAGER_API RuleStringExpression();
    AWS_MAILMANAGER_API RuleStringExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleStringExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The string to evaluate in a string condition expression.</p>
     */
    inline const RuleStringToEvaluate& GetEvaluate() const{ return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    inline void SetEvaluate(const RuleStringToEvaluate& value) { m_evaluateHasBeenSet = true; m_evaluate = value; }
    inline void SetEvaluate(RuleStringToEvaluate&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::move(value); }
    inline RuleStringExpression& WithEvaluate(const RuleStringToEvaluate& value) { SetEvaluate(value); return *this;}
    inline RuleStringExpression& WithEvaluate(RuleStringToEvaluate&& value) { SetEvaluate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matching operator for a string condition expression.</p>
     */
    inline const RuleStringOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const RuleStringOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(RuleStringOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline RuleStringExpression& WithOperator(const RuleStringOperator& value) { SetOperator(value); return *this;}
    inline RuleStringExpression& WithOperator(RuleStringOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string(s) to be evaluated in a string condition expression. For all
     * operators, except for NOT_EQUALS, if multiple values are given, the values are
     * processed as an OR. That is, if any of the values match the email's string using
     * the given operator, the condition is deemed to match. However, for NOT_EQUALS,
     * the condition is only deemed to match if none of the given strings match the
     * email's string.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline RuleStringExpression& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline RuleStringExpression& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline RuleStringExpression& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline RuleStringExpression& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline RuleStringExpression& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    RuleStringToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    RuleStringOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
