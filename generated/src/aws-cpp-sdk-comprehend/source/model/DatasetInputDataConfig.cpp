/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DatasetInputDataConfig.h>
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

DatasetInputDataConfig::DatasetInputDataConfig() : 
    m_augmentedManifestsHasBeenSet(false),
    m_dataFormat(DatasetDataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_documentClassifierInputDataConfigHasBeenSet(false),
    m_entityRecognizerInputDataConfigHasBeenSet(false)
{
}

DatasetInputDataConfig::DatasetInputDataConfig(JsonView jsonValue) : 
    m_augmentedManifestsHasBeenSet(false),
    m_dataFormat(DatasetDataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_documentClassifierInputDataConfigHasBeenSet(false),
    m_entityRecognizerInputDataConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetInputDataConfig& DatasetInputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AugmentedManifests"))
  {
    Aws::Utils::Array<JsonView> augmentedManifestsJsonList = jsonValue.GetArray("AugmentedManifests");
    for(unsigned augmentedManifestsIndex = 0; augmentedManifestsIndex < augmentedManifestsJsonList.GetLength(); ++augmentedManifestsIndex)
    {
      m_augmentedManifests.push_back(augmentedManifestsJsonList[augmentedManifestsIndex].AsObject());
    }
    m_augmentedManifestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataFormat"))
  {
    m_dataFormat = DatasetDataFormatMapper::GetDatasetDataFormatForName(jsonValue.GetString("DataFormat"));

    m_dataFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentClassifierInputDataConfig"))
  {
    m_documentClassifierInputDataConfig = jsonValue.GetObject("DocumentClassifierInputDataConfig");

    m_documentClassifierInputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityRecognizerInputDataConfig"))
  {
    m_entityRecognizerInputDataConfig = jsonValue.GetObject("EntityRecognizerInputDataConfig");

    m_entityRecognizerInputDataConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetInputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_augmentedManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> augmentedManifestsJsonList(m_augmentedManifests.size());
   for(unsigned augmentedManifestsIndex = 0; augmentedManifestsIndex < augmentedManifestsJsonList.GetLength(); ++augmentedManifestsIndex)
   {
     augmentedManifestsJsonList[augmentedManifestsIndex].AsObject(m_augmentedManifests[augmentedManifestsIndex].Jsonize());
   }
   payload.WithArray("AugmentedManifests", std::move(augmentedManifestsJsonList));

  }

  if(m_dataFormatHasBeenSet)
  {
   payload.WithString("DataFormat", DatasetDataFormatMapper::GetNameForDatasetDataFormat(m_dataFormat));
  }

  if(m_documentClassifierInputDataConfigHasBeenSet)
  {
   payload.WithObject("DocumentClassifierInputDataConfig", m_documentClassifierInputDataConfig.Jsonize());

  }

  if(m_entityRecognizerInputDataConfigHasBeenSet)
  {
   payload.WithObject("EntityRecognizerInputDataConfig", m_entityRecognizerInputDataConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
