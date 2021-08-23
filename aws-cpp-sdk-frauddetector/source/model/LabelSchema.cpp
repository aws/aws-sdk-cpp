/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_labelMapperHasBeenSet(false)
{
}

LabelSchema::LabelSchema(JsonView jsonValue) : 
    m_labelMapperHasBeenSet(false)
{
  *this = jsonValue;
}

LabelSchema& LabelSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("labelMapper"))
  {
    Aws::Map<Aws::String, JsonView> labelMapperJsonMap = jsonValue.GetObject("labelMapper").GetAllObjects();
    for(auto& labelMapperItem : labelMapperJsonMap)
    {
      Array<JsonView> nonEmptyListOfStringsJsonList = labelMapperItem.second.AsArray();
      Aws::Vector<Aws::String> nonEmptyListOfStringsList;
      nonEmptyListOfStringsList.reserve((size_t)nonEmptyListOfStringsJsonList.GetLength());
      for(unsigned nonEmptyListOfStringsIndex = 0; nonEmptyListOfStringsIndex < nonEmptyListOfStringsJsonList.GetLength(); ++nonEmptyListOfStringsIndex)
      {
        nonEmptyListOfStringsList.push_back(nonEmptyListOfStringsJsonList[nonEmptyListOfStringsIndex].AsString());
      }
      m_labelMapper[labelMapperItem.first] = std::move(nonEmptyListOfStringsList);
    }
    m_labelMapperHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelSchema::Jsonize() const
{
  JsonValue payload;

  if(m_labelMapperHasBeenSet)
  {
   JsonValue labelMapperJsonMap;
   for(auto& labelMapperItem : m_labelMapper)
   {
     Array<JsonValue> nonEmptyListOfStringsJsonList(labelMapperItem.second.size());
     for(unsigned nonEmptyListOfStringsIndex = 0; nonEmptyListOfStringsIndex < nonEmptyListOfStringsJsonList.GetLength(); ++nonEmptyListOfStringsIndex)
     {
       nonEmptyListOfStringsJsonList[nonEmptyListOfStringsIndex].AsString(labelMapperItem.second[nonEmptyListOfStringsIndex]);
     }
     labelMapperJsonMap.WithArray(labelMapperItem.first, std::move(nonEmptyListOfStringsJsonList));
   }
   payload.WithObject("labelMapper", std::move(labelMapperJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
