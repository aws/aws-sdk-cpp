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
    AWS_CONFIGSERVICE_API OrganizationManagedRuleMetadata();
    AWS_CONFIGSERVICE_API OrganizationManagedRuleMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationManagedRuleMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description that you provide for your organization Config rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline OrganizationManagedRuleMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline OrganizationManagedRuleMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline OrganizationManagedRuleMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For organization config managed rules, a predefined identifier from a list.
     * For example, <code>IAM_PASSWORD_POLICY</code> is a managed rule. To reference a
     * managed rule, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">Using
     * Config managed rules</a>.</p>
     */
    inline const Aws::String& GetRuleIdentifier() const{ return m_ruleIdentifier; }
    inline bool RuleIdentifierHasBeenSet() const { return m_ruleIdentifierHasBeenSet; }
    inline void SetRuleIdentifier(const Aws::String& value) { m_ruleIdentifierHasBeenSet = true; m_ruleIdentifier = value; }
    inline void SetRuleIdentifier(Aws::String&& value) { m_ruleIdentifierHasBeenSet = true; m_ruleIdentifier = std::move(value); }
    inline void SetRuleIdentifier(const char* value) { m_ruleIdentifierHasBeenSet = true; m_ruleIdentifier.assign(value); }
    inline OrganizationManagedRuleMetadata& WithRuleIdentifier(const Aws::String& value) { SetRuleIdentifier(value); return *this;}
    inline OrganizationManagedRuleMetadata& WithRuleIdentifier(Aws::String&& value) { SetRuleIdentifier(std::move(value)); return *this;}
    inline OrganizationManagedRuleMetadata& WithRuleIdentifier(const char* value) { SetRuleIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string, in JSON format, that is passed to your organization Config rule
     * Lambda function.</p>
     */
    inline const Aws::String& GetInputParameters() const{ return m_inputParameters; }
    inline bool InputParametersHasBeenSet() const { return m_inputParametersHasBeenSet; }
    inline void SetInputParameters(const Aws::String& value) { m_inputParametersHasBeenSet = true; m_inputParameters = value; }
    inline void SetInputParameters(Aws::String&& value) { m_inputParametersHasBeenSet = true; m_inputParameters = std::move(value); }
    inline void SetInputParameters(const char* value) { m_inputParametersHasBeenSet = true; m_inputParameters.assign(value); }
    inline OrganizationManagedRuleMetadata& WithInputParameters(const Aws::String& value) { SetInputParameters(value); return *this;}
    inline OrganizationManagedRuleMetadata& WithInputParameters(Aws::String&& value) { SetInputParameters(std::move(value)); return *this;}
    inline OrganizationManagedRuleMetadata& WithInputParameters(const char* value) { SetInputParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. This is
     * for an Config managed rule that is triggered at a periodic frequency.</p> 
     * <p>By default, rules with a periodic trigger are evaluated every 24 hours. To
     * change the frequency, specify a valid value for the
     * <code>MaximumExecutionFrequency</code> parameter.</p> 
     */
    inline const MaximumExecutionFrequency& GetMaximumExecutionFrequency() const{ return m_maximumExecutionFrequency; }
    inline bool MaximumExecutionFrequencyHasBeenSet() const { return m_maximumExecutionFrequencyHasBeenSet; }
    inline void SetMaximumExecutionFrequency(const MaximumExecutionFrequency& value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = value; }
    inline void SetMaximumExecutionFrequency(MaximumExecutionFrequency&& value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = std::move(value); }
    inline OrganizationManagedRuleMetadata& WithMaximumExecutionFrequency(const MaximumExecutionFrequency& value) { SetMaximumExecutionFrequency(value); return *this;}
    inline OrganizationManagedRuleMetadata& WithMaximumExecutionFrequency(MaximumExecutionFrequency&& value) { SetMaximumExecutionFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypesScope() const{ return m_resourceTypesScope; }
    inline bool ResourceTypesScopeHasBeenSet() const { return m_resourceTypesScopeHasBeenSet; }
    inline void SetResourceTypesScope(const Aws::Vector<Aws::String>& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope = value; }
    inline void SetResourceTypesScope(Aws::Vector<Aws::String>&& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope = std::move(value); }
    inline OrganizationManagedRuleMetadata& WithResourceTypesScope(const Aws::Vector<Aws::String>& value) { SetResourceTypesScope(value); return *this;}
    inline OrganizationManagedRuleMetadata& WithResourceTypesScope(Aws::Vector<Aws::String>&& value) { SetResourceTypesScope(std::move(value)); return *this;}
    inline OrganizationManagedRuleMetadata& AddResourceTypesScope(const Aws::String& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.push_back(value); return *this; }
    inline OrganizationManagedRuleMetadata& AddResourceTypesScope(Aws::String&& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.push_back(std::move(value)); return *this; }
    inline OrganizationManagedRuleMetadata& AddResourceTypesScope(const char* value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.push_back(value); return *this; }
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
    inline OrganizationManagedRuleMetadata& WithResourceIdScope(const Aws::String& value) { SetResourceIdScope(value); return *this;}
    inline OrganizationManagedRuleMetadata& WithResourceIdScope(Aws::String&& value) { SetResourceIdScope(std::move(value)); return *this;}
    inline OrganizationManagedRuleMetadata& WithResourceIdScope(const char* value) { SetResourceIdScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values. </p>
     */
    inline const Aws::String& GetTagKeyScope() const{ return m_tagKeyScope; }
    inline bool TagKeyScopeHasBeenSet() const { return m_tagKeyScopeHasBeenSet; }
    inline void SetTagKeyScope(const Aws::String& value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope = value; }
    inline void SetTagKeyScope(Aws::String&& value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope = std::move(value); }
    inline void SetTagKeyScope(const char* value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope.assign(value); }
    inline OrganizationManagedRuleMetadata& WithTagKeyScope(const Aws::String& value) { SetTagKeyScope(value); return *this;}
    inline OrganizationManagedRuleMetadata& WithTagKeyScope(Aws::String&& value) { SetTagKeyScope(std::move(value)); return *this;}
    inline OrganizationManagedRuleMetadata& WithTagKeyScope(const char* value) { SetTagKeyScope(value); return *this;}
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
    inline OrganizationManagedRuleMetadata& WithTagValueScope(const Aws::String& value) { SetTagValueScope(value); return *this;}
    inline OrganizationManagedRuleMetadata& WithTagValueScope(Aws::String&& value) { SetTagValueScope(std::move(value)); return *this;}
    inline OrganizationManagedRuleMetadata& WithTagValueScope(const char* value) { SetTagValueScope(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ruleIdentifier;
    bool m_ruleIdentifierHasBeenSet = false;

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
