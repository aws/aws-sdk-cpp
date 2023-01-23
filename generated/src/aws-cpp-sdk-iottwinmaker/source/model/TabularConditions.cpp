/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/TabularConditions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

TabularConditions::TabularConditions() : 
    m_orderByHasBeenSet(false),
    m_propertyFiltersHasBeenSet(false)
{
}

TabularConditions::TabularConditions(JsonView jsonValue) : 
    m_orderByHasBeenSet(false),
    m_propertyFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

TabularConditions& TabularConditions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("orderBy"))
  {
    Aws::Utils::Array<JsonView> orderByJsonList = jsonValue.GetArray("orderBy");
    for(unsigned orderByIndex = 0; orderByIndex < orderByJsonList.GetLength(); ++orderByIndex)
    {
      m_orderBy.push_back(orderByJsonList[orderByIndex].AsObject());
    }
    m_orderByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propertyFilters"))
  {
    Aws::Utils::Array<JsonView> propertyFiltersJsonList = jsonValue.GetArray("propertyFilters");
    for(unsigned propertyFiltersIndex = 0; propertyFiltersIndex < propertyFiltersJsonList.GetLength(); ++propertyFiltersIndex)
    {
      m_propertyFilters.push_back(propertyFiltersJsonList[propertyFiltersIndex].AsObject());
    }
    m_propertyFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue TabularConditions::Jsonize() const
{
  JsonValue payload;

  if(m_orderByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orderByJsonList(m_orderBy.size());
   for(unsigned orderByIndex = 0; orderByIndex < orderByJsonList.GetLength(); ++orderByIndex)
   {
     orderByJsonList[orderByIndex].AsObject(m_orderBy[orderByIndex].Jsonize());
   }
   payload.WithArray("orderBy", std::move(orderByJsonList));

  }

  if(m_propertyFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertyFiltersJsonList(m_propertyFilters.size());
   for(unsigned propertyFiltersIndex = 0; propertyFiltersIndex < propertyFiltersJsonList.GetLength(); ++propertyFiltersIndex)
   {
     propertyFiltersJsonList[propertyFiltersIndex].AsObject(m_propertyFilters[propertyFiltersIndex].Jsonize());
   }
   payload.WithArray("propertyFilters", std::move(propertyFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
