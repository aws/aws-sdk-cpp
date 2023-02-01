/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotTypeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

SlotTypeFilter::SlotTypeFilter() : 
    m_name(SlotTypeFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operator(SlotTypeFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

SlotTypeFilter::SlotTypeFilter(JsonView jsonValue) : 
    m_name(SlotTypeFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operator(SlotTypeFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

SlotTypeFilter& SlotTypeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = SlotTypeFilterNameMapper::GetSlotTypeFilterNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = SlotTypeFilterOperatorMapper::GetSlotTypeFilterOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotTypeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", SlotTypeFilterNameMapper::GetNameForSlotTypeFilterName(m_name));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", SlotTypeFilterOperatorMapper::GetNameForSlotTypeFilterOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
