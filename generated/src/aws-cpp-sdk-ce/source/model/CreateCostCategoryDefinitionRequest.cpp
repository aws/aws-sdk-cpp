/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CreateCostCategoryDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCostCategoryDefinitionRequest::CreateCostCategoryDefinitionRequest() : 
    m_nameHasBeenSet(false),
    m_effectiveStartHasBeenSet(false),
    m_ruleVersion(CostCategoryRuleVersion::NOT_SET),
    m_ruleVersionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_splitChargeRulesHasBeenSet(false),
    m_resourceTagsHasBeenSet(false)
{
}

Aws::String CreateCostCategoryDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_effectiveStartHasBeenSet)
  {
   payload.WithString("EffectiveStart", m_effectiveStart);

  }

  if(m_ruleVersionHasBeenSet)
  {
   payload.WithString("RuleVersion", CostCategoryRuleVersionMapper::GetNameForCostCategoryRuleVersion(m_ruleVersion));
  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("DefaultValue", m_defaultValue);

  }

  if(m_splitChargeRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> splitChargeRulesJsonList(m_splitChargeRules.size());
   for(unsigned splitChargeRulesIndex = 0; splitChargeRulesIndex < splitChargeRulesJsonList.GetLength(); ++splitChargeRulesIndex)
   {
     splitChargeRulesJsonList[splitChargeRulesIndex].AsObject(m_splitChargeRules[splitChargeRulesIndex].Jsonize());
   }
   payload.WithArray("SplitChargeRules", std::move(splitChargeRulesJsonList));

  }

  if(m_resourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
   }
   payload.WithArray("ResourceTags", std::move(resourceTagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCostCategoryDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.CreateCostCategoryDefinition"));
  return headers;

}




