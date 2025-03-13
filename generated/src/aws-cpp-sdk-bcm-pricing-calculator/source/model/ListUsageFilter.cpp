/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/ListUsageFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

ListUsageFilter::ListUsageFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ListUsageFilter& ListUsageFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = ListUsageFilterNameMapper::GetListUsageFilterNameForName(jsonValue.GetString("name"));
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
  if(jsonValue.ValueExists("matchOption"))
  {
    m_matchOption = MatchOptionMapper::GetMatchOptionForName(jsonValue.GetString("matchOption"));
    m_matchOptionHasBeenSet = true;
  }
  return *this;
}

JsonValue ListUsageFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", ListUsageFilterNameMapper::GetNameForListUsageFilterName(m_name));
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

  if(m_matchOptionHasBeenSet)
  {
   payload.WithString("matchOption", MatchOptionMapper::GetNameForMatchOption(m_matchOption));
  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
