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

#include <aws/ce/model/CostCategory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

CostCategory::CostCategory() : 
    m_costCategoryArnHasBeenSet(false),
    m_effectiveStartHasBeenSet(false),
    m_effectiveEndHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleVersion(CostCategoryRuleVersion::NOT_SET),
    m_ruleVersionHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

CostCategory::CostCategory(JsonView jsonValue) : 
    m_costCategoryArnHasBeenSet(false),
    m_effectiveStartHasBeenSet(false),
    m_effectiveEndHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleVersion(CostCategoryRuleVersion::NOT_SET),
    m_ruleVersionHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
  *this = jsonValue;
}

CostCategory& CostCategory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CostCategoryArn"))
  {
    m_costCategoryArn = jsonValue.GetString("CostCategoryArn");

    m_costCategoryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EffectiveStart"))
  {
    m_effectiveStart = jsonValue.GetString("EffectiveStart");

    m_effectiveStartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EffectiveEnd"))
  {
    m_effectiveEnd = jsonValue.GetString("EffectiveEnd");

    m_effectiveEndHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleVersion"))
  {
    m_ruleVersion = CostCategoryRuleVersionMapper::GetCostCategoryRuleVersionForName(jsonValue.GetString("RuleVersion"));

    m_ruleVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rules"))
  {
    Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  return *this;
}

JsonValue CostCategory::Jsonize() const
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

  if(m_effectiveEndHasBeenSet)
  {
   payload.WithString("EffectiveEnd", m_effectiveEnd);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ruleVersionHasBeenSet)
  {
   payload.WithString("RuleVersion", CostCategoryRuleVersionMapper::GetNameForCostCategoryRuleVersion(m_ruleVersion));
  }

  if(m_rulesHasBeenSet)
  {
   Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
