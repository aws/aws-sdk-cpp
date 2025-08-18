/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/DimensionValues.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDashboards
{
namespace Model
{

DimensionValues::DimensionValues(JsonView jsonValue)
{
  *this = jsonValue;
}

DimensionValues& DimensionValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = DimensionMapper::GetDimensionForName(jsonValue.GetString("key"));
    m_keyHasBeenSet = true;
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
  if(jsonValue.ValueExists("matchOptions"))
  {
    Aws::Utils::Array<JsonView> matchOptionsJsonList = jsonValue.GetArray("matchOptions");
    for(unsigned matchOptionsIndex = 0; matchOptionsIndex < matchOptionsJsonList.GetLength(); ++matchOptionsIndex)
    {
      m_matchOptions.push_back(MatchOptionMapper::GetMatchOptionForName(matchOptionsJsonList[matchOptionsIndex].AsString()));
    }
    m_matchOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue DimensionValues::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", DimensionMapper::GetNameForDimension(m_key));
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

  if(m_matchOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchOptionsJsonList(m_matchOptions.size());
   for(unsigned matchOptionsIndex = 0; matchOptionsIndex < matchOptionsJsonList.GetLength(); ++matchOptionsIndex)
   {
     matchOptionsJsonList[matchOptionsIndex].AsString(MatchOptionMapper::GetNameForMatchOption(m_matchOptions[matchOptionsIndex]));
   }
   payload.WithArray("matchOptions", std::move(matchOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
