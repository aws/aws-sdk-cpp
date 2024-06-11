﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecatalyst/model/WorkflowRunSortCriteria.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class ListWorkflowRunsRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API ListWorkflowRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkflowRuns"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;

    AWS_CODECATALYST_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }
    inline ListWorkflowRunsRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline ListWorkflowRunsRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline ListWorkflowRunsRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workflow. To retrieve a list of workflow IDs, use
     * <a>ListWorkflows</a>.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }
    inline ListWorkflowRunsRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline ListWorkflowRunsRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline ListWorkflowRunsRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline ListWorkflowRunsRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline ListWorkflowRunsRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline ListWorkflowRunsRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListWorkflowRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkflowRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkflowRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to show in a single call to this API. If the
     * number of results is larger than the number you specified, the response will
     * include a <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListWorkflowRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information used to sort the items in the returned list.</p>
     */
    inline const Aws::Vector<WorkflowRunSortCriteria>& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const Aws::Vector<WorkflowRunSortCriteria>& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(Aws::Vector<WorkflowRunSortCriteria>&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListWorkflowRunsRequest& WithSortBy(const Aws::Vector<WorkflowRunSortCriteria>& value) { SetSortBy(value); return *this;}
    inline ListWorkflowRunsRequest& WithSortBy(Aws::Vector<WorkflowRunSortCriteria>&& value) { SetSortBy(std::move(value)); return *this;}
    inline ListWorkflowRunsRequest& AddSortBy(const WorkflowRunSortCriteria& value) { m_sortByHasBeenSet = true; m_sortBy.push_back(value); return *this; }
    inline ListWorkflowRunsRequest& AddSortBy(WorkflowRunSortCriteria&& value) { m_sortByHasBeenSet = true; m_sortBy.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<WorkflowRunSortCriteria> m_sortBy;
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
