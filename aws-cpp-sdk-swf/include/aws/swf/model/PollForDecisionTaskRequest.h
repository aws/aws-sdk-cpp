﻿/*
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
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/TaskList.h>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API PollForDecisionTaskRequest : public SWFRequest
  {
  public:
    PollForDecisionTaskRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline PollForDecisionTaskRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline PollForDecisionTaskRequest& WithDomain(Aws::String&& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline PollForDecisionTaskRequest& WithDomain(const char* value) { SetDomain(value); return *this;}

    /**
     * <p>Specifies the task list to poll for decision tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }

    /**
     * <p>Specifies the task list to poll for decision tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>Specifies the task list to poll for decision tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>Specifies the task list to poll for decision tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline PollForDecisionTaskRequest& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}

    /**
     * <p>Specifies the task list to poll for decision tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline PollForDecisionTaskRequest& WithTaskList(TaskList&& value) { SetTaskList(value); return *this;}

    /**
     * <p>Identity of the decider making the request, which is recorded in the
     * DecisionTaskStarted event in the workflow history. This enables diagnostic
     * tracing when problems arise. The form of this identity is user defined.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>Identity of the decider making the request, which is recorded in the
     * DecisionTaskStarted event in the workflow history. This enables diagnostic
     * tracing when problems arise. The form of this identity is user defined.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>Identity of the decider making the request, which is recorded in the
     * DecisionTaskStarted event in the workflow history. This enables diagnostic
     * tracing when problems arise. The form of this identity is user defined.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>Identity of the decider making the request, which is recorded in the
     * DecisionTaskStarted event in the workflow history. This enables diagnostic
     * tracing when problems arise. The form of this identity is user defined.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>Identity of the decider making the request, which is recorded in the
     * DecisionTaskStarted event in the workflow history. This enables diagnostic
     * tracing when problems arise. The form of this identity is user defined.</p>
     */
    inline PollForDecisionTaskRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>Identity of the decider making the request, which is recorded in the
     * DecisionTaskStarted event in the workflow history. This enables diagnostic
     * tracing when problems arise. The form of this identity is user defined.</p>
     */
    inline PollForDecisionTaskRequest& WithIdentity(Aws::String&& value) { SetIdentity(value); return *this;}

    /**
     * <p>Identity of the decider making the request, which is recorded in the
     * DecisionTaskStarted event in the workflow history. This enables diagnostic
     * tracing when problems arise. The form of this identity is user defined.</p>
     */
    inline PollForDecisionTaskRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p> <note>The
     * <code>nextPageToken</code> returned by this action cannot be used with
     * <a>GetWorkflowExecutionHistory</a> to get the next page. You must call
     * <a>PollForDecisionTask</a> again (with the <code>nextPageToken</code>) to
     * retrieve the next page of history records. Calling <a>PollForDecisionTask</a>
     * with a <code>nextPageToken</code> will not return a new decision task.</note>.
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p> <note>The
     * <code>nextPageToken</code> returned by this action cannot be used with
     * <a>GetWorkflowExecutionHistory</a> to get the next page. You must call
     * <a>PollForDecisionTask</a> again (with the <code>nextPageToken</code>) to
     * retrieve the next page of history records. Calling <a>PollForDecisionTask</a>
     * with a <code>nextPageToken</code> will not return a new decision task.</note>.
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p> <note>The
     * <code>nextPageToken</code> returned by this action cannot be used with
     * <a>GetWorkflowExecutionHistory</a> to get the next page. You must call
     * <a>PollForDecisionTask</a> again (with the <code>nextPageToken</code>) to
     * retrieve the next page of history records. Calling <a>PollForDecisionTask</a>
     * with a <code>nextPageToken</code> will not return a new decision task.</note>.
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p> <note>The
     * <code>nextPageToken</code> returned by this action cannot be used with
     * <a>GetWorkflowExecutionHistory</a> to get the next page. You must call
     * <a>PollForDecisionTask</a> again (with the <code>nextPageToken</code>) to
     * retrieve the next page of history records. Calling <a>PollForDecisionTask</a>
     * with a <code>nextPageToken</code> will not return a new decision task.</note>.
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p> <note>The
     * <code>nextPageToken</code> returned by this action cannot be used with
     * <a>GetWorkflowExecutionHistory</a> to get the next page. You must call
     * <a>PollForDecisionTask</a> again (with the <code>nextPageToken</code>) to
     * retrieve the next page of history records. Calling <a>PollForDecisionTask</a>
     * with a <code>nextPageToken</code> will not return a new decision task.</note>.
     */
    inline PollForDecisionTaskRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p> <note>The
     * <code>nextPageToken</code> returned by this action cannot be used with
     * <a>GetWorkflowExecutionHistory</a> to get the next page. You must call
     * <a>PollForDecisionTask</a> again (with the <code>nextPageToken</code>) to
     * retrieve the next page of history records. Calling <a>PollForDecisionTask</a>
     * with a <code>nextPageToken</code> will not return a new decision task.</note>.
     */
    inline PollForDecisionTaskRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p> <note>The
     * <code>nextPageToken</code> returned by this action cannot be used with
     * <a>GetWorkflowExecutionHistory</a> to get the next page. You must call
     * <a>PollForDecisionTask</a> again (with the <code>nextPageToken</code>) to
     * retrieve the next page of history records. Calling <a>PollForDecisionTask</a>
     * with a <code>nextPageToken</code> will not return a new decision task.</note>.
     */
    inline PollForDecisionTaskRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The maximum number of results that will be returned per call.
     * <code>nextPageToken</code> can be used to obtain futher pages of results. The
     * default is 1000, which is the maximum allowed page size. You can, however,
     * specify a page size <i>smaller</i> than the maximum.</p> <p>This is an upper
     * limit only; the actual number of results returned per call may be fewer than the
     * specified maximum.</p>
     */
    inline int GetMaximumPageSize() const{ return m_maximumPageSize; }

    /**
     * <p>The maximum number of results that will be returned per call.
     * <code>nextPageToken</code> can be used to obtain futher pages of results. The
     * default is 1000, which is the maximum allowed page size. You can, however,
     * specify a page size <i>smaller</i> than the maximum.</p> <p>This is an upper
     * limit only; the actual number of results returned per call may be fewer than the
     * specified maximum.</p>
     */
    inline void SetMaximumPageSize(int value) { m_maximumPageSizeHasBeenSet = true; m_maximumPageSize = value; }

    /**
     * <p>The maximum number of results that will be returned per call.
     * <code>nextPageToken</code> can be used to obtain futher pages of results. The
     * default is 1000, which is the maximum allowed page size. You can, however,
     * specify a page size <i>smaller</i> than the maximum.</p> <p>This is an upper
     * limit only; the actual number of results returned per call may be fewer than the
     * specified maximum.</p>
     */
    inline PollForDecisionTaskRequest& WithMaximumPageSize(int value) { SetMaximumPageSize(value); return *this;}

    /**
     * <p>When set to <code>true</code>, returns the events in reverse order. By
     * default the results are returned in ascending order of the
     * <code>eventTimestamp</code> of the events.</p>
     */
    inline bool GetReverseOrder() const{ return m_reverseOrder; }

    /**
     * <p>When set to <code>true</code>, returns the events in reverse order. By
     * default the results are returned in ascending order of the
     * <code>eventTimestamp</code> of the events.</p>
     */
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }

    /**
     * <p>When set to <code>true</code>, returns the events in reverse order. By
     * default the results are returned in ascending order of the
     * <code>eventTimestamp</code> of the events.</p>
     */
    inline PollForDecisionTaskRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}

  private:
    Aws::String m_domain;
    bool m_domainHasBeenSet;
    TaskList m_taskList;
    bool m_taskListHasBeenSet;
    Aws::String m_identity;
    bool m_identityHasBeenSet;
    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet;
    int m_maximumPageSize;
    bool m_maximumPageSizeHasBeenSet;
    bool m_reverseOrder;
    bool m_reverseOrderHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
