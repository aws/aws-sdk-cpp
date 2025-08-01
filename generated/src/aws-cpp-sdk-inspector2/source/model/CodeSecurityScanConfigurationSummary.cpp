/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeSecurityScanConfigurationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CodeSecurityScanConfigurationSummary::CodeSecurityScanConfigurationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeSecurityScanConfigurationSummary& CodeSecurityScanConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanConfigurationArn"))
  {
    m_scanConfigurationArn = jsonValue.GetString("scanConfigurationArn");
    m_scanConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ownerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("ownerAccountId");
    m_ownerAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("periodicScanFrequency"))
  {
    m_periodicScanFrequency = PeriodicScanFrequencyMapper::GetPeriodicScanFrequencyForName(jsonValue.GetString("periodicScanFrequency"));
    m_periodicScanFrequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("frequencyExpression"))
  {
    m_frequencyExpression = jsonValue.GetString("frequencyExpression");
    m_frequencyExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("continuousIntegrationScanSupportedEvents"))
  {
    Aws::Utils::Array<JsonView> continuousIntegrationScanSupportedEventsJsonList = jsonValue.GetArray("continuousIntegrationScanSupportedEvents");
    for(unsigned continuousIntegrationScanSupportedEventsIndex = 0; continuousIntegrationScanSupportedEventsIndex < continuousIntegrationScanSupportedEventsJsonList.GetLength(); ++continuousIntegrationScanSupportedEventsIndex)
    {
      m_continuousIntegrationScanSupportedEvents.push_back(ContinuousIntegrationScanEventMapper::GetContinuousIntegrationScanEventForName(continuousIntegrationScanSupportedEventsJsonList[continuousIntegrationScanSupportedEventsIndex].AsString()));
    }
    m_continuousIntegrationScanSupportedEventsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ruleSetCategories"))
  {
    Aws::Utils::Array<JsonView> ruleSetCategoriesJsonList = jsonValue.GetArray("ruleSetCategories");
    for(unsigned ruleSetCategoriesIndex = 0; ruleSetCategoriesIndex < ruleSetCategoriesJsonList.GetLength(); ++ruleSetCategoriesIndex)
    {
      m_ruleSetCategories.push_back(RuleSetCategoryMapper::GetRuleSetCategoryForName(ruleSetCategoriesJsonList[ruleSetCategoriesIndex].AsString()));
    }
    m_ruleSetCategoriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scopeSettings"))
  {
    m_scopeSettings = jsonValue.GetObject("scopeSettings");
    m_scopeSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeSecurityScanConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_scanConfigurationArnHasBeenSet)
  {
   payload.WithString("scanConfigurationArn", m_scanConfigurationArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("ownerAccountId", m_ownerAccountId);

  }

  if(m_periodicScanFrequencyHasBeenSet)
  {
   payload.WithString("periodicScanFrequency", PeriodicScanFrequencyMapper::GetNameForPeriodicScanFrequency(m_periodicScanFrequency));
  }

  if(m_frequencyExpressionHasBeenSet)
  {
   payload.WithString("frequencyExpression", m_frequencyExpression);

  }

  if(m_continuousIntegrationScanSupportedEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> continuousIntegrationScanSupportedEventsJsonList(m_continuousIntegrationScanSupportedEvents.size());
   for(unsigned continuousIntegrationScanSupportedEventsIndex = 0; continuousIntegrationScanSupportedEventsIndex < continuousIntegrationScanSupportedEventsJsonList.GetLength(); ++continuousIntegrationScanSupportedEventsIndex)
   {
     continuousIntegrationScanSupportedEventsJsonList[continuousIntegrationScanSupportedEventsIndex].AsString(ContinuousIntegrationScanEventMapper::GetNameForContinuousIntegrationScanEvent(m_continuousIntegrationScanSupportedEvents[continuousIntegrationScanSupportedEventsIndex]));
   }
   payload.WithArray("continuousIntegrationScanSupportedEvents", std::move(continuousIntegrationScanSupportedEventsJsonList));

  }

  if(m_ruleSetCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleSetCategoriesJsonList(m_ruleSetCategories.size());
   for(unsigned ruleSetCategoriesIndex = 0; ruleSetCategoriesIndex < ruleSetCategoriesJsonList.GetLength(); ++ruleSetCategoriesIndex)
   {
     ruleSetCategoriesJsonList[ruleSetCategoriesIndex].AsString(RuleSetCategoryMapper::GetNameForRuleSetCategory(m_ruleSetCategories[ruleSetCategoriesIndex]));
   }
   payload.WithArray("ruleSetCategories", std::move(ruleSetCategoriesJsonList));

  }

  if(m_scopeSettingsHasBeenSet)
  {
   payload.WithObject("scopeSettings", m_scopeSettings.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
