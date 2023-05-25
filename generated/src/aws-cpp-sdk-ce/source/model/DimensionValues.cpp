/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/DimensionValues.h>
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

DimensionValues::DimensionValues() : 
    m_key(Dimension::NOT_SET),
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_matchOptionsHasBeenSet(false)
{
}

DimensionValues::DimensionValues(JsonView jsonValue) : 
    m_key(Dimension::NOT_SET),
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_matchOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

DimensionValues& DimensionValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = DimensionMapper::GetDimensionForName(jsonValue.GetString("Key"));

    m_keyHasBeenSet = true;
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

  if(jsonValue.ValueExists("MatchOptions"))
  {
    Aws::Utils::Array<JsonView> matchOptionsJsonList = jsonValue.GetArray("MatchOptions");
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
   payload.WithString("Key", DimensionMapper::GetNameForDimension(m_key));
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

  if(m_matchOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchOptionsJsonList(m_matchOptions.size());
   for(unsigned matchOptionsIndex = 0; matchOptionsIndex < matchOptionsJsonList.GetLength(); ++matchOptionsIndex)
   {
     matchOptionsJsonList[matchOptionsIndex].AsString(MatchOptionMapper::GetNameForMatchOption(m_matchOptions[matchOptionsIndex]));
   }
   payload.WithArray("MatchOptions", std::move(matchOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
