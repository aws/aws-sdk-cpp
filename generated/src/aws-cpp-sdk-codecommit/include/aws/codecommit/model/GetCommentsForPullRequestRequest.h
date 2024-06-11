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
    AWS_CODECOMMIT_API GetCommentsForPullRequestRequest();

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
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }
    inline GetCommentsForPullRequestRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}
    inline GetCommentsForPullRequestRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}
    inline GetCommentsForPullRequestRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository that contains the pull request. Requirement is
     * conditional: <code>repositoryName</code> must be specified when
     * <code>beforeCommitId</code> and <code>afterCommitId</code> are included.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline GetCommentsForPullRequestRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline GetCommentsForPullRequestRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline GetCommentsForPullRequestRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was created. Requirement is
     * conditional: <code>beforeCommitId</code> must be specified when
     * <code>repositoryName</code> is included.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const{ return m_beforeCommitId; }
    inline bool BeforeCommitIdHasBeenSet() const { return m_beforeCommitIdHasBeenSet; }
    inline void SetBeforeCommitId(const Aws::String& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = value; }
    inline void SetBeforeCommitId(Aws::String&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::move(value); }
    inline void SetBeforeCommitId(const char* value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId.assign(value); }
    inline GetCommentsForPullRequestRequest& WithBeforeCommitId(const Aws::String& value) { SetBeforeCommitId(value); return *this;}
    inline GetCommentsForPullRequestRequest& WithBeforeCommitId(Aws::String&& value) { SetBeforeCommitId(std::move(value)); return *this;}
    inline GetCommentsForPullRequestRequest& WithBeforeCommitId(const char* value) { SetBeforeCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit in the source branch that was the tip of the
     * branch at the time the comment was made. Requirement is conditional:
     * <code>afterCommitId</code> must be specified when <code>repositoryName</code> is
     * included.</p>
     */
    inline const Aws::String& GetAfterCommitId() const{ return m_afterCommitId; }
    inline bool AfterCommitIdHasBeenSet() const { return m_afterCommitIdHasBeenSet; }
    inline void SetAfterCommitId(const Aws::String& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = value; }
    inline void SetAfterCommitId(Aws::String&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::move(value); }
    inline void SetAfterCommitId(const char* value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId.assign(value); }
    inline GetCommentsForPullRequestRequest& WithAfterCommitId(const Aws::String& value) { SetAfterCommitId(value); return *this;}
    inline GetCommentsForPullRequestRequest& WithAfterCommitId(Aws::String&& value) { SetAfterCommitId(std::move(value)); return *this;}
    inline GetCommentsForPullRequestRequest& WithAfterCommitId(const char* value) { SetAfterCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetCommentsForPullRequestRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetCommentsForPullRequestRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetCommentsForPullRequestRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results. The default is 100 comments. You can return up to 500 comments with a
     * single request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
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

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
