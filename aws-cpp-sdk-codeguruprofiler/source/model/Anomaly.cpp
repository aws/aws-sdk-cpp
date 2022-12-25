/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/Anomaly.h>
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

Anomaly::Anomaly() : 
    m_instancesHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

Anomaly::Anomaly(JsonView jsonValue) : 
    m_instancesHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

Anomaly& Anomaly::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instances"))
  {
    Aws::Utils::Array<JsonView> instancesJsonList = jsonValue.GetArray("instances");
    for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
    {
      m_instances.push_back(instancesJsonList[instancesIndex].AsObject());
    }
    m_instancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metric"))
  {
    m_metric = jsonValue.GetObject("metric");

    m_metricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue Anomaly::Jsonize() const
{
  JsonValue payload;

  if(m_instancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instancesJsonList(m_instances.size());
   for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
   {
     instancesJsonList[instancesIndex].AsObject(m_instances[instancesIndex].Jsonize());
   }
   payload.WithArray("instances", std::move(instancesJsonList));

  }

  if(m_metricHasBeenSet)
  {
   payload.WithObject("metric", m_metric.Jsonize());

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
