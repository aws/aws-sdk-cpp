/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/FrameMetricDatum.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

FrameMetricDatum::FrameMetricDatum() : 
    m_frameMetricHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

FrameMetricDatum::FrameMetricDatum(JsonView jsonValue) : 
    m_frameMetricHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

FrameMetricDatum& FrameMetricDatum::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("frameMetric"))
  {
    m_frameMetric = jsonValue.GetObject("frameMetric");

    m_frameMetricHasBeenSet = true;
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

JsonValue FrameMetricDatum::Jsonize() const
{
  JsonValue payload;

  if(m_frameMetricHasBeenSet)
  {
   payload.WithObject("frameMetric", m_frameMetric.Jsonize());

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
} // namespace CodeGuruProfiler
} // namespace Aws
