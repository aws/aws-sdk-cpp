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
#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes how many instances a stack has for each status.</p>
   */
  class AWS_OPSWORKS_API InstancesCount
  {
  public:
    InstancesCount();
    InstancesCount(const Aws::Utils::Json::JsonValue& jsonValue);
    InstancesCount& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The number of instances in the Assigning state.</p>
     */
    inline long GetAssigning() const{ return m_assigning; }

    /**
     * <p>The number of instances in the Assigning state.</p>
     */
    inline void SetAssigning(long value) { m_assigningHasBeenSet = true; m_assigning = value; }

    /**
     * <p>The number of instances in the Assigning state.</p>
     */
    inline InstancesCount& WithAssigning(long value) { SetAssigning(value); return *this;}

    /**
     * <p>The number of instances with <code>booting</code> status.</p>
     */
    inline long GetBooting() const{ return m_booting; }

    /**
     * <p>The number of instances with <code>booting</code> status.</p>
     */
    inline void SetBooting(long value) { m_bootingHasBeenSet = true; m_booting = value; }

    /**
     * <p>The number of instances with <code>booting</code> status.</p>
     */
    inline InstancesCount& WithBooting(long value) { SetBooting(value); return *this;}

    /**
     * <p>The number of instances with <code>connection_lost</code> status.</p>
     */
    inline long GetConnectionLost() const{ return m_connectionLost; }

    /**
     * <p>The number of instances with <code>connection_lost</code> status.</p>
     */
    inline void SetConnectionLost(long value) { m_connectionLostHasBeenSet = true; m_connectionLost = value; }

    /**
     * <p>The number of instances with <code>connection_lost</code> status.</p>
     */
    inline InstancesCount& WithConnectionLost(long value) { SetConnectionLost(value); return *this;}

    /**
     * <p>The number of instances in the Deregistering state.</p>
     */
    inline long GetDeregistering() const{ return m_deregistering; }

    /**
     * <p>The number of instances in the Deregistering state.</p>
     */
    inline void SetDeregistering(long value) { m_deregisteringHasBeenSet = true; m_deregistering = value; }

    /**
     * <p>The number of instances in the Deregistering state.</p>
     */
    inline InstancesCount& WithDeregistering(long value) { SetDeregistering(value); return *this;}

    /**
     * <p>The number of instances with <code>online</code> status.</p>
     */
    inline long GetOnline() const{ return m_online; }

    /**
     * <p>The number of instances with <code>online</code> status.</p>
     */
    inline void SetOnline(long value) { m_onlineHasBeenSet = true; m_online = value; }

    /**
     * <p>The number of instances with <code>online</code> status.</p>
     */
    inline InstancesCount& WithOnline(long value) { SetOnline(value); return *this;}

    /**
     * <p>The number of instances with <code>pending</code> status.</p>
     */
    inline long GetPending() const{ return m_pending; }

    /**
     * <p>The number of instances with <code>pending</code> status.</p>
     */
    inline void SetPending(long value) { m_pendingHasBeenSet = true; m_pending = value; }

    /**
     * <p>The number of instances with <code>pending</code> status.</p>
     */
    inline InstancesCount& WithPending(long value) { SetPending(value); return *this;}

    /**
     * <p>The number of instances with <code>rebooting</code> status.</p>
     */
    inline long GetRebooting() const{ return m_rebooting; }

    /**
     * <p>The number of instances with <code>rebooting</code> status.</p>
     */
    inline void SetRebooting(long value) { m_rebootingHasBeenSet = true; m_rebooting = value; }

    /**
     * <p>The number of instances with <code>rebooting</code> status.</p>
     */
    inline InstancesCount& WithRebooting(long value) { SetRebooting(value); return *this;}

    /**
     * <p>The number of instances in the Registered state.</p>
     */
    inline long GetRegistered() const{ return m_registered; }

    /**
     * <p>The number of instances in the Registered state.</p>
     */
    inline void SetRegistered(long value) { m_registeredHasBeenSet = true; m_registered = value; }

    /**
     * <p>The number of instances in the Registered state.</p>
     */
    inline InstancesCount& WithRegistered(long value) { SetRegistered(value); return *this;}

    /**
     * <p>The number of instances in the Registering state.</p>
     */
    inline long GetRegistering() const{ return m_registering; }

    /**
     * <p>The number of instances in the Registering state.</p>
     */
    inline void SetRegistering(long value) { m_registeringHasBeenSet = true; m_registering = value; }

    /**
     * <p>The number of instances in the Registering state.</p>
     */
    inline InstancesCount& WithRegistering(long value) { SetRegistering(value); return *this;}

    /**
     * <p>The number of instances with <code>requested</code> status.</p>
     */
    inline long GetRequested() const{ return m_requested; }

    /**
     * <p>The number of instances with <code>requested</code> status.</p>
     */
    inline void SetRequested(long value) { m_requestedHasBeenSet = true; m_requested = value; }

    /**
     * <p>The number of instances with <code>requested</code> status.</p>
     */
    inline InstancesCount& WithRequested(long value) { SetRequested(value); return *this;}

    /**
     * <p>The number of instances with <code>running_setup</code> status.</p>
     */
    inline long GetRunningSetup() const{ return m_runningSetup; }

    /**
     * <p>The number of instances with <code>running_setup</code> status.</p>
     */
    inline void SetRunningSetup(long value) { m_runningSetupHasBeenSet = true; m_runningSetup = value; }

    /**
     * <p>The number of instances with <code>running_setup</code> status.</p>
     */
    inline InstancesCount& WithRunningSetup(long value) { SetRunningSetup(value); return *this;}

    /**
     * <p>The number of instances with <code>setup_failed</code> status.</p>
     */
    inline long GetSetupFailed() const{ return m_setupFailed; }

    /**
     * <p>The number of instances with <code>setup_failed</code> status.</p>
     */
    inline void SetSetupFailed(long value) { m_setupFailedHasBeenSet = true; m_setupFailed = value; }

    /**
     * <p>The number of instances with <code>setup_failed</code> status.</p>
     */
    inline InstancesCount& WithSetupFailed(long value) { SetSetupFailed(value); return *this;}

    /**
     * <p>The number of instances with <code>shutting_down</code> status.</p>
     */
    inline long GetShuttingDown() const{ return m_shuttingDown; }

    /**
     * <p>The number of instances with <code>shutting_down</code> status.</p>
     */
    inline void SetShuttingDown(long value) { m_shuttingDownHasBeenSet = true; m_shuttingDown = value; }

    /**
     * <p>The number of instances with <code>shutting_down</code> status.</p>
     */
    inline InstancesCount& WithShuttingDown(long value) { SetShuttingDown(value); return *this;}

    /**
     * <p>The number of instances with <code>start_failed</code> status.</p>
     */
    inline long GetStartFailed() const{ return m_startFailed; }

    /**
     * <p>The number of instances with <code>start_failed</code> status.</p>
     */
    inline void SetStartFailed(long value) { m_startFailedHasBeenSet = true; m_startFailed = value; }

    /**
     * <p>The number of instances with <code>start_failed</code> status.</p>
     */
    inline InstancesCount& WithStartFailed(long value) { SetStartFailed(value); return *this;}

    /**
     * <p>The number of instances with <code>stopped</code> status.</p>
     */
    inline long GetStopped() const{ return m_stopped; }

    /**
     * <p>The number of instances with <code>stopped</code> status.</p>
     */
    inline void SetStopped(long value) { m_stoppedHasBeenSet = true; m_stopped = value; }

    /**
     * <p>The number of instances with <code>stopped</code> status.</p>
     */
    inline InstancesCount& WithStopped(long value) { SetStopped(value); return *this;}

    /**
     * <p>The number of instances with <code>stopping</code> status.</p>
     */
    inline long GetStopping() const{ return m_stopping; }

    /**
     * <p>The number of instances with <code>stopping</code> status.</p>
     */
    inline void SetStopping(long value) { m_stoppingHasBeenSet = true; m_stopping = value; }

    /**
     * <p>The number of instances with <code>stopping</code> status.</p>
     */
    inline InstancesCount& WithStopping(long value) { SetStopping(value); return *this;}

    /**
     * <p>The number of instances with <code>terminated</code> status.</p>
     */
    inline long GetTerminated() const{ return m_terminated; }

    /**
     * <p>The number of instances with <code>terminated</code> status.</p>
     */
    inline void SetTerminated(long value) { m_terminatedHasBeenSet = true; m_terminated = value; }

    /**
     * <p>The number of instances with <code>terminated</code> status.</p>
     */
    inline InstancesCount& WithTerminated(long value) { SetTerminated(value); return *this;}

    /**
     * <p>The number of instances with <code>terminating</code> status.</p>
     */
    inline long GetTerminating() const{ return m_terminating; }

    /**
     * <p>The number of instances with <code>terminating</code> status.</p>
     */
    inline void SetTerminating(long value) { m_terminatingHasBeenSet = true; m_terminating = value; }

    /**
     * <p>The number of instances with <code>terminating</code> status.</p>
     */
    inline InstancesCount& WithTerminating(long value) { SetTerminating(value); return *this;}

    /**
     * <p>The number of instances in the Unassigning state.</p>
     */
    inline long GetUnassigning() const{ return m_unassigning; }

    /**
     * <p>The number of instances in the Unassigning state.</p>
     */
    inline void SetUnassigning(long value) { m_unassigningHasBeenSet = true; m_unassigning = value; }

    /**
     * <p>The number of instances in the Unassigning state.</p>
     */
    inline InstancesCount& WithUnassigning(long value) { SetUnassigning(value); return *this;}

  private:
    long m_assigning;
    bool m_assigningHasBeenSet;
    long m_booting;
    bool m_bootingHasBeenSet;
    long m_connectionLost;
    bool m_connectionLostHasBeenSet;
    long m_deregistering;
    bool m_deregisteringHasBeenSet;
    long m_online;
    bool m_onlineHasBeenSet;
    long m_pending;
    bool m_pendingHasBeenSet;
    long m_rebooting;
    bool m_rebootingHasBeenSet;
    long m_registered;
    bool m_registeredHasBeenSet;
    long m_registering;
    bool m_registeringHasBeenSet;
    long m_requested;
    bool m_requestedHasBeenSet;
    long m_runningSetup;
    bool m_runningSetupHasBeenSet;
    long m_setupFailed;
    bool m_setupFailedHasBeenSet;
    long m_shuttingDown;
    bool m_shuttingDownHasBeenSet;
    long m_startFailed;
    bool m_startFailedHasBeenSet;
    long m_stopped;
    bool m_stoppedHasBeenSet;
    long m_stopping;
    bool m_stoppingHasBeenSet;
    long m_terminated;
    bool m_terminatedHasBeenSet;
    long m_terminating;
    bool m_terminatingHasBeenSet;
    long m_unassigning;
    bool m_unassigningHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
