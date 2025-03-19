/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressStringToEvaluate.h>
#include <aws/mailmanager/model/IngressStringOperator.h>
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
   * <p>The structure for a string based condition matching on the incoming
   * mail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressStringExpression">AWS
   * API Reference</a></p>
   */
  class IngressStringExpression
  {
  public:
    AWS_MAILMANAGER_API IngressStringExpression() = default;
    AWS_MAILMANAGER_API IngressStringExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressStringExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The left hand side argument of a string condition expression.</p>
     */
    inline const IngressStringToEvaluate& GetEvaluate() const { return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    template<typename EvaluateT = IngressStringToEvaluate>
    void SetEvaluate(EvaluateT&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::forward<EvaluateT>(value); }
    template<typename EvaluateT = IngressStringToEvaluate>
    IngressStringExpression& WithEvaluate(EvaluateT&& value) { SetEvaluate(std::forward<EvaluateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matching operator for a string condition expression.</p>
     */
    inline IngressStringOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(IngressStringOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline IngressStringExpression& WithOperator(IngressStringOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The right hand side argument of a string condition expression.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    IngressStringExpression& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    IngressStringExpression& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    IngressStringToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    IngressStringOperator m_operator{IngressStringOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
