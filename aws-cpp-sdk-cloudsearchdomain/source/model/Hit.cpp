/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudsearchdomain/model/Hit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearchDomain
{
namespace Model
{

Hit::Hit() : 
    m_idHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_exprsHasBeenSet(false),
    m_highlightsHasBeenSet(false)
{
}

Hit::Hit(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_exprsHasBeenSet(false),
    m_highlightsHasBeenSet(false)
{
  *this = jsonValue;
}

Hit& Hit::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fields"))
  {
    Aws::Map<Aws::String, JsonValue> fieldsJsonMap = jsonValue.GetObject("fields").GetAllObjects();
    for(auto& fieldsItem : fieldsJsonMap)
    {
      Array<JsonValue> fieldValueJsonList = fieldsItem.second.AsArray();
      Aws::Vector<Aws::String> fieldValueList((size_t)fieldValueJsonList.GetLength());
      for(unsigned fieldValueIndex = 0; fieldValueIndex < fieldValueJsonList.GetLength(); ++fieldValueIndex)
      {
        fieldValueList.push_back(fieldValueJsonList[fieldValueIndex].AsString());
      }
      m_fields[fieldsItem.first] = std::move(fieldValueList);
    }
    m_fieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exprs"))
  {
    Aws::Map<Aws::String, JsonValue> exprsJsonMap = jsonValue.GetObject("exprs").GetAllObjects();
    for(auto& exprsItem : exprsJsonMap)
    {
      m_exprs[exprsItem.first] = exprsItem.second.AsString();
    }
    m_exprsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("highlights"))
  {
    Aws::Map<Aws::String, JsonValue> highlightsJsonMap = jsonValue.GetObject("highlights").GetAllObjects();
    for(auto& highlightsItem : highlightsJsonMap)
    {
      m_highlights[highlightsItem.first] = highlightsItem.second.AsString();
    }
    m_highlightsHasBeenSet = true;
  }

  return *this;
}

JsonValue Hit::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_fieldsHasBeenSet)
  {
   JsonValue fieldsJsonMap;
   for(auto& fieldsItem : m_fields)
   {
     Array<JsonValue> fieldValueJsonList(fieldsItem.second.size());
     for(unsigned fieldValueIndex = 0; fieldValueIndex < fieldValueJsonList.GetLength(); ++fieldValueIndex)
     {
       fieldValueJsonList[fieldValueIndex].AsString(fieldsItem.second[fieldValueIndex]);
     }
     fieldsJsonMap.WithArray(fieldsItem.first, std::move(fieldValueJsonList));
   }
   payload.WithObject("fields", std::move(fieldsJsonMap));

  }

  if(m_exprsHasBeenSet)
  {
   JsonValue exprsJsonMap;
   for(auto& exprsItem : m_exprs)
   {
     exprsJsonMap.WithString(exprsItem.first, exprsItem.second);
   }
   payload.WithObject("exprs", std::move(exprsJsonMap));

  }

  if(m_highlightsHasBeenSet)
  {
   JsonValue highlightsJsonMap;
   for(auto& highlightsItem : m_highlights)
   {
     highlightsJsonMap.WithString(highlightsItem.first, highlightsItem.second);
   }
   payload.WithObject("highlights", std::move(highlightsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws