﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSDatabaseProjectedMetric.h>
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

RDSDatabaseProjectedMetric::RDSDatabaseProjectedMetric() : 
    m_name(RDSDBMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_timestampsHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

RDSDatabaseProjectedMetric::RDSDatabaseProjectedMetric(JsonView jsonValue)
  : RDSDatabaseProjectedMetric()
{
  *this = jsonValue;
}

RDSDatabaseProjectedMetric& RDSDatabaseProjectedMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = RDSDBMetricNameMapper::GetRDSDBMetricNameForName(jsonValue.GetString("name"));

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

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsDouble());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue RDSDatabaseProjectedMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", RDSDBMetricNameMapper::GetNameForRDSDBMetricName(m_name));
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

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsDouble(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
