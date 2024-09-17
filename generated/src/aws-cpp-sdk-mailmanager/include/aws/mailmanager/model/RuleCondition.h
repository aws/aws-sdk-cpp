/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleBooleanExpression.h>
#include <aws/mailmanager/model/RuleDmarcExpression.h>
#include <aws/mailmanager/model/RuleIpExpression.h>
#include <aws/mailmanager/model/RuleNumberExpression.h>
#include <aws/mailmanager/model/RuleStringExpression.h>
#include <aws/mailmanager/model/RuleVerdictExpression.h>
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
    AWS_MAILMANAGER_API RuleCondition();
    AWS_MAILMANAGER_API RuleCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The condition applies to a boolean expression passed in this field.</p>
     */
    inline const RuleBooleanExpression& GetBooleanExpression() const{ return m_booleanExpression; }
    inline bool BooleanExpressionHasBeenSet() const { return m_booleanExpressionHasBeenSet; }
    inline void SetBooleanExpression(const RuleBooleanExpression& value) { m_booleanExpressionHasBeenSet = true; m_booleanExpression = value; }
    inline void SetBooleanExpression(RuleBooleanExpression&& value) { m_booleanExpressionHasBeenSet = true; m_booleanExpression = std::move(value); }
    inline RuleCondition& WithBooleanExpression(const RuleBooleanExpression& value) { SetBooleanExpression(value); return *this;}
    inline RuleCondition& WithBooleanExpression(RuleBooleanExpression&& value) { SetBooleanExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition applies to a DMARC policy expression passed in this field.</p>
     */
    inline const RuleDmarcExpression& GetDmarcExpression() const{ return m_dmarcExpression; }
    inline bool DmarcExpressionHasBeenSet() const { return m_dmarcExpressionHasBeenSet; }
    inline void SetDmarcExpression(const RuleDmarcExpression& value) { m_dmarcExpressionHasBeenSet = true; m_dmarcExpression = value; }
    inline void SetDmarcExpression(RuleDmarcExpression&& value) { m_dmarcExpressionHasBeenSet = true; m_dmarcExpression = std::move(value); }
    inline RuleCondition& WithDmarcExpression(const RuleDmarcExpression& value) { SetDmarcExpression(value); return *this;}
    inline RuleCondition& WithDmarcExpression(RuleDmarcExpression&& value) { SetDmarcExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition applies to an IP address expression passed in this field.</p>
     */
    inline const RuleIpExpression& GetIpExpression() const{ return m_ipExpression; }
    inline bool IpExpressionHasBeenSet() const { return m_ipExpressionHasBeenSet; }
    inline void SetIpExpression(const RuleIpExpression& value) { m_ipExpressionHasBeenSet = true; m_ipExpression = value; }
    inline void SetIpExpression(RuleIpExpression&& value) { m_ipExpressionHasBeenSet = true; m_ipExpression = std::move(value); }
    inline RuleCondition& WithIpExpression(const RuleIpExpression& value) { SetIpExpression(value); return *this;}
    inline RuleCondition& WithIpExpression(RuleIpExpression&& value) { SetIpExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition applies to a number expression passed in this field.</p>
     */
    inline const RuleNumberExpression& GetNumberExpression() const{ return m_numberExpression; }
    inline bool NumberExpressionHasBeenSet() const { return m_numberExpressionHasBeenSet; }
    inline void SetNumberExpression(const RuleNumberExpression& value) { m_numberExpressionHasBeenSet = true; m_numberExpression = value; }
    inline void SetNumberExpression(RuleNumberExpression&& value) { m_numberExpressionHasBeenSet = true; m_numberExpression = std::move(value); }
    inline RuleCondition& WithNumberExpression(const RuleNumberExpression& value) { SetNumberExpression(value); return *this;}
    inline RuleCondition& WithNumberExpression(RuleNumberExpression&& value) { SetNumberExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition applies to a string expression passed in this field.</p>
     */
    inline const RuleStringExpression& GetStringExpression() const{ return m_stringExpression; }
    inline bool StringExpressionHasBeenSet() const { return m_stringExpressionHasBeenSet; }
    inline void SetStringExpression(const RuleStringExpression& value) { m_stringExpressionHasBeenSet = true; m_stringExpression = value; }
    inline void SetStringExpression(RuleStringExpression&& value) { m_stringExpressionHasBeenSet = true; m_stringExpression = std::move(value); }
    inline RuleCondition& WithStringExpression(const RuleStringExpression& value) { SetStringExpression(value); return *this;}
    inline RuleCondition& WithStringExpression(RuleStringExpression&& value) { SetStringExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition applies to a verdict expression passed in this field.</p>
     */
    inline const RuleVerdictExpression& GetVerdictExpression() const{ return m_verdictExpression; }
    inline bool VerdictExpressionHasBeenSet() const { return m_verdictExpressionHasBeenSet; }
    inline void SetVerdictExpression(const RuleVerdictExpression& value) { m_verdictExpressionHasBeenSet = true; m_verdictExpression = value; }
    inline void SetVerdictExpression(RuleVerdictExpression&& value) { m_verdictExpressionHasBeenSet = true; m_verdictExpression = std::move(value); }
    inline RuleCondition& WithVerdictExpression(const RuleVerdictExpression& value) { SetVerdictExpression(value); return *this;}
    inline RuleCondition& WithVerdictExpression(RuleVerdictExpression&& value) { SetVerdictExpression(std::move(value)); return *this;}
    ///@}
  private:

    RuleBooleanExpression m_booleanExpression;
    bool m_booleanExpressionHasBeenSet = false;

    RuleDmarcExpression m_dmarcExpression;
    bool m_dmarcExpressionHasBeenSet = false;

    RuleIpExpression m_ipExpression;
    bool m_ipExpressionHasBeenSet = false;

    RuleNumberExpression m_numberExpression;
    bool m_numberExpressionHasBeenSet = false;

    RuleStringExpression m_stringExpression;
    bool m_stringExpressionHasBeenSet = false;

    RuleVerdictExpression m_verdictExpression;
    bool m_verdictExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
