/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/StepExecutionStatusDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

StepExecutionStatusDetail::StepExecutionStatusDetail() : 
    m_state(StepExecutionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false),
    m_lastStateChangeReasonHasBeenSet(false)
{
}

StepExecutionStatusDetail::StepExecutionStatusDetail(JsonView jsonValue) : 
    m_state(StepExecutionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false),
    m_lastStateChangeReasonHasBeenSet(false)
{
  *this = jsonValue;
}

StepExecutionStatusDetail& StepExecutionStatusDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = StepExecutionStateMapper::GetStepExecutionStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("CreationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDateTime"))
  {
    m_startDateTime = jsonValue.GetDouble("StartDateTime");

    m_startDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDateTime"))
  {
    m_endDateTime = jsonValue.GetDouble("EndDateTime");

    m_endDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStateChangeReason"))
  {
    m_lastStateChangeReason = jsonValue.GetString("LastStateChangeReason");

    m_lastStateChangeReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue StepExecutionStatusDetail::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StepExecutionStateMapper::GetNameForStepExecutionState(m_state));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("CreationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithDouble("StartDateTime", m_startDateTime.SecondsWithMSPrecision());
  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithDouble("EndDateTime", m_endDateTime.SecondsWithMSPrecision());
  }

  if(m_lastStateChangeReasonHasBeenSet)
  {
   payload.WithString("LastStateChangeReason", m_lastStateChangeReason);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
