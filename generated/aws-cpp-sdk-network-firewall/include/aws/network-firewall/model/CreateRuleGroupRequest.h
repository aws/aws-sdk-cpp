/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/RuleGroup.h>
#include <aws/network-firewall/model/RuleGroupType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/Tag.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class AWS_NETWORKFIREWALL_API CreateRuleGroupRequest : public NetworkFirewallRequest
  {
  public:
    CreateRuleGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRuleGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline const Aws::String& GetRuleGroupName() const{ return m_ruleGroupName; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline bool RuleGroupNameHasBeenSet() const { return m_ruleGroupNameHasBeenSet; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline void SetRuleGroupName(const Aws::String& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = value; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline void SetRuleGroupName(Aws::String&& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = std::move(value); }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline void SetRuleGroupName(const char* value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName.assign(value); }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline CreateRuleGroupRequest& WithRuleGroupName(const Aws::String& value) { SetRuleGroupName(value); return *this;}

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline CreateRuleGroupRequest& WithRuleGroupName(Aws::String&& value) { SetRuleGroupName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline CreateRuleGroupRequest& WithRuleGroupName(const char* value) { SetRuleGroupName(value); return *this;}


    /**
     * <p>An object that defines the rule group rules. </p>  <p>You must provide
     * either this rule group setting or a <code>Rules</code> setting, but not both.
     * </p> 
     */
    inline const RuleGroup& GetRuleGroup() const{ return m_ruleGroup; }

    /**
     * <p>An object that defines the rule group rules. </p>  <p>You must provide
     * either this rule group setting or a <code>Rules</code> setting, but not both.
     * </p> 
     */
    inline bool RuleGroupHasBeenSet() const { return m_ruleGroupHasBeenSet; }

    /**
     * <p>An object that defines the rule group rules. </p>  <p>You must provide
     * either this rule group setting or a <code>Rules</code> setting, but not both.
     * </p> 
     */
    inline void SetRuleGroup(const RuleGroup& value) { m_ruleGroupHasBeenSet = true; m_ruleGroup = value; }

    /**
     * <p>An object that defines the rule group rules. </p>  <p>You must provide
     * either this rule group setting or a <code>Rules</code> setting, but not both.
     * </p> 
     */
    inline void SetRuleGroup(RuleGroup&& value) { m_ruleGroupHasBeenSet = true; m_ruleGroup = std::move(value); }

    /**
     * <p>An object that defines the rule group rules. </p>  <p>You must provide
     * either this rule group setting or a <code>Rules</code> setting, but not both.
     * </p> 
     */
    inline CreateRuleGroupRequest& WithRuleGroup(const RuleGroup& value) { SetRuleGroup(value); return *this;}

    /**
     * <p>An object that defines the rule group rules. </p>  <p>You must provide
     * either this rule group setting or a <code>Rules</code> setting, but not both.
     * </p> 
     */
    inline CreateRuleGroupRequest& WithRuleGroup(RuleGroup&& value) { SetRuleGroup(std::move(value)); return *this;}


    /**
     * <p>A string containing stateful rule group rules specifications in Suricata flat
     * format, with one rule per line. Use this to import your existing Suricata
     * compatible rule groups. </p>  <p>You must provide either this rules
     * setting or a populated <code>RuleGroup</code> setting, but not both. </p>
     *  <p>You can provide your rule group specification in Suricata flat format
     * through this setting when you create or update your rule group. The call
     * response returns a <a>RuleGroup</a> object that Network Firewall has populated
     * from your string. </p>
     */
    inline const Aws::String& GetRules() const{ return m_rules; }

    /**
     * <p>A string containing stateful rule group rules specifications in Suricata flat
     * format, with one rule per line. Use this to import your existing Suricata
     * compatible rule groups. </p>  <p>You must provide either this rules
     * setting or a populated <code>RuleGroup</code> setting, but not both. </p>
     *  <p>You can provide your rule group specification in Suricata flat format
     * through this setting when you create or update your rule group. The call
     * response returns a <a>RuleGroup</a> object that Network Firewall has populated
     * from your string. </p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>A string containing stateful rule group rules specifications in Suricata flat
     * format, with one rule per line. Use this to import your existing Suricata
     * compatible rule groups. </p>  <p>You must provide either this rules
     * setting or a populated <code>RuleGroup</code> setting, but not both. </p>
     *  <p>You can provide your rule group specification in Suricata flat format
     * through this setting when you create or update your rule group. The call
     * response returns a <a>RuleGroup</a> object that Network Firewall has populated
     * from your string. </p>
     */
    inline void SetRules(const Aws::String& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>A string containing stateful rule group rules specifications in Suricata flat
     * format, with one rule per line. Use this to import your existing Suricata
     * compatible rule groups. </p>  <p>You must provide either this rules
     * setting or a populated <code>RuleGroup</code> setting, but not both. </p>
     *  <p>You can provide your rule group specification in Suricata flat format
     * through this setting when you create or update your rule group. The call
     * response returns a <a>RuleGroup</a> object that Network Firewall has populated
     * from your string. </p>
     */
    inline void SetRules(Aws::String&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>A string containing stateful rule group rules specifications in Suricata flat
     * format, with one rule per line. Use this to import your existing Suricata
     * compatible rule groups. </p>  <p>You must provide either this rules
     * setting or a populated <code>RuleGroup</code> setting, but not both. </p>
     *  <p>You can provide your rule group specification in Suricata flat format
     * through this setting when you create or update your rule group. The call
     * response returns a <a>RuleGroup</a> object that Network Firewall has populated
     * from your string. </p>
     */
    inline void SetRules(const char* value) { m_rulesHasBeenSet = true; m_rules.assign(value); }

    /**
     * <p>A string containing stateful rule group rules specifications in Suricata flat
     * format, with one rule per line. Use this to import your existing Suricata
     * compatible rule groups. </p>  <p>You must provide either this rules
     * setting or a populated <code>RuleGroup</code> setting, but not both. </p>
     *  <p>You can provide your rule group specification in Suricata flat format
     * through this setting when you create or update your rule group. The call
     * response returns a <a>RuleGroup</a> object that Network Firewall has populated
     * from your string. </p>
     */
    inline CreateRuleGroupRequest& WithRules(const Aws::String& value) { SetRules(value); return *this;}

    /**
     * <p>A string containing stateful rule group rules specifications in Suricata flat
     * format, with one rule per line. Use this to import your existing Suricata
     * compatible rule groups. </p>  <p>You must provide either this rules
     * setting or a populated <code>RuleGroup</code> setting, but not both. </p>
     *  <p>You can provide your rule group specification in Suricata flat format
     * through this setting when you create or update your rule group. The call
     * response returns a <a>RuleGroup</a> object that Network Firewall has populated
     * from your string. </p>
     */
    inline CreateRuleGroupRequest& WithRules(Aws::String&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>A string containing stateful rule group rules specifications in Suricata flat
     * format, with one rule per line. Use this to import your existing Suricata
     * compatible rule groups. </p>  <p>You must provide either this rules
     * setting or a populated <code>RuleGroup</code> setting, but not both. </p>
     *  <p>You can provide your rule group specification in Suricata flat format
     * through this setting when you create or update your rule group. The call
     * response returns a <a>RuleGroup</a> object that Network Firewall has populated
     * from your string. </p>
     */
    inline CreateRuleGroupRequest& WithRules(const char* value) { SetRules(value); return *this;}


    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline const RuleGroupType& GetType() const{ return m_type; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline void SetType(const RuleGroupType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline void SetType(RuleGroupType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline CreateRuleGroupRequest& WithType(const RuleGroupType& value) { SetType(value); return *this;}

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline CreateRuleGroupRequest& WithType(RuleGroupType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A description of the rule group. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the rule group. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the rule group. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the rule group. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the rule group. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the rule group. </p>
     */
    inline CreateRuleGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the rule group. </p>
     */
    inline CreateRuleGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the rule group. </p>
     */
    inline CreateRuleGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>  <p>You can't change or exceed this capacity when
     * you update the rule group, so leave room for your rule group to grow. </p>
     *  <p> <b>Capacity for a stateless rule group</b> </p> <p>For a stateless
     * rule group, the capacity required is the sum of the capacity requirements of the
     * individual rules that you expect to have in the rule group. </p> <p>To calculate
     * the capacity requirement of a single rule, multiply the capacity requirement
     * values of each of the rule's match settings:</p> <ul> <li> <p>A match setting
     * with no criteria specified has a value of 1. </p> </li> <li> <p>A match setting
     * with <code>Any</code> specified has a value of 1. </p> </li> <li> <p>All other
     * match settings have a value equal to the number of elements provided in the
     * setting. For example, a protocol setting ["UDP"] and a source setting
     * ["10.0.0.0/24"] each have a value of 1. A protocol setting ["UDP","TCP"] has a
     * value of 2. A source setting ["10.0.0.0/24","10.0.0.1/24","10.0.0.2/24"] has a
     * value of 3. </p> </li> </ul> <p>A rule with no criteria specified in any of its
     * match settings has a capacity requirement of 1. A rule with protocol setting
     * ["UDP","TCP"], source setting ["10.0.0.0/24","10.0.0.1/24","10.0.0.2/24"], and a
     * single specification or no specification for each of the other match settings
     * has a capacity requirement of 6. </p> <p> <b>Capacity for a stateful rule
     * group</b> </p> <p>For a stateful rule group, the minimum capacity required is
     * the number of individual rules that you expect to have in the rule group. </p>
     */
    inline int GetCapacity() const{ return m_capacity; }

    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>  <p>You can't change or exceed this capacity when
     * you update the rule group, so leave room for your rule group to grow. </p>
     *  <p> <b>Capacity for a stateless rule group</b> </p> <p>For a stateless
     * rule group, the capacity required is the sum of the capacity requirements of the
     * individual rules that you expect to have in the rule group. </p> <p>To calculate
     * the capacity requirement of a single rule, multiply the capacity requirement
     * values of each of the rule's match settings:</p> <ul> <li> <p>A match setting
     * with no criteria specified has a value of 1. </p> </li> <li> <p>A match setting
     * with <code>Any</code> specified has a value of 1. </p> </li> <li> <p>All other
     * match settings have a value equal to the number of elements provided in the
     * setting. For example, a protocol setting ["UDP"] and a source setting
     * ["10.0.0.0/24"] each have a value of 1. A protocol setting ["UDP","TCP"] has a
     * value of 2. A source setting ["10.0.0.0/24","10.0.0.1/24","10.0.0.2/24"] has a
     * value of 3. </p> </li> </ul> <p>A rule with no criteria specified in any of its
     * match settings has a capacity requirement of 1. A rule with protocol setting
     * ["UDP","TCP"], source setting ["10.0.0.0/24","10.0.0.1/24","10.0.0.2/24"], and a
     * single specification or no specification for each of the other match settings
     * has a capacity requirement of 6. </p> <p> <b>Capacity for a stateful rule
     * group</b> </p> <p>For a stateful rule group, the minimum capacity required is
     * the number of individual rules that you expect to have in the rule group. </p>
     */
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }

    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>  <p>You can't change or exceed this capacity when
     * you update the rule group, so leave room for your rule group to grow. </p>
     *  <p> <b>Capacity for a stateless rule group</b> </p> <p>For a stateless
     * rule group, the capacity required is the sum of the capacity requirements of the
     * individual rules that you expect to have in the rule group. </p> <p>To calculate
     * the capacity requirement of a single rule, multiply the capacity requirement
     * values of each of the rule's match settings:</p> <ul> <li> <p>A match setting
     * with no criteria specified has a value of 1. </p> </li> <li> <p>A match setting
     * with <code>Any</code> specified has a value of 1. </p> </li> <li> <p>All other
     * match settings have a value equal to the number of elements provided in the
     * setting. For example, a protocol setting ["UDP"] and a source setting
     * ["10.0.0.0/24"] each have a value of 1. A protocol setting ["UDP","TCP"] has a
     * value of 2. A source setting ["10.0.0.0/24","10.0.0.1/24","10.0.0.2/24"] has a
     * value of 3. </p> </li> </ul> <p>A rule with no criteria specified in any of its
     * match settings has a capacity requirement of 1. A rule with protocol setting
     * ["UDP","TCP"], source setting ["10.0.0.0/24","10.0.0.1/24","10.0.0.2/24"], and a
     * single specification or no specification for each of the other match settings
     * has a capacity requirement of 6. </p> <p> <b>Capacity for a stateful rule
     * group</b> </p> <p>For a stateful rule group, the minimum capacity required is
     * the number of individual rules that you expect to have in the rule group. </p>
     */
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }

    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>  <p>You can't change or exceed this capacity when
     * you update the rule group, so leave room for your rule group to grow. </p>
     *  <p> <b>Capacity for a stateless rule group</b> </p> <p>For a stateless
     * rule group, the capacity required is the sum of the capacity requirements of the
     * individual rules that you expect to have in the rule group. </p> <p>To calculate
     * the capacity requirement of a single rule, multiply the capacity requirement
     * values of each of the rule's match settings:</p> <ul> <li> <p>A match setting
     * with no criteria specified has a value of 1. </p> </li> <li> <p>A match setting
     * with <code>Any</code> specified has a value of 1. </p> </li> <li> <p>All other
     * match settings have a value equal to the number of elements provided in the
     * setting. For example, a protocol setting ["UDP"] and a source setting
     * ["10.0.0.0/24"] each have a value of 1. A protocol setting ["UDP","TCP"] has a
     * value of 2. A source setting ["10.0.0.0/24","10.0.0.1/24","10.0.0.2/24"] has a
     * value of 3. </p> </li> </ul> <p>A rule with no criteria specified in any of its
     * match settings has a capacity requirement of 1. A rule with protocol setting
     * ["UDP","TCP"], source setting ["10.0.0.0/24","10.0.0.1/24","10.0.0.2/24"], and a
     * single specification or no specification for each of the other match settings
     * has a capacity requirement of 6. </p> <p> <b>Capacity for a stateful rule
     * group</b> </p> <p>For a stateful rule group, the minimum capacity required is
     * the number of individual rules that you expect to have in the rule group. </p>
     */
    inline CreateRuleGroupRequest& WithCapacity(int value) { SetCapacity(value); return *this;}


    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline CreateRuleGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline CreateRuleGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline CreateRuleGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline CreateRuleGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether you want Network Firewall to just check the validity of the
     * request, rather than run the request. </p> <p>If set to <code>TRUE</code>,
     * Network Firewall checks whether the request can run successfully, but doesn't
     * actually make the requested changes. The call returns the value that the request
     * would return if you ran it with dry run set to <code>FALSE</code>, but doesn't
     * make additions or changes to your resources. This option allows you to make sure
     * that you have the required permissions to run the request and that your request
     * parameters are valid. </p> <p>If set to <code>FALSE</code>, Network Firewall
     * makes the requested changes to your resources. </p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Indicates whether you want Network Firewall to just check the validity of the
     * request, rather than run the request. </p> <p>If set to <code>TRUE</code>,
     * Network Firewall checks whether the request can run successfully, but doesn't
     * actually make the requested changes. The call returns the value that the request
     * would return if you ran it with dry run set to <code>FALSE</code>, but doesn't
     * make additions or changes to your resources. This option allows you to make sure
     * that you have the required permissions to run the request and that your request
     * parameters are valid. </p> <p>If set to <code>FALSE</code>, Network Firewall
     * makes the requested changes to your resources. </p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Indicates whether you want Network Firewall to just check the validity of the
     * request, rather than run the request. </p> <p>If set to <code>TRUE</code>,
     * Network Firewall checks whether the request can run successfully, but doesn't
     * actually make the requested changes. The call returns the value that the request
     * would return if you ran it with dry run set to <code>FALSE</code>, but doesn't
     * make additions or changes to your resources. This option allows you to make sure
     * that you have the required permissions to run the request and that your request
     * parameters are valid. </p> <p>If set to <code>FALSE</code>, Network Firewall
     * makes the requested changes to your resources. </p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Indicates whether you want Network Firewall to just check the validity of the
     * request, rather than run the request. </p> <p>If set to <code>TRUE</code>,
     * Network Firewall checks whether the request can run successfully, but doesn't
     * actually make the requested changes. The call returns the value that the request
     * would return if you ran it with dry run set to <code>FALSE</code>, but doesn't
     * make additions or changes to your resources. This option allows you to make sure
     * that you have the required permissions to run the request and that your request
     * parameters are valid. </p> <p>If set to <code>FALSE</code>, Network Firewall
     * makes the requested changes to your resources. </p>
     */
    inline CreateRuleGroupRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_ruleGroupName;
    bool m_ruleGroupNameHasBeenSet;

    RuleGroup m_ruleGroup;
    bool m_ruleGroupHasBeenSet;

    Aws::String m_rules;
    bool m_rulesHasBeenSet;

    RuleGroupType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_capacity;
    bool m_capacityHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
