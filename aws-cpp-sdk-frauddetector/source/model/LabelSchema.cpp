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
    m_labelMapperHasBeenSet(false),
    m_unlabeledEventsTreatment(UnlabeledEventsTreatment::NOT_SET),
    m_unlabeledEventsTreatmentHasBeenSet(false)
{
}

LabelSchema::LabelSchema(JsonView jsonValue) : 
    m_labelMapperHasBeenSet(false),
    m_unlabeledEventsTreatment(UnlabeledEventsTreatment::NOT_SET),
    m_unlabeledEventsTreatmentHasBeenSet(false)
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
      Aws::Utils::Array<JsonView> listOfStringsJsonList = labelMapperItem.second.AsArray();
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

  if(jsonValue.ValueExists("unlabeledEventsTreatment"))
  {
    m_unlabeledEventsTreatment = UnlabeledEventsTreatmentMapper::GetUnlabeledEventsTreatmentForName(jsonValue.GetString("unlabeledEventsTreatment"));

    m_unlabeledEventsTreatmentHasBeenSet = true;
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
     Aws::Utils::Array<JsonValue> listOfStringsJsonList(labelMapperItem.second.size());
     for(unsigned listOfStringsIndex = 0; listOfStringsIndex < listOfStringsJsonList.GetLength(); ++listOfStringsIndex)
     {
       listOfStringsJsonList[listOfStringsIndex].AsString(labelMapperItem.second[listOfStringsIndex]);
     }
     labelMapperJsonMap.WithArray(labelMapperItem.first, std::move(listOfStringsJsonList));
   }
   payload.WithObject("labelMapper", std::move(labelMapperJsonMap));

  }

  if(m_unlabeledEventsTreatmentHasBeenSet)
  {
   payload.WithString("unlabeledEventsTreatment", UnlabeledEventsTreatmentMapper::GetNameForUnlabeledEventsTreatment(m_unlabeledEventsTreatment));
  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
