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
#include <aws/mturk-requester/model/PolicyParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

PolicyParameter::PolicyParameter() : 
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_mapEntriesHasBeenSet(false)
{
}

PolicyParameter::PolicyParameter(const JsonValue& jsonValue) : 
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_mapEntriesHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyParameter& PolicyParameter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Array<JsonValue> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MapEntries"))
  {
    Array<JsonValue> mapEntriesJsonList = jsonValue.GetArray("MapEntries");
    for(unsigned mapEntriesIndex = 0; mapEntriesIndex < mapEntriesJsonList.GetLength(); ++mapEntriesIndex)
    {
      m_mapEntries.push_back(mapEntriesJsonList[mapEntriesIndex].AsObject());
    }
    m_mapEntriesHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyParameter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valuesHasBeenSet)
  {
   Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_mapEntriesHasBeenSet)
  {
   Array<JsonValue> mapEntriesJsonList(m_mapEntries.size());
   for(unsigned mapEntriesIndex = 0; mapEntriesIndex < mapEntriesJsonList.GetLength(); ++mapEntriesIndex)
   {
     mapEntriesJsonList[mapEntriesIndex].AsObject(m_mapEntries[mapEntriesIndex].Jsonize());
   }
   payload.WithArray("MapEntries", std::move(mapEntriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws