/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityRecognitionConfig.h>
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

EntityRecognitionConfig::EntityRecognitionConfig() : 
    m_entityTypesHasBeenSet(false)
{
}

EntityRecognitionConfig::EntityRecognitionConfig(JsonView jsonValue) : 
    m_entityTypesHasBeenSet(false)
{
  *this = jsonValue;
}

EntityRecognitionConfig& EntityRecognitionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntityTypes"))
  {
    Aws::Utils::Array<JsonView> entityTypesJsonList = jsonValue.GetArray("EntityTypes");
    for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
    {
      m_entityTypes.push_back(entityTypesJsonList[entityTypesIndex].AsObject());
    }
    m_entityTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityRecognitionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_entityTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityTypesJsonList(m_entityTypes.size());
   for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
   {
     entityTypesJsonList[entityTypesIndex].AsObject(m_entityTypes[entityTypesIndex].Jsonize());
   }
   payload.WithArray("EntityTypes", std::move(entityTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
