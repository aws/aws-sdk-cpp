/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/InsightEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

InsightEvent::InsightEvent() : 
    m_summaryHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_clientRequestImpactStatisticsHasBeenSet(false),
    m_rootCauseServiceRequestImpactStatisticsHasBeenSet(false),
    m_topAnomalousServicesHasBeenSet(false)
{
}

InsightEvent::InsightEvent(JsonView jsonValue) : 
    m_summaryHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_clientRequestImpactStatisticsHasBeenSet(false),
    m_rootCauseServiceRequestImpactStatisticsHasBeenSet(false),
    m_topAnomalousServicesHasBeenSet(false)
{
  *this = jsonValue;
}

InsightEvent& InsightEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Summary"))
  {
    m_summary = jsonValue.GetString("Summary");

    m_summaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventTime"))
  {
    m_eventTime = jsonValue.GetDouble("EventTime");

    m_eventTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientRequestImpactStatistics"))
  {
    m_clientRequestImpactStatistics = jsonValue.GetObject("ClientRequestImpactStatistics");

    m_clientRequestImpactStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootCauseServiceRequestImpactStatistics"))
  {
    m_rootCauseServiceRequestImpactStatistics = jsonValue.GetObject("RootCauseServiceRequestImpactStatistics");

    m_rootCauseServiceRequestImpactStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopAnomalousServices"))
  {
    Aws::Utils::Array<JsonView> topAnomalousServicesJsonList = jsonValue.GetArray("TopAnomalousServices");
    for(unsigned topAnomalousServicesIndex = 0; topAnomalousServicesIndex < topAnomalousServicesJsonList.GetLength(); ++topAnomalousServicesIndex)
    {
      m_topAnomalousServices.push_back(topAnomalousServicesJsonList[topAnomalousServicesIndex].AsObject());
    }
    m_topAnomalousServicesHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightEvent::Jsonize() const
{
  JsonValue payload;

  if(m_summaryHasBeenSet)
  {
   payload.WithString("Summary", m_summary);

  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithDouble("EventTime", m_eventTime.SecondsWithMSPrecision());
  }

  if(m_clientRequestImpactStatisticsHasBeenSet)
  {
   payload.WithObject("ClientRequestImpactStatistics", m_clientRequestImpactStatistics.Jsonize());

  }

  if(m_rootCauseServiceRequestImpactStatisticsHasBeenSet)
  {
   payload.WithObject("RootCauseServiceRequestImpactStatistics", m_rootCauseServiceRequestImpactStatistics.Jsonize());

  }

  if(m_topAnomalousServicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topAnomalousServicesJsonList(m_topAnomalousServices.size());
   for(unsigned topAnomalousServicesIndex = 0; topAnomalousServicesIndex < topAnomalousServicesJsonList.GetLength(); ++topAnomalousServicesIndex)
   {
     topAnomalousServicesJsonList[topAnomalousServicesIndex].AsObject(m_topAnomalousServices[topAnomalousServicesIndex].Jsonize());
   }
   payload.WithArray("TopAnomalousServices", std::move(topAnomalousServicesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
