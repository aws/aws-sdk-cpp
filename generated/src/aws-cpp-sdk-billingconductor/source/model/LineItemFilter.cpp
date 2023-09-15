/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/LineItemFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

LineItemFilter::LineItemFilter() : 
    m_attribute(LineItemFilterAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_matchOption(MatchOption::NOT_SET),
    m_matchOptionHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

LineItemFilter::LineItemFilter(JsonView jsonValue) : 
    m_attribute(LineItemFilterAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_matchOption(MatchOption::NOT_SET),
    m_matchOptionHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

LineItemFilter& LineItemFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = LineItemFilterAttributeNameMapper::GetLineItemFilterAttributeNameForName(jsonValue.GetString("Attribute"));

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchOption"))
  {
    m_matchOption = MatchOptionMapper::GetMatchOptionForName(jsonValue.GetString("MatchOption"));

    m_matchOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(LineItemFilterValueMapper::GetLineItemFilterValueForName(valuesJsonList[valuesIndex].AsString()));
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue LineItemFilter::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", LineItemFilterAttributeNameMapper::GetNameForLineItemFilterAttributeName(m_attribute));
  }

  if(m_matchOptionHasBeenSet)
  {
   payload.WithString("MatchOption", MatchOptionMapper::GetNameForMatchOption(m_matchOption));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(LineItemFilterValueMapper::GetNameForLineItemFilterValue(m_values[valuesIndex]));
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
