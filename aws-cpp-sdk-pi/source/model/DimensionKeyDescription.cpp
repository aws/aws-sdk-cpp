﻿/*
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

#include <aws/pi/model/DimensionKeyDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

DimensionKeyDescription::DimensionKeyDescription() : 
    m_dimensionsHasBeenSet(false),
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_partitionsHasBeenSet(false)
{
}

DimensionKeyDescription::DimensionKeyDescription(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_partitionsHasBeenSet(false)
{
  *this = jsonValue;
}

DimensionKeyDescription& DimensionKeyDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("Dimensions").GetAllObjects();
    for(auto& dimensionsItem : dimensionsJsonMap)
    {
      m_dimensions[dimensionsItem.first] = dimensionsItem.second.AsString();
    }
    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetDouble("Total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Partitions"))
  {
    Array<JsonView> partitionsJsonList = jsonValue.GetArray("Partitions");
    for(unsigned partitionsIndex = 0; partitionsIndex < partitionsJsonList.GetLength(); ++partitionsIndex)
    {
      m_partitions.push_back(partitionsJsonList[partitionsIndex].AsDouble());
    }
    m_partitionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DimensionKeyDescription::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   JsonValue dimensionsJsonMap;
   for(auto& dimensionsItem : m_dimensions)
   {
     dimensionsJsonMap.WithString(dimensionsItem.first, dimensionsItem.second);
   }
   payload.WithObject("Dimensions", std::move(dimensionsJsonMap));

  }

  if(m_totalHasBeenSet)
  {
   payload.WithDouble("Total", m_total);

  }

  if(m_partitionsHasBeenSet)
  {
   Array<JsonValue> partitionsJsonList(m_partitions.size());
   for(unsigned partitionsIndex = 0; partitionsIndex < partitionsJsonList.GetLength(); ++partitionsIndex)
   {
     partitionsJsonList[partitionsIndex].AsDouble(m_partitions[partitionsIndex]);
   }
   payload.WithArray("Partitions", std::move(partitionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
