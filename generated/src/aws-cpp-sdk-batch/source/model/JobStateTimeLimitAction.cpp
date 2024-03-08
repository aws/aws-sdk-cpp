/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/JobStateTimeLimitAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

JobStateTimeLimitAction::JobStateTimeLimitAction() : 
    m_reasonHasBeenSet(false),
    m_state(JobStateTimeLimitActionsState::NOT_SET),
    m_stateHasBeenSet(false),
    m_maxTimeSeconds(0),
    m_maxTimeSecondsHasBeenSet(false),
    m_action(JobStateTimeLimitActionsAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

JobStateTimeLimitAction::JobStateTimeLimitAction(JsonView jsonValue) : 
    m_reasonHasBeenSet(false),
    m_state(JobStateTimeLimitActionsState::NOT_SET),
    m_stateHasBeenSet(false),
    m_maxTimeSeconds(0),
    m_maxTimeSecondsHasBeenSet(false),
    m_action(JobStateTimeLimitActionsAction::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

JobStateTimeLimitAction& JobStateTimeLimitAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = JobStateTimeLimitActionsStateMapper::GetJobStateTimeLimitActionsStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxTimeSeconds"))
  {
    m_maxTimeSeconds = jsonValue.GetInteger("maxTimeSeconds");

    m_maxTimeSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = JobStateTimeLimitActionsActionMapper::GetJobStateTimeLimitActionsActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue JobStateTimeLimitAction::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", JobStateTimeLimitActionsStateMapper::GetNameForJobStateTimeLimitActionsState(m_state));
  }

  if(m_maxTimeSecondsHasBeenSet)
  {
   payload.WithInteger("maxTimeSeconds", m_maxTimeSeconds);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", JobStateTimeLimitActionsActionMapper::GetNameForJobStateTimeLimitActionsAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
