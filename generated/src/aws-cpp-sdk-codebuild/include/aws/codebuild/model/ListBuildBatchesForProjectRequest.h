/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/BuildBatchFilter.h>
#include <aws/codebuild/model/SortOrderType.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class ListBuildBatchesForProjectRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API ListBuildBatchesForProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBuildBatchesForProject"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline ListBuildBatchesForProjectRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline ListBuildBatchesForProjectRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline ListBuildBatchesForProjectRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>BuildBatchFilter</code> object that specifies the filters for the
     * search.</p>
     */
    inline const BuildBatchFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const BuildBatchFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(BuildBatchFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline ListBuildBatchesForProjectRequest& WithFilter(const BuildBatchFilter& value) { SetFilter(value); return *this;}
    inline ListBuildBatchesForProjectRequest& WithFilter(BuildBatchFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBuildBatchesForProjectRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the sort order of the returned items. Valid values include:</p>
     * <ul> <li> <p> <code>ASCENDING</code>: List the batch build identifiers in
     * ascending order by identifier.</p> </li> <li> <p> <code>DESCENDING</code>: List
     * the batch build identifiers in descending order by identifier.</p> </li> </ul>
     */
    inline const SortOrderType& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrderType& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrderType&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListBuildBatchesForProjectRequest& WithSortOrder(const SortOrderType& value) { SetSortOrder(value); return *this;}
    inline ListBuildBatchesForProjectRequest& WithSortOrder(SortOrderType&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous call to
     * <code>ListBuildBatchesForProject</code>. This specifies the next item to return.
     * To return the beginning of the list, exclude this parameter.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListBuildBatchesForProjectRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBuildBatchesForProjectRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBuildBatchesForProjectRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    BuildBatchFilter m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    SortOrderType m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
