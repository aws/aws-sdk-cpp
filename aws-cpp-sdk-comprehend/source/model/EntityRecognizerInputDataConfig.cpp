/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityRecognizerInputDataConfig.h>
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

EntityRecognizerInputDataConfig::EntityRecognizerInputDataConfig() : 
    m_dataFormat(EntityRecognizerDataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_entityTypesHasBeenSet(false),
    m_documentsHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_entityListHasBeenSet(false),
    m_augmentedManifestsHasBeenSet(false)
{
}

EntityRecognizerInputDataConfig::EntityRecognizerInputDataConfig(JsonView jsonValue) : 
    m_dataFormat(EntityRecognizerDataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_entityTypesHasBeenSet(false),
    m_documentsHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_entityListHasBeenSet(false),
    m_augmentedManifestsHasBeenSet(false)
{
  *this = jsonValue;
}

EntityRecognizerInputDataConfig& EntityRecognizerInputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataFormat"))
  {
    m_dataFormat = EntityRecognizerDataFormatMapper::GetEntityRecognizerDataFormatForName(jsonValue.GetString("DataFormat"));

    m_dataFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityTypes"))
  {
    Aws::Utils::Array<JsonView> entityTypesJsonList = jsonValue.GetArray("EntityTypes");
    for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
    {
      m_entityTypes.push_back(entityTypesJsonList[entityTypesIndex].AsObject());
    }
    m_entityTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Documents"))
  {
    m_documents = jsonValue.GetObject("Documents");

    m_documentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Annotations"))
  {
    m_annotations = jsonValue.GetObject("Annotations");

    m_annotationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityList"))
  {
    m_entityList = jsonValue.GetObject("EntityList");

    m_entityListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AugmentedManifests"))
  {
    Aws::Utils::Array<JsonView> augmentedManifestsJsonList = jsonValue.GetArray("AugmentedManifests");
    for(unsigned augmentedManifestsIndex = 0; augmentedManifestsIndex < augmentedManifestsJsonList.GetLength(); ++augmentedManifestsIndex)
    {
      m_augmentedManifests.push_back(augmentedManifestsJsonList[augmentedManifestsIndex].AsObject());
    }
    m_augmentedManifestsHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityRecognizerInputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dataFormatHasBeenSet)
  {
   payload.WithString("DataFormat", EntityRecognizerDataFormatMapper::GetNameForEntityRecognizerDataFormat(m_dataFormat));
  }

  if(m_entityTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityTypesJsonList(m_entityTypes.size());
   for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
   {
     entityTypesJsonList[entityTypesIndex].AsObject(m_entityTypes[entityTypesIndex].Jsonize());
   }
   payload.WithArray("EntityTypes", std::move(entityTypesJsonList));

  }

  if(m_documentsHasBeenSet)
  {
   payload.WithObject("Documents", m_documents.Jsonize());

  }

  if(m_annotationsHasBeenSet)
  {
   payload.WithObject("Annotations", m_annotations.Jsonize());

  }

  if(m_entityListHasBeenSet)
  {
   payload.WithObject("EntityList", m_entityList.Jsonize());

  }

  if(m_augmentedManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> augmentedManifestsJsonList(m_augmentedManifests.size());
   for(unsigned augmentedManifestsIndex = 0; augmentedManifestsIndex < augmentedManifestsJsonList.GetLength(); ++augmentedManifestsIndex)
   {
     augmentedManifestsJsonList[augmentedManifestsIndex].AsObject(m_augmentedManifests[augmentedManifestsIndex].Jsonize());
   }
   payload.WithArray("AugmentedManifests", std::move(augmentedManifestsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
