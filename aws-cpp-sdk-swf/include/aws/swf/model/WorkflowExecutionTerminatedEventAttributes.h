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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/ChildPolicy.h>
#include <aws/swf/model/WorkflowExecutionTerminatedCause.h>

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
   * <p>Provides details of the <code>WorkflowExecutionTerminated</code> event.</p>
   */
  class AWS_SWF_API WorkflowExecutionTerminatedEventAttributes
  {
  public:
    WorkflowExecutionTerminatedEventAttributes();
    WorkflowExecutionTerminatedEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkflowExecutionTerminatedEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The reason provided for the termination (if any).</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason provided for the termination (if any).</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason provided for the termination (if any).</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason provided for the termination (if any).</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason provided for the termination (if any).</p>
     */
    inline WorkflowExecutionTerminatedEventAttributes& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason provided for the termination (if any).</p>
     */
    inline WorkflowExecutionTerminatedEventAttributes& WithReason(Aws::String&& value) { SetReason(value); return *this;}

    /**
     * <p>The reason provided for the termination (if any).</p>
     */
    inline WorkflowExecutionTerminatedEventAttributes& WithReason(const char* value) { SetReason(value); return *this;}

    /**
     * <p>The details provided for the termination (if any).</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>The details provided for the termination (if any).</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The details provided for the termination (if any).</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The details provided for the termination (if any).</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>The details provided for the termination (if any).</p>
     */
    inline WorkflowExecutionTerminatedEventAttributes& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>The details provided for the termination (if any).</p>
     */
    inline WorkflowExecutionTerminatedEventAttributes& WithDetails(Aws::String&& value) { SetDetails(value); return *this;}

    /**
     * <p>The details provided for the termination (if any).</p>
     */
    inline WorkflowExecutionTerminatedEventAttributes& WithDetails(const char* value) { SetDetails(value); return *this;}

    /**
     * <p>The policy used for the child workflow executions of this workflow
     * execution.</p> <p>The supported child policies are:</p> <ul>
     * <li><b>TERMINATE:</b> the child executions will be terminated.</li>
     * <li><b>REQUEST_CANCEL:</b> a request to cancel will be attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</li> <li><b>ABANDON:</b> no
     * action will be taken. The child executions will continue to run.</li> </ul>
     */
    inline const ChildPolicy& GetChildPolicy() const{ return m_childPolicy; }

    /**
     * <p>The policy used for the child workflow executions of this workflow
     * execution.</p> <p>The supported child policies are:</p> <ul>
     * <li><b>TERMINATE:</b> the child executions will be terminated.</li>
     * <li><b>REQUEST_CANCEL:</b> a request to cancel will be attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</li> <li><b>ABANDON:</b> no
     * action will be taken. The child executions will continue to run.</li> </ul>
     */
    inline void SetChildPolicy(const ChildPolicy& value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }

    /**
     * <p>The policy used for the child workflow executions of this workflow
     * execution.</p> <p>The supported child policies are:</p> <ul>
     * <li><b>TERMINATE:</b> the child executions will be terminated.</li>
     * <li><b>REQUEST_CANCEL:</b> a request to cancel will be attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</li> <li><b>ABANDON:</b> no
     * action will be taken. The child executions will continue to run.</li> </ul>
     */
    inline void SetChildPolicy(ChildPolicy&& value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }

    /**
     * <p>The policy used for the child workflow executions of this workflow
     * execution.</p> <p>The supported child policies are:</p> <ul>
     * <li><b>TERMINATE:</b> the child executions will be terminated.</li>
     * <li><b>REQUEST_CANCEL:</b> a request to cancel will be attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</li> <li><b>ABANDON:</b> no
     * action will be taken. The child executions will continue to run.</li> </ul>
     */
    inline WorkflowExecutionTerminatedEventAttributes& WithChildPolicy(const ChildPolicy& value) { SetChildPolicy(value); return *this;}

    /**
     * <p>The policy used for the child workflow executions of this workflow
     * execution.</p> <p>The supported child policies are:</p> <ul>
     * <li><b>TERMINATE:</b> the child executions will be terminated.</li>
     * <li><b>REQUEST_CANCEL:</b> a request to cancel will be attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</li> <li><b>ABANDON:</b> no
     * action will be taken. The child executions will continue to run.</li> </ul>
     */
    inline WorkflowExecutionTerminatedEventAttributes& WithChildPolicy(ChildPolicy&& value) { SetChildPolicy(value); return *this;}

    /**
     * <p>If set, indicates that the workflow execution was automatically terminated,
     * and specifies the cause. This happens if the parent workflow execution times out
     * or is terminated and the child policy is set to terminate child executions.</p>
     */
    inline const WorkflowExecutionTerminatedCause& GetCause() const{ return m_cause; }

    /**
     * <p>If set, indicates that the workflow execution was automatically terminated,
     * and specifies the cause. This happens if the parent workflow execution times out
     * or is terminated and the child policy is set to terminate child executions.</p>
     */
    inline void SetCause(const WorkflowExecutionTerminatedCause& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>If set, indicates that the workflow execution was automatically terminated,
     * and specifies the cause. This happens if the parent workflow execution times out
     * or is terminated and the child policy is set to terminate child executions.</p>
     */
    inline void SetCause(WorkflowExecutionTerminatedCause&& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>If set, indicates that the workflow execution was automatically terminated,
     * and specifies the cause. This happens if the parent workflow execution times out
     * or is terminated and the child policy is set to terminate child executions.</p>
     */
    inline WorkflowExecutionTerminatedEventAttributes& WithCause(const WorkflowExecutionTerminatedCause& value) { SetCause(value); return *this;}

    /**
     * <p>If set, indicates that the workflow execution was automatically terminated,
     * and specifies the cause. This happens if the parent workflow execution times out
     * or is terminated and the child policy is set to terminate child executions.</p>
     */
    inline WorkflowExecutionTerminatedEventAttributes& WithCause(WorkflowExecutionTerminatedCause&& value) { SetCause(value); return *this;}

  private:
    Aws::String m_reason;
    bool m_reasonHasBeenSet;
    Aws::String m_details;
    bool m_detailsHasBeenSet;
    ChildPolicy m_childPolicy;
    bool m_childPolicyHasBeenSet;
    WorkflowExecutionTerminatedCause m_cause;
    bool m_causeHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
