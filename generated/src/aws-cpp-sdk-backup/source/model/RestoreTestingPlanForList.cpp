/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreTestingPlanForList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

RestoreTestingPlanForList::RestoreTestingPlanForList() : 
    m_creationTimeHasBeenSet(false),
    m_lastExecutionTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_restoreTestingPlanArnHasBeenSet(false),
    m_restoreTestingPlanNameHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_scheduleExpressionTimezoneHasBeenSet(false),
    m_startWindowHours(0),
    m_startWindowHoursHasBeenSet(false)
{
}

RestoreTestingPlanForList::RestoreTestingPlanForList(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_lastExecutionTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_restoreTestingPlanArnHasBeenSet(false),
    m_restoreTestingPlanNameHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_scheduleExpressionTimezoneHasBeenSet(false),
    m_startWindowHours(0),
    m_startWindowHoursHasBeenSet(false)
{
  *this = jsonValue;
}

RestoreTestingPlanForList& RestoreTestingPlanForList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastExecutionTime"))
  {
    m_lastExecutionTime = jsonValue.GetDouble("LastExecutionTime");

    m_lastExecutionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestoreTestingPlanArn"))
  {
    m_restoreTestingPlanArn = jsonValue.GetString("RestoreTestingPlanArn");

    m_restoreTestingPlanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestoreTestingPlanName"))
  {
    m_restoreTestingPlanName = jsonValue.GetString("RestoreTestingPlanName");

    m_restoreTestingPlanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");

    m_scheduleExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleExpressionTimezone"))
  {
    m_scheduleExpressionTimezone = jsonValue.GetString("ScheduleExpressionTimezone");

    m_scheduleExpressionTimezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartWindowHours"))
  {
    m_startWindowHours = jsonValue.GetInteger("StartWindowHours");

    m_startWindowHoursHasBeenSet = true;
  }

  return *this;
}

JsonValue RestoreTestingPlanForList::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastExecutionTimeHasBeenSet)
  {
   payload.WithDouble("LastExecutionTime", m_lastExecutionTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_restoreTestingPlanArnHasBeenSet)
  {
   payload.WithString("RestoreTestingPlanArn", m_restoreTestingPlanArn);

  }

  if(m_restoreTestingPlanNameHasBeenSet)
  {
   payload.WithString("RestoreTestingPlanName", m_restoreTestingPlanName);

  }

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  if(m_scheduleExpressionTimezoneHasBeenSet)
  {
   payload.WithString("ScheduleExpressionTimezone", m_scheduleExpressionTimezone);

  }

  if(m_startWindowHoursHasBeenSet)
  {
   payload.WithInteger("StartWindowHours", m_startWindowHours);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
