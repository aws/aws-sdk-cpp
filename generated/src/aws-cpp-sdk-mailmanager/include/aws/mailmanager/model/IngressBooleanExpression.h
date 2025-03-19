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
    AWS_MAILMANAGER_API IngressBooleanExpression() = default;
    AWS_MAILMANAGER_API IngressBooleanExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressBooleanExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operand on which to perform a boolean condition operation.</p>
     */
    inline const IngressBooleanToEvaluate& GetEvaluate() const { return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    template<typename EvaluateT = IngressBooleanToEvaluate>
    void SetEvaluate(EvaluateT&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::forward<EvaluateT>(value); }
    template<typename EvaluateT = IngressBooleanToEvaluate>
    IngressBooleanExpression& WithEvaluate(EvaluateT&& value) { SetEvaluate(std::forward<EvaluateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matching operator for a boolean condition expression.</p>
     */
    inline IngressBooleanOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(IngressBooleanOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline IngressBooleanExpression& WithOperator(IngressBooleanOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    IngressBooleanToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    IngressBooleanOperator m_operator{IngressBooleanOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
