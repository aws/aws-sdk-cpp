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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/ChildPolicy.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API TerminateWorkflowExecutionRequest : public SWFRequest
  {
  public:
    TerminateWorkflowExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TerminateWorkflowExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The domain of the workflow execution to terminate.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain of the workflow execution to terminate.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain of the workflow execution to terminate.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain of the workflow execution to terminate.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain of the workflow execution to terminate.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain of the workflow execution to terminate.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain of the workflow execution to terminate.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain of the workflow execution to terminate.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The workflowId of the workflow execution to terminate.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The workflowId of the workflow execution to terminate.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>The workflowId of the workflow execution to terminate.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The workflowId of the workflow execution to terminate.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The workflowId of the workflow execution to terminate.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The workflowId of the workflow execution to terminate.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The workflowId of the workflow execution to terminate.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The workflowId of the workflow execution to terminate.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The runId of the workflow execution to terminate.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The runId of the workflow execution to terminate.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The runId of the workflow execution to terminate.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The runId of the workflow execution to terminate.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The runId of the workflow execution to terminate.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The runId of the workflow execution to terminate.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The runId of the workflow execution to terminate.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The runId of the workflow execution to terminate.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p> A descriptive reason for terminating the workflow execution.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p> A descriptive reason for terminating the workflow execution.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p> A descriptive reason for terminating the workflow execution.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p> A descriptive reason for terminating the workflow execution.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p> A descriptive reason for terminating the workflow execution.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p> A descriptive reason for terminating the workflow execution.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p> A descriptive reason for terminating the workflow execution.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p> A descriptive reason for terminating the workflow execution.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p> Details for terminating the workflow execution.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p> Details for terminating the workflow execution.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p> Details for terminating the workflow execution.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p> Details for terminating the workflow execution.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p> Details for terminating the workflow execution.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p> Details for terminating the workflow execution.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p> Details for terminating the workflow execution.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p> Details for terminating the workflow execution.</p>
     */
    inline TerminateWorkflowExecutionRequest& WithDetails(const char* value) { SetDetails(value); return *this;}


    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * workflow execution being terminated. This policy overrides the child policy
     * specified for the workflow execution at registration time or when starting the
     * execution.</p> <p>The supported child policies are:</p> <ul> <li> <p>
     * <code>TERMINATE</code> – The child executions are terminated.</p> </li> <li> <p>
     * <code>REQUEST_CANCEL</code> – A request to cancel is attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</p> </li> <li> <p>
     * <code>ABANDON</code> – No action is taken. The child executions continue to
     * run.</p> </li> </ul> <note> <p>A child policy for this workflow execution must
     * be specified either as a default for the workflow type or through this
     * parameter. If neither this parameter is set nor a default child policy was
     * specified at registration time then a fault is returned.</p> </note>
     */
    inline const ChildPolicy& GetChildPolicy() const{ return m_childPolicy; }

    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * workflow execution being terminated. This policy overrides the child policy
     * specified for the workflow execution at registration time or when starting the
     * execution.</p> <p>The supported child policies are:</p> <ul> <li> <p>
     * <code>TERMINATE</code> – The child executions are terminated.</p> </li> <li> <p>
     * <code>REQUEST_CANCEL</code> – A request to cancel is attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</p> </li> <li> <p>
     * <code>ABANDON</code> – No action is taken. The child executions continue to
     * run.</p> </li> </ul> <note> <p>A child policy for this workflow execution must
     * be specified either as a default for the workflow type or through this
     * parameter. If neither this parameter is set nor a default child policy was
     * specified at registration time then a fault is returned.</p> </note>
     */
    inline bool ChildPolicyHasBeenSet() const { return m_childPolicyHasBeenSet; }

    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * workflow execution being terminated. This policy overrides the child policy
     * specified for the workflow execution at registration time or when starting the
     * execution.</p> <p>The supported child policies are:</p> <ul> <li> <p>
     * <code>TERMINATE</code> – The child executions are terminated.</p> </li> <li> <p>
     * <code>REQUEST_CANCEL</code> – A request to cancel is attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</p> </li> <li> <p>
     * <code>ABANDON</code> – No action is taken. The child executions continue to
     * run.</p> </li> </ul> <note> <p>A child policy for this workflow execution must
     * be specified either as a default for the workflow type or through this
     * parameter. If neither this parameter is set nor a default child policy was
     * specified at registration time then a fault is returned.</p> </note>
     */
    inline void SetChildPolicy(const ChildPolicy& value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }

    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * workflow execution being terminated. This policy overrides the child policy
     * specified for the workflow execution at registration time or when starting the
     * execution.</p> <p>The supported child policies are:</p> <ul> <li> <p>
     * <code>TERMINATE</code> – The child executions are terminated.</p> </li> <li> <p>
     * <code>REQUEST_CANCEL</code> – A request to cancel is attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</p> </li> <li> <p>
     * <code>ABANDON</code> – No action is taken. The child executions continue to
     * run.</p> </li> </ul> <note> <p>A child policy for this workflow execution must
     * be specified either as a default for the workflow type or through this
     * parameter. If neither this parameter is set nor a default child policy was
     * specified at registration time then a fault is returned.</p> </note>
     */
    inline void SetChildPolicy(ChildPolicy&& value) { m_childPolicyHasBeenSet = true; m_childPolicy = std::move(value); }

    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * workflow execution being terminated. This policy overrides the child policy
     * specified for the workflow execution at registration time or when starting the
     * execution.</p> <p>The supported child policies are:</p> <ul> <li> <p>
     * <code>TERMINATE</code> – The child executions are terminated.</p> </li> <li> <p>
     * <code>REQUEST_CANCEL</code> – A request to cancel is attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</p> </li> <li> <p>
     * <code>ABANDON</code> – No action is taken. The child executions continue to
     * run.</p> </li> </ul> <note> <p>A child policy for this workflow execution must
     * be specified either as a default for the workflow type or through this
     * parameter. If neither this parameter is set nor a default child policy was
     * specified at registration time then a fault is returned.</p> </note>
     */
    inline TerminateWorkflowExecutionRequest& WithChildPolicy(const ChildPolicy& value) { SetChildPolicy(value); return *this;}

    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * workflow execution being terminated. This policy overrides the child policy
     * specified for the workflow execution at registration time or when starting the
     * execution.</p> <p>The supported child policies are:</p> <ul> <li> <p>
     * <code>TERMINATE</code> – The child executions are terminated.</p> </li> <li> <p>
     * <code>REQUEST_CANCEL</code> – A request to cancel is attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</p> </li> <li> <p>
     * <code>ABANDON</code> – No action is taken. The child executions continue to
     * run.</p> </li> </ul> <note> <p>A child policy for this workflow execution must
     * be specified either as a default for the workflow type or through this
     * parameter. If neither this parameter is set nor a default child policy was
     * specified at registration time then a fault is returned.</p> </note>
     */
    inline TerminateWorkflowExecutionRequest& WithChildPolicy(ChildPolicy&& value) { SetChildPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet;

    Aws::String m_runId;
    bool m_runIdHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;

    Aws::String m_details;
    bool m_detailsHasBeenSet;

    ChildPolicy m_childPolicy;
    bool m_childPolicyHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
