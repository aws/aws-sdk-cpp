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
#include <aws/swf/model/TaskList.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PollForDecisionTask"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

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
    inline PollForDecisionTaskRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline PollForDecisionTaskRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>Specifies the task list to poll for decision tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must not <i>be</i> the literal string
     * <code>arn</code>.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }

    /**
     * <p>Specifies the task list to poll for decision tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must not <i>be</i> the literal string
     * <code>arn</code>.</p>
     */
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }

    /**
     * <p>Specifies the task list to poll for decision tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must not <i>be</i> the literal string
     * <code>arn</code>.</p>
     */
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>Specifies the task list to poll for decision tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must not <i>be</i> the literal string
     * <code>arn</code>.</p>
     */
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = std::move(value); }

    /**
     * <p>Specifies the task list to poll for decision tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must not <i>be</i> the literal string
     * <code>arn</code>.</p>
     */
    inline PollForDecisionTaskRequest& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}

    /**
     * <p>Specifies the task list to poll for decision tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must not <i>be</i> the literal string
     * <code>arn</code>.</p>
     */
    inline PollForDecisionTaskRequest& WithTaskList(TaskList&& value) { SetTaskList(std::move(value)); return *this;}


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
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }

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
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }

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
    inline PollForDecisionTaskRequest& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}

    /**
     * <p>Identity of the decider making the request, which is recorded in the
     * DecisionTaskStarted event in the workflow history. This enables diagnostic
     * tracing when problems arise. The form of this identity is user defined.</p>
     */
    inline PollForDecisionTaskRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}


    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 60
     * seconds. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p> <note> <p>The <code>nextPageToken</code>
     * returned by this action cannot be used with <a>GetWorkflowExecutionHistory</a>
     * to get the next page. You must call <a>PollForDecisionTask</a> again (with the
     * <code>nextPageToken</code>) to retrieve the next page of history records.
     * Calling <a>PollForDecisionTask</a> with a <code>nextPageToken</code> doesn't
     * return a new decision task.</p> </note>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 60
     * seconds. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p> <note> <p>The <code>nextPageToken</code>
     * returned by this action cannot be used with <a>GetWorkflowExecutionHistory</a>
     * to get the next page. You must call <a>PollForDecisionTask</a> again (with the
     * <code>nextPageToken</code>) to retrieve the next page of history records.
     * Calling <a>PollForDecisionTask</a> with a <code>nextPageToken</code> doesn't
     * return a new decision task.</p> </note>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 60
     * seconds. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p> <note> <p>The <code>nextPageToken</code>
     * returned by this action cannot be used with <a>GetWorkflowExecutionHistory</a>
     * to get the next page. You must call <a>PollForDecisionTask</a> again (with the
     * <code>nextPageToken</code>) to retrieve the next page of history records.
     * Calling <a>PollForDecisionTask</a> with a <code>nextPageToken</code> doesn't
     * return a new decision task.</p> </note>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 60
     * seconds. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p> <note> <p>The <code>nextPageToken</code>
     * returned by this action cannot be used with <a>GetWorkflowExecutionHistory</a>
     * to get the next page. You must call <a>PollForDecisionTask</a> again (with the
     * <code>nextPageToken</code>) to retrieve the next page of history records.
     * Calling <a>PollForDecisionTask</a> with a <code>nextPageToken</code> doesn't
     * return a new decision task.</p> </note>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 60
     * seconds. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p> <note> <p>The <code>nextPageToken</code>
     * returned by this action cannot be used with <a>GetWorkflowExecutionHistory</a>
     * to get the next page. You must call <a>PollForDecisionTask</a> again (with the
     * <code>nextPageToken</code>) to retrieve the next page of history records.
     * Calling <a>PollForDecisionTask</a> with a <code>nextPageToken</code> doesn't
     * return a new decision task.</p> </note>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 60
     * seconds. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p> <note> <p>The <code>nextPageToken</code>
     * returned by this action cannot be used with <a>GetWorkflowExecutionHistory</a>
     * to get the next page. You must call <a>PollForDecisionTask</a> again (with the
     * <code>nextPageToken</code>) to retrieve the next page of history records.
     * Calling <a>PollForDecisionTask</a> with a <code>nextPageToken</code> doesn't
     * return a new decision task.</p> </note>
     */
    inline PollForDecisionTaskRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 60
     * seconds. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p> <note> <p>The <code>nextPageToken</code>
     * returned by this action cannot be used with <a>GetWorkflowExecutionHistory</a>
     * to get the next page. You must call <a>PollForDecisionTask</a> again (with the
     * <code>nextPageToken</code>) to retrieve the next page of history records.
     * Calling <a>PollForDecisionTask</a> with a <code>nextPageToken</code> doesn't
     * return a new decision task.</p> </note>
     */
    inline PollForDecisionTaskRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 60
     * seconds. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p> <note> <p>The <code>nextPageToken</code>
     * returned by this action cannot be used with <a>GetWorkflowExecutionHistory</a>
     * to get the next page. You must call <a>PollForDecisionTask</a> again (with the
     * <code>nextPageToken</code>) to retrieve the next page of history records.
     * Calling <a>PollForDecisionTask</a> with a <code>nextPageToken</code> doesn't
     * return a new decision task.</p> </note>
     */
    inline PollForDecisionTaskRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p> <p>This is
     * an upper limit only; the actual number of results returned per call may be fewer
     * than the specified maximum.</p>
     */
    inline int GetMaximumPageSize() const{ return m_maximumPageSize; }

    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p> <p>This is
     * an upper limit only; the actual number of results returned per call may be fewer
     * than the specified maximum.</p>
     */
    inline bool MaximumPageSizeHasBeenSet() const { return m_maximumPageSizeHasBeenSet; }

    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p> <p>This is
     * an upper limit only; the actual number of results returned per call may be fewer
     * than the specified maximum.</p>
     */
    inline void SetMaximumPageSize(int value) { m_maximumPageSizeHasBeenSet = true; m_maximumPageSize = value; }

    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p> <p>This is
     * an upper limit only; the actual number of results returned per call may be fewer
     * than the specified maximum.</p>
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
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }

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
