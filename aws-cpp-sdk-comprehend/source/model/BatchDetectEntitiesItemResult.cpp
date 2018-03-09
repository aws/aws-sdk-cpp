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

#include <aws/comprehend/model/BatchDetectEntitiesItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

BatchDetectEntitiesItemResult::BatchDetectEntitiesItemResult() : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_entitiesHasBeenSet(false)
{
}

BatchDetectEntitiesItemResult::BatchDetectEntitiesItemResult(const JsonValue& jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_entitiesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetectEntitiesItemResult& BatchDetectEntitiesItemResult::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInteger("Index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Entities"))
  {
    Array<JsonValue> entitiesJsonList = jsonValue.GetArray("Entities");
    for(unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex)
    {
      m_entities.push_back(entitiesJsonList[entitiesIndex].AsObject());
    }
    m_entitiesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDetectEntitiesItemResult::Jsonize() const
{
  JsonValue payload;

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("Index", m_index);

  }

  if(m_entitiesHasBeenSet)
  {
   Array<JsonValue> entitiesJsonList(m_entities.size());
   for(unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex)
   {
     entitiesJsonList[entitiesIndex].AsObject(m_entities[entitiesIndex].Jsonize());
   }
   payload.WithArray("Entities", std::move(entitiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
