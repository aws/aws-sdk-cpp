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
    AWS_MAILMANAGER_API IngressTlsProtocolExpression();
    AWS_MAILMANAGER_API IngressTlsProtocolExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressTlsProtocolExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The left hand side argument of a TLS condition expression.</p>
     */
    inline const IngressTlsProtocolToEvaluate& GetEvaluate() const{ return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    inline void SetEvaluate(const IngressTlsProtocolToEvaluate& value) { m_evaluateHasBeenSet = true; m_evaluate = value; }
    inline void SetEvaluate(IngressTlsProtocolToEvaluate&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::move(value); }
    inline IngressTlsProtocolExpression& WithEvaluate(const IngressTlsProtocolToEvaluate& value) { SetEvaluate(value); return *this;}
    inline IngressTlsProtocolExpression& WithEvaluate(IngressTlsProtocolToEvaluate&& value) { SetEvaluate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matching operator for a TLS condition expression.</p>
     */
    inline const IngressTlsProtocolOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const IngressTlsProtocolOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(IngressTlsProtocolOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline IngressTlsProtocolExpression& WithOperator(const IngressTlsProtocolOperator& value) { SetOperator(value); return *this;}
    inline IngressTlsProtocolExpression& WithOperator(IngressTlsProtocolOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The right hand side argument of a TLS condition expression.</p>
     */
    inline const IngressTlsProtocolAttribute& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const IngressTlsProtocolAttribute& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(IngressTlsProtocolAttribute&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline IngressTlsProtocolExpression& WithValue(const IngressTlsProtocolAttribute& value) { SetValue(value); return *this;}
    inline IngressTlsProtocolExpression& WithValue(IngressTlsProtocolAttribute&& value) { SetValue(std::move(value)); return *this;}
    ///@}
  private:

    IngressTlsProtocolToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    IngressTlsProtocolOperator m_operator;
    bool m_operatorHasBeenSet = false;

    IngressTlsProtocolAttribute m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
