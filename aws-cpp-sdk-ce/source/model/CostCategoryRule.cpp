﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategoryRule.h>
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

CostCategoryRule::CostCategoryRule() : 
    m_valueHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_inheritedValueHasBeenSet(false),
    m_type(CostCategoryRuleType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

CostCategoryRule::CostCategoryRule(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_inheritedValueHasBeenSet(false),
    m_type(CostCategoryRuleType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

CostCategoryRule& CostCategoryRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rule"))
  {
    m_rule = jsonValue.GetObject("Rule");

    m_ruleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InheritedValue"))
  {
    m_inheritedValue = jsonValue.GetObject("InheritedValue");

    m_inheritedValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = CostCategoryRuleTypeMapper::GetCostCategoryRuleTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue CostCategoryRule::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_ruleHasBeenSet)
  {
   payload.WithObject("Rule", m_rule.Jsonize());

  }

  if(m_inheritedValueHasBeenSet)
  {
   payload.WithObject("InheritedValue", m_inheritedValue.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CostCategoryRuleTypeMapper::GetNameForCostCategoryRuleType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
