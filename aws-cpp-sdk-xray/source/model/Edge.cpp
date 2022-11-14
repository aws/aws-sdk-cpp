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
    m_aliasesHasBeenSet(false),
    m_edgeTypeHasBeenSet(false),
    m_receivedEventAgeHistogramHasBeenSet(false)
{
}

Edge::Edge(JsonView jsonValue) : 
    m_referenceId(0),
    m_referenceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_summaryStatisticsHasBeenSet(false),
    m_responseTimeHistogramHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_edgeTypeHasBeenSet(false),
    m_receivedEventAgeHistogramHasBeenSet(false)
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
    Aws::Utils::Array<JsonView> responseTimeHistogramJsonList = jsonValue.GetArray("ResponseTimeHistogram");
    for(unsigned responseTimeHistogramIndex = 0; responseTimeHistogramIndex < responseTimeHistogramJsonList.GetLength(); ++responseTimeHistogramIndex)
    {
      m_responseTimeHistogram.push_back(responseTimeHistogramJsonList[responseTimeHistogramIndex].AsObject());
    }
    m_responseTimeHistogramHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aliases"))
  {
    Aws::Utils::Array<JsonView> aliasesJsonList = jsonValue.GetArray("Aliases");
    for(unsigned aliasesIndex = 0; aliasesIndex < aliasesJsonList.GetLength(); ++aliasesIndex)
    {
      m_aliases.push_back(aliasesJsonList[aliasesIndex].AsObject());
    }
    m_aliasesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeType"))
  {
    m_edgeType = jsonValue.GetString("EdgeType");

    m_edgeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReceivedEventAgeHistogram"))
  {
    Aws::Utils::Array<JsonView> receivedEventAgeHistogramJsonList = jsonValue.GetArray("ReceivedEventAgeHistogram");
    for(unsigned receivedEventAgeHistogramIndex = 0; receivedEventAgeHistogramIndex < receivedEventAgeHistogramJsonList.GetLength(); ++receivedEventAgeHistogramIndex)
    {
      m_receivedEventAgeHistogram.push_back(receivedEventAgeHistogramJsonList[receivedEventAgeHistogramIndex].AsObject());
    }
    m_receivedEventAgeHistogramHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> responseTimeHistogramJsonList(m_responseTimeHistogram.size());
   for(unsigned responseTimeHistogramIndex = 0; responseTimeHistogramIndex < responseTimeHistogramJsonList.GetLength(); ++responseTimeHistogramIndex)
   {
     responseTimeHistogramJsonList[responseTimeHistogramIndex].AsObject(m_responseTimeHistogram[responseTimeHistogramIndex].Jsonize());
   }
   payload.WithArray("ResponseTimeHistogram", std::move(responseTimeHistogramJsonList));

  }

  if(m_aliasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aliasesJsonList(m_aliases.size());
   for(unsigned aliasesIndex = 0; aliasesIndex < aliasesJsonList.GetLength(); ++aliasesIndex)
   {
     aliasesJsonList[aliasesIndex].AsObject(m_aliases[aliasesIndex].Jsonize());
   }
   payload.WithArray("Aliases", std::move(aliasesJsonList));

  }

  if(m_edgeTypeHasBeenSet)
  {
   payload.WithString("EdgeType", m_edgeType);

  }

  if(m_receivedEventAgeHistogramHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> receivedEventAgeHistogramJsonList(m_receivedEventAgeHistogram.size());
   for(unsigned receivedEventAgeHistogramIndex = 0; receivedEventAgeHistogramIndex < receivedEventAgeHistogramJsonList.GetLength(); ++receivedEventAgeHistogramIndex)
   {
     receivedEventAgeHistogramJsonList[receivedEventAgeHistogramIndex].AsObject(m_receivedEventAgeHistogram[receivedEventAgeHistogramIndex].Jsonize());
   }
   payload.WithArray("ReceivedEventAgeHistogram", std::move(receivedEventAgeHistogramJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
