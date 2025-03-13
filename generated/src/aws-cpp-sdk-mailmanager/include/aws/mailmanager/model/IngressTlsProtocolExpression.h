/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressTlsProtocolToEvaluate.h>
#include <aws/mailmanager/model/IngressTlsProtocolOperator.h>
#include <aws/mailmanager/model/IngressTlsProtocolAttribute.h>
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
   * <p>The structure for a TLS related condition matching on the incoming
   * mail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressTlsProtocolExpression">AWS
   * API Reference</a></p>
   */
  class IngressTlsProtocolExpression
  {
  public:
    AWS_MAILMANAGER_API IngressTlsProtocolExpression() = default;
    AWS_MAILMANAGER_API IngressTlsProtocolExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressTlsProtocolExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The left hand side argument of a TLS condition expression.</p>
     */
    inline const IngressTlsProtocolToEvaluate& GetEvaluate() const { return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    template<typename EvaluateT = IngressTlsProtocolToEvaluate>
    void SetEvaluate(EvaluateT&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::forward<EvaluateT>(value); }
    template<typename EvaluateT = IngressTlsProtocolToEvaluate>
    IngressTlsProtocolExpression& WithEvaluate(EvaluateT&& value) { SetEvaluate(std::forward<EvaluateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matching operator for a TLS condition expression.</p>
     */
    inline IngressTlsProtocolOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(IngressTlsProtocolOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline IngressTlsProtocolExpression& WithOperator(IngressTlsProtocolOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The right hand side argument of a TLS condition expression.</p>
     */
    inline IngressTlsProtocolAttribute GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(IngressTlsProtocolAttribute value) { m_valueHasBeenSet = true; m_value = value; }
    inline IngressTlsProtocolExpression& WithValue(IngressTlsProtocolAttribute value) { SetValue(value); return *this;}
    ///@}
  private:

    IngressTlsProtocolToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    IngressTlsProtocolOperator m_operator{IngressTlsProtocolOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    IngressTlsProtocolAttribute m_value{IngressTlsProtocolAttribute::NOT_SET};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
