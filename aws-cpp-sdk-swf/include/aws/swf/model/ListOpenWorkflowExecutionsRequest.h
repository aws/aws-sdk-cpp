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
#include <aws/swf/model/ExecutionTimeFilter.h>
#include <aws/swf/model/WorkflowTypeFilter.h>
#include <aws/swf/model/TagFilter.h>
#include <aws/swf/model/WorkflowExecutionFilter.h>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API ListOpenWorkflowExecutionsRequest : public SWFRequest
  {
  public:
    ListOpenWorkflowExecutionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline ListOpenWorkflowExecutionsRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline ListOpenWorkflowExecutionsRequest& WithDomain(Aws::String&& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline ListOpenWorkflowExecutionsRequest& WithDomain(const char* value) { SetDomain(value); return *this;}

    /**
     * <p>Workflow executions are included in the returned results based on whether
     * their start times are within the range specified by this filter.</p>
     */
    inline const ExecutionTimeFilter& GetStartTimeFilter() const{ return m_startTimeFilter; }

    /**
     * <p>Workflow executions are included in the returned results based on whether
     * their start times are within the range specified by this filter.</p>
     */
    inline void SetStartTimeFilter(const ExecutionTimeFilter& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = value; }

    /**
     * <p>Workflow executions are included in the returned results based on whether
     * their start times are within the range specified by this filter.</p>
     */
    inline void SetStartTimeFilter(ExecutionTimeFilter&& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = value; }

    /**
     * <p>Workflow executions are included in the returned results based on whether
     * their start times are within the range specified by this filter.</p>
     */
    inline ListOpenWorkflowExecutionsRequest& WithStartTimeFilter(const ExecutionTimeFilter& value) { SetStartTimeFilter(value); return *this;}

    /**
     * <p>Workflow executions are included in the returned results based on whether
     * their start times are within the range specified by this filter.</p>
     */
    inline ListOpenWorkflowExecutionsRequest& WithStartTimeFilter(ExecutionTimeFilter&& value) { SetStartTimeFilter(value); return *this;}

    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p> <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline const WorkflowTypeFilter& GetTypeFilter() const{ return m_typeFilter; }

    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p> <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline void SetTypeFilter(const WorkflowTypeFilter& value) { m_typeFilterHasBeenSet = true; m_typeFilter = value; }

    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p> <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline void SetTypeFilter(WorkflowTypeFilter&& value) { m_typeFilterHasBeenSet = true; m_typeFilter = value; }

    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p> <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline ListOpenWorkflowExecutionsRequest& WithTypeFilter(const WorkflowTypeFilter& value) { SetTypeFilter(value); return *this;}

    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p> <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline ListOpenWorkflowExecutionsRequest& WithTypeFilter(WorkflowTypeFilter&& value) { SetTypeFilter(value); return *this;}

    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     * <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline const TagFilter& GetTagFilter() const{ return m_tagFilter; }

    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     * <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline void SetTagFilter(const TagFilter& value) { m_tagFilterHasBeenSet = true; m_tagFilter = value; }

    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     * <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline void SetTagFilter(TagFilter&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = value; }

    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     * <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline ListOpenWorkflowExecutionsRequest& WithTagFilter(const TagFilter& value) { SetTagFilter(value); return *this;}

    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     * <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline ListOpenWorkflowExecutionsRequest& WithTagFilter(TagFilter&& value) { SetTagFilter(value); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline ListOpenWorkflowExecutionsRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline ListOpenWorkflowExecutionsRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline ListOpenWorkflowExecutionsRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

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
    inline ListOpenWorkflowExecutionsRequest& WithMaximumPageSize(int value) { SetMaximumPageSize(value); return *this;}

    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default the results are returned in descending order of the start time of the
     * executions.</p>
     */
    inline bool GetReverseOrder() const{ return m_reverseOrder; }

    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default the results are returned in descending order of the start time of the
     * executions.</p>
     */
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }

    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default the results are returned in descending order of the start time of the
     * executions.</p>
     */
    inline ListOpenWorkflowExecutionsRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}

    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p> <note><code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</note>
     */
    inline const WorkflowExecutionFilter& GetExecutionFilter() const{ return m_executionFilter; }

    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p> <note><code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</note>
     */
    inline void SetExecutionFilter(const WorkflowExecutionFilter& value) { m_executionFilterHasBeenSet = true; m_executionFilter = value; }

    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p> <note><code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</note>
     */
    inline void SetExecutionFilter(WorkflowExecutionFilter&& value) { m_executionFilterHasBeenSet = true; m_executionFilter = value; }

    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p> <note><code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</note>
     */
    inline ListOpenWorkflowExecutionsRequest& WithExecutionFilter(const WorkflowExecutionFilter& value) { SetExecutionFilter(value); return *this;}

    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p> <note><code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</note>
     */
    inline ListOpenWorkflowExecutionsRequest& WithExecutionFilter(WorkflowExecutionFilter&& value) { SetExecutionFilter(value); return *this;}

  private:
    Aws::String m_domain;
    bool m_domainHasBeenSet;
    ExecutionTimeFilter m_startTimeFilter;
    bool m_startTimeFilterHasBeenSet;
    WorkflowTypeFilter m_typeFilter;
    bool m_typeFilterHasBeenSet;
    TagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet;
    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet;
    int m_maximumPageSize;
    bool m_maximumPageSizeHasBeenSet;
    bool m_reverseOrder;
    bool m_reverseOrderHasBeenSet;
    WorkflowExecutionFilter m_executionFilter;
    bool m_executionFilterHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
