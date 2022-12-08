/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/DefaultAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/VisibilityConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/model/CaptchaConfig.h>
#include <aws/wafv2/model/ChallengeConfig.h>
#include <aws/wafv2/model/Rule.h>
#include <aws/wafv2/model/FirewallManagerRuleGroup.h>
#include <aws/wafv2/model/CustomResponseBody.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p> A web ACL defines a collection of rules to use to inspect and control web
   * requests. Each rule has an action defined (allow, block, or count) for requests
   * that match the statement of the rule. In the web ACL, you assign a default
   * action to take (allow, block) for any request that does not match any of the
   * rules. The rules in a web ACL can be a combination of the types <a>Rule</a>,
   * <a>RuleGroup</a>, and managed rule group. You can associate a web ACL with one
   * or more Amazon Web Services resources to protect. The resources can be an Amazon
   * CloudFront distribution, an Amazon API Gateway REST API, an Application Load
   * Balancer, an AppSync GraphQL API, or an Amazon Cognito user pool. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/WebACL">AWS API
   * Reference</a></p>
   */
  class WebACL
  {
  public:
    AWS_WAFV2_API WebACL();
    AWS_WAFV2_API WebACL(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API WebACL& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline WebACL& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline WebACL& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline WebACL& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier for the <code>WebACL</code>. This ID is returned in the
     * responses to create and list commands. You use this ID to do things like get,
     * update, and delete a <code>WebACL</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the <code>WebACL</code>. This ID is returned in the
     * responses to create and list commands. You use this ID to do things like get,
     * update, and delete a <code>WebACL</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the <code>WebACL</code>. This ID is returned in the
     * responses to create and list commands. You use this ID to do things like get,
     * update, and delete a <code>WebACL</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the <code>WebACL</code>. This ID is returned in the
     * responses to create and list commands. You use this ID to do things like get,
     * update, and delete a <code>WebACL</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the <code>WebACL</code>. This ID is returned in the
     * responses to create and list commands. You use this ID to do things like get,
     * update, and delete a <code>WebACL</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the <code>WebACL</code>. This ID is returned in the
     * responses to create and list commands. You use this ID to do things like get,
     * update, and delete a <code>WebACL</code>.</p>
     */
    inline WebACL& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the <code>WebACL</code>. This ID is returned in the
     * responses to create and list commands. You use this ID to do things like get,
     * update, and delete a <code>WebACL</code>.</p>
     */
    inline WebACL& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the <code>WebACL</code>. This ID is returned in the
     * responses to create and list commands. You use this ID to do things like get,
     * update, and delete a <code>WebACL</code>.</p>
     */
    inline WebACL& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * the resource.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * the resource.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * the resource.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * the resource.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * the resource.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * the resource.</p>
     */
    inline WebACL& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * the resource.</p>
     */
    inline WebACL& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * the resource.</p>
     */
    inline WebACL& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline const DefaultAction& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline void SetDefaultAction(const DefaultAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline void SetDefaultAction(DefaultAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline WebACL& WithDefaultAction(const DefaultAction& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline WebACL& WithDefaultAction(DefaultAction&& value) { SetDefaultAction(std::move(value)); return *this;}


    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline WebACL& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline WebACL& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline WebACL& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline WebACL& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline WebACL& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline WebACL& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline WebACL& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const VisibilityConfig& GetVisibilityConfig() const{ return m_visibilityConfig; }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline void SetVisibilityConfig(const VisibilityConfig& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = value; }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline void SetVisibilityConfig(VisibilityConfig&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::move(value); }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline WebACL& WithVisibilityConfig(const VisibilityConfig& value) { SetVisibilityConfig(value); return *this;}

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline WebACL& WithVisibilityConfig(VisibilityConfig&& value) { SetVisibilityConfig(std::move(value)); return *this;}


    /**
     * <p>The web ACL capacity units (WCUs) currently being used by this web ACL. </p>
     * <p>WAF uses WCUs to calculate and control the operating resources that are used
     * to run your rules, rule groups, and web ACLs. WAF calculates capacity
     * differently for each rule type, to reflect the relative cost of each rule.
     * Simple rules that cost little to run use fewer WCUs than more complex rules that
     * use more processing power. Rule group capacity is fixed at creation, which helps
     * users plan their web ACL WCU usage when they use a rule group. The WCU limit for
     * web ACLs is 1,500. </p>
     */
    inline long long GetCapacity() const{ return m_capacity; }

    /**
     * <p>The web ACL capacity units (WCUs) currently being used by this web ACL. </p>
     * <p>WAF uses WCUs to calculate and control the operating resources that are used
     * to run your rules, rule groups, and web ACLs. WAF calculates capacity
     * differently for each rule type, to reflect the relative cost of each rule.
     * Simple rules that cost little to run use fewer WCUs than more complex rules that
     * use more processing power. Rule group capacity is fixed at creation, which helps
     * users plan their web ACL WCU usage when they use a rule group. The WCU limit for
     * web ACLs is 1,500. </p>
     */
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }

    /**
     * <p>The web ACL capacity units (WCUs) currently being used by this web ACL. </p>
     * <p>WAF uses WCUs to calculate and control the operating resources that are used
     * to run your rules, rule groups, and web ACLs. WAF calculates capacity
     * differently for each rule type, to reflect the relative cost of each rule.
     * Simple rules that cost little to run use fewer WCUs than more complex rules that
     * use more processing power. Rule group capacity is fixed at creation, which helps
     * users plan their web ACL WCU usage when they use a rule group. The WCU limit for
     * web ACLs is 1,500. </p>
     */
    inline void SetCapacity(long long value) { m_capacityHasBeenSet = true; m_capacity = value; }

    /**
     * <p>The web ACL capacity units (WCUs) currently being used by this web ACL. </p>
     * <p>WAF uses WCUs to calculate and control the operating resources that are used
     * to run your rules, rule groups, and web ACLs. WAF calculates capacity
     * differently for each rule type, to reflect the relative cost of each rule.
     * Simple rules that cost little to run use fewer WCUs than more complex rules that
     * use more processing power. Rule group capacity is fixed at creation, which helps
     * users plan their web ACL WCU usage when they use a rule group. The WCU limit for
     * web ACLs is 1,500. </p>
     */
    inline WebACL& WithCapacity(long long value) { SetCapacity(value); return *this;}


    /**
     * <p>The first set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized after these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline const Aws::Vector<FirewallManagerRuleGroup>& GetPreProcessFirewallManagerRuleGroups() const{ return m_preProcessFirewallManagerRuleGroups; }

    /**
     * <p>The first set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized after these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline bool PreProcessFirewallManagerRuleGroupsHasBeenSet() const { return m_preProcessFirewallManagerRuleGroupsHasBeenSet; }

    /**
     * <p>The first set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized after these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline void SetPreProcessFirewallManagerRuleGroups(const Aws::Vector<FirewallManagerRuleGroup>& value) { m_preProcessFirewallManagerRuleGroupsHasBeenSet = true; m_preProcessFirewallManagerRuleGroups = value; }

    /**
     * <p>The first set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized after these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline void SetPreProcessFirewallManagerRuleGroups(Aws::Vector<FirewallManagerRuleGroup>&& value) { m_preProcessFirewallManagerRuleGroupsHasBeenSet = true; m_preProcessFirewallManagerRuleGroups = std::move(value); }

    /**
     * <p>The first set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized after these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline WebACL& WithPreProcessFirewallManagerRuleGroups(const Aws::Vector<FirewallManagerRuleGroup>& value) { SetPreProcessFirewallManagerRuleGroups(value); return *this;}

    /**
     * <p>The first set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized after these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline WebACL& WithPreProcessFirewallManagerRuleGroups(Aws::Vector<FirewallManagerRuleGroup>&& value) { SetPreProcessFirewallManagerRuleGroups(std::move(value)); return *this;}

    /**
     * <p>The first set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized after these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline WebACL& AddPreProcessFirewallManagerRuleGroups(const FirewallManagerRuleGroup& value) { m_preProcessFirewallManagerRuleGroupsHasBeenSet = true; m_preProcessFirewallManagerRuleGroups.push_back(value); return *this; }

    /**
     * <p>The first set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized after these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline WebACL& AddPreProcessFirewallManagerRuleGroups(FirewallManagerRuleGroup&& value) { m_preProcessFirewallManagerRuleGroupsHasBeenSet = true; m_preProcessFirewallManagerRuleGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The last set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized before these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline const Aws::Vector<FirewallManagerRuleGroup>& GetPostProcessFirewallManagerRuleGroups() const{ return m_postProcessFirewallManagerRuleGroups; }

    /**
     * <p>The last set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized before these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline bool PostProcessFirewallManagerRuleGroupsHasBeenSet() const { return m_postProcessFirewallManagerRuleGroupsHasBeenSet; }

    /**
     * <p>The last set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized before these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline void SetPostProcessFirewallManagerRuleGroups(const Aws::Vector<FirewallManagerRuleGroup>& value) { m_postProcessFirewallManagerRuleGroupsHasBeenSet = true; m_postProcessFirewallManagerRuleGroups = value; }

    /**
     * <p>The last set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized before these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline void SetPostProcessFirewallManagerRuleGroups(Aws::Vector<FirewallManagerRuleGroup>&& value) { m_postProcessFirewallManagerRuleGroupsHasBeenSet = true; m_postProcessFirewallManagerRuleGroups = std::move(value); }

    /**
     * <p>The last set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized before these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline WebACL& WithPostProcessFirewallManagerRuleGroups(const Aws::Vector<FirewallManagerRuleGroup>& value) { SetPostProcessFirewallManagerRuleGroups(value); return *this;}

    /**
     * <p>The last set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized before these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline WebACL& WithPostProcessFirewallManagerRuleGroups(Aws::Vector<FirewallManagerRuleGroup>&& value) { SetPostProcessFirewallManagerRuleGroups(std::move(value)); return *this;}

    /**
     * <p>The last set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized before these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline WebACL& AddPostProcessFirewallManagerRuleGroups(const FirewallManagerRuleGroup& value) { m_postProcessFirewallManagerRuleGroupsHasBeenSet = true; m_postProcessFirewallManagerRuleGroups.push_back(value); return *this; }

    /**
     * <p>The last set of rules for WAF to process in the web ACL. This is defined in
     * an Firewall Manager WAF policy and contains only rule group references. You
     * can't alter these. Any rules and rule groups that you define for the web ACL are
     * prioritized before these. </p> <p>In the Firewall Manager WAF policy, the
     * Firewall Manager administrator can define a set of rule groups to run first in
     * the web ACL and a set of rule groups to run last. Within each set, the
     * administrator prioritizes the rule groups, to determine their relative
     * processing order.</p>
     */
    inline WebACL& AddPostProcessFirewallManagerRuleGroups(FirewallManagerRuleGroup&& value) { m_postProcessFirewallManagerRuleGroupsHasBeenSet = true; m_postProcessFirewallManagerRuleGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether this web ACL is managed by Firewall Manager. If true, then
     * only Firewall Manager can delete the web ACL or any Firewall Manager rule groups
     * in the web ACL. </p>
     */
    inline bool GetManagedByFirewallManager() const{ return m_managedByFirewallManager; }

    /**
     * <p>Indicates whether this web ACL is managed by Firewall Manager. If true, then
     * only Firewall Manager can delete the web ACL or any Firewall Manager rule groups
     * in the web ACL. </p>
     */
    inline bool ManagedByFirewallManagerHasBeenSet() const { return m_managedByFirewallManagerHasBeenSet; }

    /**
     * <p>Indicates whether this web ACL is managed by Firewall Manager. If true, then
     * only Firewall Manager can delete the web ACL or any Firewall Manager rule groups
     * in the web ACL. </p>
     */
    inline void SetManagedByFirewallManager(bool value) { m_managedByFirewallManagerHasBeenSet = true; m_managedByFirewallManager = value; }

    /**
     * <p>Indicates whether this web ACL is managed by Firewall Manager. If true, then
     * only Firewall Manager can delete the web ACL or any Firewall Manager rule groups
     * in the web ACL. </p>
     */
    inline WebACL& WithManagedByFirewallManager(bool value) { SetManagedByFirewallManager(value); return *this;}


    /**
     * <p>The label namespace prefix for this web ACL. All labels added by rules in
     * this web ACL have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a web ACL is the following: </p> <p>
     * <code>awswaf:&lt;account ID&gt;:webacl:&lt;web ACL name&gt;:</code> </p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLabelNamespace() const{ return m_labelNamespace; }

    /**
     * <p>The label namespace prefix for this web ACL. All labels added by rules in
     * this web ACL have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a web ACL is the following: </p> <p>
     * <code>awswaf:&lt;account ID&gt;:webacl:&lt;web ACL name&gt;:</code> </p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline bool LabelNamespaceHasBeenSet() const { return m_labelNamespaceHasBeenSet; }

    /**
     * <p>The label namespace prefix for this web ACL. All labels added by rules in
     * this web ACL have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a web ACL is the following: </p> <p>
     * <code>awswaf:&lt;account ID&gt;:webacl:&lt;web ACL name&gt;:</code> </p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline void SetLabelNamespace(const Aws::String& value) { m_labelNamespaceHasBeenSet = true; m_labelNamespace = value; }

    /**
     * <p>The label namespace prefix for this web ACL. All labels added by rules in
     * this web ACL have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a web ACL is the following: </p> <p>
     * <code>awswaf:&lt;account ID&gt;:webacl:&lt;web ACL name&gt;:</code> </p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline void SetLabelNamespace(Aws::String&& value) { m_labelNamespaceHasBeenSet = true; m_labelNamespace = std::move(value); }

    /**
     * <p>The label namespace prefix for this web ACL. All labels added by rules in
     * this web ACL have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a web ACL is the following: </p> <p>
     * <code>awswaf:&lt;account ID&gt;:webacl:&lt;web ACL name&gt;:</code> </p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline void SetLabelNamespace(const char* value) { m_labelNamespaceHasBeenSet = true; m_labelNamespace.assign(value); }

    /**
     * <p>The label namespace prefix for this web ACL. All labels added by rules in
     * this web ACL have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a web ACL is the following: </p> <p>
     * <code>awswaf:&lt;account ID&gt;:webacl:&lt;web ACL name&gt;:</code> </p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline WebACL& WithLabelNamespace(const Aws::String& value) { SetLabelNamespace(value); return *this;}

    /**
     * <p>The label namespace prefix for this web ACL. All labels added by rules in
     * this web ACL have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a web ACL is the following: </p> <p>
     * <code>awswaf:&lt;account ID&gt;:webacl:&lt;web ACL name&gt;:</code> </p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline WebACL& WithLabelNamespace(Aws::String&& value) { SetLabelNamespace(std::move(value)); return *this;}

    /**
     * <p>The label namespace prefix for this web ACL. All labels added by rules in
     * this web ACL have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a web ACL is the following: </p> <p>
     * <code>awswaf:&lt;account ID&gt;:webacl:&lt;web ACL name&gt;:</code> </p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline WebACL& WithLabelNamespace(const char* value) { SetLabelNamespace(value); return *this;}


    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline const Aws::Map<Aws::String, CustomResponseBody>& GetCustomResponseBodies() const{ return m_customResponseBodies; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline bool CustomResponseBodiesHasBeenSet() const { return m_customResponseBodiesHasBeenSet; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetCustomResponseBodies(const Aws::Map<Aws::String, CustomResponseBody>& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies = value; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetCustomResponseBodies(Aws::Map<Aws::String, CustomResponseBody>&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies = std::move(value); }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline WebACL& WithCustomResponseBodies(const Aws::Map<Aws::String, CustomResponseBody>& value) { SetCustomResponseBodies(value); return *this;}

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline WebACL& WithCustomResponseBodies(Aws::Map<Aws::String, CustomResponseBody>&& value) { SetCustomResponseBodies(std::move(value)); return *this;}

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline WebACL& AddCustomResponseBodies(const Aws::String& key, const CustomResponseBody& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, value); return *this; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline WebACL& AddCustomResponseBodies(Aws::String&& key, const CustomResponseBody& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline WebACL& AddCustomResponseBodies(const Aws::String& key, CustomResponseBody&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline WebACL& AddCustomResponseBodies(Aws::String&& key, CustomResponseBody&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline WebACL& AddCustomResponseBodies(const char* key, CustomResponseBody&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline WebACL& AddCustomResponseBodies(const char* key, const CustomResponseBody& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, value); return *this; }


    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline const CaptchaConfig& GetCaptchaConfig() const{ return m_captchaConfig; }

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline bool CaptchaConfigHasBeenSet() const { return m_captchaConfigHasBeenSet; }

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline void SetCaptchaConfig(const CaptchaConfig& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = value; }

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline void SetCaptchaConfig(CaptchaConfig&& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = std::move(value); }

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline WebACL& WithCaptchaConfig(const CaptchaConfig& value) { SetCaptchaConfig(value); return *this;}

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline WebACL& WithCaptchaConfig(CaptchaConfig&& value) { SetCaptchaConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies how WAF should handle challenge evaluations for rules that don't
     * have their own <code>ChallengeConfig</code> settings. If you don't specify this,
     * WAF uses its default settings for <code>ChallengeConfig</code>. </p>
     */
    inline const ChallengeConfig& GetChallengeConfig() const{ return m_challengeConfig; }

    /**
     * <p>Specifies how WAF should handle challenge evaluations for rules that don't
     * have their own <code>ChallengeConfig</code> settings. If you don't specify this,
     * WAF uses its default settings for <code>ChallengeConfig</code>. </p>
     */
    inline bool ChallengeConfigHasBeenSet() const { return m_challengeConfigHasBeenSet; }

    /**
     * <p>Specifies how WAF should handle challenge evaluations for rules that don't
     * have their own <code>ChallengeConfig</code> settings. If you don't specify this,
     * WAF uses its default settings for <code>ChallengeConfig</code>. </p>
     */
    inline void SetChallengeConfig(const ChallengeConfig& value) { m_challengeConfigHasBeenSet = true; m_challengeConfig = value; }

    /**
     * <p>Specifies how WAF should handle challenge evaluations for rules that don't
     * have their own <code>ChallengeConfig</code> settings. If you don't specify this,
     * WAF uses its default settings for <code>ChallengeConfig</code>. </p>
     */
    inline void SetChallengeConfig(ChallengeConfig&& value) { m_challengeConfigHasBeenSet = true; m_challengeConfig = std::move(value); }

    /**
     * <p>Specifies how WAF should handle challenge evaluations for rules that don't
     * have their own <code>ChallengeConfig</code> settings. If you don't specify this,
     * WAF uses its default settings for <code>ChallengeConfig</code>. </p>
     */
    inline WebACL& WithChallengeConfig(const ChallengeConfig& value) { SetChallengeConfig(value); return *this;}

    /**
     * <p>Specifies how WAF should handle challenge evaluations for rules that don't
     * have their own <code>ChallengeConfig</code> settings. If you don't specify this,
     * WAF uses its default settings for <code>ChallengeConfig</code>. </p>
     */
    inline WebACL& WithChallengeConfig(ChallengeConfig&& value) { SetChallengeConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies the domains that WAF should accept in a web request token. This
     * enables the use of tokens across multiple protected websites. When WAF provides
     * a token, it uses the domain of the Amazon Web Services resource that the web ACL
     * is protecting. If you don't specify a list of token domains, WAF accepts tokens
     * only for the domain of the protected resource. With a token domain list, WAF
     * accepts the resource's host domain plus all domains in the token domain list,
     * including their prefixed subdomains.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenDomains() const{ return m_tokenDomains; }

    /**
     * <p>Specifies the domains that WAF should accept in a web request token. This
     * enables the use of tokens across multiple protected websites. When WAF provides
     * a token, it uses the domain of the Amazon Web Services resource that the web ACL
     * is protecting. If you don't specify a list of token domains, WAF accepts tokens
     * only for the domain of the protected resource. With a token domain list, WAF
     * accepts the resource's host domain plus all domains in the token domain list,
     * including their prefixed subdomains.</p>
     */
    inline bool TokenDomainsHasBeenSet() const { return m_tokenDomainsHasBeenSet; }

    /**
     * <p>Specifies the domains that WAF should accept in a web request token. This
     * enables the use of tokens across multiple protected websites. When WAF provides
     * a token, it uses the domain of the Amazon Web Services resource that the web ACL
     * is protecting. If you don't specify a list of token domains, WAF accepts tokens
     * only for the domain of the protected resource. With a token domain list, WAF
     * accepts the resource's host domain plus all domains in the token domain list,
     * including their prefixed subdomains.</p>
     */
    inline void SetTokenDomains(const Aws::Vector<Aws::String>& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains = value; }

    /**
     * <p>Specifies the domains that WAF should accept in a web request token. This
     * enables the use of tokens across multiple protected websites. When WAF provides
     * a token, it uses the domain of the Amazon Web Services resource that the web ACL
     * is protecting. If you don't specify a list of token domains, WAF accepts tokens
     * only for the domain of the protected resource. With a token domain list, WAF
     * accepts the resource's host domain plus all domains in the token domain list,
     * including their prefixed subdomains.</p>
     */
    inline void SetTokenDomains(Aws::Vector<Aws::String>&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains = std::move(value); }

    /**
     * <p>Specifies the domains that WAF should accept in a web request token. This
     * enables the use of tokens across multiple protected websites. When WAF provides
     * a token, it uses the domain of the Amazon Web Services resource that the web ACL
     * is protecting. If you don't specify a list of token domains, WAF accepts tokens
     * only for the domain of the protected resource. With a token domain list, WAF
     * accepts the resource's host domain plus all domains in the token domain list,
     * including their prefixed subdomains.</p>
     */
    inline WebACL& WithTokenDomains(const Aws::Vector<Aws::String>& value) { SetTokenDomains(value); return *this;}

    /**
     * <p>Specifies the domains that WAF should accept in a web request token. This
     * enables the use of tokens across multiple protected websites. When WAF provides
     * a token, it uses the domain of the Amazon Web Services resource that the web ACL
     * is protecting. If you don't specify a list of token domains, WAF accepts tokens
     * only for the domain of the protected resource. With a token domain list, WAF
     * accepts the resource's host domain plus all domains in the token domain list,
     * including their prefixed subdomains.</p>
     */
    inline WebACL& WithTokenDomains(Aws::Vector<Aws::String>&& value) { SetTokenDomains(std::move(value)); return *this;}

    /**
     * <p>Specifies the domains that WAF should accept in a web request token. This
     * enables the use of tokens across multiple protected websites. When WAF provides
     * a token, it uses the domain of the Amazon Web Services resource that the web ACL
     * is protecting. If you don't specify a list of token domains, WAF accepts tokens
     * only for the domain of the protected resource. With a token domain list, WAF
     * accepts the resource's host domain plus all domains in the token domain list,
     * including their prefixed subdomains.</p>
     */
    inline WebACL& AddTokenDomains(const Aws::String& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.push_back(value); return *this; }

    /**
     * <p>Specifies the domains that WAF should accept in a web request token. This
     * enables the use of tokens across multiple protected websites. When WAF provides
     * a token, it uses the domain of the Amazon Web Services resource that the web ACL
     * is protecting. If you don't specify a list of token domains, WAF accepts tokens
     * only for the domain of the protected resource. With a token domain list, WAF
     * accepts the resource's host domain plus all domains in the token domain list,
     * including their prefixed subdomains.</p>
     */
    inline WebACL& AddTokenDomains(Aws::String&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the domains that WAF should accept in a web request token. This
     * enables the use of tokens across multiple protected websites. When WAF provides
     * a token, it uses the domain of the Amazon Web Services resource that the web ACL
     * is protecting. If you don't specify a list of token domains, WAF accepts tokens
     * only for the domain of the protected resource. With a token domain list, WAF
     * accepts the resource's host domain plus all domains in the token domain list,
     * including their prefixed subdomains.</p>
     */
    inline WebACL& AddTokenDomains(const char* value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    DefaultAction m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    VisibilityConfig m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet = false;

    long long m_capacity;
    bool m_capacityHasBeenSet = false;

    Aws::Vector<FirewallManagerRuleGroup> m_preProcessFirewallManagerRuleGroups;
    bool m_preProcessFirewallManagerRuleGroupsHasBeenSet = false;

    Aws::Vector<FirewallManagerRuleGroup> m_postProcessFirewallManagerRuleGroups;
    bool m_postProcessFirewallManagerRuleGroupsHasBeenSet = false;

    bool m_managedByFirewallManager;
    bool m_managedByFirewallManagerHasBeenSet = false;

    Aws::String m_labelNamespace;
    bool m_labelNamespaceHasBeenSet = false;

    Aws::Map<Aws::String, CustomResponseBody> m_customResponseBodies;
    bool m_customResponseBodiesHasBeenSet = false;

    CaptchaConfig m_captchaConfig;
    bool m_captchaConfigHasBeenSet = false;

    ChallengeConfig m_challengeConfig;
    bool m_challengeConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenDomains;
    bool m_tokenDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
