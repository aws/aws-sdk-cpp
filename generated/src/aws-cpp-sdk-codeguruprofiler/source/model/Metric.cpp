/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/Metric.h>
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

Metric::Metric() : 
    m_frameNameHasBeenSet(false),
    m_threadStatesHasBeenSet(false),
    m_type(MetricType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Metric::Metric(JsonView jsonValue) : 
    m_frameNameHasBeenSet(false),
    m_threadStatesHasBeenSet(false),
    m_type(MetricType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Metric& Metric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("frameName"))
  {
    m_frameName = jsonValue.GetString("frameName");

    m_frameNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threadStates"))
  {
    Aws::Utils::Array<JsonView> threadStatesJsonList = jsonValue.GetArray("threadStates");
    for(unsigned threadStatesIndex = 0; threadStatesIndex < threadStatesJsonList.GetLength(); ++threadStatesIndex)
    {
      m_threadStates.push_back(threadStatesJsonList[threadStatesIndex].AsString());
    }
    m_threadStatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = MetricTypeMapper::GetMetricTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Metric::Jsonize() const
{
  JsonValue payload;

  if(m_frameNameHasBeenSet)
  {
   payload.WithString("frameName", m_frameName);

  }

  if(m_threadStatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threadStatesJsonList(m_threadStates.size());
   for(unsigned threadStatesIndex = 0; threadStatesIndex < threadStatesJsonList.GetLength(); ++threadStatesIndex)
   {
     threadStatesJsonList[threadStatesIndex].AsString(m_threadStates[threadStatesIndex]);
   }
   payload.WithArray("threadStates", std::move(threadStatesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MetricTypeMapper::GetNameForMetricType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
