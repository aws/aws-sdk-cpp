/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/codebuild/model/ProjectSortByType.h>
#include <aws/codebuild/model/SortOrderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class ListProjectsRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API ListProjectsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProjects"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The criterion to be used to list build project names. Valid values
     * include:</p> <ul> <li> <p> <code>CREATED_TIME</code>: List based on when each
     * build project was created.</p> </li> <li> <p> <code>LAST_MODIFIED_TIME</code>:
     * List based on when information about each build project was last changed.</p>
     * </li> <li> <p> <code>NAME</code>: List based on each build project's name.</p>
     * </li> </ul> <p>Use <code>sortOrder</code> to specify in what order to list the
     * build project names based on the preceding criteria.</p>
     */
    inline ProjectSortByType GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ProjectSortByType value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListProjectsRequest& WithSortBy(ProjectSortByType value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which to list build projects. Valid values include:</p> <ul>
     * <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li> <p>
     * <code>DESCENDING</code>: List in descending order.</p> </li> </ul> <p>Use
     * <code>sortBy</code> to specify the criterion to be used to list build project
     * names.</p>
     */
    inline SortOrderType GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrderType value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListProjectsRequest& WithSortOrder(SortOrderType value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a
     * <i>nextToken</i>. To get the next batch of items in the list, call this
     * operation again, adding the next token to the call. To get all of the items in
     * the list, keep calling this operation with each subsequent next token that is
     * returned, until no more next tokens are returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProjectsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    ProjectSortByType m_sortBy{ProjectSortByType::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrderType m_sortOrder{SortOrderType::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
