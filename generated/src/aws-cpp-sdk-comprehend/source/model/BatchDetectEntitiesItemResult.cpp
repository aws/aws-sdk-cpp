/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchDetectEntitiesItemResult::BatchDetectEntitiesItemResult(JsonView jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_entitiesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetectEntitiesItemResult& BatchDetectEntitiesItemResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInteger("Index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Entities"))
  {
    Aws::Utils::Array<JsonView> entitiesJsonList = jsonValue.GetArray("Entities");
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
   Aws::Utils::Array<JsonValue> entitiesJsonList(m_entities.size());
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
