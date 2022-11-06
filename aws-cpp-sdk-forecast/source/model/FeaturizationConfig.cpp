/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/FeaturizationConfig.h>
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

FeaturizationConfig::FeaturizationConfig() : 
    m_forecastFrequencyHasBeenSet(false),
    m_forecastDimensionsHasBeenSet(false),
    m_featurizationsHasBeenSet(false)
{
}

FeaturizationConfig::FeaturizationConfig(JsonView jsonValue) : 
    m_forecastFrequencyHasBeenSet(false),
    m_forecastDimensionsHasBeenSet(false),
    m_featurizationsHasBeenSet(false)
{
  *this = jsonValue;
}

FeaturizationConfig& FeaturizationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ForecastFrequency"))
  {
    m_forecastFrequency = jsonValue.GetString("ForecastFrequency");

    m_forecastFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForecastDimensions"))
  {
    Aws::Utils::Array<JsonView> forecastDimensionsJsonList = jsonValue.GetArray("ForecastDimensions");
    for(unsigned forecastDimensionsIndex = 0; forecastDimensionsIndex < forecastDimensionsJsonList.GetLength(); ++forecastDimensionsIndex)
    {
      m_forecastDimensions.push_back(forecastDimensionsJsonList[forecastDimensionsIndex].AsString());
    }
    m_forecastDimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Featurizations"))
  {
    Aws::Utils::Array<JsonView> featurizationsJsonList = jsonValue.GetArray("Featurizations");
    for(unsigned featurizationsIndex = 0; featurizationsIndex < featurizationsJsonList.GetLength(); ++featurizationsIndex)
    {
      m_featurizations.push_back(featurizationsJsonList[featurizationsIndex].AsObject());
    }
    m_featurizationsHasBeenSet = true;
  }

  return *this;
}

JsonValue FeaturizationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_forecastFrequencyHasBeenSet)
  {
   payload.WithString("ForecastFrequency", m_forecastFrequency);

  }

  if(m_forecastDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> forecastDimensionsJsonList(m_forecastDimensions.size());
   for(unsigned forecastDimensionsIndex = 0; forecastDimensionsIndex < forecastDimensionsJsonList.GetLength(); ++forecastDimensionsIndex)
   {
     forecastDimensionsJsonList[forecastDimensionsIndex].AsString(m_forecastDimensions[forecastDimensionsIndex]);
   }
   payload.WithArray("ForecastDimensions", std::move(forecastDimensionsJsonList));

  }

  if(m_featurizationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featurizationsJsonList(m_featurizations.size());
   for(unsigned featurizationsIndex = 0; featurizationsIndex < featurizationsJsonList.GetLength(); ++featurizationsIndex)
   {
     featurizationsJsonList[featurizationsIndex].AsObject(m_featurizations[featurizationsIndex].Jsonize());
   }
   payload.WithArray("Featurizations", std::move(featurizationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
