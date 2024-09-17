/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressBooleanExpression.h>
#include <aws/mailmanager/model/IngressIpv4Expression.h>
#include <aws/mailmanager/model/IngressStringExpression.h>
#include <aws/mailmanager/model/IngressTlsProtocolExpression.h>
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
   * <p>The email traffic filtering conditions which are contained in a traffic
   * policy resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/PolicyCondition">AWS
   * API Reference</a></p>
   */
  class PolicyCondition
  {
  public:
    AWS_MAILMANAGER_API PolicyCondition();
    AWS_MAILMANAGER_API PolicyCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API PolicyCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This represents a boolean type condition matching on the incoming mail. It
     * performs the boolean operation configured in 'Operator' and evaluates the
     * 'Protocol' object against the 'Value'.</p>
     */
    inline const IngressBooleanExpression& GetBooleanExpression() const{ return m_booleanExpression; }
    inline bool BooleanExpressionHasBeenSet() const { return m_booleanExpressionHasBeenSet; }
    inline void SetBooleanExpression(const IngressBooleanExpression& value) { m_booleanExpressionHasBeenSet = true; m_booleanExpression = value; }
    inline void SetBooleanExpression(IngressBooleanExpression&& value) { m_booleanExpressionHasBeenSet = true; m_booleanExpression = std::move(value); }
    inline PolicyCondition& WithBooleanExpression(const IngressBooleanExpression& value) { SetBooleanExpression(value); return *this;}
    inline PolicyCondition& WithBooleanExpression(IngressBooleanExpression&& value) { SetBooleanExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This represents an IP based condition matching on the incoming mail. It
     * performs the operation configured in 'Operator' and evaluates the 'Protocol'
     * object against the 'Value'.</p>
     */
    inline const IngressIpv4Expression& GetIpExpression() const{ return m_ipExpression; }
    inline bool IpExpressionHasBeenSet() const { return m_ipExpressionHasBeenSet; }
    inline void SetIpExpression(const IngressIpv4Expression& value) { m_ipExpressionHasBeenSet = true; m_ipExpression = value; }
    inline void SetIpExpression(IngressIpv4Expression&& value) { m_ipExpressionHasBeenSet = true; m_ipExpression = std::move(value); }
    inline PolicyCondition& WithIpExpression(const IngressIpv4Expression& value) { SetIpExpression(value); return *this;}
    inline PolicyCondition& WithIpExpression(IngressIpv4Expression&& value) { SetIpExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This represents a string based condition matching on the incoming mail. It
     * performs the string operation configured in 'Operator' and evaluates the
     * 'Protocol' object against the 'Value'.</p>
     */
    inline const IngressStringExpression& GetStringExpression() const{ return m_stringExpression; }
    inline bool StringExpressionHasBeenSet() const { return m_stringExpressionHasBeenSet; }
    inline void SetStringExpression(const IngressStringExpression& value) { m_stringExpressionHasBeenSet = true; m_stringExpression = value; }
    inline void SetStringExpression(IngressStringExpression&& value) { m_stringExpressionHasBeenSet = true; m_stringExpression = std::move(value); }
    inline PolicyCondition& WithStringExpression(const IngressStringExpression& value) { SetStringExpression(value); return *this;}
    inline PolicyCondition& WithStringExpression(IngressStringExpression&& value) { SetStringExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This represents a TLS based condition matching on the incoming mail. It
     * performs the operation configured in 'Operator' and evaluates the 'Protocol'
     * object against the 'Value'.</p>
     */
    inline const IngressTlsProtocolExpression& GetTlsExpression() const{ return m_tlsExpression; }
    inline bool TlsExpressionHasBeenSet() const { return m_tlsExpressionHasBeenSet; }
    inline void SetTlsExpression(const IngressTlsProtocolExpression& value) { m_tlsExpressionHasBeenSet = true; m_tlsExpression = value; }
    inline void SetTlsExpression(IngressTlsProtocolExpression&& value) { m_tlsExpressionHasBeenSet = true; m_tlsExpression = std::move(value); }
    inline PolicyCondition& WithTlsExpression(const IngressTlsProtocolExpression& value) { SetTlsExpression(value); return *this;}
    inline PolicyCondition& WithTlsExpression(IngressTlsProtocolExpression&& value) { SetTlsExpression(std::move(value)); return *this;}
    ///@}
  private:

    IngressBooleanExpression m_booleanExpression;
    bool m_booleanExpressionHasBeenSet = false;

    IngressIpv4Expression m_ipExpression;
    bool m_ipExpressionHasBeenSet = false;

    IngressStringExpression m_stringExpression;
    bool m_stringExpressionHasBeenSet = false;

    IngressTlsProtocolExpression m_tlsExpression;
    bool m_tlsExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
