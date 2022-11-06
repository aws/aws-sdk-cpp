/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/NestedFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

NestedFilters::NestedFilters() : 
    m_nestedPropertyNameHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

NestedFilters::NestedFilters(JsonView jsonValue) : 
    m_nestedPropertyNameHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
  *this = jsonValue;
}

NestedFilters& NestedFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NestedPropertyName"))
  {
    m_nestedPropertyName = jsonValue.GetString("NestedPropertyName");

    m_nestedPropertyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("Filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  return *this;
}

JsonValue NestedFilters::Jsonize() const
{
  JsonValue payload;

  if(m_nestedPropertyNameHasBeenSet)
  {
   payload.WithString("NestedPropertyName", m_nestedPropertyName);

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
