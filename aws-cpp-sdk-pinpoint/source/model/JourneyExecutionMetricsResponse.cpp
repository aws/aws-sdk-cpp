/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneyExecutionMetricsResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

JourneyExecutionMetricsResponse::JourneyExecutionMetricsResponse() : 
    m_applicationIdHasBeenSet(false),
    m_journeyIdHasBeenSet(false),
    m_lastEvaluatedTimeHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
}

JourneyExecutionMetricsResponse::JourneyExecutionMetricsResponse(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_journeyIdHasBeenSet(false),
    m_lastEvaluatedTimeHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
  *this = jsonValue;
}

JourneyExecutionMetricsResponse& JourneyExecutionMetricsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JourneyId"))
  {
    m_journeyId = jsonValue.GetString("JourneyId");

    m_journeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastEvaluatedTime"))
  {
    m_lastEvaluatedTime = jsonValue.GetString("LastEvaluatedTime");

    m_lastEvaluatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metrics"))
  {
    Aws::Map<Aws::String, JsonView> metricsJsonMap = jsonValue.GetObject("Metrics").GetAllObjects();
    for(auto& metricsItem : metricsJsonMap)
    {
      m_metrics[metricsItem.first] = metricsItem.second.AsString();
    }
    m_metricsHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneyExecutionMetricsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_journeyIdHasBeenSet)
  {
   payload.WithString("JourneyId", m_journeyId);

  }

  if(m_lastEvaluatedTimeHasBeenSet)
  {
   payload.WithString("LastEvaluatedTime", m_lastEvaluatedTime);

  }

  if(m_metricsHasBeenSet)
  {
   JsonValue metricsJsonMap;
   for(auto& metricsItem : m_metrics)
   {
     metricsJsonMap.WithString(metricsItem.first, metricsItem.second);
   }
   payload.WithObject("Metrics", std::move(metricsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
