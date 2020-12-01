/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/DestinationOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

DestinationOptions::DestinationOptions() : 
    m_columnMapHasBeenSet(false)
{
}

DestinationOptions::DestinationOptions(JsonView jsonValue) : 
    m_columnMapHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationOptions& DestinationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columnMap"))
  {
    Aws::Map<Aws::String, JsonView> columnMapJsonMap = jsonValue.GetObject("columnMap").GetAllObjects();
    for(auto& columnMapItem : columnMapJsonMap)
    {
      m_columnMap[columnMapItem.first] = columnMapItem.second.AsObject();
    }
    m_columnMapHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_columnMapHasBeenSet)
  {
   JsonValue columnMapJsonMap;
   for(auto& columnMapItem : m_columnMap)
   {
     columnMapJsonMap.WithObject(columnMapItem.first, columnMapItem.second.Jsonize());
   }
   payload.WithObject("columnMap", std::move(columnMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
