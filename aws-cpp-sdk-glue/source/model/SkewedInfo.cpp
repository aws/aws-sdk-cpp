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

#include <aws/glue/model/SkewedInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

SkewedInfo::SkewedInfo() : 
    m_skewedColumnNamesHasBeenSet(false),
    m_skewedColumnValuesHasBeenSet(false),
    m_skewedColumnValueLocationMapsHasBeenSet(false)
{
}

SkewedInfo::SkewedInfo(const JsonValue& jsonValue) : 
    m_skewedColumnNamesHasBeenSet(false),
    m_skewedColumnValuesHasBeenSet(false),
    m_skewedColumnValueLocationMapsHasBeenSet(false)
{
  *this = jsonValue;
}

SkewedInfo& SkewedInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SkewedColumnNames"))
  {
    Array<JsonValue> skewedColumnNamesJsonList = jsonValue.GetArray("SkewedColumnNames");
    for(unsigned skewedColumnNamesIndex = 0; skewedColumnNamesIndex < skewedColumnNamesJsonList.GetLength(); ++skewedColumnNamesIndex)
    {
      m_skewedColumnNames.push_back(skewedColumnNamesJsonList[skewedColumnNamesIndex].AsString());
    }
    m_skewedColumnNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkewedColumnValues"))
  {
    Array<JsonValue> skewedColumnValuesJsonList = jsonValue.GetArray("SkewedColumnValues");
    for(unsigned skewedColumnValuesIndex = 0; skewedColumnValuesIndex < skewedColumnValuesJsonList.GetLength(); ++skewedColumnValuesIndex)
    {
      m_skewedColumnValues.push_back(skewedColumnValuesJsonList[skewedColumnValuesIndex].AsString());
    }
    m_skewedColumnValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkewedColumnValueLocationMaps"))
  {
    Aws::Map<Aws::String, JsonValue> skewedColumnValueLocationMapsJsonMap = jsonValue.GetObject("SkewedColumnValueLocationMaps").GetAllObjects();
    for(auto& skewedColumnValueLocationMapsItem : skewedColumnValueLocationMapsJsonMap)
    {
      m_skewedColumnValueLocationMaps[skewedColumnValueLocationMapsItem.first] = skewedColumnValueLocationMapsItem.second.AsString();
    }
    m_skewedColumnValueLocationMapsHasBeenSet = true;
  }

  return *this;
}

JsonValue SkewedInfo::Jsonize() const
{
  JsonValue payload;

  if(m_skewedColumnNamesHasBeenSet)
  {
   Array<JsonValue> skewedColumnNamesJsonList(m_skewedColumnNames.size());
   for(unsigned skewedColumnNamesIndex = 0; skewedColumnNamesIndex < skewedColumnNamesJsonList.GetLength(); ++skewedColumnNamesIndex)
   {
     skewedColumnNamesJsonList[skewedColumnNamesIndex].AsString(m_skewedColumnNames[skewedColumnNamesIndex]);
   }
   payload.WithArray("SkewedColumnNames", std::move(skewedColumnNamesJsonList));

  }

  if(m_skewedColumnValuesHasBeenSet)
  {
   Array<JsonValue> skewedColumnValuesJsonList(m_skewedColumnValues.size());
   for(unsigned skewedColumnValuesIndex = 0; skewedColumnValuesIndex < skewedColumnValuesJsonList.GetLength(); ++skewedColumnValuesIndex)
   {
     skewedColumnValuesJsonList[skewedColumnValuesIndex].AsString(m_skewedColumnValues[skewedColumnValuesIndex]);
   }
   payload.WithArray("SkewedColumnValues", std::move(skewedColumnValuesJsonList));

  }

  if(m_skewedColumnValueLocationMapsHasBeenSet)
  {
   JsonValue skewedColumnValueLocationMapsJsonMap;
   for(auto& skewedColumnValueLocationMapsItem : m_skewedColumnValueLocationMaps)
   {
     skewedColumnValueLocationMapsJsonMap.WithString(skewedColumnValueLocationMapsItem.first, skewedColumnValueLocationMapsItem.second);
   }
   payload.WithObject("SkewedColumnValueLocationMaps", std::move(skewedColumnValueLocationMapsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
