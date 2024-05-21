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


    /**
     * <p>The condition applies to a boolean expression passed in this field.</p>
     */
    inline const RuleBooleanExpression& GetBooleanExpression() const{ return m_booleanExpression; }

    /**
     * <p>The condition applies to a boolean expression passed in this field.</p>
     */
    inline bool BooleanExpressionHasBeenSet() const { return m_booleanExpressionHasBeenSet; }

    /**
     * <p>The condition applies to a boolean expression passed in this field.</p>
     */
    inline void SetBooleanExpression(const RuleBooleanExpression& value) { m_booleanExpressionHasBeenSet = true; m_booleanExpression = value; }

    /**
     * <p>The condition applies to a boolean expression passed in this field.</p>
     */
    inline void SetBooleanExpression(RuleBooleanExpression&& value) { m_booleanExpressionHasBeenSet = true; m_booleanExpression = std::move(value); }

    /**
     * <p>The condition applies to a boolean expression passed in this field.</p>
     */
    inline RuleCondition& WithBooleanExpression(const RuleBooleanExpression& value) { SetBooleanExpression(value); return *this;}

    /**
     * <p>The condition applies to a boolean expression passed in this field.</p>
     */
    inline RuleCondition& WithBooleanExpression(RuleBooleanExpression&& value) { SetBooleanExpression(std::move(value)); return *this;}


    /**
     * <p>The condition applies to a DMARC policy expression passed in this field.</p>
     */
    inline const RuleDmarcExpression& GetDmarcExpression() const{ return m_dmarcExpression; }

    /**
     * <p>The condition applies to a DMARC policy expression passed in this field.</p>
     */
    inline bool DmarcExpressionHasBeenSet() const { return m_dmarcExpressionHasBeenSet; }

    /**
     * <p>The condition applies to a DMARC policy expression passed in this field.</p>
     */
    inline void SetDmarcExpression(const RuleDmarcExpression& value) { m_dmarcExpressionHasBeenSet = true; m_dmarcExpression = value; }

    /**
     * <p>The condition applies to a DMARC policy expression passed in this field.</p>
     */
    inline void SetDmarcExpression(RuleDmarcExpression&& value) { m_dmarcExpressionHasBeenSet = true; m_dmarcExpression = std::move(value); }

    /**
     * <p>The condition applies to a DMARC policy expression passed in this field.</p>
     */
    inline RuleCondition& WithDmarcExpression(const RuleDmarcExpression& value) { SetDmarcExpression(value); return *this;}

    /**
     * <p>The condition applies to a DMARC policy expression passed in this field.</p>
     */
    inline RuleCondition& WithDmarcExpression(RuleDmarcExpression&& value) { SetDmarcExpression(std::move(value)); return *this;}


    /**
     * <p>The condition applies to an IP address expression passed in this field.</p>
     */
    inline const RuleIpExpression& GetIpExpression() const{ return m_ipExpression; }

    /**
     * <p>The condition applies to an IP address expression passed in this field.</p>
     */
    inline bool IpExpressionHasBeenSet() const { return m_ipExpressionHasBeenSet; }

    /**
     * <p>The condition applies to an IP address expression passed in this field.</p>
     */
    inline void SetIpExpression(const RuleIpExpression& value) { m_ipExpressionHasBeenSet = true; m_ipExpression = value; }

    /**
     * <p>The condition applies to an IP address expression passed in this field.</p>
     */
    inline void SetIpExpression(RuleIpExpression&& value) { m_ipExpressionHasBeenSet = true; m_ipExpression = std::move(value); }

    /**
     * <p>The condition applies to an IP address expression passed in this field.</p>
     */
    inline RuleCondition& WithIpExpression(const RuleIpExpression& value) { SetIpExpression(value); return *this;}

    /**
     * <p>The condition applies to an IP address expression passed in this field.</p>
     */
    inline RuleCondition& WithIpExpression(RuleIpExpression&& value) { SetIpExpression(std::move(value)); return *this;}


    /**
     * <p>The condition applies to a number expression passed in this field.</p>
     */
    inline const RuleNumberExpression& GetNumberExpression() const{ return m_numberExpression; }

    /**
     * <p>The condition applies to a number expression passed in this field.</p>
     */
    inline bool NumberExpressionHasBeenSet() const { return m_numberExpressionHasBeenSet; }

    /**
     * <p>The condition applies to a number expression passed in this field.</p>
     */
    inline void SetNumberExpression(const RuleNumberExpression& value) { m_numberExpressionHasBeenSet = true; m_numberExpression = value; }

    /**
     * <p>The condition applies to a number expression passed in this field.</p>
     */
    inline void SetNumberExpression(RuleNumberExpression&& value) { m_numberExpressionHasBeenSet = true; m_numberExpression = std::move(value); }

    /**
     * <p>The condition applies to a number expression passed in this field.</p>
     */
    inline RuleCondition& WithNumberExpression(const RuleNumberExpression& value) { SetNumberExpression(value); return *this;}

    /**
     * <p>The condition applies to a number expression passed in this field.</p>
     */
    inline RuleCondition& WithNumberExpression(RuleNumberExpression&& value) { SetNumberExpression(std::move(value)); return *this;}


    /**
     * <p>The condition applies to a string expression passed in this field.</p>
     */
    inline const RuleStringExpression& GetStringExpression() const{ return m_stringExpression; }

    /**
     * <p>The condition applies to a string expression passed in this field.</p>
     */
    inline bool StringExpressionHasBeenSet() const { return m_stringExpressionHasBeenSet; }

    /**
     * <p>The condition applies to a string expression passed in this field.</p>
     */
    inline void SetStringExpression(const RuleStringExpression& value) { m_stringExpressionHasBeenSet = true; m_stringExpression = value; }

    /**
     * <p>The condition applies to a string expression passed in this field.</p>
     */
    inline void SetStringExpression(RuleStringExpression&& value) { m_stringExpressionHasBeenSet = true; m_stringExpression = std::move(value); }

    /**
     * <p>The condition applies to a string expression passed in this field.</p>
     */
    inline RuleCondition& WithStringExpression(const RuleStringExpression& value) { SetStringExpression(value); return *this;}

    /**
     * <p>The condition applies to a string expression passed in this field.</p>
     */
    inline RuleCondition& WithStringExpression(RuleStringExpression&& value) { SetStringExpression(std::move(value)); return *this;}


    /**
     * <p>The condition applies to a verdict expression passed in this field.</p>
     */
    inline const RuleVerdictExpression& GetVerdictExpression() const{ return m_verdictExpression; }

    /**
     * <p>The condition applies to a verdict expression passed in this field.</p>
     */
    inline bool VerdictExpressionHasBeenSet() const { return m_verdictExpressionHasBeenSet; }

    /**
     * <p>The condition applies to a verdict expression passed in this field.</p>
     */
    inline void SetVerdictExpression(const RuleVerdictExpression& value) { m_verdictExpressionHasBeenSet = true; m_verdictExpression = value; }

    /**
     * <p>The condition applies to a verdict expression passed in this field.</p>
     */
    inline void SetVerdictExpression(RuleVerdictExpression&& value) { m_verdictExpressionHasBeenSet = true; m_verdictExpression = std::move(value); }

    /**
     * <p>The condition applies to a verdict expression passed in this field.</p>
     */
    inline RuleCondition& WithVerdictExpression(const RuleVerdictExpression& value) { SetVerdictExpression(value); return *this;}

    /**
     * <p>The condition applies to a verdict expression passed in this field.</p>
     */
    inline RuleCondition& WithVerdictExpression(RuleVerdictExpression&& value) { SetVerdictExpression(std::move(value)); return *this;}

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
