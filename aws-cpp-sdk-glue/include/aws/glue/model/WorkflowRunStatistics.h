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
  class AWS_GLUE_API WorkflowRunStatistics
  {
  public:
    WorkflowRunStatistics();
    WorkflowRunStatistics(Aws::Utils::Json::JsonView jsonValue);
    WorkflowRunStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Total number of Actions which timed out.</p>
     */
    inline int GetTimeoutActions() const{ return m_timeoutActions; }

    /**
     * <p>Total number of Actions which timed out.</p>
     */
    inline bool TimeoutActionsHasBeenSet() const { return m_timeoutActionsHasBeenSet; }

    /**
     * <p>Total number of Actions which timed out.</p>
     */
    inline void SetTimeoutActions(int value) { m_timeoutActionsHasBeenSet = true; m_timeoutActions = value; }

    /**
     * <p>Total number of Actions which timed out.</p>
     */
    inline WorkflowRunStatistics& WithTimeoutActions(int value) { SetTimeoutActions(value); return *this;}


    /**
     * <p>Total number of Actions which have failed.</p>
     */
    inline int GetFailedActions() const{ return m_failedActions; }

    /**
     * <p>Total number of Actions which have failed.</p>
     */
    inline bool FailedActionsHasBeenSet() const { return m_failedActionsHasBeenSet; }

    /**
     * <p>Total number of Actions which have failed.</p>
     */
    inline void SetFailedActions(int value) { m_failedActionsHasBeenSet = true; m_failedActions = value; }

    /**
     * <p>Total number of Actions which have failed.</p>
     */
    inline WorkflowRunStatistics& WithFailedActions(int value) { SetFailedActions(value); return *this;}


    /**
     * <p>Total number of Actions which have stopped.</p>
     */
    inline int GetStoppedActions() const{ return m_stoppedActions; }

    /**
     * <p>Total number of Actions which have stopped.</p>
     */
    inline bool StoppedActionsHasBeenSet() const { return m_stoppedActionsHasBeenSet; }

    /**
     * <p>Total number of Actions which have stopped.</p>
     */
    inline void SetStoppedActions(int value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions = value; }

    /**
     * <p>Total number of Actions which have stopped.</p>
     */
    inline WorkflowRunStatistics& WithStoppedActions(int value) { SetStoppedActions(value); return *this;}


    /**
     * <p>Total number of Actions which have succeeded.</p>
     */
    inline int GetSucceededActions() const{ return m_succeededActions; }

    /**
     * <p>Total number of Actions which have succeeded.</p>
     */
    inline bool SucceededActionsHasBeenSet() const { return m_succeededActionsHasBeenSet; }

    /**
     * <p>Total number of Actions which have succeeded.</p>
     */
    inline void SetSucceededActions(int value) { m_succeededActionsHasBeenSet = true; m_succeededActions = value; }

    /**
     * <p>Total number of Actions which have succeeded.</p>
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

  private:

    int m_totalActions;
    bool m_totalActionsHasBeenSet;

    int m_timeoutActions;
    bool m_timeoutActionsHasBeenSet;

    int m_failedActions;
    bool m_failedActionsHasBeenSet;

    int m_stoppedActions;
    bool m_stoppedActionsHasBeenSet;

    int m_succeededActions;
    bool m_succeededActionsHasBeenSet;

    int m_runningActions;
    bool m_runningActionsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
