/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/InputDataConfig.h>
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

InputDataConfig::InputDataConfig() : 
    m_datasetGroupArnHasBeenSet(false),
    m_supplementaryFeaturesHasBeenSet(false)
{
}

InputDataConfig::InputDataConfig(JsonView jsonValue) : 
    m_datasetGroupArnHasBeenSet(false),
    m_supplementaryFeaturesHasBeenSet(false)
{
  *this = jsonValue;
}

InputDataConfig& InputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatasetGroupArn"))
  {
    m_datasetGroupArn = jsonValue.GetString("DatasetGroupArn");

    m_datasetGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupplementaryFeatures"))
  {
    Aws::Utils::Array<JsonView> supplementaryFeaturesJsonList = jsonValue.GetArray("SupplementaryFeatures");
    for(unsigned supplementaryFeaturesIndex = 0; supplementaryFeaturesIndex < supplementaryFeaturesJsonList.GetLength(); ++supplementaryFeaturesIndex)
    {
      m_supplementaryFeatures.push_back(supplementaryFeaturesJsonList[supplementaryFeaturesIndex].AsObject());
    }
    m_supplementaryFeaturesHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("DatasetGroupArn", m_datasetGroupArn);

  }

  if(m_supplementaryFeaturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supplementaryFeaturesJsonList(m_supplementaryFeatures.size());
   for(unsigned supplementaryFeaturesIndex = 0; supplementaryFeaturesIndex < supplementaryFeaturesJsonList.GetLength(); ++supplementaryFeaturesIndex)
   {
     supplementaryFeaturesJsonList[supplementaryFeaturesIndex].AsObject(m_supplementaryFeatures[supplementaryFeaturesIndex].Jsonize());
   }
   payload.WithArray("SupplementaryFeatures", std::move(supplementaryFeaturesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
