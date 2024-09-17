/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressBooleanToEvaluate.h>
#include <aws/mailmanager/model/IngressBooleanOperator.h>
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
   * <p>The structure for a boolean condition matching on the incoming
   * mail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressBooleanExpression">AWS
   * API Reference</a></p>
   */
  class IngressBooleanExpression
  {
  public:
    AWS_MAILMANAGER_API IngressBooleanExpression();
    AWS_MAILMANAGER_API IngressBooleanExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressBooleanExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operand on which to perform a boolean condition operation.</p>
     */
    inline const IngressBooleanToEvaluate& GetEvaluate() const{ return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    inline void SetEvaluate(const IngressBooleanToEvaluate& value) { m_evaluateHasBeenSet = true; m_evaluate = value; }
    inline void SetEvaluate(IngressBooleanToEvaluate&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::move(value); }
    inline IngressBooleanExpression& WithEvaluate(const IngressBooleanToEvaluate& value) { SetEvaluate(value); return *this;}
    inline IngressBooleanExpression& WithEvaluate(IngressBooleanToEvaluate&& value) { SetEvaluate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matching operator for a boolean condition expression.</p>
     */
    inline const IngressBooleanOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const IngressBooleanOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(IngressBooleanOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline IngressBooleanExpression& WithOperator(const IngressBooleanOperator& value) { SetOperator(value); return *this;}
    inline IngressBooleanExpression& WithOperator(IngressBooleanOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}
  private:

    IngressBooleanToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    IngressBooleanOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
