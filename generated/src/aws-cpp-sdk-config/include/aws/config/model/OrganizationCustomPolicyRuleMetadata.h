/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/MaximumExecutionFrequency.h>
#include <aws/config/model/OrganizationConfigRuleTriggerTypeNoSN.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>An object that specifies metadata for your organization's Config Custom
   * Policy rule. The metadata includes the runtime system in use, which accounts
   * have debug logging enabled, and other custom rule metadata, such as resource
   * type, resource ID of Amazon Web Services resource, and organization trigger
   * types that initiate Config to evaluate Amazon Web Services resources against a
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/OrganizationCustomPolicyRuleMetadata">AWS
   * API Reference</a></p>
   */
  class OrganizationCustomPolicyRuleMetadata
  {
  public:
    AWS_CONFIGSERVICE_API OrganizationCustomPolicyRuleMetadata();
    AWS_CONFIGSERVICE_API OrganizationCustomPolicyRuleMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationCustomPolicyRuleMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description that you provide for your organization Config Custom Policy
     * rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline OrganizationCustomPolicyRuleMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of notification that initiates Config to run an evaluation for a
     * rule. For Config Custom Policy rules, Config supports change-initiated
     * notification types:</p> <ul> <li> <p>
     * <code>ConfigurationItemChangeNotification</code> - Initiates an evaluation when
     * Config delivers a configuration item as a result of a resource change.</p> </li>
     * <li> <p> <code>OversizedConfigurationItemChangeNotification</code> - Initiates
     * an evaluation when Config delivers an oversized configuration item. Config may
     * generate this notification type when a resource changes and the notification
     * exceeds the maximum size allowed by Amazon SNS.</p> </li> </ul>
     */
    inline const Aws::Vector<OrganizationConfigRuleTriggerTypeNoSN>& GetOrganizationConfigRuleTriggerTypes() const{ return m_organizationConfigRuleTriggerTypes; }
    inline bool OrganizationConfigRuleTriggerTypesHasBeenSet() const { return m_organizationConfigRuleTriggerTypesHasBeenSet; }
    inline void SetOrganizationConfigRuleTriggerTypes(const Aws::Vector<OrganizationConfigRuleTriggerTypeNoSN>& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes = value; }
    inline void SetOrganizationConfigRuleTriggerTypes(Aws::Vector<OrganizationConfigRuleTriggerTypeNoSN>&& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes = std::move(value); }
    inline OrganizationCustomPolicyRuleMetadata& WithOrganizationConfigRuleTriggerTypes(const Aws::Vector<OrganizationConfigRuleTriggerTypeNoSN>& value) { SetOrganizationConfigRuleTriggerTypes(value); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithOrganizationConfigRuleTriggerTypes(Aws::Vector<OrganizationConfigRuleTriggerTypeNoSN>&& value) { SetOrganizationConfigRuleTriggerTypes(std::move(value)); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& AddOrganizationConfigRuleTriggerTypes(const OrganizationConfigRuleTriggerTypeNoSN& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes.push_back(value); return *this; }
    inline OrganizationCustomPolicyRuleMetadata& AddOrganizationConfigRuleTriggerTypes(OrganizationConfigRuleTriggerTypeNoSN&& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string, in JSON format, that is passed to your organization Config Custom
     * Policy rule.</p>
     */
    inline const Aws::String& GetInputParameters() const{ return m_inputParameters; }
    inline bool InputParametersHasBeenSet() const { return m_inputParametersHasBeenSet; }
    inline void SetInputParameters(const Aws::String& value) { m_inputParametersHasBeenSet = true; m_inputParameters = value; }
    inline void SetInputParameters(Aws::String&& value) { m_inputParametersHasBeenSet = true; m_inputParameters = std::move(value); }
    inline void SetInputParameters(const char* value) { m_inputParametersHasBeenSet = true; m_inputParameters.assign(value); }
    inline OrganizationCustomPolicyRuleMetadata& WithInputParameters(const Aws::String& value) { SetInputParameters(value); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithInputParameters(Aws::String&& value) { SetInputParameters(std::move(value)); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithInputParameters(const char* value) { SetInputParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. Your
     * Config Custom Policy rule is triggered when Config delivers the configuration
     * snapshot. For more information, see <a>ConfigSnapshotDeliveryProperties</a>.</p>
     */
    inline const MaximumExecutionFrequency& GetMaximumExecutionFrequency() const{ return m_maximumExecutionFrequency; }
    inline bool MaximumExecutionFrequencyHasBeenSet() const { return m_maximumExecutionFrequencyHasBeenSet; }
    inline void SetMaximumExecutionFrequency(const MaximumExecutionFrequency& value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = value; }
    inline void SetMaximumExecutionFrequency(MaximumExecutionFrequency&& value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = std::move(value); }
    inline OrganizationCustomPolicyRuleMetadata& WithMaximumExecutionFrequency(const MaximumExecutionFrequency& value) { SetMaximumExecutionFrequency(value); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithMaximumExecutionFrequency(MaximumExecutionFrequency&& value) { SetMaximumExecutionFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypesScope() const{ return m_resourceTypesScope; }
    inline bool ResourceTypesScopeHasBeenSet() const { return m_resourceTypesScopeHasBeenSet; }
    inline void SetResourceTypesScope(const Aws::Vector<Aws::String>& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope = value; }
    inline void SetResourceTypesScope(Aws::Vector<Aws::String>&& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope = std::move(value); }
    inline OrganizationCustomPolicyRuleMetadata& WithResourceTypesScope(const Aws::Vector<Aws::String>& value) { SetResourceTypesScope(value); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithResourceTypesScope(Aws::Vector<Aws::String>&& value) { SetResourceTypesScope(std::move(value)); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& AddResourceTypesScope(const Aws::String& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.push_back(value); return *this; }
    inline OrganizationCustomPolicyRuleMetadata& AddResourceTypesScope(Aws::String&& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.push_back(std::move(value)); return *this; }
    inline OrganizationCustomPolicyRuleMetadata& AddResourceTypesScope(const char* value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::String& GetResourceIdScope() const{ return m_resourceIdScope; }
    inline bool ResourceIdScopeHasBeenSet() const { return m_resourceIdScopeHasBeenSet; }
    inline void SetResourceIdScope(const Aws::String& value) { m_resourceIdScopeHasBeenSet = true; m_resourceIdScope = value; }
    inline void SetResourceIdScope(Aws::String&& value) { m_resourceIdScopeHasBeenSet = true; m_resourceIdScope = std::move(value); }
    inline void SetResourceIdScope(const char* value) { m_resourceIdScopeHasBeenSet = true; m_resourceIdScope.assign(value); }
    inline OrganizationCustomPolicyRuleMetadata& WithResourceIdScope(const Aws::String& value) { SetResourceIdScope(value); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithResourceIdScope(Aws::String&& value) { SetResourceIdScope(std::move(value)); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithResourceIdScope(const char* value) { SetResourceIdScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline const Aws::String& GetTagKeyScope() const{ return m_tagKeyScope; }
    inline bool TagKeyScopeHasBeenSet() const { return m_tagKeyScopeHasBeenSet; }
    inline void SetTagKeyScope(const Aws::String& value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope = value; }
    inline void SetTagKeyScope(Aws::String&& value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope = std::move(value); }
    inline void SetTagKeyScope(const char* value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope.assign(value); }
    inline OrganizationCustomPolicyRuleMetadata& WithTagKeyScope(const Aws::String& value) { SetTagKeyScope(value); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithTagKeyScope(Aws::String&& value) { SetTagKeyScope(std::move(value)); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithTagKeyScope(const char* value) { SetTagKeyScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline const Aws::String& GetTagValueScope() const{ return m_tagValueScope; }
    inline bool TagValueScopeHasBeenSet() const { return m_tagValueScopeHasBeenSet; }
    inline void SetTagValueScope(const Aws::String& value) { m_tagValueScopeHasBeenSet = true; m_tagValueScope = value; }
    inline void SetTagValueScope(Aws::String&& value) { m_tagValueScopeHasBeenSet = true; m_tagValueScope = std::move(value); }
    inline void SetTagValueScope(const char* value) { m_tagValueScopeHasBeenSet = true; m_tagValueScope.assign(value); }
    inline OrganizationCustomPolicyRuleMetadata& WithTagValueScope(const Aws::String& value) { SetTagValueScope(value); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithTagValueScope(Aws::String&& value) { SetTagValueScope(std::move(value)); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithTagValueScope(const char* value) { SetTagValueScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime system for your organization Config Custom Policy rules. Guard is
     * a policy-as-code language that allows you to write policies that are enforced by
     * Config Custom Policy rules. For more information about Guard, see the <a
     * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
     * Repository</a>.</p>
     */
    inline const Aws::String& GetPolicyRuntime() const{ return m_policyRuntime; }
    inline bool PolicyRuntimeHasBeenSet() const { return m_policyRuntimeHasBeenSet; }
    inline void SetPolicyRuntime(const Aws::String& value) { m_policyRuntimeHasBeenSet = true; m_policyRuntime = value; }
    inline void SetPolicyRuntime(Aws::String&& value) { m_policyRuntimeHasBeenSet = true; m_policyRuntime = std::move(value); }
    inline void SetPolicyRuntime(const char* value) { m_policyRuntimeHasBeenSet = true; m_policyRuntime.assign(value); }
    inline OrganizationCustomPolicyRuleMetadata& WithPolicyRuntime(const Aws::String& value) { SetPolicyRuntime(value); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithPolicyRuntime(Aws::String&& value) { SetPolicyRuntime(std::move(value)); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithPolicyRuntime(const char* value) { SetPolicyRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy definition containing the logic for your organization Config
     * Custom Policy rule.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }
    inline bool PolicyTextHasBeenSet() const { return m_policyTextHasBeenSet; }
    inline void SetPolicyText(const Aws::String& value) { m_policyTextHasBeenSet = true; m_policyText = value; }
    inline void SetPolicyText(Aws::String&& value) { m_policyTextHasBeenSet = true; m_policyText = std::move(value); }
    inline void SetPolicyText(const char* value) { m_policyTextHasBeenSet = true; m_policyText.assign(value); }
    inline OrganizationCustomPolicyRuleMetadata& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of accounts that you can enable debug logging for your organization
     * Config Custom Policy rule. List is null when debug logging is enabled for all
     * accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDebugLogDeliveryAccounts() const{ return m_debugLogDeliveryAccounts; }
    inline bool DebugLogDeliveryAccountsHasBeenSet() const { return m_debugLogDeliveryAccountsHasBeenSet; }
    inline void SetDebugLogDeliveryAccounts(const Aws::Vector<Aws::String>& value) { m_debugLogDeliveryAccountsHasBeenSet = true; m_debugLogDeliveryAccounts = value; }
    inline void SetDebugLogDeliveryAccounts(Aws::Vector<Aws::String>&& value) { m_debugLogDeliveryAccountsHasBeenSet = true; m_debugLogDeliveryAccounts = std::move(value); }
    inline OrganizationCustomPolicyRuleMetadata& WithDebugLogDeliveryAccounts(const Aws::Vector<Aws::String>& value) { SetDebugLogDeliveryAccounts(value); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& WithDebugLogDeliveryAccounts(Aws::Vector<Aws::String>&& value) { SetDebugLogDeliveryAccounts(std::move(value)); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& AddDebugLogDeliveryAccounts(const Aws::String& value) { m_debugLogDeliveryAccountsHasBeenSet = true; m_debugLogDeliveryAccounts.push_back(value); return *this; }
    inline OrganizationCustomPolicyRuleMetadata& AddDebugLogDeliveryAccounts(Aws::String&& value) { m_debugLogDeliveryAccountsHasBeenSet = true; m_debugLogDeliveryAccounts.push_back(std::move(value)); return *this; }
    inline OrganizationCustomPolicyRuleMetadata& AddDebugLogDeliveryAccounts(const char* value) { m_debugLogDeliveryAccountsHasBeenSet = true; m_debugLogDeliveryAccounts.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<OrganizationConfigRuleTriggerTypeNoSN> m_organizationConfigRuleTriggerTypes;
    bool m_organizationConfigRuleTriggerTypesHasBeenSet = false;

    Aws::String m_inputParameters;
    bool m_inputParametersHasBeenSet = false;

    MaximumExecutionFrequency m_maximumExecutionFrequency;
    bool m_maximumExecutionFrequencyHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypesScope;
    bool m_resourceTypesScopeHasBeenSet = false;

    Aws::String m_resourceIdScope;
    bool m_resourceIdScopeHasBeenSet = false;

    Aws::String m_tagKeyScope;
    bool m_tagKeyScopeHasBeenSet = false;

    Aws::String m_tagValueScope;
    bool m_tagValueScopeHasBeenSet = false;

    Aws::String m_policyRuntime;
    bool m_policyRuntimeHasBeenSet = false;

    Aws::String m_policyText;
    bool m_policyTextHasBeenSet = false;

    Aws::Vector<Aws::String> m_debugLogDeliveryAccounts;
    bool m_debugLogDeliveryAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
