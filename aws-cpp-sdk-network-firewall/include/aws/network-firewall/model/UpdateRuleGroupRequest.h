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
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <aws/network-firewall/model/SourceMetadata.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class UpdateRuleGroupRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateRuleGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRuleGroup"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(const Aws::String& value) { m_updateTokenHasBeenSet = true; m_updateToken = value; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(Aws::String&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(const char* value) { m_updateTokenHasBeenSet = true; m_updateToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateRuleGroupRequest& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateRuleGroupRequest& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateRuleGroupRequest& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline const Aws::String& GetRuleGroupArn() const{ return m_ruleGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline void SetRuleGroupArn(const Aws::String& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline void SetRuleGroupArn(Aws::String&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline void SetRuleGroupArn(const char* value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline UpdateRuleGroupRequest& WithRuleGroupArn(const Aws::String& value) { SetRuleGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline UpdateRuleGroupRequest& WithRuleGroupArn(Aws::String&& value) { SetRuleGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline UpdateRuleGroupRequest& WithRuleGroupArn(const char* value) { SetRuleGroupArn(value); return *this;}


    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline const Aws::String& GetRuleGroupName() const{ return m_ruleGroupName; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline bool RuleGroupNameHasBeenSet() const { return m_ruleGroupNameHasBeenSet; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline void SetRuleGroupName(const Aws::String& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = value; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline void SetRuleGroupName(Aws::String&& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = std::move(value); }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline void SetRuleGroupName(const char* value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName.assign(value); }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline UpdateRuleGroupRequest& WithRuleGroupName(const Aws::String& value) { SetRuleGroupName(value); return *this;}

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline UpdateRuleGroupRequest& WithRuleGroupName(Aws::String&& value) { SetRuleGroupName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline UpdateRuleGroupRequest& WithRuleGroupName(const char* value) { SetRuleGroupName(value); return *this;}


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
    inline UpdateRuleGroupRequest& WithRuleGroup(const RuleGroup& value) { SetRuleGroup(value); return *this;}

    /**
     * <p>An object that defines the rule group rules. </p>  <p>You must provide
     * either this rule group setting or a <code>Rules</code> setting, but not both.
     * </p> 
     */
    inline UpdateRuleGroupRequest& WithRuleGroup(RuleGroup&& value) { SetRuleGroup(std::move(value)); return *this;}


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
    inline UpdateRuleGroupRequest& WithRules(const Aws::String& value) { SetRules(value); return *this;}

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
    inline UpdateRuleGroupRequest& WithRules(Aws::String&& value) { SetRules(std::move(value)); return *this;}

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
    inline UpdateRuleGroupRequest& WithRules(const char* value) { SetRules(value); return *this;}


    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline const RuleGroupType& GetType() const{ return m_type; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline void SetType(const RuleGroupType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline void SetType(RuleGroupType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline UpdateRuleGroupRequest& WithType(const RuleGroupType& value) { SetType(value); return *this;}

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline UpdateRuleGroupRequest& WithType(RuleGroupType&& value) { SetType(std::move(value)); return *this;}


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
    inline UpdateRuleGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the rule group. </p>
     */
    inline UpdateRuleGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the rule group. </p>
     */
    inline UpdateRuleGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateRuleGroupRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>A complex type that contains settings for encryption of your rule group
     * resources.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>A complex type that contains settings for encryption of your rule group
     * resources.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>A complex type that contains settings for encryption of your rule group
     * resources.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>A complex type that contains settings for encryption of your rule group
     * resources.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>A complex type that contains settings for encryption of your rule group
     * resources.</p>
     */
    inline UpdateRuleGroupRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>A complex type that contains settings for encryption of your rule group
     * resources.</p>
     */
    inline UpdateRuleGroupRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to keep track of updates made to
     * the originating rule group.</p>
     */
    inline const SourceMetadata& GetSourceMetadata() const{ return m_sourceMetadata; }

    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to keep track of updates made to
     * the originating rule group.</p>
     */
    inline bool SourceMetadataHasBeenSet() const { return m_sourceMetadataHasBeenSet; }

    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to keep track of updates made to
     * the originating rule group.</p>
     */
    inline void SetSourceMetadata(const SourceMetadata& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = value; }

    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to keep track of updates made to
     * the originating rule group.</p>
     */
    inline void SetSourceMetadata(SourceMetadata&& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = std::move(value); }

    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to keep track of updates made to
     * the originating rule group.</p>
     */
    inline UpdateRuleGroupRequest& WithSourceMetadata(const SourceMetadata& value) { SetSourceMetadata(value); return *this;}

    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to keep track of updates made to
     * the originating rule group.</p>
     */
    inline UpdateRuleGroupRequest& WithSourceMetadata(SourceMetadata&& value) { SetSourceMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

    Aws::String m_ruleGroupName;
    bool m_ruleGroupNameHasBeenSet = false;

    RuleGroup m_ruleGroup;
    bool m_ruleGroupHasBeenSet = false;

    Aws::String m_rules;
    bool m_rulesHasBeenSet = false;

    RuleGroupType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    SourceMetadata m_sourceMetadata;
    bool m_sourceMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
