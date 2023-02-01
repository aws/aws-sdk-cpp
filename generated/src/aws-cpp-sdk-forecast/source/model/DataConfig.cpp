/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

DataConfig::DataConfig() : 
    m_datasetGroupArnHasBeenSet(false),
    m_attributeConfigsHasBeenSet(false),
    m_additionalDatasetsHasBeenSet(false)
{
}

DataConfig::DataConfig(JsonView jsonValue) : 
    m_datasetGroupArnHasBeenSet(false),
    m_attributeConfigsHasBeenSet(false),
    m_additionalDatasetsHasBeenSet(false)
{
  *this = jsonValue;
}

DataConfig& DataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatasetGroupArn"))
  {
    m_datasetGroupArn = jsonValue.GetString("DatasetGroupArn");

    m_datasetGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeConfigs"))
  {
    Aws::Utils::Array<JsonView> attributeConfigsJsonList = jsonValue.GetArray("AttributeConfigs");
    for(unsigned attributeConfigsIndex = 0; attributeConfigsIndex < attributeConfigsJsonList.GetLength(); ++attributeConfigsIndex)
    {
      m_attributeConfigs.push_back(attributeConfigsJsonList[attributeConfigsIndex].AsObject());
    }
    m_attributeConfigsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalDatasets"))
  {
    Aws::Utils::Array<JsonView> additionalDatasetsJsonList = jsonValue.GetArray("AdditionalDatasets");
    for(unsigned additionalDatasetsIndex = 0; additionalDatasetsIndex < additionalDatasetsJsonList.GetLength(); ++additionalDatasetsIndex)
    {
      m_additionalDatasets.push_back(additionalDatasetsJsonList[additionalDatasetsIndex].AsObject());
    }
    m_additionalDatasetsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("DatasetGroupArn", m_datasetGroupArn);

  }

  if(m_attributeConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeConfigsJsonList(m_attributeConfigs.size());
   for(unsigned attributeConfigsIndex = 0; attributeConfigsIndex < attributeConfigsJsonList.GetLength(); ++attributeConfigsIndex)
   {
     attributeConfigsJsonList[attributeConfigsIndex].AsObject(m_attributeConfigs[attributeConfigsIndex].Jsonize());
   }
   payload.WithArray("AttributeConfigs", std::move(attributeConfigsJsonList));

  }

  if(m_additionalDatasetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalDatasetsJsonList(m_additionalDatasets.size());
   for(unsigned additionalDatasetsIndex = 0; additionalDatasetsIndex < additionalDatasetsJsonList.GetLength(); ++additionalDatasetsIndex)
   {
     additionalDatasetsJsonList[additionalDatasetsIndex].AsObject(m_additionalDatasets[additionalDatasetsIndex].Jsonize());
   }
   payload.WithArray("AdditionalDatasets", std::move(additionalDatasetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
