/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class GetCommentsForPullRequestRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API GetCommentsForPullRequestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCommentsForPullRequest"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline const Aws::String& GetPullRequestId() const { return m_pullRequestId; }
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }
    template<typename PullRequestIdT = Aws::String>
    void SetPullRequestId(PullRequestIdT&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::forward<PullRequestIdT>(value); }
    template<typename PullRequestIdT = Aws::String>
    GetCommentsForPullRequestRequest& WithPullRequestId(PullRequestIdT&& value) { SetPullRequestId(std::forward<PullRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository that contains the pull request. Requirement is
     * conditional: <code>repositoryName</code> must be specified when
     * <code>beforeCommitId</code> and <code>afterCommitId</code> are included.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    GetCommentsForPullRequestRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was created. Requirement is
     * conditional: <code>beforeCommitId</code> must be specified when
     * <code>repositoryName</code> is included.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const { return m_beforeCommitId; }
    inline bool BeforeCommitIdHasBeenSet() const { return m_beforeCommitIdHasBeenSet; }
    template<typename BeforeCommitIdT = Aws::String>
    void SetBeforeCommitId(BeforeCommitIdT&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::forward<BeforeCommitIdT>(value); }
    template<typename BeforeCommitIdT = Aws::String>
    GetCommentsForPullRequestRequest& WithBeforeCommitId(BeforeCommitIdT&& value) { SetBeforeCommitId(std::forward<BeforeCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit in the source branch that was the tip of the
     * branch at the time the comment was made. Requirement is conditional:
     * <code>afterCommitId</code> must be specified when <code>repositoryName</code> is
     * included.</p>
     */
    inline const Aws::String& GetAfterCommitId() const { return m_afterCommitId; }
    inline bool AfterCommitIdHasBeenSet() const { return m_afterCommitIdHasBeenSet; }
    template<typename AfterCommitIdT = Aws::String>
    void SetAfterCommitId(AfterCommitIdT&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::forward<AfterCommitIdT>(value); }
    template<typename AfterCommitIdT = Aws::String>
    GetCommentsForPullRequestRequest& WithAfterCommitId(AfterCommitIdT&& value) { SetAfterCommitId(std::forward<AfterCommitIdT>(value)); return *this;}
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
    GetCommentsForPullRequestRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results. The default is 100 comments. You can return up to 500 comments with a
     * single request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetCommentsForPullRequestRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_beforeCommitId;
    bool m_beforeCommitIdHasBeenSet = false;

    Aws::String m_afterCommitId;
    bool m_afterCommitIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
