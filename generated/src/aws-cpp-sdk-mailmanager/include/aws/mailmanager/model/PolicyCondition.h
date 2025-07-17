/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressStringExpression.h>
#include <aws/mailmanager/model/IngressIpv4Expression.h>
#include <aws/mailmanager/model/IngressIpv6Expression.h>
#include <aws/mailmanager/model/IngressTlsProtocolExpression.h>
#include <aws/mailmanager/model/IngressBooleanExpression.h>
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
    AWS_MAILMANAGER_API PolicyCondition() = default;
    AWS_MAILMANAGER_API PolicyCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API PolicyCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This represents a string based condition matching on the incoming mail. It
     * performs the string operation configured in 'Operator' and evaluates the
     * 'Protocol' object against the 'Value'.</p>
     */
    inline const IngressStringExpression& GetStringExpression() const { return m_stringExpression; }
    inline bool StringExpressionHasBeenSet() const { return m_stringExpressionHasBeenSet; }
    template<typename StringExpressionT = IngressStringExpression>
    void SetStringExpression(StringExpressionT&& value) { m_stringExpressionHasBeenSet = true; m_stringExpression = std::forward<StringExpressionT>(value); }
    template<typename StringExpressionT = IngressStringExpression>
    PolicyCondition& WithStringExpression(StringExpressionT&& value) { SetStringExpression(std::forward<StringExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This represents an IP based condition matching on the incoming mail. It
     * performs the operation configured in 'Operator' and evaluates the 'Protocol'
     * object against the 'Value'.</p>
     */
    inline const IngressIpv4Expression& GetIpExpression() const { return m_ipExpression; }
    inline bool IpExpressionHasBeenSet() const { return m_ipExpressionHasBeenSet; }
    template<typename IpExpressionT = IngressIpv4Expression>
    void SetIpExpression(IpExpressionT&& value) { m_ipExpressionHasBeenSet = true; m_ipExpression = std::forward<IpExpressionT>(value); }
    template<typename IpExpressionT = IngressIpv4Expression>
    PolicyCondition& WithIpExpression(IpExpressionT&& value) { SetIpExpression(std::forward<IpExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This represents an IPv6 based condition matching on the incoming mail. It
     * performs the operation configured in 'Operator' and evaluates the 'Protocol'
     * object against the 'Value'.</p>
     */
    inline const IngressIpv6Expression& GetIpv6Expression() const { return m_ipv6Expression; }
    inline bool Ipv6ExpressionHasBeenSet() const { return m_ipv6ExpressionHasBeenSet; }
    template<typename Ipv6ExpressionT = IngressIpv6Expression>
    void SetIpv6Expression(Ipv6ExpressionT&& value) { m_ipv6ExpressionHasBeenSet = true; m_ipv6Expression = std::forward<Ipv6ExpressionT>(value); }
    template<typename Ipv6ExpressionT = IngressIpv6Expression>
    PolicyCondition& WithIpv6Expression(Ipv6ExpressionT&& value) { SetIpv6Expression(std::forward<Ipv6ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This represents a TLS based condition matching on the incoming mail. It
     * performs the operation configured in 'Operator' and evaluates the 'Protocol'
     * object against the 'Value'.</p>
     */
    inline const IngressTlsProtocolExpression& GetTlsExpression() const { return m_tlsExpression; }
    inline bool TlsExpressionHasBeenSet() const { return m_tlsExpressionHasBeenSet; }
    template<typename TlsExpressionT = IngressTlsProtocolExpression>
    void SetTlsExpression(TlsExpressionT&& value) { m_tlsExpressionHasBeenSet = true; m_tlsExpression = std::forward<TlsExpressionT>(value); }
    template<typename TlsExpressionT = IngressTlsProtocolExpression>
    PolicyCondition& WithTlsExpression(TlsExpressionT&& value) { SetTlsExpression(std::forward<TlsExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This represents a boolean type condition matching on the incoming mail. It
     * performs the boolean operation configured in 'Operator' and evaluates the
     * 'Protocol' object against the 'Value'.</p>
     */
    inline const IngressBooleanExpression& GetBooleanExpression() const { return m_booleanExpression; }
    inline bool BooleanExpressionHasBeenSet() const { return m_booleanExpressionHasBeenSet; }
    template<typename BooleanExpressionT = IngressBooleanExpression>
    void SetBooleanExpression(BooleanExpressionT&& value) { m_booleanExpressionHasBeenSet = true; m_booleanExpression = std::forward<BooleanExpressionT>(value); }
    template<typename BooleanExpressionT = IngressBooleanExpression>
    PolicyCondition& WithBooleanExpression(BooleanExpressionT&& value) { SetBooleanExpression(std::forward<BooleanExpressionT>(value)); return *this;}
    ///@}
  private:

    IngressStringExpression m_stringExpression;
    bool m_stringExpressionHasBeenSet = false;

    IngressIpv4Expression m_ipExpression;
    bool m_ipExpressionHasBeenSet = false;

    IngressIpv6Expression m_ipv6Expression;
    bool m_ipv6ExpressionHasBeenSet = false;

    IngressTlsProtocolExpression m_tlsExpression;
    bool m_tlsExpressionHasBeenSet = false;

    IngressBooleanExpression m_booleanExpression;
    bool m_booleanExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
