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
#include <aws/swf/model/WorkflowExecutionTimeoutType.h>
#include <aws/swf/model/ChildPolicy.h>

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
   * <p>Provides details of the <code>WorkflowExecutionTimedOut</code> event.</p>
   */
  class AWS_SWF_API WorkflowExecutionTimedOutEventAttributes
  {
  public:
    WorkflowExecutionTimedOutEventAttributes();
    WorkflowExecutionTimedOutEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkflowExecutionTimedOutEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of timeout that caused this event.</p>
     */
    inline const WorkflowExecutionTimeoutType& GetTimeoutType() const{ return m_timeoutType; }

    /**
     * <p>The type of timeout that caused this event.</p>
     */
    inline void SetTimeoutType(const WorkflowExecutionTimeoutType& value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = value; }

    /**
     * <p>The type of timeout that caused this event.</p>
     */
    inline void SetTimeoutType(WorkflowExecutionTimeoutType&& value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = value; }

    /**
     * <p>The type of timeout that caused this event.</p>
     */
    inline WorkflowExecutionTimedOutEventAttributes& WithTimeoutType(const WorkflowExecutionTimeoutType& value) { SetTimeoutType(value); return *this;}

    /**
     * <p>The type of timeout that caused this event.</p>
     */
    inline WorkflowExecutionTimedOutEventAttributes& WithTimeoutType(WorkflowExecutionTimeoutType&& value) { SetTimeoutType(value); return *this;}

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
    inline WorkflowExecutionTimedOutEventAttributes& WithChildPolicy(const ChildPolicy& value) { SetChildPolicy(value); return *this;}

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
    inline WorkflowExecutionTimedOutEventAttributes& WithChildPolicy(ChildPolicy&& value) { SetChildPolicy(value); return *this;}

  private:
    WorkflowExecutionTimeoutType m_timeoutType;
    bool m_timeoutTypeHasBeenSet;
    ChildPolicy m_childPolicy;
    bool m_childPolicyHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
