/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/InstancesCount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

InstancesCount::InstancesCount() : 
    m_assigning(0),
    m_assigningHasBeenSet(false),
    m_booting(0),
    m_bootingHasBeenSet(false),
    m_connectionLost(0),
    m_connectionLostHasBeenSet(false),
    m_deregistering(0),
    m_deregisteringHasBeenSet(false),
    m_online(0),
    m_onlineHasBeenSet(false),
    m_pending(0),
    m_pendingHasBeenSet(false),
    m_rebooting(0),
    m_rebootingHasBeenSet(false),
    m_registered(0),
    m_registeredHasBeenSet(false),
    m_registering(0),
    m_registeringHasBeenSet(false),
    m_requested(0),
    m_requestedHasBeenSet(false),
    m_runningSetup(0),
    m_runningSetupHasBeenSet(false),
    m_setupFailed(0),
    m_setupFailedHasBeenSet(false),
    m_shuttingDown(0),
    m_shuttingDownHasBeenSet(false),
    m_startFailed(0),
    m_startFailedHasBeenSet(false),
    m_stopped(0),
    m_stoppedHasBeenSet(false),
    m_stopping(0),
    m_stoppingHasBeenSet(false),
    m_terminated(0),
    m_terminatedHasBeenSet(false),
    m_terminating(0),
    m_terminatingHasBeenSet(false),
    m_unassigning(0),
    m_unassigningHasBeenSet(false)
{
}

InstancesCount::InstancesCount(const JsonValue& jsonValue) : 
    m_assigning(0),
    m_assigningHasBeenSet(false),
    m_booting(0),
    m_bootingHasBeenSet(false),
    m_connectionLost(0),
    m_connectionLostHasBeenSet(false),
    m_deregistering(0),
    m_deregisteringHasBeenSet(false),
    m_online(0),
    m_onlineHasBeenSet(false),
    m_pending(0),
    m_pendingHasBeenSet(false),
    m_rebooting(0),
    m_rebootingHasBeenSet(false),
    m_registered(0),
    m_registeredHasBeenSet(false),
    m_registering(0),
    m_registeringHasBeenSet(false),
    m_requested(0),
    m_requestedHasBeenSet(false),
    m_runningSetup(0),
    m_runningSetupHasBeenSet(false),
    m_setupFailed(0),
    m_setupFailedHasBeenSet(false),
    m_shuttingDown(0),
    m_shuttingDownHasBeenSet(false),
    m_startFailed(0),
    m_startFailedHasBeenSet(false),
    m_stopped(0),
    m_stoppedHasBeenSet(false),
    m_stopping(0),
    m_stoppingHasBeenSet(false),
    m_terminated(0),
    m_terminatedHasBeenSet(false),
    m_terminating(0),
    m_terminatingHasBeenSet(false),
    m_unassigning(0),
    m_unassigningHasBeenSet(false)
{
  *this = jsonValue;
}

InstancesCount& InstancesCount::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Assigning"))
  {
    m_assigning = jsonValue.GetInteger("Assigning");

    m_assigningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Booting"))
  {
    m_booting = jsonValue.GetInteger("Booting");

    m_bootingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionLost"))
  {
    m_connectionLost = jsonValue.GetInteger("ConnectionLost");

    m_connectionLostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Deregistering"))
  {
    m_deregistering = jsonValue.GetInteger("Deregistering");

    m_deregisteringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Online"))
  {
    m_online = jsonValue.GetInteger("Online");

    m_onlineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pending"))
  {
    m_pending = jsonValue.GetInteger("Pending");

    m_pendingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rebooting"))
  {
    m_rebooting = jsonValue.GetInteger("Rebooting");

    m_rebootingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Registered"))
  {
    m_registered = jsonValue.GetInteger("Registered");

    m_registeredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Registering"))
  {
    m_registering = jsonValue.GetInteger("Registering");

    m_registeringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Requested"))
  {
    m_requested = jsonValue.GetInteger("Requested");

    m_requestedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunningSetup"))
  {
    m_runningSetup = jsonValue.GetInteger("RunningSetup");

    m_runningSetupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SetupFailed"))
  {
    m_setupFailed = jsonValue.GetInteger("SetupFailed");

    m_setupFailedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShuttingDown"))
  {
    m_shuttingDown = jsonValue.GetInteger("ShuttingDown");

    m_shuttingDownHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartFailed"))
  {
    m_startFailed = jsonValue.GetInteger("StartFailed");

    m_startFailedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Stopped"))
  {
    m_stopped = jsonValue.GetInteger("Stopped");

    m_stoppedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Stopping"))
  {
    m_stopping = jsonValue.GetInteger("Stopping");

    m_stoppingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Terminated"))
  {
    m_terminated = jsonValue.GetInteger("Terminated");

    m_terminatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Terminating"))
  {
    m_terminating = jsonValue.GetInteger("Terminating");

    m_terminatingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unassigning"))
  {
    m_unassigning = jsonValue.GetInteger("Unassigning");

    m_unassigningHasBeenSet = true;
  }

  return *this;
}

JsonValue InstancesCount::Jsonize() const
{
  JsonValue payload;

  if(m_assigningHasBeenSet)
  {
   payload.WithInteger("Assigning", m_assigning);

  }

  if(m_bootingHasBeenSet)
  {
   payload.WithInteger("Booting", m_booting);

  }

  if(m_connectionLostHasBeenSet)
  {
   payload.WithInteger("ConnectionLost", m_connectionLost);

  }

  if(m_deregisteringHasBeenSet)
  {
   payload.WithInteger("Deregistering", m_deregistering);

  }

  if(m_onlineHasBeenSet)
  {
   payload.WithInteger("Online", m_online);

  }

  if(m_pendingHasBeenSet)
  {
   payload.WithInteger("Pending", m_pending);

  }

  if(m_rebootingHasBeenSet)
  {
   payload.WithInteger("Rebooting", m_rebooting);

  }

  if(m_registeredHasBeenSet)
  {
   payload.WithInteger("Registered", m_registered);

  }

  if(m_registeringHasBeenSet)
  {
   payload.WithInteger("Registering", m_registering);

  }

  if(m_requestedHasBeenSet)
  {
   payload.WithInteger("Requested", m_requested);

  }

  if(m_runningSetupHasBeenSet)
  {
   payload.WithInteger("RunningSetup", m_runningSetup);

  }

  if(m_setupFailedHasBeenSet)
  {
   payload.WithInteger("SetupFailed", m_setupFailed);

  }

  if(m_shuttingDownHasBeenSet)
  {
   payload.WithInteger("ShuttingDown", m_shuttingDown);

  }

  if(m_startFailedHasBeenSet)
  {
   payload.WithInteger("StartFailed", m_startFailed);

  }

  if(m_stoppedHasBeenSet)
  {
   payload.WithInteger("Stopped", m_stopped);

  }

  if(m_stoppingHasBeenSet)
  {
   payload.WithInteger("Stopping", m_stopping);

  }

  if(m_terminatedHasBeenSet)
  {
   payload.WithInteger("Terminated", m_terminated);

  }

  if(m_terminatingHasBeenSet)
  {
   payload.WithInteger("Terminating", m_terminating);

  }

  if(m_unassigningHasBeenSet)
  {
   payload.WithInteger("Unassigning", m_unassigning);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws