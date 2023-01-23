/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/InferenceEventSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

InferenceEventSummary::InferenceEventSummary() : 
    m_inferenceSchedulerArnHasBeenSet(false),
    m_inferenceSchedulerNameHasBeenSet(false),
    m_eventStartTimeHasBeenSet(false),
    m_eventEndTimeHasBeenSet(false),
    m_diagnosticsHasBeenSet(false),
    m_eventDurationInSeconds(0),
    m_eventDurationInSecondsHasBeenSet(false)
{
}

InferenceEventSummary::InferenceEventSummary(JsonView jsonValue) : 
    m_inferenceSchedulerArnHasBeenSet(false),
    m_inferenceSchedulerNameHasBeenSet(false),
    m_eventStartTimeHasBeenSet(false),
    m_eventEndTimeHasBeenSet(false),
    m_diagnosticsHasBeenSet(false),
    m_eventDurationInSeconds(0),
    m_eventDurationInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceEventSummary& InferenceEventSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InferenceSchedulerArn"))
  {
    m_inferenceSchedulerArn = jsonValue.GetString("InferenceSchedulerArn");

    m_inferenceSchedulerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceSchedulerName"))
  {
    m_inferenceSchedulerName = jsonValue.GetString("InferenceSchedulerName");

    m_inferenceSchedulerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventStartTime"))
  {
    m_eventStartTime = jsonValue.GetDouble("EventStartTime");

    m_eventStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventEndTime"))
  {
    m_eventEndTime = jsonValue.GetDouble("EventEndTime");

    m_eventEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Diagnostics"))
  {
    m_diagnostics = jsonValue.GetString("Diagnostics");

    m_diagnosticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventDurationInSeconds"))
  {
    m_eventDurationInSeconds = jsonValue.GetInt64("EventDurationInSeconds");

    m_eventDurationInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceEventSummary::Jsonize() const
{
  JsonValue payload;

  if(m_inferenceSchedulerArnHasBeenSet)
  {
   payload.WithString("InferenceSchedulerArn", m_inferenceSchedulerArn);

  }

  if(m_inferenceSchedulerNameHasBeenSet)
  {
   payload.WithString("InferenceSchedulerName", m_inferenceSchedulerName);

  }

  if(m_eventStartTimeHasBeenSet)
  {
   payload.WithDouble("EventStartTime", m_eventStartTime.SecondsWithMSPrecision());
  }

  if(m_eventEndTimeHasBeenSet)
  {
   payload.WithDouble("EventEndTime", m_eventEndTime.SecondsWithMSPrecision());
  }

  if(m_diagnosticsHasBeenSet)
  {
   payload.WithString("Diagnostics", m_diagnostics);

  }

  if(m_eventDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("EventDurationInSeconds", m_eventDurationInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
