/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  class AWS_CONFIGSERVICE_API OrganizationCustomRuleMetadata
  {
  public:
    OrganizationCustomRuleMetadata();
    OrganizationCustomRuleMetadata(Aws::Utils::Json::JsonView jsonValue);
    OrganizationCustomRuleMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline OrganizationCustomRuleMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }

    
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }

    
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = value; }

    
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::move(value); }

    
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn.assign(value); }

    
    inline OrganizationCustomRuleMetadata& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}


    
    inline const Aws::Vector<OrganizationConfigRuleTriggerType>& GetOrganizationConfigRuleTriggerTypes() const{ return m_organizationConfigRuleTriggerTypes; }

    
    inline bool OrganizationConfigRuleTriggerTypesHasBeenSet() const { return m_organizationConfigRuleTriggerTypesHasBeenSet; }

    
    inline void SetOrganizationConfigRuleTriggerTypes(const Aws::Vector<OrganizationConfigRuleTriggerType>& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes = value; }

    
    inline void SetOrganizationConfigRuleTriggerTypes(Aws::Vector<OrganizationConfigRuleTriggerType>&& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes = std::move(value); }

    
    inline OrganizationCustomRuleMetadata& WithOrganizationConfigRuleTriggerTypes(const Aws::Vector<OrganizationConfigRuleTriggerType>& value) { SetOrganizationConfigRuleTriggerTypes(value); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithOrganizationConfigRuleTriggerTypes(Aws::Vector<OrganizationConfigRuleTriggerType>&& value) { SetOrganizationConfigRuleTriggerTypes(std::move(value)); return *this;}

    
    inline OrganizationCustomRuleMetadata& AddOrganizationConfigRuleTriggerTypes(const OrganizationConfigRuleTriggerType& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes.push_back(value); return *this; }

    
    inline OrganizationCustomRuleMetadata& AddOrganizationConfigRuleTriggerTypes(OrganizationConfigRuleTriggerType&& value) { m_organizationConfigRuleTriggerTypesHasBeenSet = true; m_organizationConfigRuleTriggerTypes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetInputParameters() const{ return m_inputParameters; }

    
    inline bool InputParametersHasBeenSet() const { return m_inputParametersHasBeenSet; }

    
    inline void SetInputParameters(const Aws::String& value) { m_inputParametersHasBeenSet = true; m_inputParameters = value; }

    
    inline void SetInputParameters(Aws::String&& value) { m_inputParametersHasBeenSet = true; m_inputParameters = std::move(value); }

    
    inline void SetInputParameters(const char* value) { m_inputParametersHasBeenSet = true; m_inputParameters.assign(value); }

    
    inline OrganizationCustomRuleMetadata& WithInputParameters(const Aws::String& value) { SetInputParameters(value); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithInputParameters(Aws::String&& value) { SetInputParameters(std::move(value)); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithInputParameters(const char* value) { SetInputParameters(value); return *this;}


    
    inline const MaximumExecutionFrequency& GetMaximumExecutionFrequency() const{ return m_maximumExecutionFrequency; }

    
    inline bool MaximumExecutionFrequencyHasBeenSet() const { return m_maximumExecutionFrequencyHasBeenSet; }

    
    inline void SetMaximumExecutionFrequency(const MaximumExecutionFrequency& value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = value; }

    
    inline void SetMaximumExecutionFrequency(MaximumExecutionFrequency&& value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = std::move(value); }

    
    inline OrganizationCustomRuleMetadata& WithMaximumExecutionFrequency(const MaximumExecutionFrequency& value) { SetMaximumExecutionFrequency(value); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithMaximumExecutionFrequency(MaximumExecutionFrequency&& value) { SetMaximumExecutionFrequency(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetResourceTypesScope() const{ return m_resourceTypesScope; }

    
    inline bool ResourceTypesScopeHasBeenSet() const { return m_resourceTypesScopeHasBeenSet; }

    
    inline void SetResourceTypesScope(const Aws::Vector<Aws::String>& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope = value; }

    
    inline void SetResourceTypesScope(Aws::Vector<Aws::String>&& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope = std::move(value); }

    
    inline OrganizationCustomRuleMetadata& WithResourceTypesScope(const Aws::Vector<Aws::String>& value) { SetResourceTypesScope(value); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithResourceTypesScope(Aws::Vector<Aws::String>&& value) { SetResourceTypesScope(std::move(value)); return *this;}

    
    inline OrganizationCustomRuleMetadata& AddResourceTypesScope(const Aws::String& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.push_back(value); return *this; }

    
    inline OrganizationCustomRuleMetadata& AddResourceTypesScope(Aws::String&& value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.push_back(std::move(value)); return *this; }

    
    inline OrganizationCustomRuleMetadata& AddResourceTypesScope(const char* value) { m_resourceTypesScopeHasBeenSet = true; m_resourceTypesScope.push_back(value); return *this; }


    
    inline const Aws::String& GetResourceIdScope() const{ return m_resourceIdScope; }

    
    inline bool ResourceIdScopeHasBeenSet() const { return m_resourceIdScopeHasBeenSet; }

    
    inline void SetResourceIdScope(const Aws::String& value) { m_resourceIdScopeHasBeenSet = true; m_resourceIdScope = value; }

    
    inline void SetResourceIdScope(Aws::String&& value) { m_resourceIdScopeHasBeenSet = true; m_resourceIdScope = std::move(value); }

    
    inline void SetResourceIdScope(const char* value) { m_resourceIdScopeHasBeenSet = true; m_resourceIdScope.assign(value); }

    
    inline OrganizationCustomRuleMetadata& WithResourceIdScope(const Aws::String& value) { SetResourceIdScope(value); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithResourceIdScope(Aws::String&& value) { SetResourceIdScope(std::move(value)); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithResourceIdScope(const char* value) { SetResourceIdScope(value); return *this;}


    
    inline const Aws::String& GetTagKeyScope() const{ return m_tagKeyScope; }

    
    inline bool TagKeyScopeHasBeenSet() const { return m_tagKeyScopeHasBeenSet; }

    
    inline void SetTagKeyScope(const Aws::String& value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope = value; }

    
    inline void SetTagKeyScope(Aws::String&& value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope = std::move(value); }

    
    inline void SetTagKeyScope(const char* value) { m_tagKeyScopeHasBeenSet = true; m_tagKeyScope.assign(value); }

    
    inline OrganizationCustomRuleMetadata& WithTagKeyScope(const Aws::String& value) { SetTagKeyScope(value); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithTagKeyScope(Aws::String&& value) { SetTagKeyScope(std::move(value)); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithTagKeyScope(const char* value) { SetTagKeyScope(value); return *this;}


    
    inline const Aws::String& GetTagValueScope() const{ return m_tagValueScope; }

    
    inline bool TagValueScopeHasBeenSet() const { return m_tagValueScopeHasBeenSet; }

    
    inline void SetTagValueScope(const Aws::String& value) { m_tagValueScopeHasBeenSet = true; m_tagValueScope = value; }

    
    inline void SetTagValueScope(Aws::String&& value) { m_tagValueScopeHasBeenSet = true; m_tagValueScope = std::move(value); }

    
    inline void SetTagValueScope(const char* value) { m_tagValueScopeHasBeenSet = true; m_tagValueScope.assign(value); }

    
    inline OrganizationCustomRuleMetadata& WithTagValueScope(const Aws::String& value) { SetTagValueScope(value); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithTagValueScope(Aws::String&& value) { SetTagValueScope(std::move(value)); return *this;}

    
    inline OrganizationCustomRuleMetadata& WithTagValueScope(const char* value) { SetTagValueScope(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet;

    Aws::Vector<OrganizationConfigRuleTriggerType> m_organizationConfigRuleTriggerTypes;
    bool m_organizationConfigRuleTriggerTypesHasBeenSet;

    Aws::String m_inputParameters;
    bool m_inputParametersHasBeenSet;

    MaximumExecutionFrequency m_maximumExecutionFrequency;
    bool m_maximumExecutionFrequencyHasBeenSet;

    Aws::Vector<Aws::String> m_resourceTypesScope;
    bool m_resourceTypesScopeHasBeenSet;

    Aws::String m_resourceIdScope;
    bool m_resourceIdScopeHasBeenSet;

    Aws::String m_tagKeyScope;
    bool m_tagKeyScopeHasBeenSet;

    Aws::String m_tagValueScope;
    bool m_tagValueScopeHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
