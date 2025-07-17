/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleBooleanExpression.h>
#include <aws/mailmanager/model/RuleStringExpression.h>
#include <aws/mailmanager/model/RuleNumberExpression.h>
#include <aws/mailmanager/model/RuleIpExpression.h>
#include <aws/mailmanager/model/RuleVerdictExpression.h>
#include <aws/mailmanager/model/RuleDmarcExpression.h>
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
   * <p>The conditional expression used to evaluate an email for determining if a
   * rule action should be taken.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleCondition">AWS
   * API Reference</a></p>
   */
  class RuleCondition
  {
  public:
    AWS_MAILMANAGER_API RuleCondition() = default;
    AWS_MAILMANAGER_API RuleCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The condition applies to a boolean expression passed in this field.</p>
     */
    inline const RuleBooleanExpression& GetBooleanExpression() const { return m_booleanExpression; }
    inline bool BooleanExpressionHasBeenSet() const { return m_booleanExpressionHasBeenSet; }
    template<typename BooleanExpressionT = RuleBooleanExpression>
    void SetBooleanExpression(BooleanExpressionT&& value) { m_booleanExpressionHasBeenSet = true; m_booleanExpression = std::forward<BooleanExpressionT>(value); }
    template<typename BooleanExpressionT = RuleBooleanExpression>
    RuleCondition& WithBooleanExpression(BooleanExpressionT&& value) { SetBooleanExpression(std::forward<BooleanExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition applies to a string expression passed in this field.</p>
     */
    inline const RuleStringExpression& GetStringExpression() const { return m_stringExpression; }
    inline bool StringExpressionHasBeenSet() const { return m_stringExpressionHasBeenSet; }
    template<typename StringExpressionT = RuleStringExpression>
    void SetStringExpression(StringExpressionT&& value) { m_stringExpressionHasBeenSet = true; m_stringExpression = std::forward<StringExpressionT>(value); }
    template<typename StringExpressionT = RuleStringExpression>
    RuleCondition& WithStringExpression(StringExpressionT&& value) { SetStringExpression(std::forward<StringExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition applies to a number expression passed in this field.</p>
     */
    inline const RuleNumberExpression& GetNumberExpression() const { return m_numberExpression; }
    inline bool NumberExpressionHasBeenSet() const { return m_numberExpressionHasBeenSet; }
    template<typename NumberExpressionT = RuleNumberExpression>
    void SetNumberExpression(NumberExpressionT&& value) { m_numberExpressionHasBeenSet = true; m_numberExpression = std::forward<NumberExpressionT>(value); }
    template<typename NumberExpressionT = RuleNumberExpression>
    RuleCondition& WithNumberExpression(NumberExpressionT&& value) { SetNumberExpression(std::forward<NumberExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition applies to an IP address expression passed in this field.</p>
     */
    inline const RuleIpExpression& GetIpExpression() const { return m_ipExpression; }
    inline bool IpExpressionHasBeenSet() const { return m_ipExpressionHasBeenSet; }
    template<typename IpExpressionT = RuleIpExpression>
    void SetIpExpression(IpExpressionT&& value) { m_ipExpressionHasBeenSet = true; m_ipExpression = std::forward<IpExpressionT>(value); }
    template<typename IpExpressionT = RuleIpExpression>
    RuleCondition& WithIpExpression(IpExpressionT&& value) { SetIpExpression(std::forward<IpExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition applies to a verdict expression passed in this field.</p>
     */
    inline const RuleVerdictExpression& GetVerdictExpression() const { return m_verdictExpression; }
    inline bool VerdictExpressionHasBeenSet() const { return m_verdictExpressionHasBeenSet; }
    template<typename VerdictExpressionT = RuleVerdictExpression>
    void SetVerdictExpression(VerdictExpressionT&& value) { m_verdictExpressionHasBeenSet = true; m_verdictExpression = std::forward<VerdictExpressionT>(value); }
    template<typename VerdictExpressionT = RuleVerdictExpression>
    RuleCondition& WithVerdictExpression(VerdictExpressionT&& value) { SetVerdictExpression(std::forward<VerdictExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition applies to a DMARC policy expression passed in this field.</p>
     */
    inline const RuleDmarcExpression& GetDmarcExpression() const { return m_dmarcExpression; }
    inline bool DmarcExpressionHasBeenSet() const { return m_dmarcExpressionHasBeenSet; }
    template<typename DmarcExpressionT = RuleDmarcExpression>
    void SetDmarcExpression(DmarcExpressionT&& value) { m_dmarcExpressionHasBeenSet = true; m_dmarcExpression = std::forward<DmarcExpressionT>(value); }
    template<typename DmarcExpressionT = RuleDmarcExpression>
    RuleCondition& WithDmarcExpression(DmarcExpressionT&& value) { SetDmarcExpression(std::forward<DmarcExpressionT>(value)); return *this;}
    ///@}
  private:

    RuleBooleanExpression m_booleanExpression;
    bool m_booleanExpressionHasBeenSet = false;

    RuleStringExpression m_stringExpression;
    bool m_stringExpressionHasBeenSet = false;

    RuleNumberExpression m_numberExpression;
    bool m_numberExpressionHasBeenSet = false;

    RuleIpExpression m_ipExpression;
    bool m_ipExpressionHasBeenSet = false;

    RuleVerdictExpression m_verdictExpression;
    bool m_verdictExpressionHasBeenSet = false;

    RuleDmarcExpression m_dmarcExpression;
    bool m_dmarcExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
