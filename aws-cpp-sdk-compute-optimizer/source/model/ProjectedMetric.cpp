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

#include <aws/compute-optimizer/model/ProjectedMetric.h>
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

ProjectedMetric::ProjectedMetric() : 
    m_name(MetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_timestampsHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

ProjectedMetric::ProjectedMetric(JsonView jsonValue) : 
    m_name(MetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_timestampsHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectedMetric& ProjectedMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = MetricNameMapper::GetMetricNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamps"))
  {
    Array<JsonView> timestampsJsonList = jsonValue.GetArray("timestamps");
    for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
    {
      m_timestamps.push_back(timestampsJsonList[timestampsIndex].AsDouble());
    }
    m_timestampsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsDouble());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectedMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", MetricNameMapper::GetNameForMetricName(m_name));
  }

  if(m_timestampsHasBeenSet)
  {
   Array<JsonValue> timestampsJsonList(m_timestamps.size());
   for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
   {
     timestampsJsonList[timestampsIndex].AsDouble(m_timestamps[timestampsIndex].SecondsWithMSPrecision());
   }
   payload.WithArray("timestamps", std::move(timestampsJsonList));

  }

  if(m_valuesHasBeenSet)
  {
   Array<JsonValue> valuesJsonList(m_values.size());
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
