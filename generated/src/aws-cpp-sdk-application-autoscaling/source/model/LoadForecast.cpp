/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/LoadForecast.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

LoadForecast::LoadForecast(JsonView jsonValue)
{
  *this = jsonValue;
}

LoadForecast& LoadForecast::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamps"))
  {
    Aws::Utils::Array<JsonView> timestampsJsonList = jsonValue.GetArray("Timestamps");
    for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
    {
      m_timestamps.push_back(timestampsJsonList[timestampsIndex].AsDouble());
    }
    m_timestampsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsDouble());
    }
    m_valuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricSpecification"))
  {
    m_metricSpecification = jsonValue.GetObject("MetricSpecification");
    m_metricSpecificationHasBeenSet = true;
  }
  return *this;
}

JsonValue LoadForecast::Jsonize() const
{
  JsonValue payload;

  if(m_timestampsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timestampsJsonList(m_timestamps.size());
   for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
   {
     timestampsJsonList[timestampsIndex].AsDouble(m_timestamps[timestampsIndex].SecondsWithMSPrecision());
   }
   payload.WithArray("Timestamps", std::move(timestampsJsonList));

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsDouble(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_metricSpecificationHasBeenSet)
  {
   payload.WithObject("MetricSpecification", m_metricSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
