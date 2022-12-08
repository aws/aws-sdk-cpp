/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsWafRegionalWebAclRulesListActionDetails.h>
#include <aws/securityhub/model/AwsWafRegionalWebAclRulesListOverrideActionDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A combination of <code>ByteMatchSet</code>, <code>IPSet</code>, and/or
   * <code>SqlInjectionMatchSet</code> objects that identify the web requests that
   * you want to allow, block, or count. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRegionalWebAclRulesListDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRegionalWebAclRulesListDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRegionalWebAclRulesListDetails();
    AWS_SECURITYHUB_API AwsWafRegionalWebAclRulesListDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRegionalWebAclRulesListDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action that WAF takes when a web request matches all conditions in the
     * rule, such as allow, block, or count the request. </p>
     */
    inline const AwsWafRegionalWebAclRulesListActionDetails& GetAction() const{ return m_action; }

    /**
     * <p>The action that WAF takes when a web request matches all conditions in the
     * rule, such as allow, block, or count the request. </p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that WAF takes when a web request matches all conditions in the
     * rule, such as allow, block, or count the request. </p>
     */
    inline void SetAction(const AwsWafRegionalWebAclRulesListActionDetails& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that WAF takes when a web request matches all conditions in the
     * rule, such as allow, block, or count the request. </p>
     */
    inline void SetAction(AwsWafRegionalWebAclRulesListActionDetails&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that WAF takes when a web request matches all conditions in the
     * rule, such as allow, block, or count the request. </p>
     */
    inline AwsWafRegionalWebAclRulesListDetails& WithAction(const AwsWafRegionalWebAclRulesListActionDetails& value) { SetAction(value); return *this;}

    /**
     * <p>The action that WAF takes when a web request matches all conditions in the
     * rule, such as allow, block, or count the request. </p>
     */
    inline AwsWafRegionalWebAclRulesListDetails& WithAction(AwsWafRegionalWebAclRulesListActionDetails&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline const AwsWafRegionalWebAclRulesListOverrideActionDetails& GetOverrideAction() const{ return m_overrideAction; }

    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline bool OverrideActionHasBeenSet() const { return m_overrideActionHasBeenSet; }

    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline void SetOverrideAction(const AwsWafRegionalWebAclRulesListOverrideActionDetails& value) { m_overrideActionHasBeenSet = true; m_overrideAction = value; }

    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline void SetOverrideAction(AwsWafRegionalWebAclRulesListOverrideActionDetails&& value) { m_overrideActionHasBeenSet = true; m_overrideAction = std::move(value); }

    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline AwsWafRegionalWebAclRulesListDetails& WithOverrideAction(const AwsWafRegionalWebAclRulesListOverrideActionDetails& value) { SetOverrideAction(value); return *this;}

    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline AwsWafRegionalWebAclRulesListDetails& WithOverrideAction(AwsWafRegionalWebAclRulesListOverrideActionDetails&& value) { SetOverrideAction(std::move(value)); return *this;}


    /**
     * <p>The order in which WAF evaluates the rules in a web ACL. </p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The order in which WAF evaluates the rules in a web ACL. </p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The order in which WAF evaluates the rules in a web ACL. </p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The order in which WAF evaluates the rules in a web ACL. </p>
     */
    inline AwsWafRegionalWebAclRulesListDetails& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The ID of an WAF Regional rule to associate with a web ACL. </p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The ID of an WAF Regional rule to associate with a web ACL. </p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The ID of an WAF Regional rule to associate with a web ACL. </p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The ID of an WAF Regional rule to associate with a web ACL. </p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The ID of an WAF Regional rule to associate with a web ACL. </p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The ID of an WAF Regional rule to associate with a web ACL. </p>
     */
    inline AwsWafRegionalWebAclRulesListDetails& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The ID of an WAF Regional rule to associate with a web ACL. </p>
     */
    inline AwsWafRegionalWebAclRulesListDetails& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of an WAF Regional rule to associate with a web ACL. </p>
     */
    inline AwsWafRegionalWebAclRulesListDetails& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline AwsWafRegionalWebAclRulesListDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline AwsWafRegionalWebAclRulesListDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline AwsWafRegionalWebAclRulesListDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    AwsWafRegionalWebAclRulesListActionDetails m_action;
    bool m_actionHasBeenSet = false;

    AwsWafRegionalWebAclRulesListOverrideActionDetails m_overrideAction;
    bool m_overrideActionHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
