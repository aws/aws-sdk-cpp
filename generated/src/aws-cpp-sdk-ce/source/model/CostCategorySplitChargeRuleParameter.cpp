/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategorySplitChargeRuleParameter.h>
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

CostCategorySplitChargeRuleParameter::CostCategorySplitChargeRuleParameter() : 
    m_type(CostCategorySplitChargeRuleParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

CostCategorySplitChargeRuleParameter::CostCategorySplitChargeRuleParameter(JsonView jsonValue) : 
    m_type(CostCategorySplitChargeRuleParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

CostCategorySplitChargeRuleParameter& CostCategorySplitChargeRuleParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = CostCategorySplitChargeRuleParameterTypeMapper::GetCostCategorySplitChargeRuleParameterTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue CostCategorySplitChargeRuleParameter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CostCategorySplitChargeRuleParameterTypeMapper::GetNameForCostCategorySplitChargeRuleParameterType(m_type));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
