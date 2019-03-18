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

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes how many instances a stack has for each status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/InstancesCount">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API InstancesCount
  {
  public:
    InstancesCount();
    InstancesCount(Aws::Utils::Json::JsonView jsonValue);
    InstancesCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of instances in the Assigning state.</p>
     */
    inline int GetAssigning() const{ return m_assigning; }

    /**
     * <p>The number of instances in the Assigning state.</p>
     */
    inline bool AssigningHasBeenSet() const { return m_assigningHasBeenSet; }

    /**
     * <p>The number of instances in the Assigning state.</p>
     */
    inline void SetAssigning(int value) { m_assigningHasBeenSet = true; m_assigning = value; }

    /**
     * <p>The number of instances in the Assigning state.</p>
     */
    inline InstancesCount& WithAssigning(int value) { SetAssigning(value); return *this;}


    /**
     * <p>The number of instances with <code>booting</code> status.</p>
     */
    inline int GetBooting() const{ return m_booting; }

    /**
     * <p>The number of instances with <code>booting</code> status.</p>
     */
    inline bool BootingHasBeenSet() const { return m_bootingHasBeenSet; }

    /**
     * <p>The number of instances with <code>booting</code> status.</p>
     */
    inline void SetBooting(int value) { m_bootingHasBeenSet = true; m_booting = value; }

    /**
     * <p>The number of instances with <code>booting</code> status.</p>
     */
    inline InstancesCount& WithBooting(int value) { SetBooting(value); return *this;}


    /**
     * <p>The number of instances with <code>connection_lost</code> status.</p>
     */
    inline int GetConnectionLost() const{ return m_connectionLost; }

    /**
     * <p>The number of instances with <code>connection_lost</code> status.</p>
     */
    inline bool ConnectionLostHasBeenSet() const { return m_connectionLostHasBeenSet; }

    /**
     * <p>The number of instances with <code>connection_lost</code> status.</p>
     */
    inline void SetConnectionLost(int value) { m_connectionLostHasBeenSet = true; m_connectionLost = value; }

    /**
     * <p>The number of instances with <code>connection_lost</code> status.</p>
     */
    inline InstancesCount& WithConnectionLost(int value) { SetConnectionLost(value); return *this;}


    /**
     * <p>The number of instances in the Deregistering state.</p>
     */
    inline int GetDeregistering() const{ return m_deregistering; }

    /**
     * <p>The number of instances in the Deregistering state.</p>
     */
    inline bool DeregisteringHasBeenSet() const { return m_deregisteringHasBeenSet; }

    /**
     * <p>The number of instances in the Deregistering state.</p>
     */
    inline void SetDeregistering(int value) { m_deregisteringHasBeenSet = true; m_deregistering = value; }

    /**
     * <p>The number of instances in the Deregistering state.</p>
     */
    inline InstancesCount& WithDeregistering(int value) { SetDeregistering(value); return *this;}


    /**
     * <p>The number of instances with <code>online</code> status.</p>
     */
    inline int GetOnline() const{ return m_online; }

    /**
     * <p>The number of instances with <code>online</code> status.</p>
     */
    inline bool OnlineHasBeenSet() const { return m_onlineHasBeenSet; }

    /**
     * <p>The number of instances with <code>online</code> status.</p>
     */
    inline void SetOnline(int value) { m_onlineHasBeenSet = true; m_online = value; }

    /**
     * <p>The number of instances with <code>online</code> status.</p>
     */
    inline InstancesCount& WithOnline(int value) { SetOnline(value); return *this;}


    /**
     * <p>The number of instances with <code>pending</code> status.</p>
     */
    inline int GetPending() const{ return m_pending; }

    /**
     * <p>The number of instances with <code>pending</code> status.</p>
     */
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }

    /**
     * <p>The number of instances with <code>pending</code> status.</p>
     */
    inline void SetPending(int value) { m_pendingHasBeenSet = true; m_pending = value; }

    /**
     * <p>The number of instances with <code>pending</code> status.</p>
     */
    inline InstancesCount& WithPending(int value) { SetPending(value); return *this;}


    /**
     * <p>The number of instances with <code>rebooting</code> status.</p>
     */
    inline int GetRebooting() const{ return m_rebooting; }

    /**
     * <p>The number of instances with <code>rebooting</code> status.</p>
     */
    inline bool RebootingHasBeenSet() const { return m_rebootingHasBeenSet; }

    /**
     * <p>The number of instances with <code>rebooting</code> status.</p>
     */
    inline void SetRebooting(int value) { m_rebootingHasBeenSet = true; m_rebooting = value; }

    /**
     * <p>The number of instances with <code>rebooting</code> status.</p>
     */
    inline InstancesCount& WithRebooting(int value) { SetRebooting(value); return *this;}


    /**
     * <p>The number of instances in the Registered state.</p>
     */
    inline int GetRegistered() const{ return m_registered; }

    /**
     * <p>The number of instances in the Registered state.</p>
     */
    inline bool RegisteredHasBeenSet() const { return m_registeredHasBeenSet; }

    /**
     * <p>The number of instances in the Registered state.</p>
     */
    inline void SetRegistered(int value) { m_registeredHasBeenSet = true; m_registered = value; }

    /**
     * <p>The number of instances in the Registered state.</p>
     */
    inline InstancesCount& WithRegistered(int value) { SetRegistered(value); return *this;}


    /**
     * <p>The number of instances in the Registering state.</p>
     */
    inline int GetRegistering() const{ return m_registering; }

    /**
     * <p>The number of instances in the Registering state.</p>
     */
    inline bool RegisteringHasBeenSet() const { return m_registeringHasBeenSet; }

    /**
     * <p>The number of instances in the Registering state.</p>
     */
    inline void SetRegistering(int value) { m_registeringHasBeenSet = true; m_registering = value; }

    /**
     * <p>The number of instances in the Registering state.</p>
     */
    inline InstancesCount& WithRegistering(int value) { SetRegistering(value); return *this;}


    /**
     * <p>The number of instances with <code>requested</code> status.</p>
     */
    inline int GetRequested() const{ return m_requested; }

    /**
     * <p>The number of instances with <code>requested</code> status.</p>
     */
    inline bool RequestedHasBeenSet() const { return m_requestedHasBeenSet; }

    /**
     * <p>The number of instances with <code>requested</code> status.</p>
     */
    inline void SetRequested(int value) { m_requestedHasBeenSet = true; m_requested = value; }

    /**
     * <p>The number of instances with <code>requested</code> status.</p>
     */
    inline InstancesCount& WithRequested(int value) { SetRequested(value); return *this;}


    /**
     * <p>The number of instances with <code>running_setup</code> status.</p>
     */
    inline int GetRunningSetup() const{ return m_runningSetup; }

    /**
     * <p>The number of instances with <code>running_setup</code> status.</p>
     */
    inline bool RunningSetupHasBeenSet() const { return m_runningSetupHasBeenSet; }

    /**
     * <p>The number of instances with <code>running_setup</code> status.</p>
     */
    inline void SetRunningSetup(int value) { m_runningSetupHasBeenSet = true; m_runningSetup = value; }

    /**
     * <p>The number of instances with <code>running_setup</code> status.</p>
     */
    inline InstancesCount& WithRunningSetup(int value) { SetRunningSetup(value); return *this;}


    /**
     * <p>The number of instances with <code>setup_failed</code> status.</p>
     */
    inline int GetSetupFailed() const{ return m_setupFailed; }

    /**
     * <p>The number of instances with <code>setup_failed</code> status.</p>
     */
    inline bool SetupFailedHasBeenSet() const { return m_setupFailedHasBeenSet; }

    /**
     * <p>The number of instances with <code>setup_failed</code> status.</p>
     */
    inline void SetSetupFailed(int value) { m_setupFailedHasBeenSet = true; m_setupFailed = value; }

    /**
     * <p>The number of instances with <code>setup_failed</code> status.</p>
     */
    inline InstancesCount& WithSetupFailed(int value) { SetSetupFailed(value); return *this;}


    /**
     * <p>The number of instances with <code>shutting_down</code> status.</p>
     */
    inline int GetShuttingDown() const{ return m_shuttingDown; }

    /**
     * <p>The number of instances with <code>shutting_down</code> status.</p>
     */
    inline bool ShuttingDownHasBeenSet() const { return m_shuttingDownHasBeenSet; }

    /**
     * <p>The number of instances with <code>shutting_down</code> status.</p>
     */
    inline void SetShuttingDown(int value) { m_shuttingDownHasBeenSet = true; m_shuttingDown = value; }

    /**
     * <p>The number of instances with <code>shutting_down</code> status.</p>
     */
    inline InstancesCount& WithShuttingDown(int value) { SetShuttingDown(value); return *this;}


    /**
     * <p>The number of instances with <code>start_failed</code> status.</p>
     */
    inline int GetStartFailed() const{ return m_startFailed; }

    /**
     * <p>The number of instances with <code>start_failed</code> status.</p>
     */
    inline bool StartFailedHasBeenSet() const { return m_startFailedHasBeenSet; }

    /**
     * <p>The number of instances with <code>start_failed</code> status.</p>
     */
    inline void SetStartFailed(int value) { m_startFailedHasBeenSet = true; m_startFailed = value; }

    /**
     * <p>The number of instances with <code>start_failed</code> status.</p>
     */
    inline InstancesCount& WithStartFailed(int value) { SetStartFailed(value); return *this;}


    /**
     * <p>The number of instances with <code>stop_failed</code> status.</p>
     */
    inline int GetStopFailed() const{ return m_stopFailed; }

    /**
     * <p>The number of instances with <code>stop_failed</code> status.</p>
     */
    inline bool StopFailedHasBeenSet() const { return m_stopFailedHasBeenSet; }

    /**
     * <p>The number of instances with <code>stop_failed</code> status.</p>
     */
    inline void SetStopFailed(int value) { m_stopFailedHasBeenSet = true; m_stopFailed = value; }

    /**
     * <p>The number of instances with <code>stop_failed</code> status.</p>
     */
    inline InstancesCount& WithStopFailed(int value) { SetStopFailed(value); return *this;}


    /**
     * <p>The number of instances with <code>stopped</code> status.</p>
     */
    inline int GetStopped() const{ return m_stopped; }

    /**
     * <p>The number of instances with <code>stopped</code> status.</p>
     */
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }

    /**
     * <p>The number of instances with <code>stopped</code> status.</p>
     */
    inline void SetStopped(int value) { m_stoppedHasBeenSet = true; m_stopped = value; }

    /**
     * <p>The number of instances with <code>stopped</code> status.</p>
     */
    inline InstancesCount& WithStopped(int value) { SetStopped(value); return *this;}


    /**
     * <p>The number of instances with <code>stopping</code> status.</p>
     */
    inline int GetStopping() const{ return m_stopping; }

    /**
     * <p>The number of instances with <code>stopping</code> status.</p>
     */
    inline bool StoppingHasBeenSet() const { return m_stoppingHasBeenSet; }

    /**
     * <p>The number of instances with <code>stopping</code> status.</p>
     */
    inline void SetStopping(int value) { m_stoppingHasBeenSet = true; m_stopping = value; }

    /**
     * <p>The number of instances with <code>stopping</code> status.</p>
     */
    inline InstancesCount& WithStopping(int value) { SetStopping(value); return *this;}


    /**
     * <p>The number of instances with <code>terminated</code> status.</p>
     */
    inline int GetTerminated() const{ return m_terminated; }

    /**
     * <p>The number of instances with <code>terminated</code> status.</p>
     */
    inline bool TerminatedHasBeenSet() const { return m_terminatedHasBeenSet; }

    /**
     * <p>The number of instances with <code>terminated</code> status.</p>
     */
    inline void SetTerminated(int value) { m_terminatedHasBeenSet = true; m_terminated = value; }

    /**
     * <p>The number of instances with <code>terminated</code> status.</p>
     */
    inline InstancesCount& WithTerminated(int value) { SetTerminated(value); return *this;}


    /**
     * <p>The number of instances with <code>terminating</code> status.</p>
     */
    inline int GetTerminating() const{ return m_terminating; }

    /**
     * <p>The number of instances with <code>terminating</code> status.</p>
     */
    inline bool TerminatingHasBeenSet() const { return m_terminatingHasBeenSet; }

    /**
     * <p>The number of instances with <code>terminating</code> status.</p>
     */
    inline void SetTerminating(int value) { m_terminatingHasBeenSet = true; m_terminating = value; }

    /**
     * <p>The number of instances with <code>terminating</code> status.</p>
     */
    inline InstancesCount& WithTerminating(int value) { SetTerminating(value); return *this;}


    /**
     * <p>The number of instances in the Unassigning state.</p>
     */
    inline int GetUnassigning() const{ return m_unassigning; }

    /**
     * <p>The number of instances in the Unassigning state.</p>
     */
    inline bool UnassigningHasBeenSet() const { return m_unassigningHasBeenSet; }

    /**
     * <p>The number of instances in the Unassigning state.</p>
     */
    inline void SetUnassigning(int value) { m_unassigningHasBeenSet = true; m_unassigning = value; }

    /**
     * <p>The number of instances in the Unassigning state.</p>
     */
    inline InstancesCount& WithUnassigning(int value) { SetUnassigning(value); return *this;}

  private:

    int m_assigning;
    bool m_assigningHasBeenSet;

    int m_booting;
    bool m_bootingHasBeenSet;

    int m_connectionLost;
    bool m_connectionLostHasBeenSet;

    int m_deregistering;
    bool m_deregisteringHasBeenSet;

    int m_online;
    bool m_onlineHasBeenSet;

    int m_pending;
    bool m_pendingHasBeenSet;

    int m_rebooting;
    bool m_rebootingHasBeenSet;

    int m_registered;
    bool m_registeredHasBeenSet;

    int m_registering;
    bool m_registeringHasBeenSet;

    int m_requested;
    bool m_requestedHasBeenSet;

    int m_runningSetup;
    bool m_runningSetupHasBeenSet;

    int m_setupFailed;
    bool m_setupFailedHasBeenSet;

    int m_shuttingDown;
    bool m_shuttingDownHasBeenSet;

    int m_startFailed;
    bool m_startFailedHasBeenSet;

    int m_stopFailed;
    bool m_stopFailedHasBeenSet;

    int m_stopped;
    bool m_stoppedHasBeenSet;

    int m_stopping;
    bool m_stoppingHasBeenSet;

    int m_terminated;
    bool m_terminatedHasBeenSet;

    int m_terminating;
    bool m_terminatingHasBeenSet;

    int m_unassigning;
    bool m_unassigningHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
