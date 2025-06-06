﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/WorkflowRunStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

WorkflowRunStatistics::WorkflowRunStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkflowRunStatistics& WorkflowRunStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalActions"))
  {
    m_totalActions = jsonValue.GetInteger("TotalActions");
    m_totalActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeoutActions"))
  {
    m_timeoutActions = jsonValue.GetInteger("TimeoutActions");
    m_timeoutActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailedActions"))
  {
    m_failedActions = jsonValue.GetInteger("FailedActions");
    m_failedActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StoppedActions"))
  {
    m_stoppedActions = jsonValue.GetInteger("StoppedActions");
    m_stoppedActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SucceededActions"))
  {
    m_succeededActions = jsonValue.GetInteger("SucceededActions");
    m_succeededActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RunningActions"))
  {
    m_runningActions = jsonValue.GetInteger("RunningActions");
    m_runningActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErroredActions"))
  {
    m_erroredActions = jsonValue.GetInteger("ErroredActions");
    m_erroredActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WaitingActions"))
  {
    m_waitingActions = jsonValue.GetInteger("WaitingActions");
    m_waitingActionsHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkflowRunStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_totalActionsHasBeenSet)
  {
   payload.WithInteger("TotalActions", m_totalActions);

  }

  if(m_timeoutActionsHasBeenSet)
  {
   payload.WithInteger("TimeoutActions", m_timeoutActions);

  }

  if(m_failedActionsHasBeenSet)
  {
   payload.WithInteger("FailedActions", m_failedActions);

  }

  if(m_stoppedActionsHasBeenSet)
  {
   payload.WithInteger("StoppedActions", m_stoppedActions);

  }

  if(m_succeededActionsHasBeenSet)
  {
   payload.WithInteger("SucceededActions", m_succeededActions);

  }

  if(m_runningActionsHasBeenSet)
  {
   payload.WithInteger("RunningActions", m_runningActions);

  }

  if(m_erroredActionsHasBeenSet)
  {
   payload.WithInteger("ErroredActions", m_erroredActions);

  }

  if(m_waitingActionsHasBeenSet)
  {
   payload.WithInteger("WaitingActions", m_waitingActions);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
