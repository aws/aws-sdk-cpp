/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/RequestMetadataFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

RequestMetadataFilters::RequestMetadataFilters(JsonView jsonValue)
{
  *this = jsonValue;
}

RequestMetadataFilters& RequestMetadataFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("equals"))
  {
    Aws::Map<Aws::String, JsonView> equalsJsonMap = jsonValue.GetObject("equals").GetAllObjects();
    for(auto& equalsItem : equalsJsonMap)
    {
      m_equals[equalsItem.first] = equalsItem.second.AsString();
    }
    m_equalsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notEquals"))
  {
    Aws::Map<Aws::String, JsonView> notEqualsJsonMap = jsonValue.GetObject("notEquals").GetAllObjects();
    for(auto& notEqualsItem : notEqualsJsonMap)
    {
      m_notEquals[notEqualsItem.first] = notEqualsItem.second.AsString();
    }
    m_notEqualsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("andAll"))
  {
    Aws::Utils::Array<JsonView> andAllJsonList = jsonValue.GetArray("andAll");
    for(unsigned andAllIndex = 0; andAllIndex < andAllJsonList.GetLength(); ++andAllIndex)
    {
      m_andAll.push_back(andAllJsonList[andAllIndex].AsObject());
    }
    m_andAllHasBeenSet = true;
  }
  if(jsonValue.ValueExists("orAll"))
  {
    Aws::Utils::Array<JsonView> orAllJsonList = jsonValue.GetArray("orAll");
    for(unsigned orAllIndex = 0; orAllIndex < orAllJsonList.GetLength(); ++orAllIndex)
    {
      m_orAll.push_back(orAllJsonList[orAllIndex].AsObject());
    }
    m_orAllHasBeenSet = true;
  }
  return *this;
}

JsonValue RequestMetadataFilters::Jsonize() const
{
  JsonValue payload;

  if(m_equalsHasBeenSet)
  {
   JsonValue equalsJsonMap;
   for(auto& equalsItem : m_equals)
   {
     equalsJsonMap.WithString(equalsItem.first, equalsItem.second);
   }
   payload.WithObject("equals", std::move(equalsJsonMap));

  }

  if(m_notEqualsHasBeenSet)
  {
   JsonValue notEqualsJsonMap;
   for(auto& notEqualsItem : m_notEquals)
   {
     notEqualsJsonMap.WithString(notEqualsItem.first, notEqualsItem.second);
   }
   payload.WithObject("notEquals", std::move(notEqualsJsonMap));

  }

  if(m_andAllHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> andAllJsonList(m_andAll.size());
   for(unsigned andAllIndex = 0; andAllIndex < andAllJsonList.GetLength(); ++andAllIndex)
   {
     andAllJsonList[andAllIndex].AsObject(m_andAll[andAllIndex].Jsonize());
   }
   payload.WithArray("andAll", std::move(andAllJsonList));

  }

  if(m_orAllHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orAllJsonList(m_orAll.size());
   for(unsigned orAllIndex = 0; orAllIndex < orAllJsonList.GetLength(); ++orAllIndex)
   {
     orAllJsonList[orAllIndex].AsObject(m_orAll[orAllIndex].Jsonize());
   }
   payload.WithArray("orAll", std::move(orAllJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
