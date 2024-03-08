/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/QueryRuntimeStatisticsTimeline.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

QueryRuntimeStatisticsTimeline::QueryRuntimeStatisticsTimeline() : 
    m_queryQueueTimeInMillis(0),
    m_queryQueueTimeInMillisHasBeenSet(false),
    m_servicePreProcessingTimeInMillis(0),
    m_servicePreProcessingTimeInMillisHasBeenSet(false),
    m_queryPlanningTimeInMillis(0),
    m_queryPlanningTimeInMillisHasBeenSet(false),
    m_engineExecutionTimeInMillis(0),
    m_engineExecutionTimeInMillisHasBeenSet(false),
    m_serviceProcessingTimeInMillis(0),
    m_serviceProcessingTimeInMillisHasBeenSet(false),
    m_totalExecutionTimeInMillis(0),
    m_totalExecutionTimeInMillisHasBeenSet(false)
{
}

QueryRuntimeStatisticsTimeline::QueryRuntimeStatisticsTimeline(JsonView jsonValue) : 
    m_queryQueueTimeInMillis(0),
    m_queryQueueTimeInMillisHasBeenSet(false),
    m_servicePreProcessingTimeInMillis(0),
    m_servicePreProcessingTimeInMillisHasBeenSet(false),
    m_queryPlanningTimeInMillis(0),
    m_queryPlanningTimeInMillisHasBeenSet(false),
    m_engineExecutionTimeInMillis(0),
    m_engineExecutionTimeInMillisHasBeenSet(false),
    m_serviceProcessingTimeInMillis(0),
    m_serviceProcessingTimeInMillisHasBeenSet(false),
    m_totalExecutionTimeInMillis(0),
    m_totalExecutionTimeInMillisHasBeenSet(false)
{
  *this = jsonValue;
}

QueryRuntimeStatisticsTimeline& QueryRuntimeStatisticsTimeline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryQueueTimeInMillis"))
  {
    m_queryQueueTimeInMillis = jsonValue.GetInt64("QueryQueueTimeInMillis");

    m_queryQueueTimeInMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServicePreProcessingTimeInMillis"))
  {
    m_servicePreProcessingTimeInMillis = jsonValue.GetInt64("ServicePreProcessingTimeInMillis");

    m_servicePreProcessingTimeInMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryPlanningTimeInMillis"))
  {
    m_queryPlanningTimeInMillis = jsonValue.GetInt64("QueryPlanningTimeInMillis");

    m_queryPlanningTimeInMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineExecutionTimeInMillis"))
  {
    m_engineExecutionTimeInMillis = jsonValue.GetInt64("EngineExecutionTimeInMillis");

    m_engineExecutionTimeInMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceProcessingTimeInMillis"))
  {
    m_serviceProcessingTimeInMillis = jsonValue.GetInt64("ServiceProcessingTimeInMillis");

    m_serviceProcessingTimeInMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalExecutionTimeInMillis"))
  {
    m_totalExecutionTimeInMillis = jsonValue.GetInt64("TotalExecutionTimeInMillis");

    m_totalExecutionTimeInMillisHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryRuntimeStatisticsTimeline::Jsonize() const
{
  JsonValue payload;

  if(m_queryQueueTimeInMillisHasBeenSet)
  {
   payload.WithInt64("QueryQueueTimeInMillis", m_queryQueueTimeInMillis);

  }

  if(m_servicePreProcessingTimeInMillisHasBeenSet)
  {
   payload.WithInt64("ServicePreProcessingTimeInMillis", m_servicePreProcessingTimeInMillis);

  }

  if(m_queryPlanningTimeInMillisHasBeenSet)
  {
   payload.WithInt64("QueryPlanningTimeInMillis", m_queryPlanningTimeInMillis);

  }

  if(m_engineExecutionTimeInMillisHasBeenSet)
  {
   payload.WithInt64("EngineExecutionTimeInMillis", m_engineExecutionTimeInMillis);

  }

  if(m_serviceProcessingTimeInMillisHasBeenSet)
  {
   payload.WithInt64("ServiceProcessingTimeInMillis", m_serviceProcessingTimeInMillis);

  }

  if(m_totalExecutionTimeInMillisHasBeenSet)
  {
   payload.WithInt64("TotalExecutionTimeInMillis", m_totalExecutionTimeInMillis);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
