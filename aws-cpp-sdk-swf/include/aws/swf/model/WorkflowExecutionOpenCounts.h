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
#include <aws/swf/SWF_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Contains the counts of open tasks, child workflow executions and timers for a
   * workflow execution.</p>
   */
  class AWS_SWF_API WorkflowExecutionOpenCounts
  {
  public:
    WorkflowExecutionOpenCounts();
    WorkflowExecutionOpenCounts(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkflowExecutionOpenCounts& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The count of activity tasks whose status is OPEN.</p>
     */
    inline long GetOpenActivityTasks() const{ return m_openActivityTasks; }

    /**
     * <p>The count of activity tasks whose status is OPEN.</p>
     */
    inline void SetOpenActivityTasks(long value) { m_openActivityTasksHasBeenSet = true; m_openActivityTasks = value; }

    /**
     * <p>The count of activity tasks whose status is OPEN.</p>
     */
    inline WorkflowExecutionOpenCounts& WithOpenActivityTasks(long value) { SetOpenActivityTasks(value); return *this;}

    /**
     * <p>The count of decision tasks whose status is OPEN. A workflow execution can
     * have at most one open decision task.</p>
     */
    inline long GetOpenDecisionTasks() const{ return m_openDecisionTasks; }

    /**
     * <p>The count of decision tasks whose status is OPEN. A workflow execution can
     * have at most one open decision task.</p>
     */
    inline void SetOpenDecisionTasks(long value) { m_openDecisionTasksHasBeenSet = true; m_openDecisionTasks = value; }

    /**
     * <p>The count of decision tasks whose status is OPEN. A workflow execution can
     * have at most one open decision task.</p>
     */
    inline WorkflowExecutionOpenCounts& WithOpenDecisionTasks(long value) { SetOpenDecisionTasks(value); return *this;}

    /**
     * <p>The count of timers started by this workflow execution that have not fired
     * yet.</p>
     */
    inline long GetOpenTimers() const{ return m_openTimers; }

    /**
     * <p>The count of timers started by this workflow execution that have not fired
     * yet.</p>
     */
    inline void SetOpenTimers(long value) { m_openTimersHasBeenSet = true; m_openTimers = value; }

    /**
     * <p>The count of timers started by this workflow execution that have not fired
     * yet.</p>
     */
    inline WorkflowExecutionOpenCounts& WithOpenTimers(long value) { SetOpenTimers(value); return *this;}

    /**
     * <p>The count of child workflow executions whose status is OPEN.</p>
     */
    inline long GetOpenChildWorkflowExecutions() const{ return m_openChildWorkflowExecutions; }

    /**
     * <p>The count of child workflow executions whose status is OPEN.</p>
     */
    inline void SetOpenChildWorkflowExecutions(long value) { m_openChildWorkflowExecutionsHasBeenSet = true; m_openChildWorkflowExecutions = value; }

    /**
     * <p>The count of child workflow executions whose status is OPEN.</p>
     */
    inline WorkflowExecutionOpenCounts& WithOpenChildWorkflowExecutions(long value) { SetOpenChildWorkflowExecutions(value); return *this;}

    /**
     * <p>The count of AWS Lambda functions that are currently executing.</p>
     */
    inline long GetOpenLambdaFunctions() const{ return m_openLambdaFunctions; }

    /**
     * <p>The count of AWS Lambda functions that are currently executing.</p>
     */
    inline void SetOpenLambdaFunctions(long value) { m_openLambdaFunctionsHasBeenSet = true; m_openLambdaFunctions = value; }

    /**
     * <p>The count of AWS Lambda functions that are currently executing.</p>
     */
    inline WorkflowExecutionOpenCounts& WithOpenLambdaFunctions(long value) { SetOpenLambdaFunctions(value); return *this;}

  private:
    long m_openActivityTasks;
    bool m_openActivityTasksHasBeenSet;
    long m_openDecisionTasks;
    bool m_openDecisionTasksHasBeenSet;
    long m_openTimers;
    bool m_openTimersHasBeenSet;
    long m_openChildWorkflowExecutions;
    bool m_openChildWorkflowExecutionsHasBeenSet;
    long m_openLambdaFunctions;
    bool m_openLambdaFunctionsHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
