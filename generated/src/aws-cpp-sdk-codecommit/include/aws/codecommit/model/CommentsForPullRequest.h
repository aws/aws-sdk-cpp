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
    AWS_CODECOMMIT_API CommentsForPullRequest() = default;
    AWS_CODECOMMIT_API CommentsForPullRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API CommentsForPullRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline const Aws::String& GetPullRequestId() const { return m_pullRequestId; }
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }
    template<typename PullRequestIdT = Aws::String>
    void SetPullRequestId(PullRequestIdT&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::forward<PullRequestIdT>(value); }
    template<typename PullRequestIdT = Aws::String>
    CommentsForPullRequest& WithPullRequestId(PullRequestIdT&& value) { SetPullRequestId(std::forward<PullRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    CommentsForPullRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit that was the tip of the destination branch
     * when the pull request was created. This commit is superceded by the after commit
     * in the source branch when and if you merge the source branch into the
     * destination branch.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const { return m_beforeCommitId; }
    inline bool BeforeCommitIdHasBeenSet() const { return m_beforeCommitIdHasBeenSet; }
    template<typename BeforeCommitIdT = Aws::String>
    void SetBeforeCommitId(BeforeCommitIdT&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::forward<BeforeCommitIdT>(value); }
    template<typename BeforeCommitIdT = Aws::String>
    CommentsForPullRequest& WithBeforeCommitId(BeforeCommitIdT&& value) { SetBeforeCommitId(std::forward<BeforeCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit that was the tip of the source branch at the
     * time the comment was made. </p>
     */
    inline const Aws::String& GetAfterCommitId() const { return m_afterCommitId; }
    inline bool AfterCommitIdHasBeenSet() const { return m_afterCommitIdHasBeenSet; }
    template<typename AfterCommitIdT = Aws::String>
    void SetAfterCommitId(AfterCommitIdT&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::forward<AfterCommitIdT>(value); }
    template<typename AfterCommitIdT = Aws::String>
    CommentsForPullRequest& WithAfterCommitId(AfterCommitIdT&& value) { SetAfterCommitId(std::forward<AfterCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full blob ID of the file on which you want to comment on the destination
     * commit.</p>
     */
    inline const Aws::String& GetBeforeBlobId() const { return m_beforeBlobId; }
    inline bool BeforeBlobIdHasBeenSet() const { return m_beforeBlobIdHasBeenSet; }
    template<typename BeforeBlobIdT = Aws::String>
    void SetBeforeBlobId(BeforeBlobIdT&& value) { m_beforeBlobIdHasBeenSet = true; m_beforeBlobId = std::forward<BeforeBlobIdT>(value); }
    template<typename BeforeBlobIdT = Aws::String>
    CommentsForPullRequest& WithBeforeBlobId(BeforeBlobIdT&& value) { SetBeforeBlobId(std::forward<BeforeBlobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full blob ID of the file on which you want to comment on the source
     * commit.</p>
     */
    inline const Aws::String& GetAfterBlobId() const { return m_afterBlobId; }
    inline bool AfterBlobIdHasBeenSet() const { return m_afterBlobIdHasBeenSet; }
    template<typename AfterBlobIdT = Aws::String>
    void SetAfterBlobId(AfterBlobIdT&& value) { m_afterBlobIdHasBeenSet = true; m_afterBlobId = std::forward<AfterBlobIdT>(value); }
    template<typename AfterBlobIdT = Aws::String>
    CommentsForPullRequest& WithAfterBlobId(AfterBlobIdT&& value) { SetAfterBlobId(std::forward<AfterBlobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location information about the comment on the pull request, including the
     * file name, line number, and whether the version of the file where the comment
     * was made is BEFORE (destination branch) or AFTER (source branch).</p>
     */
    inline const Location& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Location>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Location>
    CommentsForPullRequest& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of comment objects. Each comment object contains information about a
     * comment on the pull request.</p>
     */
    inline const Aws::Vector<Comment>& GetComments() const { return m_comments; }
    inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }
    template<typename CommentsT = Aws::Vector<Comment>>
    void SetComments(CommentsT&& value) { m_commentsHasBeenSet = true; m_comments = std::forward<CommentsT>(value); }
    template<typename CommentsT = Aws::Vector<Comment>>
    CommentsForPullRequest& WithComments(CommentsT&& value) { SetComments(std::forward<CommentsT>(value)); return *this;}
    template<typename CommentsT = Comment>
    CommentsForPullRequest& AddComments(CommentsT&& value) { m_commentsHasBeenSet = true; m_comments.emplace_back(std::forward<CommentsT>(value)); return *this; }
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
