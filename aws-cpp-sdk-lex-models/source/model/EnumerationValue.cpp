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

#include <aws/lex-models/model/EnumerationValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

EnumerationValue::EnumerationValue() : 
    m_valueHasBeenSet(false),
    m_synonymsHasBeenSet(false)
{
}

EnumerationValue::EnumerationValue(const JsonValue& jsonValue) : 
    m_valueHasBeenSet(false),
    m_synonymsHasBeenSet(false)
{
  *this = jsonValue;
}

EnumerationValue& EnumerationValue::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("synonyms"))
  {
    Array<JsonValue> synonymsJsonList = jsonValue.GetArray("synonyms");
    for(unsigned synonymsIndex = 0; synonymsIndex < synonymsJsonList.GetLength(); ++synonymsIndex)
    {
      m_synonyms.push_back(synonymsJsonList[synonymsIndex].AsString());
    }
    m_synonymsHasBeenSet = true;
  }

  return *this;
}

JsonValue EnumerationValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_synonymsHasBeenSet)
  {
   Array<JsonValue> synonymsJsonList(m_synonyms.size());
   for(unsigned synonymsIndex = 0; synonymsIndex < synonymsJsonList.GetLength(); ++synonymsIndex)
   {
     synonymsJsonList[synonymsIndex].AsString(m_synonyms[synonymsIndex]);
   }
   payload.WithArray("synonyms", std::move(synonymsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
