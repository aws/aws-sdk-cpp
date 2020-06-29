/**
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
    m_ruleHasBeenSet(false)
{
}

CostCategoryRule::CostCategoryRule(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_ruleHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
