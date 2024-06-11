/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/Comment.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about comments on a pull request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CommentsForPullRequest">AWS
   * API Reference</a></p>
   */
  class CommentsForPullRequest
  {
  public:
    AWS_CODECOMMIT_API CommentsForPullRequest();
    AWS_CODECOMMIT_API CommentsForPullRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API CommentsForPullRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }
    inline CommentsForPullRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}
    inline CommentsForPullRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}
    inline CommentsForPullRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline CommentsForPullRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline CommentsForPullRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline CommentsForPullRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit that was the tip of the destination branch
     * when the pull request was created. This commit is superceded by the after commit
     * in the source branch when and if you merge the source branch into the
     * destination branch.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const{ return m_beforeCommitId; }
    inline bool BeforeCommitIdHasBeenSet() const { return m_beforeCommitIdHasBeenSet; }
    inline void SetBeforeCommitId(const Aws::String& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = value; }
    inline void SetBeforeCommitId(Aws::String&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::move(value); }
    inline void SetBeforeCommitId(const char* value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId.assign(value); }
    inline CommentsForPullRequest& WithBeforeCommitId(const Aws::String& value) { SetBeforeCommitId(value); return *this;}
    inline CommentsForPullRequest& WithBeforeCommitId(Aws::String&& value) { SetBeforeCommitId(std::move(value)); return *this;}
    inline CommentsForPullRequest& WithBeforeCommitId(const char* value) { SetBeforeCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit that was the tip of the source branch at the
     * time the comment was made. </p>
     */
    inline const Aws::String& GetAfterCommitId() const{ return m_afterCommitId; }
    inline bool AfterCommitIdHasBeenSet() const { return m_afterCommitIdHasBeenSet; }
    inline void SetAfterCommitId(const Aws::String& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = value; }
    inline void SetAfterCommitId(Aws::String&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::move(value); }
    inline void SetAfterCommitId(const char* value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId.assign(value); }
    inline CommentsForPullRequest& WithAfterCommitId(const Aws::String& value) { SetAfterCommitId(value); return *this;}
    inline CommentsForPullRequest& WithAfterCommitId(Aws::String&& value) { SetAfterCommitId(std::move(value)); return *this;}
    inline CommentsForPullRequest& WithAfterCommitId(const char* value) { SetAfterCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full blob ID of the file on which you want to comment on the destination
     * commit.</p>
     */
    inline const Aws::String& GetBeforeBlobId() const{ return m_beforeBlobId; }
    inline bool BeforeBlobIdHasBeenSet() const { return m_beforeBlobIdHasBeenSet; }
    inline void SetBeforeBlobId(const Aws::String& value) { m_beforeBlobIdHasBeenSet = true; m_beforeBlobId = value; }
    inline void SetBeforeBlobId(Aws::String&& value) { m_beforeBlobIdHasBeenSet = true; m_beforeBlobId = std::move(value); }
    inline void SetBeforeBlobId(const char* value) { m_beforeBlobIdHasBeenSet = true; m_beforeBlobId.assign(value); }
    inline CommentsForPullRequest& WithBeforeBlobId(const Aws::String& value) { SetBeforeBlobId(value); return *this;}
    inline CommentsForPullRequest& WithBeforeBlobId(Aws::String&& value) { SetBeforeBlobId(std::move(value)); return *this;}
    inline CommentsForPullRequest& WithBeforeBlobId(const char* value) { SetBeforeBlobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full blob ID of the file on which you want to comment on the source
     * commit.</p>
     */
    inline const Aws::String& GetAfterBlobId() const{ return m_afterBlobId; }
    inline bool AfterBlobIdHasBeenSet() const { return m_afterBlobIdHasBeenSet; }
    inline void SetAfterBlobId(const Aws::String& value) { m_afterBlobIdHasBeenSet = true; m_afterBlobId = value; }
    inline void SetAfterBlobId(Aws::String&& value) { m_afterBlobIdHasBeenSet = true; m_afterBlobId = std::move(value); }
    inline void SetAfterBlobId(const char* value) { m_afterBlobIdHasBeenSet = true; m_afterBlobId.assign(value); }
    inline CommentsForPullRequest& WithAfterBlobId(const Aws::String& value) { SetAfterBlobId(value); return *this;}
    inline CommentsForPullRequest& WithAfterBlobId(Aws::String&& value) { SetAfterBlobId(std::move(value)); return *this;}
    inline CommentsForPullRequest& WithAfterBlobId(const char* value) { SetAfterBlobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location information about the comment on the pull request, including the
     * file name, line number, and whether the version of the file where the comment
     * was made is BEFORE (destination branch) or AFTER (source branch).</p>
     */
    inline const Location& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline CommentsForPullRequest& WithLocation(const Location& value) { SetLocation(value); return *this;}
    inline CommentsForPullRequest& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of comment objects. Each comment object contains information about a
     * comment on the pull request.</p>
     */
    inline const Aws::Vector<Comment>& GetComments() const{ return m_comments; }
    inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }
    inline void SetComments(const Aws::Vector<Comment>& value) { m_commentsHasBeenSet = true; m_comments = value; }
    inline void SetComments(Aws::Vector<Comment>&& value) { m_commentsHasBeenSet = true; m_comments = std::move(value); }
    inline CommentsForPullRequest& WithComments(const Aws::Vector<Comment>& value) { SetComments(value); return *this;}
    inline CommentsForPullRequest& WithComments(Aws::Vector<Comment>&& value) { SetComments(std::move(value)); return *this;}
    inline CommentsForPullRequest& AddComments(const Comment& value) { m_commentsHasBeenSet = true; m_comments.push_back(value); return *this; }
    inline CommentsForPullRequest& AddComments(Comment&& value) { m_commentsHasBeenSet = true; m_comments.push_back(std::move(value)); return *this; }
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

    Aws::String m_beforeBlobId;
    bool m_beforeBlobIdHasBeenSet = false;

    Aws::String m_afterBlobId;
    bool m_afterBlobIdHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;

    Aws::Vector<Comment> m_comments;
    bool m_commentsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
