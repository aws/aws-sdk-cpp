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

#include <aws/frauddetector/model/LabelSchema.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

LabelSchema::LabelSchema() : 
    m_labelKeyHasBeenSet(false),
    m_labelMapperHasBeenSet(false)
{
}

LabelSchema::LabelSchema(JsonView jsonValue) : 
    m_labelKeyHasBeenSet(false),
    m_labelMapperHasBeenSet(false)
{
  *this = jsonValue;
}

LabelSchema& LabelSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("labelKey"))
  {
    m_labelKey = jsonValue.GetString("labelKey");

    m_labelKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("labelMapper"))
  {
    Aws::Map<Aws::String, JsonView> labelMapperJsonMap = jsonValue.GetObject("labelMapper").GetAllObjects();
    for(auto& labelMapperItem : labelMapperJsonMap)
    {
      Array<JsonView> listOfStringsJsonList = labelMapperItem.second.AsArray();
      Aws::Vector<Aws::String> listOfStringsList;
      listOfStringsList.reserve((size_t)listOfStringsJsonList.GetLength());
      for(unsigned listOfStringsIndex = 0; listOfStringsIndex < listOfStringsJsonList.GetLength(); ++listOfStringsIndex)
      {
        listOfStringsList.push_back(listOfStringsJsonList[listOfStringsIndex].AsString());
      }
      m_labelMapper[labelMapperItem.first] = std::move(listOfStringsList);
    }
    m_labelMapperHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelSchema::Jsonize() const
{
  JsonValue payload;

  if(m_labelKeyHasBeenSet)
  {
   payload.WithString("labelKey", m_labelKey);

  }

  if(m_labelMapperHasBeenSet)
  {
   JsonValue labelMapperJsonMap;
   for(auto& labelMapperItem : m_labelMapper)
   {
     Array<JsonValue> listOfStringsJsonList(labelMapperItem.second.size());
     for(unsigned listOfStringsIndex = 0; listOfStringsIndex < listOfStringsJsonList.GetLength(); ++listOfStringsIndex)
     {
       listOfStringsJsonList[listOfStringsIndex].AsString(labelMapperItem.second[listOfStringsIndex]);
     }
     labelMapperJsonMap.WithArray(labelMapperItem.first, std::move(listOfStringsJsonList));
   }
   payload.WithObject("labelMapper", std::move(labelMapperJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
