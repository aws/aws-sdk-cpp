/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MaintenanceStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MaintenanceStatus::MaintenanceStatus() : 
    m_maintenanceDay(MaintenanceDay::NOT_SET),
    m_maintenanceDayHasBeenSet(false),
    m_maintenanceDeadlineHasBeenSet(false),
    m_maintenanceScheduledDateHasBeenSet(false),
    m_maintenanceStartTimeHasBeenSet(false)
{
}

MaintenanceStatus::MaintenanceStatus(JsonView jsonValue) : 
    m_maintenanceDay(MaintenanceDay::NOT_SET),
    m_maintenanceDayHasBeenSet(false),
    m_maintenanceDeadlineHasBeenSet(false),
    m_maintenanceScheduledDateHasBeenSet(false),
    m_maintenanceStartTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceStatus& MaintenanceStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maintenanceDay"))
  {
    m_maintenanceDay = MaintenanceDayMapper::GetMaintenanceDayForName(jsonValue.GetString("maintenanceDay"));

    m_maintenanceDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maintenanceDeadline"))
  {
    m_maintenanceDeadline = jsonValue.GetString("maintenanceDeadline");

    m_maintenanceDeadlineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maintenanceScheduledDate"))
  {
    m_maintenanceScheduledDate = jsonValue.GetString("maintenanceScheduledDate");

    m_maintenanceScheduledDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maintenanceStartTime"))
  {
    m_maintenanceStartTime = jsonValue.GetString("maintenanceStartTime");

    m_maintenanceStartTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceStatus::Jsonize() const
{
  JsonValue payload;

  if(m_maintenanceDayHasBeenSet)
  {
   payload.WithString("maintenanceDay", MaintenanceDayMapper::GetNameForMaintenanceDay(m_maintenanceDay));
  }

  if(m_maintenanceDeadlineHasBeenSet)
  {
   payload.WithString("maintenanceDeadline", m_maintenanceDeadline);

  }

  if(m_maintenanceScheduledDateHasBeenSet)
  {
   payload.WithString("maintenanceScheduledDate", m_maintenanceScheduledDate);

  }

  if(m_maintenanceStartTimeHasBeenSet)
  {
   payload.WithString("maintenanceStartTime", m_maintenanceStartTime);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
