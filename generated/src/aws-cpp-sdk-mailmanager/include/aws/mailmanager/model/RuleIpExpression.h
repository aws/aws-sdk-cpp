/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleIpToEvaluate.h>
#include <aws/mailmanager/model/RuleIpOperator.h>
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
   * <p>An IP address expression matching certain IP addresses within a given range
   * of IP addresses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleIpExpression">AWS
   * API Reference</a></p>
   */
  class RuleIpExpression
  {
  public:
    AWS_MAILMANAGER_API RuleIpExpression() = default;
    AWS_MAILMANAGER_API RuleIpExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleIpExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address to evaluate in this condition.</p>
     */
    inline const RuleIpToEvaluate& GetEvaluate() const { return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    template<typename EvaluateT = RuleIpToEvaluate>
    void SetEvaluate(EvaluateT&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::forward<EvaluateT>(value); }
    template<typename EvaluateT = RuleIpToEvaluate>
    RuleIpExpression& WithEvaluate(EvaluateT&& value) { SetEvaluate(std::forward<EvaluateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to evaluate the IP address.</p>
     */
    inline RuleIpOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(RuleIpOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline RuleIpExpression& WithOperator(RuleIpOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP CIDR blocks in format "x.y.z.w/n" (eg 10.0.0.0/8) to match with the
     * email's IP address. For the operator CIDR_MATCHES, if multiple values are given,
     * they are evaluated as an OR. That is, if the IP address is contained within any
     * of the given CIDR ranges, the condition is deemed to match. For
     * NOT_CIDR_MATCHES, if multiple CIDR ranges are given, the condition is deemed to
     * match if the IP address is not contained in any of the given CIDR ranges.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    RuleIpExpression& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    RuleIpExpression& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    RuleIpToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    RuleIpOperator m_operator{RuleIpOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
