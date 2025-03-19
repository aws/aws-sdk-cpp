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
    AWS_CONFIGSERVICE_API OrganizationCustomPolicyRuleMetadata() = default;
    AWS_CONFIGSERVICE_API OrganizationCustomPolicyRuleMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationCustomPolicyRuleMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description that you provide for your organization Config Custom Policy
     * rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    OrganizationCustomPolicyRuleMetadata& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline const Aws::Vector<OrganizationConfigRuleTriggerTypeNoSN>& GetOrganizationConfigRuleTriggerTypes() const { return m_organizationConfigRuleTriggerTypes; }
    inline bool OrganizationConfigRuleTriggerTypesHasBeenSet() const { return m_organizationConfigRuleTriggerTypesHasBeenSet; }
    template<typename OrganizationConfigRuleTriggerTypesT = Aws::Vector<OrganizationConfigRuleTriggerTypeNoSN>>
    void SetOrganizationConfigRuleTriggerTypes(OrganizationConfigRuleTriggerTypesT&& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes = std::forward<OrganizationConfigRuleTriggerTypesT>(value); }
    template<typename OrganizationConfigRuleTriggerTypesT = Aws::Vector<OrganizationConfigRuleTriggerTypeNoSN>>
    OrganizationCustomPolicyRuleMetadata& WithOrganizationConfigRuleTriggerTypes(OrganizationConfigRuleTriggerTypesT&& value) { SetOrganizationConfigRuleTriggerTypes(std::forward<OrganizationConfigRuleTriggerTypesT>(value)); return *this;}
    inline OrganizationCustomPolicyRuleMetadata& AddOrganizationConfigRuleTriggerTypes(OrganizationConfigRuleTriggerTypeNoSN value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string, in JSON format, that is passed to your organization Config Custom
     * Policy rule.</p>
     */
    inline const Aws::String& GetInputParameters() const { return m_inputParameters; }
    inline bool InputParametersHasBeenSet() const { return m_inputParametersHasBeenSet; }
    template<typename InputParametersT = Aws::String>
    void SetInputParameters(InputParametersT&& value) { m_inputParametersHasBeenSet = true; m_inputParameters = std::forward<InputParametersT>(value); }
    template<typename InputParametersT = Aws::String>
    OrganizationCustomPolicyRuleMetadata& WithInputParameters(InputParametersT&& value) { SetInputParameters(std::forward<InputParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. Your
     * Config Custom Policy rule is triggered when Config delivers the configuration
     * snapshot. For more information, see <a>ConfigSnapshotDeliveryProperties</a>.</p>
     */
    inline MaximumExecutionFrequency GetMaximumExecutionFrequency() const { return m_maximumExecutionFrequency; }
    inline bool MaximumExecutionFrequencyHasBeenSet() const { return m_maximumExecutionFrequencyHasBeenSet; }
    inline void SetMaximumExecutionFrequency(MaximumExecutionFrequency value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = value; }
    inline OrganizationCustomPolicyRuleMetadata& WithMaximumExecutionFrequency(MaximumExecutionFrequency value) { SetMaximumExecutionFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypesScope() const { return m_resourceTypesScope; }
    inline bool ResourceTypesScopeHasBeenSet() const { return m_resourceTypesScopeHasBeenSet; }
    template<typename ResourceTypesScopeT = Aws::Vector<Aws::String>>
    void SetResourceTypesScope(ResourceTypesScopeT&& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope = std::forward<ResourceTypesScopeT>(value); }
    template<typename ResourceTypesScopeT = Aws::Vector<Aws::String>>
    OrganizationCustomPolicyRuleMetadata& WithResourceTypesScope(ResourceTypesScopeT&& value) { SetResourceTypesScope(std::forward<ResourceTypesScopeT>(value)); return *this;}
    template<typename ResourceTypesScopeT = Aws::String>
    OrganizationCustomPolicyRuleMetadata& AddResourceTypesScope(ResourceTypesScopeT&& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.emplace_back(std::forward<ResourceTypesScopeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::String& GetResourceIdScope() const { return m_resourceIdScope; }
    inline bool ResourceIdScopeHasBeenSet() const { return m_resourceIdScopeHasBeenSet; }
    template<typename ResourceIdScopeT = Aws::String>
    void SetResourceIdScope(ResourceIdScopeT&& value) { m_resourceIdScopeHasBeenSet = true; m_resourceIdScope = std::forward<ResourceIdScopeT>(value); }
    template<typename ResourceIdScopeT = Aws::String>
    OrganizationCustomPolicyRuleMetadata& WithResourceIdScope(ResourceIdScopeT&& value) { SetResourceIdScope(std::forward<ResourceIdScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline const Aws::String& GetTagKeyScope() const { return m_tagKeyScope; }
    inline bool TagKeyScopeHasBeenSet() const { return m_tagKeyScopeHasBeenSet; }
    template<typename TagKeyScopeT = Aws::String>
    void SetTagKeyScope(TagKeyScopeT&& value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope = std::forward<TagKeyScopeT>(value); }
    template<typename TagKeyScopeT = Aws::String>
    OrganizationCustomPolicyRuleMetadata& WithTagKeyScope(TagKeyScopeT&& value) { SetTagKeyScope(std::forward<TagKeyScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline const Aws::String& GetTagValueScope() const { return m_tagValueScope; }
    inline bool TagValueScopeHasBeenSet() const { return m_tagValueScopeHasBeenSet; }
    template<typename TagValueScopeT = Aws::String>
    void SetTagValueScope(TagValueScopeT&& value) { m_tagValueScopeHasBeenSet = true; m_tagValueScope = std::forward<TagValueScopeT>(value); }
    template<typename TagValueScopeT = Aws::String>
    OrganizationCustomPolicyRuleMetadata& WithTagValueScope(TagValueScopeT&& value) { SetTagValueScope(std::forward<TagValueScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime system for your organization Config Custom Policy rules. Guard is
     * a policy-as-code language that allows you to write policies that are enforced by
     * Config Custom Policy rules. For more information about Guard, see the <a
     * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
     * Repository</a>.</p>
     */
    inline const Aws::String& GetPolicyRuntime() const { return m_policyRuntime; }
    inline bool PolicyRuntimeHasBeenSet() const { return m_policyRuntimeHasBeenSet; }
    template<typename PolicyRuntimeT = Aws::String>
    void SetPolicyRuntime(PolicyRuntimeT&& value) { m_policyRuntimeHasBeenSet = true; m_policyRuntime = std::forward<PolicyRuntimeT>(value); }
    template<typename PolicyRuntimeT = Aws::String>
    OrganizationCustomPolicyRuleMetadata& WithPolicyRuntime(PolicyRuntimeT&& value) { SetPolicyRuntime(std::forward<PolicyRuntimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy definition containing the logic for your organization Config
     * Custom Policy rule.</p>
     */
    inline const Aws::String& GetPolicyText() const { return m_policyText; }
    inline bool PolicyTextHasBeenSet() const { return m_policyTextHasBeenSet; }
    template<typename PolicyTextT = Aws::String>
    void SetPolicyText(PolicyTextT&& value) { m_policyTextHasBeenSet = true; m_policyText = std::forward<PolicyTextT>(value); }
    template<typename PolicyTextT = Aws::String>
    OrganizationCustomPolicyRuleMetadata& WithPolicyText(PolicyTextT&& value) { SetPolicyText(std::forward<PolicyTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of accounts that you can enable debug logging for your organization
     * Config Custom Policy rule. List is null when debug logging is enabled for all
     * accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDebugLogDeliveryAccounts() const { return m_debugLogDeliveryAccounts; }
    inline bool DebugLogDeliveryAccountsHasBeenSet() const { return m_debugLogDeliveryAccountsHasBeenSet; }
    template<typename DebugLogDeliveryAccountsT = Aws::Vector<Aws::String>>
    void SetDebugLogDeliveryAccounts(DebugLogDeliveryAccountsT&& value) { m_debugLogDeliveryAccountsHasBeenSet = true; m_debugLogDeliveryAccounts = std::forward<DebugLogDeliveryAccountsT>(value); }
    template<typename DebugLogDeliveryAccountsT = Aws::Vector<Aws::String>>
    OrganizationCustomPolicyRuleMetadata& WithDebugLogDeliveryAccounts(DebugLogDeliveryAccountsT&& value) { SetDebugLogDeliveryAccounts(std::forward<DebugLogDeliveryAccountsT>(value)); return *this;}
    template<typename DebugLogDeliveryAccountsT = Aws::String>
    OrganizationCustomPolicyRuleMetadata& AddDebugLogDeliveryAccounts(DebugLogDeliveryAccountsT&& value) { m_debugLogDeliveryAccountsHasBeenSet = true; m_debugLogDeliveryAccounts.emplace_back(std::forward<DebugLogDeliveryAccountsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<OrganizationConfigRuleTriggerTypeNoSN> m_organizationConfigRuleTriggerTypes;
    bool m_organizationConfigRuleTriggerTypesHasBeenSet = false;

    Aws::String m_inputParameters;
    bool m_inputParametersHasBeenSet = false;

    MaximumExecutionFrequency m_maximumExecutionFrequency{MaximumExecutionFrequency::NOT_SET};
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
