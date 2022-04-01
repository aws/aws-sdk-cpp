/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/StepStatus.h>
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

StepStatus::StepStatus() : 
    m_state(StepState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_timelineHasBeenSet(false)
{
}

StepStatus::StepStatus(JsonView jsonValue) : 
    m_state(StepState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_timelineHasBeenSet(false)
{
  *this = jsonValue;
}

StepStatus& StepStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = StepStateMapper::GetStepStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateChangeReason"))
  {
    m_stateChangeReason = jsonValue.GetObject("StateChangeReason");

    m_stateChangeReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureDetails"))
  {
    m_failureDetails = jsonValue.GetObject("FailureDetails");

    m_failureDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timeline"))
  {
    m_timeline = jsonValue.GetObject("Timeline");

    m_timelineHasBeenSet = true;
  }

  return *this;
}

JsonValue StepStatus::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StepStateMapper::GetNameForStepState(m_state));
  }

  if(m_stateChangeReasonHasBeenSet)
  {
   payload.WithObject("StateChangeReason", m_stateChangeReason.Jsonize());

  }

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("FailureDetails", m_failureDetails.Jsonize());

  }

  if(m_timelineHasBeenSet)
  {
   payload.WithObject("Timeline", m_timeline.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
