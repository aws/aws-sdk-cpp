/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/AbbreviatedExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

AbbreviatedExecution::AbbreviatedExecution(JsonView jsonValue)
{
  *this = jsonValue;
}

AbbreviatedExecution& AbbreviatedExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("planArn"))
  {
    m_planArn = jsonValue.GetString("planArn");
    m_planArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");
    m_executionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");
    m_commentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mode"))
  {
    m_mode = ExecutionModeMapper::GetExecutionModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionState"))
  {
    m_executionState = ExecutionStateMapper::GetExecutionStateForName(jsonValue.GetString("executionState"));
    m_executionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionAction"))
  {
    m_executionAction = ExecutionActionMapper::GetExecutionActionForName(jsonValue.GetString("executionAction"));
    m_executionActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionRegion"))
  {
    m_executionRegion = jsonValue.GetString("executionRegion");
    m_executionRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actualRecoveryTime"))
  {
    m_actualRecoveryTime = jsonValue.GetString("actualRecoveryTime");
    m_actualRecoveryTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue AbbreviatedExecution::Jsonize() const
{
  JsonValue payload;

  if(m_planArnHasBeenSet)
  {
   payload.WithString("planArn", m_planArn);

  }

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("executionId", m_executionId);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", ExecutionModeMapper::GetNameForExecutionMode(m_mode));
  }

  if(m_executionStateHasBeenSet)
  {
   payload.WithString("executionState", ExecutionStateMapper::GetNameForExecutionState(m_executionState));
  }

  if(m_executionActionHasBeenSet)
  {
   payload.WithString("executionAction", ExecutionActionMapper::GetNameForExecutionAction(m_executionAction));
  }

  if(m_executionRegionHasBeenSet)
  {
   payload.WithString("executionRegion", m_executionRegion);

  }

  if(m_actualRecoveryTimeHasBeenSet)
  {
   payload.WithString("actualRecoveryTime", m_actualRecoveryTime);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
