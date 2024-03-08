/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreTestingPlanForCreate.h>
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

RestoreTestingPlanForCreate::RestoreTestingPlanForCreate() : 
    m_recoveryPointSelectionHasBeenSet(false),
    m_restoreTestingPlanNameHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_scheduleExpressionTimezoneHasBeenSet(false),
    m_startWindowHours(0),
    m_startWindowHoursHasBeenSet(false)
{
}

RestoreTestingPlanForCreate::RestoreTestingPlanForCreate(JsonView jsonValue) : 
    m_recoveryPointSelectionHasBeenSet(false),
    m_restoreTestingPlanNameHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_scheduleExpressionTimezoneHasBeenSet(false),
    m_startWindowHours(0),
    m_startWindowHoursHasBeenSet(false)
{
  *this = jsonValue;
}

RestoreTestingPlanForCreate& RestoreTestingPlanForCreate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecoveryPointSelection"))
  {
    m_recoveryPointSelection = jsonValue.GetObject("RecoveryPointSelection");

    m_recoveryPointSelectionHasBeenSet = true;
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

JsonValue RestoreTestingPlanForCreate::Jsonize() const
{
  JsonValue payload;

  if(m_recoveryPointSelectionHasBeenSet)
  {
   payload.WithObject("RecoveryPointSelection", m_recoveryPointSelection.Jsonize());

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
