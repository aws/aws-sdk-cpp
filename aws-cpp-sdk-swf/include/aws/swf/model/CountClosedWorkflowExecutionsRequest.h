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
#include <aws/swf/model/WorkflowTypeFilter.h>
#include <aws/swf/model/TagFilter.h>
#include <aws/swf/model/CloseStatusFilter.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API CountClosedWorkflowExecutionsRequest : public SWFRequest
  {
  public:
    CountClosedWorkflowExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CountClosedWorkflowExecutions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline CountClosedWorkflowExecutionsRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline CountClosedWorkflowExecutionsRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline CountClosedWorkflowExecutionsRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>If specified, only workflow executions that meet the start time criteria of
     * the filter are counted.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline const ExecutionTimeFilter& GetStartTimeFilter() const{ return m_startTimeFilter; }

    /**
     * <p>If specified, only workflow executions that meet the start time criteria of
     * the filter are counted.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline bool StartTimeFilterHasBeenSet() const { return m_startTimeFilterHasBeenSet; }

    /**
     * <p>If specified, only workflow executions that meet the start time criteria of
     * the filter are counted.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline void SetStartTimeFilter(const ExecutionTimeFilter& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = value; }

    /**
     * <p>If specified, only workflow executions that meet the start time criteria of
     * the filter are counted.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline void SetStartTimeFilter(ExecutionTimeFilter&& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = std::move(value); }

    /**
     * <p>If specified, only workflow executions that meet the start time criteria of
     * the filter are counted.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline CountClosedWorkflowExecutionsRequest& WithStartTimeFilter(const ExecutionTimeFilter& value) { SetStartTimeFilter(value); return *this;}

    /**
     * <p>If specified, only workflow executions that meet the start time criteria of
     * the filter are counted.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline CountClosedWorkflowExecutionsRequest& WithStartTimeFilter(ExecutionTimeFilter&& value) { SetStartTimeFilter(std::move(value)); return *this;}


    /**
     * <p>If specified, only workflow executions that meet the close time criteria of
     * the filter are counted.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline const ExecutionTimeFilter& GetCloseTimeFilter() const{ return m_closeTimeFilter; }

    /**
     * <p>If specified, only workflow executions that meet the close time criteria of
     * the filter are counted.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline bool CloseTimeFilterHasBeenSet() const { return m_closeTimeFilterHasBeenSet; }

    /**
     * <p>If specified, only workflow executions that meet the close time criteria of
     * the filter are counted.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline void SetCloseTimeFilter(const ExecutionTimeFilter& value) { m_closeTimeFilterHasBeenSet = true; m_closeTimeFilter = value; }

    /**
     * <p>If specified, only workflow executions that meet the close time criteria of
     * the filter are counted.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline void SetCloseTimeFilter(ExecutionTimeFilter&& value) { m_closeTimeFilterHasBeenSet = true; m_closeTimeFilter = std::move(value); }

    /**
     * <p>If specified, only workflow executions that meet the close time criteria of
     * the filter are counted.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline CountClosedWorkflowExecutionsRequest& WithCloseTimeFilter(const ExecutionTimeFilter& value) { SetCloseTimeFilter(value); return *this;}

    /**
     * <p>If specified, only workflow executions that meet the close time criteria of
     * the filter are counted.</p> <note> <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> </note>
     */
    inline CountClosedWorkflowExecutionsRequest& WithCloseTimeFilter(ExecutionTimeFilter&& value) { SetCloseTimeFilter(std::move(value)); return *this;}


    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline const WorkflowExecutionFilter& GetExecutionFilter() const{ return m_executionFilter; }

    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline bool ExecutionFilterHasBeenSet() const { return m_executionFilterHasBeenSet; }

    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetExecutionFilter(const WorkflowExecutionFilter& value) { m_executionFilterHasBeenSet = true; m_executionFilter = value; }

    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetExecutionFilter(WorkflowExecutionFilter&& value) { m_executionFilterHasBeenSet = true; m_executionFilter = std::move(value); }

    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline CountClosedWorkflowExecutionsRequest& WithExecutionFilter(const WorkflowExecutionFilter& value) { SetExecutionFilter(value); return *this;}

    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline CountClosedWorkflowExecutionsRequest& WithExecutionFilter(WorkflowExecutionFilter&& value) { SetExecutionFilter(std::move(value)); return *this;}


    /**
     * <p>If specified, indicates the type of the workflow executions to be
     * counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline const WorkflowTypeFilter& GetTypeFilter() const{ return m_typeFilter; }

    /**
     * <p>If specified, indicates the type of the workflow executions to be
     * counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline bool TypeFilterHasBeenSet() const { return m_typeFilterHasBeenSet; }

    /**
     * <p>If specified, indicates the type of the workflow executions to be
     * counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetTypeFilter(const WorkflowTypeFilter& value) { m_typeFilterHasBeenSet = true; m_typeFilter = value; }

    /**
     * <p>If specified, indicates the type of the workflow executions to be
     * counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetTypeFilter(WorkflowTypeFilter&& value) { m_typeFilterHasBeenSet = true; m_typeFilter = std::move(value); }

    /**
     * <p>If specified, indicates the type of the workflow executions to be
     * counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline CountClosedWorkflowExecutionsRequest& WithTypeFilter(const WorkflowTypeFilter& value) { SetTypeFilter(value); return *this;}

    /**
     * <p>If specified, indicates the type of the workflow executions to be
     * counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline CountClosedWorkflowExecutionsRequest& WithTypeFilter(WorkflowTypeFilter&& value) { SetTypeFilter(std::move(value)); return *this;}


    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline const TagFilter& GetTagFilter() const{ return m_tagFilter; }

    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }

    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetTagFilter(const TagFilter& value) { m_tagFilterHasBeenSet = true; m_tagFilter = value; }

    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetTagFilter(TagFilter&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::move(value); }

    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline CountClosedWorkflowExecutionsRequest& WithTagFilter(const TagFilter& value) { SetTagFilter(value); return *this;}

    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline CountClosedWorkflowExecutionsRequest& WithTagFilter(TagFilter&& value) { SetTagFilter(std::move(value)); return *this;}


    /**
     * <p>If specified, only workflow executions that match this close status are
     * counted. This filter has an affect only if <code>executionStatus</code> is
     * specified as <code>CLOSED</code>.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline const CloseStatusFilter& GetCloseStatusFilter() const{ return m_closeStatusFilter; }

    /**
     * <p>If specified, only workflow executions that match this close status are
     * counted. This filter has an affect only if <code>executionStatus</code> is
     * specified as <code>CLOSED</code>.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline bool CloseStatusFilterHasBeenSet() const { return m_closeStatusFilterHasBeenSet; }

    /**
     * <p>If specified, only workflow executions that match this close status are
     * counted. This filter has an affect only if <code>executionStatus</code> is
     * specified as <code>CLOSED</code>.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetCloseStatusFilter(const CloseStatusFilter& value) { m_closeStatusFilterHasBeenSet = true; m_closeStatusFilter = value; }

    /**
     * <p>If specified, only workflow executions that match this close status are
     * counted. This filter has an affect only if <code>executionStatus</code> is
     * specified as <code>CLOSED</code>.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline void SetCloseStatusFilter(CloseStatusFilter&& value) { m_closeStatusFilterHasBeenSet = true; m_closeStatusFilter = std::move(value); }

    /**
     * <p>If specified, only workflow executions that match this close status are
     * counted. This filter has an affect only if <code>executionStatus</code> is
     * specified as <code>CLOSED</code>.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline CountClosedWorkflowExecutionsRequest& WithCloseStatusFilter(const CloseStatusFilter& value) { SetCloseStatusFilter(value); return *this;}

    /**
     * <p>If specified, only workflow executions that match this close status are
     * counted. This filter has an affect only if <code>executionStatus</code> is
     * specified as <code>CLOSED</code>.</p> <note> <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * </note>
     */
    inline CountClosedWorkflowExecutionsRequest& WithCloseStatusFilter(CloseStatusFilter&& value) { SetCloseStatusFilter(std::move(value)); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    ExecutionTimeFilter m_startTimeFilter;
    bool m_startTimeFilterHasBeenSet;

    ExecutionTimeFilter m_closeTimeFilter;
    bool m_closeTimeFilterHasBeenSet;

    WorkflowExecutionFilter m_executionFilter;
    bool m_executionFilterHasBeenSet;

    WorkflowTypeFilter m_typeFilter;
    bool m_typeFilterHasBeenSet;

    TagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet;

    CloseStatusFilter m_closeStatusFilter;
    bool m_closeStatusFilterHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
