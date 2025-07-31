/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ProjectContinuousIntegrationScanConfiguration.h>
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

ProjectContinuousIntegrationScanConfiguration::ProjectContinuousIntegrationScanConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProjectContinuousIntegrationScanConfiguration& ProjectContinuousIntegrationScanConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("supportedEvent"))
  {
    m_supportedEvent = ContinuousIntegrationScanEventMapper::GetContinuousIntegrationScanEventForName(jsonValue.GetString("supportedEvent"));
    m_supportedEventHasBeenSet = true;
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
  return *this;
}

JsonValue ProjectContinuousIntegrationScanConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_supportedEventHasBeenSet)
  {
   payload.WithString("supportedEvent", ContinuousIntegrationScanEventMapper::GetNameForContinuousIntegrationScanEvent(m_supportedEvent));
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

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
