/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceProjectedMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

ECSServiceProjectedMetric::ECSServiceProjectedMetric() : 
    m_name(ECSServiceMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_timestampsHasBeenSet(false),
    m_upperBoundValuesHasBeenSet(false),
    m_lowerBoundValuesHasBeenSet(false)
{
}

ECSServiceProjectedMetric::ECSServiceProjectedMetric(JsonView jsonValue) : 
    m_name(ECSServiceMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_timestampsHasBeenSet(false),
    m_upperBoundValuesHasBeenSet(false),
    m_lowerBoundValuesHasBeenSet(false)
{
  *this = jsonValue;
}

ECSServiceProjectedMetric& ECSServiceProjectedMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = ECSServiceMetricNameMapper::GetECSServiceMetricNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamps"))
  {
    Aws::Utils::Array<JsonView> timestampsJsonList = jsonValue.GetArray("timestamps");
    for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
    {
      m_timestamps.push_back(timestampsJsonList[timestampsIndex].AsDouble());
    }
    m_timestampsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("upperBoundValues"))
  {
    Aws::Utils::Array<JsonView> upperBoundValuesJsonList = jsonValue.GetArray("upperBoundValues");
    for(unsigned upperBoundValuesIndex = 0; upperBoundValuesIndex < upperBoundValuesJsonList.GetLength(); ++upperBoundValuesIndex)
    {
      m_upperBoundValues.push_back(upperBoundValuesJsonList[upperBoundValuesIndex].AsDouble());
    }
    m_upperBoundValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lowerBoundValues"))
  {
    Aws::Utils::Array<JsonView> lowerBoundValuesJsonList = jsonValue.GetArray("lowerBoundValues");
    for(unsigned lowerBoundValuesIndex = 0; lowerBoundValuesIndex < lowerBoundValuesJsonList.GetLength(); ++lowerBoundValuesIndex)
    {
      m_lowerBoundValues.push_back(lowerBoundValuesJsonList[lowerBoundValuesIndex].AsDouble());
    }
    m_lowerBoundValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue ECSServiceProjectedMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", ECSServiceMetricNameMapper::GetNameForECSServiceMetricName(m_name));
  }

  if(m_timestampsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timestampsJsonList(m_timestamps.size());
   for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
   {
     timestampsJsonList[timestampsIndex].AsDouble(m_timestamps[timestampsIndex].SecondsWithMSPrecision());
   }
   payload.WithArray("timestamps", std::move(timestampsJsonList));

  }

  if(m_upperBoundValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> upperBoundValuesJsonList(m_upperBoundValues.size());
   for(unsigned upperBoundValuesIndex = 0; upperBoundValuesIndex < upperBoundValuesJsonList.GetLength(); ++upperBoundValuesIndex)
   {
     upperBoundValuesJsonList[upperBoundValuesIndex].AsDouble(m_upperBoundValues[upperBoundValuesIndex]);
   }
   payload.WithArray("upperBoundValues", std::move(upperBoundValuesJsonList));

  }

  if(m_lowerBoundValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lowerBoundValuesJsonList(m_lowerBoundValues.size());
   for(unsigned lowerBoundValuesIndex = 0; lowerBoundValuesIndex < lowerBoundValuesJsonList.GetLength(); ++lowerBoundValuesIndex)
   {
     lowerBoundValuesJsonList[lowerBoundValuesIndex].AsDouble(m_lowerBoundValues[lowerBoundValuesIndex]);
   }
   payload.WithArray("lowerBoundValues", std::move(lowerBoundValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
