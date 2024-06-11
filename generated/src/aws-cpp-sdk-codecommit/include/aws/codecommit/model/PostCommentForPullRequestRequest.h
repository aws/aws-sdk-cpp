/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/Location.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class PostCommentForPullRequestRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API PostCommentForPullRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostCommentForPullRequest"; }

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
    inline PostCommentForPullRequestRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}
    inline PostCommentForPullRequestRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}
    inline PostCommentForPullRequestRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository where you want to post a comment on a pull
     * request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline PostCommentForPullRequestRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline PostCommentForPullRequestRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline PostCommentForPullRequestRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was created.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const{ return m_beforeCommitId; }
    inline bool BeforeCommitIdHasBeenSet() const { return m_beforeCommitIdHasBeenSet; }
    inline void SetBeforeCommitId(const Aws::String& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = value; }
    inline void SetBeforeCommitId(Aws::String&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::move(value); }
    inline void SetBeforeCommitId(const char* value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId.assign(value); }
    inline PostCommentForPullRequestRequest& WithBeforeCommitId(const Aws::String& value) { SetBeforeCommitId(value); return *this;}
    inline PostCommentForPullRequestRequest& WithBeforeCommitId(Aws::String&& value) { SetBeforeCommitId(std::move(value)); return *this;}
    inline PostCommentForPullRequestRequest& WithBeforeCommitId(const char* value) { SetBeforeCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit in the source branch that is the current tip
     * of the branch for the pull request when you post the comment.</p>
     */
    inline const Aws::String& GetAfterCommitId() const{ return m_afterCommitId; }
    inline bool AfterCommitIdHasBeenSet() const { return m_afterCommitIdHasBeenSet; }
    inline void SetAfterCommitId(const Aws::String& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = value; }
    inline void SetAfterCommitId(Aws::String&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::move(value); }
    inline void SetAfterCommitId(const char* value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId.assign(value); }
    inline PostCommentForPullRequestRequest& WithAfterCommitId(const Aws::String& value) { SetAfterCommitId(value); return *this;}
    inline PostCommentForPullRequestRequest& WithAfterCommitId(Aws::String&& value) { SetAfterCommitId(std::move(value)); return *this;}
    inline PostCommentForPullRequestRequest& WithAfterCommitId(const char* value) { SetAfterCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the change where you want to post your comment. If no
     * location is provided, the comment is posted as a general comment on the pull
     * request difference between the before commit ID and the after commit ID.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline PostCommentForPullRequestRequest& WithLocation(const Location& value) { SetLocation(value); return *this;}
    inline PostCommentForPullRequestRequest& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of your comment on the change.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline PostCommentForPullRequestRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline PostCommentForPullRequestRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline PostCommentForPullRequestRequest& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline PostCommentForPullRequestRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline PostCommentForPullRequestRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline PostCommentForPullRequestRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
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

    Location m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
