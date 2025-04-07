/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListSandboxesForProjectRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API ListSandboxesForProjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSandboxesForProject"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The CodeBuild project name.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    ListSandboxesForProjectRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of sandbox records to be retrieved.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSandboxesForProjectRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which sandbox records should be retrieved.</p>
     */
    inline SortOrderType GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrderType value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListSandboxesForProjectRequest& WithSortOrder(SortOrderType value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next token, if any, to get paginated results. You will get this value
     * from previous execution of list sandboxes.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSandboxesForProjectRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    SortOrderType m_sortOrder{SortOrderType::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
