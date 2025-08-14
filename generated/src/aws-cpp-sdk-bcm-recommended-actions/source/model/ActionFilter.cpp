/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-recommended-actions/model/ActionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMRecommendedActions
{
namespace Model
{

ActionFilter::ActionFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionFilter& ActionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = FilterNameMapper::GetFilterNameForName(jsonValue.GetString("key"));
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchOption"))
  {
    m_matchOption = MatchOptionMapper::GetMatchOptionForName(jsonValue.GetString("matchOption"));
    m_matchOptionHasBeenSet = true;
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
  return *this;
}

JsonValue ActionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", FilterNameMapper::GetNameForFilterName(m_key));
  }

  if(m_matchOptionHasBeenSet)
  {
   payload.WithString("matchOption", MatchOptionMapper::GetNameForMatchOption(m_matchOption));
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

  return payload;
}

} // namespace Model
} // namespace BCMRecommendedActions
} // namespace Aws
