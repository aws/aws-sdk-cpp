/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/UpdateCostCategoryDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCostCategoryDefinitionRequest::UpdateCostCategoryDefinitionRequest() : 
    m_costCategoryArnHasBeenSet(false),
    m_effectiveStartHasBeenSet(false),
    m_ruleVersion(CostCategoryRuleVersion::NOT_SET),
    m_ruleVersionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_splitChargeRulesHasBeenSet(false)
{
}

Aws::String UpdateCostCategoryDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_costCategoryArnHasBeenSet)
  {
   payload.WithString("CostCategoryArn", m_costCategoryArn);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCostCategoryDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.UpdateCostCategoryDefinition"));
  return headers;

}




