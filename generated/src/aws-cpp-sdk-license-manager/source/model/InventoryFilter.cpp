/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/InventoryFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

InventoryFilter::InventoryFilter() : 
    m_nameHasBeenSet(false),
    m_condition(InventoryFilterCondition::NOT_SET),
    m_conditionHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

InventoryFilter::InventoryFilter(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_condition(InventoryFilterCondition::NOT_SET),
    m_conditionHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryFilter& InventoryFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = InventoryFilterConditionMapper::GetInventoryFilterConditionForName(jsonValue.GetString("Condition"));

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue InventoryFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("Condition", InventoryFilterConditionMapper::GetNameForInventoryFilterCondition(m_condition));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
