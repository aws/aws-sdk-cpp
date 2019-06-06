/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/OpsAggregator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsAggregator::OpsAggregator() : 
    m_aggregatorTypeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_attributeNameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_aggregatorsHasBeenSet(false)
{
}

OpsAggregator::OpsAggregator(JsonView jsonValue) : 
    m_aggregatorTypeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_attributeNameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_aggregatorsHasBeenSet(false)
{
  *this = jsonValue;
}

OpsAggregator& OpsAggregator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AggregatorType"))
  {
    m_aggregatorType = jsonValue.GetString("AggregatorType");

    m_aggregatorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");

    m_typeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Map<Aws::String, JsonView> valuesJsonMap = jsonValue.GetObject("Values").GetAllObjects();
    for(auto& valuesItem : valuesJsonMap)
    {
      m_values[valuesItem.first] = valuesItem.second.AsString();
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Filters"))
  {
    Array<JsonView> filtersJsonList = jsonValue.GetArray("Filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aggregators"))
  {
    Array<JsonView> aggregatorsJsonList = jsonValue.GetArray("Aggregators");
    for(unsigned aggregatorsIndex = 0; aggregatorsIndex < aggregatorsJsonList.GetLength(); ++aggregatorsIndex)
    {
      m_aggregators.push_back(aggregatorsJsonList[aggregatorsIndex].AsObject());
    }
    m_aggregatorsHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsAggregator::Jsonize() const
{
  JsonValue payload;

  if(m_aggregatorTypeHasBeenSet)
  {
   payload.WithString("AggregatorType", m_aggregatorType);

  }

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_valuesHasBeenSet)
  {
   JsonValue valuesJsonMap;
   for(auto& valuesItem : m_values)
   {
     valuesJsonMap.WithString(valuesItem.first, valuesItem.second);
   }
   payload.WithObject("Values", std::move(valuesJsonMap));

  }

  if(m_filtersHasBeenSet)
  {
   Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_aggregatorsHasBeenSet)
  {
   Array<JsonValue> aggregatorsJsonList(m_aggregators.size());
   for(unsigned aggregatorsIndex = 0; aggregatorsIndex < aggregatorsJsonList.GetLength(); ++aggregatorsIndex)
   {
     aggregatorsJsonList[aggregatorsIndex].AsObject(m_aggregators[aggregatorsIndex].Jsonize());
   }
   payload.WithArray("Aggregators", std::move(aggregatorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
