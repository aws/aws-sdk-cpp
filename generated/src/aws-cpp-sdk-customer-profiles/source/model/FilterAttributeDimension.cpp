﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/FilterAttributeDimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

FilterAttributeDimension::FilterAttributeDimension(JsonView jsonValue)
{
  *this = jsonValue;
}

FilterAttributeDimension& FilterAttributeDimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionType"))
  {
    m_dimensionType = FilterDimensionTypeMapper::GetFilterDimensionTypeForName(jsonValue.GetString("DimensionType"));
    m_dimensionTypeHasBeenSet = true;
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

JsonValue FilterAttributeDimension::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionTypeHasBeenSet)
  {
   payload.WithString("DimensionType", FilterDimensionTypeMapper::GetNameForFilterDimensionType(m_dimensionType));
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
} // namespace CustomerProfiles
} // namespace Aws
