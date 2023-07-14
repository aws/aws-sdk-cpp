/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/Edge.h>
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

Edge::Edge() : 
    m_referenceId(0),
    m_referenceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_summaryStatisticsHasBeenSet(false),
    m_responseTimeHistogramHasBeenSet(false),
    m_aliasesHasBeenSet(false)
{
}

Edge::Edge(JsonView jsonValue) : 
    m_referenceId(0),
    m_referenceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_summaryStatisticsHasBeenSet(false),
    m_responseTimeHistogramHasBeenSet(false),
    m_aliasesHasBeenSet(false)
{
  *this = jsonValue;
}

Edge& Edge::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReferenceId"))
  {
    m_referenceId = jsonValue.GetInteger("ReferenceId");

    m_referenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SummaryStatistics"))
  {
    m_summaryStatistics = jsonValue.GetObject("SummaryStatistics");

    m_summaryStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResponseTimeHistogram"))
  {
    Array<JsonView> responseTimeHistogramJsonList = jsonValue.GetArray("ResponseTimeHistogram");
    for(unsigned responseTimeHistogramIndex = 0; responseTimeHistogramIndex < responseTimeHistogramJsonList.GetLength(); ++responseTimeHistogramIndex)
    {
      m_responseTimeHistogram.push_back(responseTimeHistogramJsonList[responseTimeHistogramIndex].AsObject());
    }
    m_responseTimeHistogramHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aliases"))
  {
    Array<JsonView> aliasesJsonList = jsonValue.GetArray("Aliases");
    for(unsigned aliasesIndex = 0; aliasesIndex < aliasesJsonList.GetLength(); ++aliasesIndex)
    {
      m_aliases.push_back(aliasesJsonList[aliasesIndex].AsObject());
    }
    m_aliasesHasBeenSet = true;
  }

  return *this;
}

JsonValue Edge::Jsonize() const
{
  JsonValue payload;

  if(m_referenceIdHasBeenSet)
  {
   payload.WithInteger("ReferenceId", m_referenceId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_summaryStatisticsHasBeenSet)
  {
   payload.WithObject("SummaryStatistics", m_summaryStatistics.Jsonize());

  }

  if(m_responseTimeHistogramHasBeenSet)
  {
   Array<JsonValue> responseTimeHistogramJsonList(m_responseTimeHistogram.size());
   for(unsigned responseTimeHistogramIndex = 0; responseTimeHistogramIndex < responseTimeHistogramJsonList.GetLength(); ++responseTimeHistogramIndex)
   {
     responseTimeHistogramJsonList[responseTimeHistogramIndex].AsObject(m_responseTimeHistogram[responseTimeHistogramIndex].Jsonize());
   }
   payload.WithArray("ResponseTimeHistogram", std::move(responseTimeHistogramJsonList));

  }

  if(m_aliasesHasBeenSet)
  {
   Array<JsonValue> aliasesJsonList(m_aliases.size());
   for(unsigned aliasesIndex = 0; aliasesIndex < aliasesJsonList.GetLength(); ++aliasesIndex)
   {
     aliasesJsonList[aliasesIndex].AsObject(m_aliases[aliasesIndex].Jsonize());
   }
   payload.WithArray("Aliases", std::move(aliasesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
