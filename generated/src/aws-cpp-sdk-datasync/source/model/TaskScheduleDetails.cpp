/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TaskScheduleDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

TaskScheduleDetails::TaskScheduleDetails() : 
    m_statusUpdateTimeHasBeenSet(false),
    m_disabledReasonHasBeenSet(false),
    m_disabledBy(ScheduleDisabledBy::NOT_SET),
    m_disabledByHasBeenSet(false)
{
}

TaskScheduleDetails::TaskScheduleDetails(JsonView jsonValue) : 
    m_statusUpdateTimeHasBeenSet(false),
    m_disabledReasonHasBeenSet(false),
    m_disabledBy(ScheduleDisabledBy::NOT_SET),
    m_disabledByHasBeenSet(false)
{
  *this = jsonValue;
}

TaskScheduleDetails& TaskScheduleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatusUpdateTime"))
  {
    m_statusUpdateTime = jsonValue.GetDouble("StatusUpdateTime");

    m_statusUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisabledReason"))
  {
    m_disabledReason = jsonValue.GetString("DisabledReason");

    m_disabledReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisabledBy"))
  {
    m_disabledBy = ScheduleDisabledByMapper::GetScheduleDisabledByForName(jsonValue.GetString("DisabledBy"));

    m_disabledByHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskScheduleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_statusUpdateTimeHasBeenSet)
  {
   payload.WithDouble("StatusUpdateTime", m_statusUpdateTime.SecondsWithMSPrecision());
  }

  if(m_disabledReasonHasBeenSet)
  {
   payload.WithString("DisabledReason", m_disabledReason);

  }

  if(m_disabledByHasBeenSet)
  {
   payload.WithString("DisabledBy", ScheduleDisabledByMapper::GetNameForScheduleDisabledBy(m_disabledBy));
  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
