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
    Array<JsonView> supplementaryFeaturesJsonList = jsonValue.GetArray("SupplementaryFeatures");
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
   Array<JsonValue> supplementaryFeaturesJsonList(m_supplementaryFeatures.size());
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
