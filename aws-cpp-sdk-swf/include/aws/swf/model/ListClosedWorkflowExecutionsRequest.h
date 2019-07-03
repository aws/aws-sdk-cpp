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
#include <aws/swf/model/ExecutionTimeFilter.h>
#include <aws/swf/model/WorkflowExecutionFilter.h>
#include <aws/swf/model/CloseStatusFilter.h>
#include <aws/swf/model/WorkflowTypeFilter.h>
#include <aws/swf/model/TagFilter.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API ListClosedWorkflowExecutionsRequest : public SWFRequest
  {
  public:
    ListClosedWorkflowExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClosedWorkflowExecutions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline ListClosedWorkflowExecutionsRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline ListClosedWorkflowExecutionsRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline ListClosedWorkflowExecutionsRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their start times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their start times.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline const ExecutionTimeFilter& GetStartTimeFilter() const{ return m_startTimeFilter; }

    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their start times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their start times.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline bool StartTimeFilterHasBeenSet() const { return m_startTimeFilterHasBeenSet; }

    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their start times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their start times.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline void SetStartTimeFilter(const ExecutionTimeFilter& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = value; }

    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their start times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their start times.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline void SetStartTimeFilter(ExecutionTimeFilter&& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = std::move(value); }

    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their start times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their start times.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline ListClosedWorkflowExecutionsRequest& WithStartTimeFilter(const ExecutionTimeFilter& value) { SetStartTimeFilter(value); return *this;}

    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their start times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their start times.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline ListClosedWorkflowExecutionsRequest& WithStartTimeFilter(ExecutionTimeFilter&& value) { SetStartTimeFilter(std::move(value)); return *this;}


    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their close times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their close times.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline const ExecutionTimeFilter& GetCloseTimeFilter() const{ return m_closeTimeFilter; }

    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their close times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their close times.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline bool CloseTimeFilterHasBeenSet() const { return m_closeTimeFilterHasBeenSet; }

    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their close times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their close times.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline void SetCloseTimeFilter(const ExecutionTimeFilter& value) { m_closeTimeFilterHasBeenSet = true; m_closeTimeFilter = value; }

    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their close times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their close times.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline void SetCloseTimeFilter(ExecutionTimeFilter&& value) { m_closeTimeFilterHasBeenSet = true; m_closeTimeFilter = std::move(value); }

    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their close times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their close times.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline ListClosedWorkflowExecutionsRequest& WithCloseTimeFilter(const ExecutionTimeFilter& value) { SetCloseTimeFilter(value); return *this;}

    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their close times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their close times.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline ListClosedWorkflowExecutionsRequest& WithCloseTimeFilter(ExecutionTimeFilter&& value) { SetCloseTimeFilter(std::move(value)); return *this;}


    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline const WorkflowExecutionFilter& GetExecutionFilter() const{ return m_executionFilter; }

    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline bool ExecutionFilterHasBeenSet() const { return m_executionFilterHasBeenSet; }

    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetExecutionFilter(const WorkflowExecutionFilter& value) { m_executionFilterHasBeenSet = true; m_executionFilter = value; }

    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetExecutionFilter(WorkflowExecutionFilter&& value) { m_executionFilterHasBeenSet = true; m_executionFilter = std::move(value); }

    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline ListClosedWorkflowExecutionsRequest& WithExecutionFilter(const WorkflowExecutionFilter& value) { SetExecutionFilter(value); return *this;}

    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline ListClosedWorkflowExecutionsRequest& WithExecutionFilter(WorkflowExecutionFilter&& value) { SetExecutionFilter(std::move(value)); return *this;}


    /**
     * <p>If specified, only workflow executions that match this <i>close status</i>
     * are listed. For example, if TERMINATED is specified, then only TERMINATED
     * workflow executions are listed.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline const CloseStatusFilter& GetCloseStatusFilter() const{ return m_closeStatusFilter; }

    /**
     * <p>If specified, only workflow executions that match this <i>close status</i>
     * are listed. For example, if TERMINATED is specified, then only TERMINATED
     * workflow executions are listed.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline bool CloseStatusFilterHasBeenSet() const { return m_closeStatusFilterHasBeenSet; }

    /**
     * <p>If specified, only workflow executions that match this <i>close status</i>
     * are listed. For example, if TERMINATED is specified, then only TERMINATED
     * workflow executions are listed.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetCloseStatusFilter(const CloseStatusFilter& value) { m_closeStatusFilterHasBeenSet = true; m_closeStatusFilter = value; }

    /**
     * <p>If specified, only workflow executions that match this <i>close status</i>
     * are listed. For example, if TERMINATED is specified, then only TERMINATED
     * workflow executions are listed.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetCloseStatusFilter(CloseStatusFilter&& value) { m_closeStatusFilterHasBeenSet = true; m_closeStatusFilter = std::move(value); }

    /**
     * <p>If specified, only workflow executions that match this <i>close status</i>
     * are listed. For example, if TERMINATED is specified, then only TERMINATED
     * workflow executions are listed.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline ListClosedWorkflowExecutionsRequest& WithCloseStatusFilter(const CloseStatusFilter& value) { SetCloseStatusFilter(value); return *this;}

    /**
     * <p>If specified, only workflow executions that match this <i>close status</i>
     * are listed. For example, if TERMINATED is specified, then only TERMINATED
     * workflow executions are listed.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline ListClosedWorkflowExecutionsRequest& WithCloseStatusFilter(CloseStatusFilter&& value) { SetCloseStatusFilter(std::move(value)); return *this;}


    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline const WorkflowTypeFilter& GetTypeFilter() const{ return m_typeFilter; }

    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline bool TypeFilterHasBeenSet() const { return m_typeFilterHasBeenSet; }

    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetTypeFilter(const WorkflowTypeFilter& value) { m_typeFilterHasBeenSet = true; m_typeFilter = value; }

    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetTypeFilter(WorkflowTypeFilter&& value) { m_typeFilterHasBeenSet = true; m_typeFilter = std::move(value); }

    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline ListClosedWorkflowExecutionsRequest& WithTypeFilter(const WorkflowTypeFilter& value) { SetTypeFilter(value); return *this;}

    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline ListClosedWorkflowExecutionsRequest& WithTypeFilter(WorkflowTypeFilter&& value) { SetTypeFilter(std::move(value)); return *this;}


    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     * <note> <p> <code>closeStatusFilter</code>, <code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</p> </note>
     */
    inline const TagFilter& GetTagFilter() const{ return m_tagFilter; }

    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     * <note> <p> <code>closeStatusFilter</code>, <code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</p> </note>
     */
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }

    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     * <note> <p> <code>closeStatusFilter</code>, <code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</p> </note>
     */
    inline void SetTagFilter(const TagFilter& value) { m_tagFilterHasBeenSet = true; m_tagFilter = value; }

    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     * <note> <p> <code>closeStatusFilter</code>, <code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</p> </note>
     */
    inline void SetTagFilter(TagFilter&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::move(value); }

    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     * <note> <p> <code>closeStatusFilter</code>, <code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</p> </note>
     */
    inline ListClosedWorkflowExecutionsRequest& WithTagFilter(const TagFilter& value) { SetTagFilter(value); return *this;}

    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     * <note> <p> <code>closeStatusFilter</code>, <code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</p> </note>
     */
    inline ListClosedWorkflowExecutionsRequest& WithTagFilter(TagFilter&& value) { SetTagFilter(std::move(value)); return *this;}


    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 60
     * seconds. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p>
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
     * returned in a single call. </p>
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
     * returned in a single call. </p>
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
     * returned in a single call. </p>
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
     * returned in a single call. </p>
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
     * returned in a single call. </p>
     */
    inline ListClosedWorkflowExecutionsRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 60
     * seconds. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p>
     */
    inline ListClosedWorkflowExecutionsRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 60
     * seconds. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p>
     */
    inline ListClosedWorkflowExecutionsRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p>
     */
    inline int GetMaximumPageSize() const{ return m_maximumPageSize; }

    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p>
     */
    inline bool MaximumPageSizeHasBeenSet() const { return m_maximumPageSizeHasBeenSet; }

    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p>
     */
    inline void SetMaximumPageSize(int value) { m_maximumPageSizeHasBeenSet = true; m_maximumPageSize = value; }

    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p>
     */
    inline ListClosedWorkflowExecutionsRequest& WithMaximumPageSize(int value) { SetMaximumPageSize(value); return *this;}


    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default the results are returned in descending order of the start or the close
     * time of the executions.</p>
     */
    inline bool GetReverseOrder() const{ return m_reverseOrder; }

    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default the results are returned in descending order of the start or the close
     * time of the executions.</p>
     */
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default the results are returned in descending order of the start or the close
     * time of the executions.</p>
     */
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }

    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default the results are returned in descending order of the start or the close
     * time of the executions.</p>
     */
    inline ListClosedWorkflowExecutionsRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    ExecutionTimeFilter m_startTimeFilter;
    bool m_startTimeFilterHasBeenSet;

    ExecutionTimeFilter m_closeTimeFilter;
    bool m_closeTimeFilterHasBeenSet;

    WorkflowExecutionFilter m_executionFilter;
    bool m_executionFilterHasBeenSet;

    CloseStatusFilter m_closeStatusFilter;
    bool m_closeStatusFilterHasBeenSet;

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
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
