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

#include <aws/mediaconvert/model/TimedMetadataInsertion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

TimedMetadataInsertion::TimedMetadataInsertion() : 
    m_id3InsertionsHasBeenSet(false)
{
}

TimedMetadataInsertion::TimedMetadataInsertion(const JsonValue& jsonValue) : 
    m_id3InsertionsHasBeenSet(false)
{
  *this = jsonValue;
}

TimedMetadataInsertion& TimedMetadataInsertion::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id3Insertions"))
  {
    Array<JsonValue> id3InsertionsJsonList = jsonValue.GetArray("id3Insertions");
    for(unsigned id3InsertionsIndex = 0; id3InsertionsIndex < id3InsertionsJsonList.GetLength(); ++id3InsertionsIndex)
    {
      m_id3Insertions.push_back(id3InsertionsJsonList[id3InsertionsIndex].AsObject());
    }
    m_id3InsertionsHasBeenSet = true;
  }

  return *this;
}

JsonValue TimedMetadataInsertion::Jsonize() const
{
  JsonValue payload;

  if(m_id3InsertionsHasBeenSet)
  {
   Array<JsonValue> id3InsertionsJsonList(m_id3Insertions.size());
   for(unsigned id3InsertionsIndex = 0; id3InsertionsIndex < id3InsertionsJsonList.GetLength(); ++id3InsertionsIndex)
   {
     id3InsertionsJsonList[id3InsertionsIndex].AsObject(m_id3Insertions[id3InsertionsIndex].Jsonize());
   }
   payload.WithArray("id3Insertions", std::move(id3InsertionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
