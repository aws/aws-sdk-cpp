/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RemediationExecutionStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

RemediationExecutionStep::RemediationExecutionStep() : 
    m_nameHasBeenSet(false),
    m_state(RemediationExecutionStepState::NOT_SET),
    m_stateHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false)
{
}

RemediationExecutionStep::RemediationExecutionStep(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_state(RemediationExecutionStepState::NOT_SET),
    m_stateHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RemediationExecutionStep& RemediationExecutionStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = RemediationExecutionStepStateMapper::GetRemediationExecutionStepStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StopTime"))
  {
    m_stopTime = jsonValue.GetDouble("StopTime");

    m_stopTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RemediationExecutionStep::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", RemediationExecutionStepStateMapper::GetNameForRemediationExecutionStepState(m_state));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_stopTimeHasBeenSet)
  {
   payload.WithDouble("StopTime", m_stopTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
