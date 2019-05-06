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
  class AWS_CODECOMMIT_API PostCommentForPullRequestRequest : public CodeCommitRequest
  {
  public:
    PostCommentForPullRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostCommentForPullRequest"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline PostCommentForPullRequestRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline PostCommentForPullRequestRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline PostCommentForPullRequestRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


    /**
     * <p>The name of the repository where you want to post a comment on a pull
     * request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where you want to post a comment on a pull
     * request.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository where you want to post a comment on a pull
     * request.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository where you want to post a comment on a pull
     * request.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where you want to post a comment on a pull
     * request.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where you want to post a comment on a pull
     * request.</p>
     */
    inline PostCommentForPullRequestRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where you want to post a comment on a pull
     * request.</p>
     */
    inline PostCommentForPullRequestRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where you want to post a comment on a pull
     * request.</p>
     */
    inline PostCommentForPullRequestRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was created.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const{ return m_beforeCommitId; }

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was created.</p>
     */
    inline bool BeforeCommitIdHasBeenSet() const { return m_beforeCommitIdHasBeenSet; }

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was created.</p>
     */
    inline void SetBeforeCommitId(const Aws::String& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = value; }

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was created.</p>
     */
    inline void SetBeforeCommitId(Aws::String&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::move(value); }

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was created.</p>
     */
    inline void SetBeforeCommitId(const char* value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId.assign(value); }

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was created.</p>
     */
    inline PostCommentForPullRequestRequest& WithBeforeCommitId(const Aws::String& value) { SetBeforeCommitId(value); return *this;}

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was created.</p>
     */
    inline PostCommentForPullRequestRequest& WithBeforeCommitId(Aws::String&& value) { SetBeforeCommitId(std::move(value)); return *this;}

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was created.</p>
     */
    inline PostCommentForPullRequestRequest& WithBeforeCommitId(const char* value) { SetBeforeCommitId(value); return *this;}


    /**
     * <p>The full commit ID of the commit in the source branch that is the current tip
     * of the branch for the pull request when you post the comment.</p>
     */
    inline const Aws::String& GetAfterCommitId() const{ return m_afterCommitId; }

    /**
     * <p>The full commit ID of the commit in the source branch that is the current tip
     * of the branch for the pull request when you post the comment.</p>
     */
    inline bool AfterCommitIdHasBeenSet() const { return m_afterCommitIdHasBeenSet; }

    /**
     * <p>The full commit ID of the commit in the source branch that is the current tip
     * of the branch for the pull request when you post the comment.</p>
     */
    inline void SetAfterCommitId(const Aws::String& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = value; }

    /**
     * <p>The full commit ID of the commit in the source branch that is the current tip
     * of the branch for the pull request when you post the comment.</p>
     */
    inline void SetAfterCommitId(Aws::String&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::move(value); }

    /**
     * <p>The full commit ID of the commit in the source branch that is the current tip
     * of the branch for the pull request when you post the comment.</p>
     */
    inline void SetAfterCommitId(const char* value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId.assign(value); }

    /**
     * <p>The full commit ID of the commit in the source branch that is the current tip
     * of the branch for the pull request when you post the comment.</p>
     */
    inline PostCommentForPullRequestRequest& WithAfterCommitId(const Aws::String& value) { SetAfterCommitId(value); return *this;}

    /**
     * <p>The full commit ID of the commit in the source branch that is the current tip
     * of the branch for the pull request when you post the comment.</p>
     */
    inline PostCommentForPullRequestRequest& WithAfterCommitId(Aws::String&& value) { SetAfterCommitId(std::move(value)); return *this;}

    /**
     * <p>The full commit ID of the commit in the source branch that is the current tip
     * of the branch for the pull request when you post the comment.</p>
     */
    inline PostCommentForPullRequestRequest& WithAfterCommitId(const char* value) { SetAfterCommitId(value); return *this;}


    /**
     * <p>The location of the change where you want to post your comment. If no
     * location is provided, the comment will be posted as a general comment on the
     * pull request difference between the before commit ID and the after commit
     * ID.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the change where you want to post your comment. If no
     * location is provided, the comment will be posted as a general comment on the
     * pull request difference between the before commit ID and the after commit
     * ID.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The location of the change where you want to post your comment. If no
     * location is provided, the comment will be posted as a general comment on the
     * pull request difference between the before commit ID and the after commit
     * ID.</p>
     */
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location of the change where you want to post your comment. If no
     * location is provided, the comment will be posted as a general comment on the
     * pull request difference between the before commit ID and the after commit
     * ID.</p>
     */
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The location of the change where you want to post your comment. If no
     * location is provided, the comment will be posted as a general comment on the
     * pull request difference between the before commit ID and the after commit
     * ID.</p>
     */
    inline PostCommentForPullRequestRequest& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the change where you want to post your comment. If no
     * location is provided, the comment will be posted as a general comment on the
     * pull request difference between the before commit ID and the after commit
     * ID.</p>
     */
    inline PostCommentForPullRequestRequest& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The content of your comment on the change.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of your comment on the change.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of your comment on the change.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of your comment on the change.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of your comment on the change.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of your comment on the change.</p>
     */
    inline PostCommentForPullRequestRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of your comment on the change.</p>
     */
    inline PostCommentForPullRequestRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of your comment on the change.</p>
     */
    inline PostCommentForPullRequestRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline PostCommentForPullRequestRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline PostCommentForPullRequestRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline PostCommentForPullRequestRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_beforeCommitId;
    bool m_beforeCommitIdHasBeenSet;

    Aws::String m_afterCommitId;
    bool m_afterCommitIdHasBeenSet;

    Location m_location;
    bool m_locationHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
