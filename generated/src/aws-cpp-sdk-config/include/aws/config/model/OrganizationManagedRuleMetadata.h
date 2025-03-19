/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/MaximumExecutionFrequency.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An object that specifies organization managed rule metadata such as resource
   * type and ID of Amazon Web Services resource along with the rule identifier. It
   * also provides the frequency with which you want Config to run evaluations for
   * the rule if the trigger type is periodic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/OrganizationManagedRuleMetadata">AWS
   * API Reference</a></p>
   */
  class OrganizationManagedRuleMetadata
  {
  public:
    AWS_CONFIGSERVICE_API OrganizationManagedRuleMetadata() = default;
    AWS_CONFIGSERVICE_API OrganizationManagedRuleMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationManagedRuleMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    OrganizationManagedRuleMetadata& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For organization config managed rules, a predefined identifier from a list.
     * For example, <code>IAM_PASSWORD_POLICY</code> is a managed rule. To reference a
     * managed rule, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">Using
     * Config managed rules</a>.</p>
     */
    inline const Aws::String& GetRuleIdentifier() const { return m_ruleIdentifier; }
    inline bool RuleIdentifierHasBeenSet() const { return m_ruleIdentifierHasBeenSet; }
    template<typename RuleIdentifierT = Aws::String>
    void SetRuleIdentifier(RuleIdentifierT&& value) { m_ruleIdentifierHasBeenSet = true; m_ruleIdentifier = std::forward<RuleIdentifierT>(value); }
    template<typename RuleIdentifierT = Aws::String>
    OrganizationManagedRuleMetadata& WithRuleIdentifier(RuleIdentifierT&& value) { SetRuleIdentifier(std::forward<RuleIdentifierT>(value)); return *this;}
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
    OrganizationManagedRuleMetadata& WithInputParameters(InputParametersT&& value) { SetInputParameters(std::forward<InputParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. This is
     * for an Config managed rule that is triggered at a periodic frequency.</p> 
     * <p>By default, rules with a periodic trigger are evaluated every 24 hours. To
     * change the frequency, specify a valid value for the
     * <code>MaximumExecutionFrequency</code> parameter.</p> 
     */
    inline MaximumExecutionFrequency GetMaximumExecutionFrequency() const { return m_maximumExecutionFrequency; }
    inline bool MaximumExecutionFrequencyHasBeenSet() const { return m_maximumExecutionFrequencyHasBeenSet; }
    inline void SetMaximumExecutionFrequency(MaximumExecutionFrequency value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = value; }
    inline OrganizationManagedRuleMetadata& WithMaximumExecutionFrequency(MaximumExecutionFrequency value) { SetMaximumExecutionFrequency(value); return *this;}
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
    OrganizationManagedRuleMetadata& WithResourceTypesScope(ResourceTypesScopeT&& value) { SetResourceTypesScope(std::forward<ResourceTypesScopeT>(value)); return *this;}
    template<typename ResourceTypesScopeT = Aws::String>
    OrganizationManagedRuleMetadata& AddResourceTypesScope(ResourceTypesScopeT&& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.emplace_back(std::forward<ResourceTypesScopeT>(value)); return *this; }
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
    OrganizationManagedRuleMetadata& WithResourceIdScope(ResourceIdScopeT&& value) { SetResourceIdScope(std::forward<ResourceIdScopeT>(value)); return *this;}
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
    OrganizationManagedRuleMetadata& WithTagKeyScope(TagKeyScopeT&& value) { SetTagKeyScope(std::forward<TagKeyScopeT>(value)); return *this;}
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
    OrganizationManagedRuleMetadata& WithTagValueScope(TagValueScopeT&& value) { SetTagValueScope(std::forward<TagValueScopeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ruleIdentifier;
    bool m_ruleIdentifierHasBeenSet = false;

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
