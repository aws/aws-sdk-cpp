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
    AWS_CONFIGSERVICE_API OrganizationCustomRuleMetadata();
    AWS_CONFIGSERVICE_API OrganizationCustomRuleMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationCustomRuleMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description that you provide for your organization Config rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description that you provide for your organization Config rule.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description that you provide for your organization Config rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description that you provide for your organization Config rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description that you provide for your organization Config rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description that you provide for your organization Config rule.</p>
     */
    inline OrganizationCustomRuleMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description that you provide for your organization Config rule.</p>
     */
    inline OrganizationCustomRuleMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description that you provide for your organization Config rule.</p>
     */
    inline OrganizationCustomRuleMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The lambda function ARN.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }

    /**
     * <p>The lambda function ARN.</p>
     */
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }

    /**
     * <p>The lambda function ARN.</p>
     */
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = value; }

    /**
     * <p>The lambda function ARN.</p>
     */
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::move(value); }

    /**
     * <p>The lambda function ARN.</p>
     */
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn.assign(value); }

    /**
     * <p>The lambda function ARN.</p>
     */
    inline OrganizationCustomRuleMetadata& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}

    /**
     * <p>The lambda function ARN.</p>
     */
    inline OrganizationCustomRuleMetadata& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The lambda function ARN.</p>
     */
    inline OrganizationCustomRuleMetadata& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}


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
    inline const Aws::Vector<OrganizationConfigRuleTriggerType>& GetOrganizationConfigRuleTriggerTypes() const{ return m_organizationConfigRuleTriggerTypes; }

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
    inline bool OrganizationConfigRuleTriggerTypesHasBeenSet() const { return m_organizationConfigRuleTriggerTypesHasBeenSet; }

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
    inline void SetOrganizationConfigRuleTriggerTypes(const Aws::Vector<OrganizationConfigRuleTriggerType>& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes = value; }

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
    inline void SetOrganizationConfigRuleTriggerTypes(Aws::Vector<OrganizationConfigRuleTriggerType>&& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes = std::move(value); }

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
    inline OrganizationCustomRuleMetadata& WithOrganizationConfigRuleTriggerTypes(const Aws::Vector<OrganizationConfigRuleTriggerType>& value) { SetOrganizationConfigRuleTriggerTypes(value); return *this;}

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
    inline OrganizationCustomRuleMetadata& WithOrganizationConfigRuleTriggerTypes(Aws::Vector<OrganizationConfigRuleTriggerType>&& value) { SetOrganizationConfigRuleTriggerTypes(std::move(value)); return *this;}

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
    inline OrganizationCustomRuleMetadata& AddOrganizationConfigRuleTriggerTypes(const OrganizationConfigRuleTriggerType& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes.push_back(value); return *this; }

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
    inline OrganizationCustomRuleMetadata& AddOrganizationConfigRuleTriggerTypes(OrganizationConfigRuleTriggerType&& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>A string, in JSON format, that is passed to your organization Config rule
     * Lambda function.</p>
     */
    inline const Aws::String& GetInputParameters() const{ return m_inputParameters; }

    /**
     * <p>A string, in JSON format, that is passed to your organization Config rule
     * Lambda function.</p>
     */
    inline bool InputParametersHasBeenSet() const { return m_inputParametersHasBeenSet; }

    /**
     * <p>A string, in JSON format, that is passed to your organization Config rule
     * Lambda function.</p>
     */
    inline void SetInputParameters(const Aws::String& value) { m_inputParametersHasBeenSet = true; m_inputParameters = value; }

    /**
     * <p>A string, in JSON format, that is passed to your organization Config rule
     * Lambda function.</p>
     */
    inline void SetInputParameters(Aws::String&& value) { m_inputParametersHasBeenSet = true; m_inputParameters = std::move(value); }

    /**
     * <p>A string, in JSON format, that is passed to your organization Config rule
     * Lambda function.</p>
     */
    inline void SetInputParameters(const char* value) { m_inputParametersHasBeenSet = true; m_inputParameters.assign(value); }

    /**
     * <p>A string, in JSON format, that is passed to your organization Config rule
     * Lambda function.</p>
     */
    inline OrganizationCustomRuleMetadata& WithInputParameters(const Aws::String& value) { SetInputParameters(value); return *this;}

    /**
     * <p>A string, in JSON format, that is passed to your organization Config rule
     * Lambda function.</p>
     */
    inline OrganizationCustomRuleMetadata& WithInputParameters(Aws::String&& value) { SetInputParameters(std::move(value)); return *this;}

    /**
     * <p>A string, in JSON format, that is passed to your organization Config rule
     * Lambda function.</p>
     */
    inline OrganizationCustomRuleMetadata& WithInputParameters(const char* value) { SetInputParameters(value); return *this;}


    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. Your
     * custom rule is triggered when Config delivers the configuration snapshot. For
     * more information, see <a>ConfigSnapshotDeliveryProperties</a>.</p>  <p>By
     * default, rules with a periodic trigger are evaluated every 24 hours. To change
     * the frequency, specify a valid value for the
     * <code>MaximumExecutionFrequency</code> parameter.</p> 
     */
    inline const MaximumExecutionFrequency& GetMaximumExecutionFrequency() const{ return m_maximumExecutionFrequency; }

    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. Your
     * custom rule is triggered when Config delivers the configuration snapshot. For
     * more information, see <a>ConfigSnapshotDeliveryProperties</a>.</p>  <p>By
     * default, rules with a periodic trigger are evaluated every 24 hours. To change
     * the frequency, specify a valid value for the
     * <code>MaximumExecutionFrequency</code> parameter.</p> 
     */
    inline bool MaximumExecutionFrequencyHasBeenSet() const { return m_maximumExecutionFrequencyHasBeenSet; }

    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. Your
     * custom rule is triggered when Config delivers the configuration snapshot. For
     * more information, see <a>ConfigSnapshotDeliveryProperties</a>.</p>  <p>By
     * default, rules with a periodic trigger are evaluated every 24 hours. To change
     * the frequency, specify a valid value for the
     * <code>MaximumExecutionFrequency</code> parameter.</p> 
     */
    inline void SetMaximumExecutionFrequency(const MaximumExecutionFrequency& value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = value; }

    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. Your
     * custom rule is triggered when Config delivers the configuration snapshot. For
     * more information, see <a>ConfigSnapshotDeliveryProperties</a>.</p>  <p>By
     * default, rules with a periodic trigger are evaluated every 24 hours. To change
     * the frequency, specify a valid value for the
     * <code>MaximumExecutionFrequency</code> parameter.</p> 
     */
    inline void SetMaximumExecutionFrequency(MaximumExecutionFrequency&& value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = std::move(value); }

    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. Your
     * custom rule is triggered when Config delivers the configuration snapshot. For
     * more information, see <a>ConfigSnapshotDeliveryProperties</a>.</p>  <p>By
     * default, rules with a periodic trigger are evaluated every 24 hours. To change
     * the frequency, specify a valid value for the
     * <code>MaximumExecutionFrequency</code> parameter.</p> 
     */
    inline OrganizationCustomRuleMetadata& WithMaximumExecutionFrequency(const MaximumExecutionFrequency& value) { SetMaximumExecutionFrequency(value); return *this;}

    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. Your
     * custom rule is triggered when Config delivers the configuration snapshot. For
     * more information, see <a>ConfigSnapshotDeliveryProperties</a>.</p>  <p>By
     * default, rules with a periodic trigger are evaluated every 24 hours. To change
     * the frequency, specify a valid value for the
     * <code>MaximumExecutionFrequency</code> parameter.</p> 
     */
    inline OrganizationCustomRuleMetadata& WithMaximumExecutionFrequency(MaximumExecutionFrequency&& value) { SetMaximumExecutionFrequency(std::move(value)); return *this;}


    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypesScope() const{ return m_resourceTypesScope; }

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline bool ResourceTypesScopeHasBeenSet() const { return m_resourceTypesScopeHasBeenSet; }

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceTypesScope(const Aws::Vector<Aws::String>& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope = value; }

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceTypesScope(Aws::Vector<Aws::String>&& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope = std::move(value); }

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline OrganizationCustomRuleMetadata& WithResourceTypesScope(const Aws::Vector<Aws::String>& value) { SetResourceTypesScope(value); return *this;}

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline OrganizationCustomRuleMetadata& WithResourceTypesScope(Aws::Vector<Aws::String>&& value) { SetResourceTypesScope(std::move(value)); return *this;}

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline OrganizationCustomRuleMetadata& AddResourceTypesScope(const Aws::String& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.push_back(value); return *this; }

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline OrganizationCustomRuleMetadata& AddResourceTypesScope(Aws::String&& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.push_back(std::move(value)); return *this; }

    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline OrganizationCustomRuleMetadata& AddResourceTypesScope(const char* value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.push_back(value); return *this; }


    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::String& GetResourceIdScope() const{ return m_resourceIdScope; }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline bool ResourceIdScopeHasBeenSet() const { return m_resourceIdScopeHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceIdScope(const Aws::String& value) { m_resourceIdScopeHasBeenSet = true; m_resourceIdScope = value; }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceIdScope(Aws::String&& value) { m_resourceIdScopeHasBeenSet = true; m_resourceIdScope = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceIdScope(const char* value) { m_resourceIdScopeHasBeenSet = true; m_resourceIdScope.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline OrganizationCustomRuleMetadata& WithResourceIdScope(const Aws::String& value) { SetResourceIdScope(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline OrganizationCustomRuleMetadata& WithResourceIdScope(Aws::String&& value) { SetResourceIdScope(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline OrganizationCustomRuleMetadata& WithResourceIdScope(const char* value) { SetResourceIdScope(value); return *this;}


    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values. </p>
     */
    inline const Aws::String& GetTagKeyScope() const{ return m_tagKeyScope; }

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values. </p>
     */
    inline bool TagKeyScopeHasBeenSet() const { return m_tagKeyScopeHasBeenSet; }

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values. </p>
     */
    inline void SetTagKeyScope(const Aws::String& value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope = value; }

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values. </p>
     */
    inline void SetTagKeyScope(Aws::String&& value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope = std::move(value); }

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values. </p>
     */
    inline void SetTagKeyScope(const char* value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope.assign(value); }

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values. </p>
     */
    inline OrganizationCustomRuleMetadata& WithTagKeyScope(const Aws::String& value) { SetTagKeyScope(value); return *this;}

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values. </p>
     */
    inline OrganizationCustomRuleMetadata& WithTagKeyScope(Aws::String&& value) { SetTagKeyScope(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values. </p>
     */
    inline OrganizationCustomRuleMetadata& WithTagKeyScope(const char* value) { SetTagKeyScope(value); return *this;}


    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key). </p>
     */
    inline const Aws::String& GetTagValueScope() const{ return m_tagValueScope; }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key). </p>
     */
    inline bool TagValueScopeHasBeenSet() const { return m_tagValueScopeHasBeenSet; }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key). </p>
     */
    inline void SetTagValueScope(const Aws::String& value) { m_tagValueScopeHasBeenSet = true; m_tagValueScope = value; }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key). </p>
     */
    inline void SetTagValueScope(Aws::String&& value) { m_tagValueScopeHasBeenSet = true; m_tagValueScope = std::move(value); }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key). </p>
     */
    inline void SetTagValueScope(const char* value) { m_tagValueScopeHasBeenSet = true; m_tagValueScope.assign(value); }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key). </p>
     */
    inline OrganizationCustomRuleMetadata& WithTagValueScope(const Aws::String& value) { SetTagValueScope(value); return *this;}

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key). </p>
     */
    inline OrganizationCustomRuleMetadata& WithTagValueScope(Aws::String&& value) { SetTagValueScope(std::move(value)); return *this;}

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key). </p>
     */
    inline OrganizationCustomRuleMetadata& WithTagValueScope(const char* value) { SetTagValueScope(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;

    Aws::Vector<OrganizationConfigRuleTriggerType> m_organizationConfigRuleTriggerTypes;
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
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
