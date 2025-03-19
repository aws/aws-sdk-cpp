/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/MonitoredRequestCountMetricDataQueries.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

MonitoredRequestCountMetricDataQueries::MonitoredRequestCountMetricDataQueries(JsonView jsonValue)
{
  *this = jsonValue;
}

MonitoredRequestCountMetricDataQueries& MonitoredRequestCountMetricDataQueries::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GoodCountMetric"))
  {
    Aws::Utils::Array<JsonView> goodCountMetricJsonList = jsonValue.GetArray("GoodCountMetric");
    for(unsigned goodCountMetricIndex = 0; goodCountMetricIndex < goodCountMetricJsonList.GetLength(); ++goodCountMetricIndex)
    {
      m_goodCountMetric.push_back(goodCountMetricJsonList[goodCountMetricIndex].AsObject());
    }
    m_goodCountMetricHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BadCountMetric"))
  {
    Aws::Utils::Array<JsonView> badCountMetricJsonList = jsonValue.GetArray("BadCountMetric");
    for(unsigned badCountMetricIndex = 0; badCountMetricIndex < badCountMetricJsonList.GetLength(); ++badCountMetricIndex)
    {
      m_badCountMetric.push_back(badCountMetricJsonList[badCountMetricIndex].AsObject());
    }
    m_badCountMetricHasBeenSet = true;
  }
  return *this;
}

JsonValue MonitoredRequestCountMetricDataQueries::Jsonize() const
{
  JsonValue payload;

  if(m_goodCountMetricHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> goodCountMetricJsonList(m_goodCountMetric.size());
   for(unsigned goodCountMetricIndex = 0; goodCountMetricIndex < goodCountMetricJsonList.GetLength(); ++goodCountMetricIndex)
   {
     goodCountMetricJsonList[goodCountMetricIndex].AsObject(m_goodCountMetric[goodCountMetricIndex].Jsonize());
   }
   payload.WithArray("GoodCountMetric", std::move(goodCountMetricJsonList));

  }

  if(m_badCountMetricHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> badCountMetricJsonList(m_badCountMetric.size());
   for(unsigned badCountMetricIndex = 0; badCountMetricIndex < badCountMetricJsonList.GetLength(); ++badCountMetricIndex)
   {
     badCountMetricJsonList[badCountMetricIndex].AsObject(m_badCountMetric[badCountMetricIndex].Jsonize());
   }
   payload.WithArray("BadCountMetric", std::move(badCountMetricJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
