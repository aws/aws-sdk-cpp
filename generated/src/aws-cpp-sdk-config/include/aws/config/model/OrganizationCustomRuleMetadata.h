/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/MaximumExecutionFrequency.h>
#include <aws/config/model/OrganizationConfigRuleTriggerType.h>
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
   * <p>An object that specifies organization custom rule metadata such as resource
   * type, resource ID of Amazon Web Services resource, Lambda function ARN, and
   * organization trigger types that trigger Config to evaluate your Amazon Web
   * Services resources against a rule. It also provides the frequency with which you
   * want Config to run evaluations for the rule if the trigger type is
   * periodic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/OrganizationCustomRuleMetadata">AWS
   * API Reference</a></p>
   */
  class OrganizationCustomRuleMetadata
  {
  public:
    AWS_CONFIGSERVICE_API OrganizationCustomRuleMetadata() = default;
    AWS_CONFIGSERVICE_API OrganizationCustomRuleMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationCustomRuleMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description that you provide for your organization Config rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    OrganizationCustomRuleMetadata& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lambda function ARN.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const { return m_lambdaFunctionArn; }
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
    template<typename LambdaFunctionArnT = Aws::String>
    void SetLambdaFunctionArn(LambdaFunctionArnT&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::forward<LambdaFunctionArnT>(value); }
    template<typename LambdaFunctionArnT = Aws::String>
    OrganizationCustomRuleMetadata& WithLambdaFunctionArn(LambdaFunctionArnT&& value) { SetLambdaFunctionArn(std::forward<LambdaFunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of notification that triggers Config to run an evaluation for a
     * rule. You can specify the following notification types:</p> <ul> <li> <p>
     * <code>ConfigurationItemChangeNotification</code> - Triggers an evaluation when
     * Config delivers a configuration item as a result of a resource change.</p> </li>
     * <li> <p> <code>OversizedConfigurationItemChangeNotification</code> - Triggers an
     * evaluation when Config delivers an oversized configuration item. Config may
     * generate this notification type when a resource changes and the notification
     * exceeds the maximum size allowed by Amazon SNS.</p> </li> <li> <p>
     * <code>ScheduledNotification</code> - Triggers a periodic evaluation at the
     * frequency specified for <code>MaximumExecutionFrequency</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<OrganizationConfigRuleTriggerType>& GetOrganizationConfigRuleTriggerTypes() const { return m_organizationConfigRuleTriggerTypes; }
    inline bool OrganizationConfigRuleTriggerTypesHasBeenSet() const { return m_organizationConfigRuleTriggerTypesHasBeenSet; }
    template<typename OrganizationConfigRuleTriggerTypesT = Aws::Vector<OrganizationConfigRuleTriggerType>>
    void SetOrganizationConfigRuleTriggerTypes(OrganizationConfigRuleTriggerTypesT&& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes = std::forward<OrganizationConfigRuleTriggerTypesT>(value); }
    template<typename OrganizationConfigRuleTriggerTypesT = Aws::Vector<OrganizationConfigRuleTriggerType>>
    OrganizationCustomRuleMetadata& WithOrganizationConfigRuleTriggerTypes(OrganizationConfigRuleTriggerTypesT&& value) { SetOrganizationConfigRuleTriggerTypes(std::forward<OrganizationConfigRuleTriggerTypesT>(value)); return *this;}
    inline OrganizationCustomRuleMetadata& AddOrganizationConfigRuleTriggerTypes(OrganizationConfigRuleTriggerType value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string, in JSON format, that is passed to your organization Config rule
     * Lambda function.</p>
     */
    inline const Aws::String& GetInputParameters() const { return m_inputParameters; }
    inline bool InputParametersHasBeenSet() const { return m_inputParametersHasBeenSet; }
    template<typename InputParametersT = Aws::String>
    void SetInputParameters(InputParametersT&& value) { m_inputParametersHasBeenSet = true; m_inputParameters = std::forward<InputParametersT>(value); }
    template<typename InputParametersT = Aws::String>
    OrganizationCustomRuleMetadata& WithInputParameters(InputParametersT&& value) { SetInputParameters(std::forward<InputParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. Your
     * custom rule is triggered when Config delivers the configuration snapshot. For
     * more information, see <a>ConfigSnapshotDeliveryProperties</a>.</p>  <p>By
     * default, rules with a periodic trigger are evaluated every 24 hours. To change
     * the frequency, specify a valid value for the
     * <code>MaximumExecutionFrequency</code> parameter.</p> 
     */
    inline MaximumExecutionFrequency GetMaximumExecutionFrequency() const { return m_maximumExecutionFrequency; }
    inline bool MaximumExecutionFrequencyHasBeenSet() const { return m_maximumExecutionFrequencyHasBeenSet; }
    inline void SetMaximumExecutionFrequency(MaximumExecutionFrequency value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = value; }
    inline OrganizationCustomRuleMetadata& WithMaximumExecutionFrequency(MaximumExecutionFrequency value) { SetMaximumExecutionFrequency(value); return *this;}
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
    OrganizationCustomRuleMetadata& WithResourceTypesScope(ResourceTypesScopeT&& value) { SetResourceTypesScope(std::forward<ResourceTypesScopeT>(value)); return *this;}
    template<typename ResourceTypesScopeT = Aws::String>
    OrganizationCustomRuleMetadata& AddResourceTypesScope(ResourceTypesScopeT&& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.emplace_back(std::forward<ResourceTypesScopeT>(value)); return *this; }
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
    OrganizationCustomRuleMetadata& WithResourceIdScope(ResourceIdScopeT&& value) { SetResourceIdScope(std::forward<ResourceIdScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values. </p>
     */
    inline const Aws::String& GetTagKeyScope() const { return m_tagKeyScope; }
    inline bool TagKeyScopeHasBeenSet() const { return m_tagKeyScopeHasBeenSet; }
    template<typename TagKeyScopeT = Aws::String>
    void SetTagKeyScope(TagKeyScopeT&& value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope = std::forward<TagKeyScopeT>(value); }
    template<typename TagKeyScopeT = Aws::String>
    OrganizationCustomRuleMetadata& WithTagKeyScope(TagKeyScopeT&& value) { SetTagKeyScope(std::forward<TagKeyScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key). </p>
     */
    inline const Aws::String& GetTagValueScope() const { return m_tagValueScope; }
    inline bool TagValueScopeHasBeenSet() const { return m_tagValueScopeHasBeenSet; }
    template<typename TagValueScopeT = Aws::String>
    void SetTagValueScope(TagValueScopeT&& value) { m_tagValueScopeHasBeenSet = true; m_tagValueScope = std::forward<TagValueScopeT>(value); }
    template<typename TagValueScopeT = Aws::String>
    OrganizationCustomRuleMetadata& WithTagValueScope(TagValueScopeT&& value) { SetTagValueScope(std::forward<TagValueScopeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;

    Aws::Vector<OrganizationConfigRuleTriggerType> m_organizationConfigRuleTriggerTypes;
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
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
