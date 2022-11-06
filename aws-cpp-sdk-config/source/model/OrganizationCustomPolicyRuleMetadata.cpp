/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/OrganizationCustomPolicyRuleMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

OrganizationCustomPolicyRuleMetadata::OrganizationCustomPolicyRuleMetadata() : 
    m_descriptionHasBeenSet(false),
    m_organizationConfigRuleTriggerTypesHasBeenSet(false),
    m_inputParametersHasBeenSet(false),
    m_maximumExecutionFrequency(MaximumExecutionFrequency::NOT_SET),
    m_maximumExecutionFrequencyHasBeenSet(false),
    m_resourceTypesScopeHasBeenSet(false),
    m_resourceIdScopeHasBeenSet(false),
    m_tagKeyScopeHasBeenSet(false),
    m_tagValueScopeHasBeenSet(false),
    m_policyRuntimeHasBeenSet(false),
    m_policyTextHasBeenSet(false),
    m_debugLogDeliveryAccountsHasBeenSet(false)
{
}

OrganizationCustomPolicyRuleMetadata::OrganizationCustomPolicyRuleMetadata(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_organizationConfigRuleTriggerTypesHasBeenSet(false),
    m_inputParametersHasBeenSet(false),
    m_maximumExecutionFrequency(MaximumExecutionFrequency::NOT_SET),
    m_maximumExecutionFrequencyHasBeenSet(false),
    m_resourceTypesScopeHasBeenSet(false),
    m_resourceIdScopeHasBeenSet(false),
    m_tagKeyScopeHasBeenSet(false),
    m_tagValueScopeHasBeenSet(false),
    m_policyRuntimeHasBeenSet(false),
    m_policyTextHasBeenSet(false),
    m_debugLogDeliveryAccountsHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationCustomPolicyRuleMetadata& OrganizationCustomPolicyRuleMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationConfigRuleTriggerTypes"))
  {
    Aws::Utils::Array<JsonView> organizationConfigRuleTriggerTypesJsonList = jsonValue.GetArray("OrganizationConfigRuleTriggerTypes");
    for(unsigned organizationConfigRuleTriggerTypesIndex = 0; organizationConfigRuleTriggerTypesIndex < organizationConfigRuleTriggerTypesJsonList.GetLength(); ++organizationConfigRuleTriggerTypesIndex)
    {
      m_organizationConfigRuleTriggerTypes.push_back(OrganizationConfigRuleTriggerTypeNoSNMapper::GetOrganizationConfigRuleTriggerTypeNoSNForName(organizationConfigRuleTriggerTypesJsonList[organizationConfigRuleTriggerTypesIndex].AsString()));
    }
    m_organizationConfigRuleTriggerTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputParameters"))
  {
    m_inputParameters = jsonValue.GetString("InputParameters");

    m_inputParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumExecutionFrequency"))
  {
    m_maximumExecutionFrequency = MaximumExecutionFrequencyMapper::GetMaximumExecutionFrequencyForName(jsonValue.GetString("MaximumExecutionFrequency"));

    m_maximumExecutionFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTypesScope"))
  {
    Aws::Utils::Array<JsonView> resourceTypesScopeJsonList = jsonValue.GetArray("ResourceTypesScope");
    for(unsigned resourceTypesScopeIndex = 0; resourceTypesScopeIndex < resourceTypesScopeJsonList.GetLength(); ++resourceTypesScopeIndex)
    {
      m_resourceTypesScope.push_back(resourceTypesScopeJsonList[resourceTypesScopeIndex].AsString());
    }
    m_resourceTypesScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceIdScope"))
  {
    m_resourceIdScope = jsonValue.GetString("ResourceIdScope");

    m_resourceIdScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagKeyScope"))
  {
    m_tagKeyScope = jsonValue.GetString("TagKeyScope");

    m_tagKeyScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagValueScope"))
  {
    m_tagValueScope = jsonValue.GetString("TagValueScope");

    m_tagValueScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyRuntime"))
  {
    m_policyRuntime = jsonValue.GetString("PolicyRuntime");

    m_policyRuntimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyText"))
  {
    m_policyText = jsonValue.GetString("PolicyText");

    m_policyTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DebugLogDeliveryAccounts"))
  {
    Aws::Utils::Array<JsonView> debugLogDeliveryAccountsJsonList = jsonValue.GetArray("DebugLogDeliveryAccounts");
    for(unsigned debugLogDeliveryAccountsIndex = 0; debugLogDeliveryAccountsIndex < debugLogDeliveryAccountsJsonList.GetLength(); ++debugLogDeliveryAccountsIndex)
    {
      m_debugLogDeliveryAccounts.push_back(debugLogDeliveryAccountsJsonList[debugLogDeliveryAccountsIndex].AsString());
    }
    m_debugLogDeliveryAccountsHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationCustomPolicyRuleMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_organizationConfigRuleTriggerTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationConfigRuleTriggerTypesJsonList(m_organizationConfigRuleTriggerTypes.size());
   for(unsigned organizationConfigRuleTriggerTypesIndex = 0; organizationConfigRuleTriggerTypesIndex < organizationConfigRuleTriggerTypesJsonList.GetLength(); ++organizationConfigRuleTriggerTypesIndex)
   {
     organizationConfigRuleTriggerTypesJsonList[organizationConfigRuleTriggerTypesIndex].AsString(OrganizationConfigRuleTriggerTypeNoSNMapper::GetNameForOrganizationConfigRuleTriggerTypeNoSN(m_organizationConfigRuleTriggerTypes[organizationConfigRuleTriggerTypesIndex]));
   }
   payload.WithArray("OrganizationConfigRuleTriggerTypes", std::move(organizationConfigRuleTriggerTypesJsonList));

  }

  if(m_inputParametersHasBeenSet)
  {
   payload.WithString("InputParameters", m_inputParameters);

  }

  if(m_maximumExecutionFrequencyHasBeenSet)
  {
   payload.WithString("MaximumExecutionFrequency", MaximumExecutionFrequencyMapper::GetNameForMaximumExecutionFrequency(m_maximumExecutionFrequency));
  }

  if(m_resourceTypesScopeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesScopeJsonList(m_resourceTypesScope.size());
   for(unsigned resourceTypesScopeIndex = 0; resourceTypesScopeIndex < resourceTypesScopeJsonList.GetLength(); ++resourceTypesScopeIndex)
   {
     resourceTypesScopeJsonList[resourceTypesScopeIndex].AsString(m_resourceTypesScope[resourceTypesScopeIndex]);
   }
   payload.WithArray("ResourceTypesScope", std::move(resourceTypesScopeJsonList));

  }

  if(m_resourceIdScopeHasBeenSet)
  {
   payload.WithString("ResourceIdScope", m_resourceIdScope);

  }

  if(m_tagKeyScopeHasBeenSet)
  {
   payload.WithString("TagKeyScope", m_tagKeyScope);

  }

  if(m_tagValueScopeHasBeenSet)
  {
   payload.WithString("TagValueScope", m_tagValueScope);

  }

  if(m_policyRuntimeHasBeenSet)
  {
   payload.WithString("PolicyRuntime", m_policyRuntime);

  }

  if(m_policyTextHasBeenSet)
  {
   payload.WithString("PolicyText", m_policyText);

  }

  if(m_debugLogDeliveryAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> debugLogDeliveryAccountsJsonList(m_debugLogDeliveryAccounts.size());
   for(unsigned debugLogDeliveryAccountsIndex = 0; debugLogDeliveryAccountsIndex < debugLogDeliveryAccountsJsonList.GetLength(); ++debugLogDeliveryAccountsIndex)
   {
     debugLogDeliveryAccountsJsonList[debugLogDeliveryAccountsIndex].AsString(m_debugLogDeliveryAccounts[debugLogDeliveryAccountsIndex]);
   }
   payload.WithArray("DebugLogDeliveryAccounts", std::move(debugLogDeliveryAccountsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
