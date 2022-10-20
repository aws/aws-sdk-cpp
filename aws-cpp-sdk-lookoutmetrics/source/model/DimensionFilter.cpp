/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DimensionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

DimensionFilter::DimensionFilter() : 
    m_dimensionNameHasBeenSet(false),
    m_dimensionValueListHasBeenSet(false)
{
}

DimensionFilter::DimensionFilter(JsonView jsonValue) : 
    m_dimensionNameHasBeenSet(false),
    m_dimensionValueListHasBeenSet(false)
{
  *this = jsonValue;
}

DimensionFilter& DimensionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionName"))
  {
    m_dimensionName = jsonValue.GetString("DimensionName");

    m_dimensionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DimensionValueList"))
  {
    Aws::Utils::Array<JsonView> dimensionValueListJsonList = jsonValue.GetArray("DimensionValueList");
    for(unsigned dimensionValueListIndex = 0; dimensionValueListIndex < dimensionValueListJsonList.GetLength(); ++dimensionValueListIndex)
    {
      m_dimensionValueList.push_back(dimensionValueListJsonList[dimensionValueListIndex].AsString());
    }
    m_dimensionValueListHasBeenSet = true;
  }

  return *this;
}

JsonValue DimensionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionNameHasBeenSet)
  {
   payload.WithString("DimensionName", m_dimensionName);

  }

  if(m_dimensionValueListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionValueListJsonList(m_dimensionValueList.size());
   for(unsigned dimensionValueListIndex = 0; dimensionValueListIndex < dimensionValueListJsonList.GetLength(); ++dimensionValueListIndex)
   {
     dimensionValueListJsonList[dimensionValueListIndex].AsString(m_dimensionValueList[dimensionValueListIndex]);
   }
   payload.WithArray("DimensionValueList", std::move(dimensionValueListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
