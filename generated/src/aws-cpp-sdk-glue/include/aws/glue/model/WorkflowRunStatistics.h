/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>Workflow run statistics provides statistics about the workflow
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/WorkflowRunStatistics">AWS
   * API Reference</a></p>
   */
  class WorkflowRunStatistics
  {
  public:
    AWS_GLUE_API WorkflowRunStatistics();
    AWS_GLUE_API WorkflowRunStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API WorkflowRunStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Total number of Actions in the workflow run.</p>
     */
    inline int GetTotalActions() const{ return m_totalActions; }

    /**
     * <p>Total number of Actions in the workflow run.</p>
     */
    inline bool TotalActionsHasBeenSet() const { return m_totalActionsHasBeenSet; }

    /**
     * <p>Total number of Actions in the workflow run.</p>
     */
    inline void SetTotalActions(int value) { m_totalActionsHasBeenSet = true; m_totalActions = value; }

    /**
     * <p>Total number of Actions in the workflow run.</p>
     */
    inline WorkflowRunStatistics& WithTotalActions(int value) { SetTotalActions(value); return *this;}


    /**
     * <p>Total number of Actions that timed out.</p>
     */
    inline int GetTimeoutActions() const{ return m_timeoutActions; }

    /**
     * <p>Total number of Actions that timed out.</p>
     */
    inline bool TimeoutActionsHasBeenSet() const { return m_timeoutActionsHasBeenSet; }

    /**
     * <p>Total number of Actions that timed out.</p>
     */
    inline void SetTimeoutActions(int value) { m_timeoutActionsHasBeenSet = true; m_timeoutActions = value; }

    /**
     * <p>Total number of Actions that timed out.</p>
     */
    inline WorkflowRunStatistics& WithTimeoutActions(int value) { SetTimeoutActions(value); return *this;}


    /**
     * <p>Total number of Actions that have failed.</p>
     */
    inline int GetFailedActions() const{ return m_failedActions; }

    /**
     * <p>Total number of Actions that have failed.</p>
     */
    inline bool FailedActionsHasBeenSet() const { return m_failedActionsHasBeenSet; }

    /**
     * <p>Total number of Actions that have failed.</p>
     */
    inline void SetFailedActions(int value) { m_failedActionsHasBeenSet = true; m_failedActions = value; }

    /**
     * <p>Total number of Actions that have failed.</p>
     */
    inline WorkflowRunStatistics& WithFailedActions(int value) { SetFailedActions(value); return *this;}


    /**
     * <p>Total number of Actions that have stopped.</p>
     */
    inline int GetStoppedActions() const{ return m_stoppedActions; }

    /**
     * <p>Total number of Actions that have stopped.</p>
     */
    inline bool StoppedActionsHasBeenSet() const { return m_stoppedActionsHasBeenSet; }

    /**
     * <p>Total number of Actions that have stopped.</p>
     */
    inline void SetStoppedActions(int value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions = value; }

    /**
     * <p>Total number of Actions that have stopped.</p>
     */
    inline WorkflowRunStatistics& WithStoppedActions(int value) { SetStoppedActions(value); return *this;}


    /**
     * <p>Total number of Actions that have succeeded.</p>
     */
    inline int GetSucceededActions() const{ return m_succeededActions; }

    /**
     * <p>Total number of Actions that have succeeded.</p>
     */
    inline bool SucceededActionsHasBeenSet() const { return m_succeededActionsHasBeenSet; }

    /**
     * <p>Total number of Actions that have succeeded.</p>
     */
    inline void SetSucceededActions(int value) { m_succeededActionsHasBeenSet = true; m_succeededActions = value; }

    /**
     * <p>Total number of Actions that have succeeded.</p>
     */
    inline WorkflowRunStatistics& WithSucceededActions(int value) { SetSucceededActions(value); return *this;}


    /**
     * <p>Total number Actions in running state.</p>
     */
    inline int GetRunningActions() const{ return m_runningActions; }

    /**
     * <p>Total number Actions in running state.</p>
     */
    inline bool RunningActionsHasBeenSet() const { return m_runningActionsHasBeenSet; }

    /**
     * <p>Total number Actions in running state.</p>
     */
    inline void SetRunningActions(int value) { m_runningActionsHasBeenSet = true; m_runningActions = value; }

    /**
     * <p>Total number Actions in running state.</p>
     */
    inline WorkflowRunStatistics& WithRunningActions(int value) { SetRunningActions(value); return *this;}


    /**
     * <p>Indicates the count of job runs in the ERROR state in the workflow run.</p>
     */
    inline int GetErroredActions() const{ return m_erroredActions; }

    /**
     * <p>Indicates the count of job runs in the ERROR state in the workflow run.</p>
     */
    inline bool ErroredActionsHasBeenSet() const { return m_erroredActionsHasBeenSet; }

    /**
     * <p>Indicates the count of job runs in the ERROR state in the workflow run.</p>
     */
    inline void SetErroredActions(int value) { m_erroredActionsHasBeenSet = true; m_erroredActions = value; }

    /**
     * <p>Indicates the count of job runs in the ERROR state in the workflow run.</p>
     */
    inline WorkflowRunStatistics& WithErroredActions(int value) { SetErroredActions(value); return *this;}


    /**
     * <p>Indicates the count of job runs in WAITING state in the workflow run.</p>
     */
    inline int GetWaitingActions() const{ return m_waitingActions; }

    /**
     * <p>Indicates the count of job runs in WAITING state in the workflow run.</p>
     */
    inline bool WaitingActionsHasBeenSet() const { return m_waitingActionsHasBeenSet; }

    /**
     * <p>Indicates the count of job runs in WAITING state in the workflow run.</p>
     */
    inline void SetWaitingActions(int value) { m_waitingActionsHasBeenSet = true; m_waitingActions = value; }

    /**
     * <p>Indicates the count of job runs in WAITING state in the workflow run.</p>
     */
    inline WorkflowRunStatistics& WithWaitingActions(int value) { SetWaitingActions(value); return *this;}

  private:

    int m_totalActions;
    bool m_totalActionsHasBeenSet = false;

    int m_timeoutActions;
    bool m_timeoutActionsHasBeenSet = false;

    int m_failedActions;
    bool m_failedActionsHasBeenSet = false;

    int m_stoppedActions;
    bool m_stoppedActionsHasBeenSet = false;

    int m_succeededActions;
    bool m_succeededActionsHasBeenSet = false;

    int m_runningActions;
    bool m_runningActionsHasBeenSet = false;

    int m_erroredActions;
    bool m_erroredActionsHasBeenSet = false;

    int m_waitingActions;
    bool m_waitingActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
