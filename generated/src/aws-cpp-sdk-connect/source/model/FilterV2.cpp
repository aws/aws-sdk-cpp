/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FilterV2.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

FilterV2::FilterV2() : 
    m_filterKeyHasBeenSet(false),
    m_filterValuesHasBeenSet(false)
{
}

FilterV2::FilterV2(JsonView jsonValue) : 
    m_filterKeyHasBeenSet(false),
    m_filterValuesHasBeenSet(false)
{
  *this = jsonValue;
}

FilterV2& FilterV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterKey"))
  {
    m_filterKey = jsonValue.GetString("FilterKey");

    m_filterKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterValues"))
  {
    Aws::Utils::Array<JsonView> filterValuesJsonList = jsonValue.GetArray("FilterValues");
    for(unsigned filterValuesIndex = 0; filterValuesIndex < filterValuesJsonList.GetLength(); ++filterValuesIndex)
    {
      m_filterValues.push_back(filterValuesJsonList[filterValuesIndex].AsString());
    }
    m_filterValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterV2::Jsonize() const
{
  JsonValue payload;

  if(m_filterKeyHasBeenSet)
  {
   payload.WithString("FilterKey", m_filterKey);

  }

  if(m_filterValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterValuesJsonList(m_filterValues.size());
   for(unsigned filterValuesIndex = 0; filterValuesIndex < filterValuesJsonList.GetLength(); ++filterValuesIndex)
   {
     filterValuesJsonList[filterValuesIndex].AsString(m_filterValues[filterValuesIndex]);
   }
   payload.WithArray("FilterValues", std::move(filterValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
