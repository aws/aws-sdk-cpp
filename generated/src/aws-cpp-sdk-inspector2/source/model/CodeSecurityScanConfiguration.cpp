/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeSecurityScanConfiguration.h>
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

CodeSecurityScanConfiguration::CodeSecurityScanConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeSecurityScanConfiguration& CodeSecurityScanConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("periodicScanConfiguration"))
  {
    m_periodicScanConfiguration = jsonValue.GetObject("periodicScanConfiguration");
    m_periodicScanConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("continuousIntegrationScanConfiguration"))
  {
    m_continuousIntegrationScanConfiguration = jsonValue.GetObject("continuousIntegrationScanConfiguration");
    m_continuousIntegrationScanConfigurationHasBeenSet = true;
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

JsonValue CodeSecurityScanConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_periodicScanConfigurationHasBeenSet)
  {
   payload.WithObject("periodicScanConfiguration", m_periodicScanConfiguration.Jsonize());

  }

  if(m_continuousIntegrationScanConfigurationHasBeenSet)
  {
   payload.WithObject("continuousIntegrationScanConfiguration", m_continuousIntegrationScanConfiguration.Jsonize());

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
