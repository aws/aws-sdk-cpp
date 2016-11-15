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
  class AWS_SWF_API CountOpenWorkflowExecutionsRequest : public SWFRequest
  {
  public:
    CountOpenWorkflowExecutionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline CountOpenWorkflowExecutionsRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline CountOpenWorkflowExecutionsRequest& WithDomain(Aws::String&& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline CountOpenWorkflowExecutionsRequest& WithDomain(const char* value) { SetDomain(value); return *this;}

    /**
     * <p>Specifies the start time criteria that workflow executions must meet in order
     * to be counted.</p>
     */
    inline const ExecutionTimeFilter& GetStartTimeFilter() const{ return m_startTimeFilter; }

    /**
     * <p>Specifies the start time criteria that workflow executions must meet in order
     * to be counted.</p>
     */
    inline void SetStartTimeFilter(const ExecutionTimeFilter& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = value; }

    /**
     * <p>Specifies the start time criteria that workflow executions must meet in order
     * to be counted.</p>
     */
    inline void SetStartTimeFilter(ExecutionTimeFilter&& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = value; }

    /**
     * <p>Specifies the start time criteria that workflow executions must meet in order
     * to be counted.</p>
     */
    inline CountOpenWorkflowExecutionsRequest& WithStartTimeFilter(const ExecutionTimeFilter& value) { SetStartTimeFilter(value); return *this;}

    /**
     * <p>Specifies the start time criteria that workflow executions must meet in order
     * to be counted.</p>
     */
    inline CountOpenWorkflowExecutionsRequest& WithStartTimeFilter(ExecutionTimeFilter&& value) { SetStartTimeFilter(value); return *this;}

    /**
     * <p>Specifies the type of the workflow executions to be counted.</p>
     * <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline const WorkflowTypeFilter& GetTypeFilter() const{ return m_typeFilter; }

    /**
     * <p>Specifies the type of the workflow executions to be counted.</p>
     * <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline void SetTypeFilter(const WorkflowTypeFilter& value) { m_typeFilterHasBeenSet = true; m_typeFilter = value; }

    /**
     * <p>Specifies the type of the workflow executions to be counted.</p>
     * <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline void SetTypeFilter(WorkflowTypeFilter&& value) { m_typeFilterHasBeenSet = true; m_typeFilter = value; }

    /**
     * <p>Specifies the type of the workflow executions to be counted.</p>
     * <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline CountOpenWorkflowExecutionsRequest& WithTypeFilter(const WorkflowTypeFilter& value) { SetTypeFilter(value); return *this;}

    /**
     * <p>Specifies the type of the workflow executions to be counted.</p>
     * <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline CountOpenWorkflowExecutionsRequest& WithTypeFilter(WorkflowTypeFilter&& value) { SetTypeFilter(value); return *this;}

    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p> <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline const TagFilter& GetTagFilter() const{ return m_tagFilter; }

    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p> <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline void SetTagFilter(const TagFilter& value) { m_tagFilterHasBeenSet = true; m_tagFilter = value; }

    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p> <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline void SetTagFilter(TagFilter&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = value; }

    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p> <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline CountOpenWorkflowExecutionsRequest& WithTagFilter(const TagFilter& value) { SetTagFilter(value); return *this;}

    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p> <note><code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</note>
     */
    inline CountOpenWorkflowExecutionsRequest& WithTagFilter(TagFilter&& value) { SetTagFilter(value); return *this;}

    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p> <note><code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</note>
     */
    inline const WorkflowExecutionFilter& GetExecutionFilter() const{ return m_executionFilter; }

    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p> <note><code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</note>
     */
    inline void SetExecutionFilter(const WorkflowExecutionFilter& value) { m_executionFilterHasBeenSet = true; m_executionFilter = value; }

    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p> <note><code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</note>
     */
    inline void SetExecutionFilter(WorkflowExecutionFilter&& value) { m_executionFilterHasBeenSet = true; m_executionFilter = value; }

    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p> <note><code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</note>
     */
    inline CountOpenWorkflowExecutionsRequest& WithExecutionFilter(const WorkflowExecutionFilter& value) { SetExecutionFilter(value); return *this;}

    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p> <note><code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</note>
     */
    inline CountOpenWorkflowExecutionsRequest& WithExecutionFilter(WorkflowExecutionFilter&& value) { SetExecutionFilter(value); return *this;}

  private:
    Aws::String m_domain;
    bool m_domainHasBeenSet;
    ExecutionTimeFilter m_startTimeFilter;
    bool m_startTimeFilterHasBeenSet;
    WorkflowTypeFilter m_typeFilter;
    bool m_typeFilterHasBeenSet;
    TagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet;
    WorkflowExecutionFilter m_executionFilter;
    bool m_executionFilterHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
