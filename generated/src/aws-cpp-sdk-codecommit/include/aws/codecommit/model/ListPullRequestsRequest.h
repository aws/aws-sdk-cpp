/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/PullRequestStatusEnum.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class ListPullRequestsRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API ListPullRequestsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPullRequests"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository for which you want to list pull requests.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    ListPullRequestsRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user who created the pull
     * request. If used, this filters the results to pull requests created by that
     * user.</p>
     */
    inline const Aws::String& GetAuthorArn() const { return m_authorArn; }
    inline bool AuthorArnHasBeenSet() const { return m_authorArnHasBeenSet; }
    template<typename AuthorArnT = Aws::String>
    void SetAuthorArn(AuthorArnT&& value) { m_authorArnHasBeenSet = true; m_authorArn = std::forward<AuthorArnT>(value); }
    template<typename AuthorArnT = Aws::String>
    ListPullRequestsRequest& WithAuthorArn(AuthorArnT&& value) { SetAuthorArn(std::forward<AuthorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The status of the pull request. If used, this refines the results
     * to the pull requests that match the specified status.</p>
     */
    inline PullRequestStatusEnum GetPullRequestStatus() const { return m_pullRequestStatus; }
    inline bool PullRequestStatusHasBeenSet() const { return m_pullRequestStatusHasBeenSet; }
    inline void SetPullRequestStatus(PullRequestStatusEnum value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = value; }
    inline ListPullRequestsRequest& WithPullRequestStatus(PullRequestStatusEnum value) { SetPullRequestStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPullRequestsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPullRequestsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_authorArn;
    bool m_authorArnHasBeenSet = false;

    PullRequestStatusEnum m_pullRequestStatus{PullRequestStatusEnum::NOT_SET};
    bool m_pullRequestStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
