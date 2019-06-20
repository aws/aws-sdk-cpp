/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

WorkflowRunStatistics::WorkflowRunStatistics() : 
    m_totalActions(0),
    m_totalActionsHasBeenSet(false),
    m_timeoutActions(0),
    m_timeoutActionsHasBeenSet(false),
    m_failedActions(0),
    m_failedActionsHasBeenSet(false),
    m_stoppedActions(0),
    m_stoppedActionsHasBeenSet(false),
    m_succeededActions(0),
    m_succeededActionsHasBeenSet(false),
    m_runningActions(0),
    m_runningActionsHasBeenSet(false)
{
}

WorkflowRunStatistics::WorkflowRunStatistics(JsonView jsonValue) : 
    m_totalActions(0),
    m_totalActionsHasBeenSet(false),
    m_timeoutActions(0),
    m_timeoutActionsHasBeenSet(false),
    m_failedActions(0),
    m_failedActionsHasBeenSet(false),
    m_stoppedActions(0),
    m_stoppedActionsHasBeenSet(false),
    m_succeededActions(0),
    m_succeededActionsHasBeenSet(false),
    m_runningActions(0),
    m_runningActionsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
