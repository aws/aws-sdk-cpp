/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ParameterSelectableValues.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ParameterSelectableValues::ParameterSelectableValues() : 
    m_valuesHasBeenSet(false),
    m_linkToDataSetColumnHasBeenSet(false)
{
}

ParameterSelectableValues::ParameterSelectableValues(JsonView jsonValue) : 
    m_valuesHasBeenSet(false),
    m_linkToDataSetColumnHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterSelectableValues& ParameterSelectableValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkToDataSetColumn"))
  {
    m_linkToDataSetColumn = jsonValue.GetObject("LinkToDataSetColumn");

    m_linkToDataSetColumnHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterSelectableValues::Jsonize() const
{
  JsonValue payload;

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_linkToDataSetColumnHasBeenSet)
  {
   payload.WithObject("LinkToDataSetColumn", m_linkToDataSetColumn.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
