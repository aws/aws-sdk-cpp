/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/AutoTuneMaintenanceSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

AutoTuneMaintenanceSchedule::AutoTuneMaintenanceSchedule() : 
    m_startAtHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_cronExpressionForRecurrenceHasBeenSet(false)
{
}

AutoTuneMaintenanceSchedule::AutoTuneMaintenanceSchedule(JsonView jsonValue) : 
    m_startAtHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_cronExpressionForRecurrenceHasBeenSet(false)
{
  *this = jsonValue;
}

AutoTuneMaintenanceSchedule& AutoTuneMaintenanceSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartAt"))
  {
    m_startAt = jsonValue.GetDouble("StartAt");

    m_startAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetObject("Duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CronExpressionForRecurrence"))
  {
    m_cronExpressionForRecurrence = jsonValue.GetString("CronExpressionForRecurrence");

    m_cronExpressionForRecurrenceHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoTuneMaintenanceSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_startAtHasBeenSet)
  {
   payload.WithDouble("StartAt", m_startAt.SecondsWithMSPrecision());
  }

  if(m_durationHasBeenSet)
  {
   payload.WithObject("Duration", m_duration.Jsonize());

  }

  if(m_cronExpressionForRecurrenceHasBeenSet)
  {
   payload.WithString("CronExpressionForRecurrence", m_cronExpressionForRecurrence);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
