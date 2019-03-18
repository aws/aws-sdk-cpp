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
  class AWS_CODECOMMIT_API CommentsForPullRequest
  {
  public:
    CommentsForPullRequest();
    CommentsForPullRequest(Aws::Utils::Json::JsonView jsonValue);
    CommentsForPullRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline CommentsForPullRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline CommentsForPullRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline CommentsForPullRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline CommentsForPullRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline CommentsForPullRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline CommentsForPullRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The full commit ID of the commit that was the tip of the destination branch
     * when the pull request was created. This commit will be superceded by the after
     * commit in the source branch when and if you merge the source branch into the
     * destination branch.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const{ return m_beforeCommitId; }

    /**
     * <p>The full commit ID of the commit that was the tip of the destination branch
     * when the pull request was created. This commit will be superceded by the after
     * commit in the source branch when and if you merge the source branch into the
     * destination branch.</p>
     */
    inline bool BeforeCommitIdHasBeenSet() const { return m_beforeCommitIdHasBeenSet; }

    /**
     * <p>The full commit ID of the commit that was the tip of the destination branch
     * when the pull request was created. This commit will be superceded by the after
     * commit in the source branch when and if you merge the source branch into the
     * destination branch.</p>
     */
    inline void SetBeforeCommitId(const Aws::String& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = value; }

    /**
     * <p>The full commit ID of the commit that was the tip of the destination branch
     * when the pull request was created. This commit will be superceded by the after
     * commit in the source branch when and if you merge the source branch into the
     * destination branch.</p>
     */
    inline void SetBeforeCommitId(Aws::String&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::move(value); }

    /**
     * <p>The full commit ID of the commit that was the tip of the destination branch
     * when the pull request was created. This commit will be superceded by the after
     * commit in the source branch when and if you merge the source branch into the
     * destination branch.</p>
     */
    inline void SetBeforeCommitId(const char* value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId.assign(value); }

    /**
     * <p>The full commit ID of the commit that was the tip of the destination branch
     * when the pull request was created. This commit will be superceded by the after
     * commit in the source branch when and if you merge the source branch into the
     * destination branch.</p>
     */
    inline CommentsForPullRequest& WithBeforeCommitId(const Aws::String& value) { SetBeforeCommitId(value); return *this;}

    /**
     * <p>The full commit ID of the commit that was the tip of the destination branch
     * when the pull request was created. This commit will be superceded by the after
     * commit in the source branch when and if you merge the source branch into the
     * destination branch.</p>
     */
    inline CommentsForPullRequest& WithBeforeCommitId(Aws::String&& value) { SetBeforeCommitId(std::move(value)); return *this;}

    /**
     * <p>The full commit ID of the commit that was the tip of the destination branch
     * when the pull request was created. This commit will be superceded by the after
     * commit in the source branch when and if you merge the source branch into the
     * destination branch.</p>
     */
    inline CommentsForPullRequest& WithBeforeCommitId(const char* value) { SetBeforeCommitId(value); return *this;}


    /**
     * <p>he full commit ID of the commit that was the tip of the source branch at the
     * time the comment was made. </p>
     */
    inline const Aws::String& GetAfterCommitId() const{ return m_afterCommitId; }

    /**
     * <p>he full commit ID of the commit that was the tip of the source branch at the
     * time the comment was made. </p>
     */
    inline bool AfterCommitIdHasBeenSet() const { return m_afterCommitIdHasBeenSet; }

    /**
     * <p>he full commit ID of the commit that was the tip of the source branch at the
     * time the comment was made. </p>
     */
    inline void SetAfterCommitId(const Aws::String& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = value; }

    /**
     * <p>he full commit ID of the commit that was the tip of the source branch at the
     * time the comment was made. </p>
     */
    inline void SetAfterCommitId(Aws::String&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::move(value); }

    /**
     * <p>he full commit ID of the commit that was the tip of the source branch at the
     * time the comment was made. </p>
     */
    inline void SetAfterCommitId(const char* value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId.assign(value); }

    /**
     * <p>he full commit ID of the commit that was the tip of the source branch at the
     * time the comment was made. </p>
     */
    inline CommentsForPullRequest& WithAfterCommitId(const Aws::String& value) { SetAfterCommitId(value); return *this;}

    /**
     * <p>he full commit ID of the commit that was the tip of the source branch at the
     * time the comment was made. </p>
     */
    inline CommentsForPullRequest& WithAfterCommitId(Aws::String&& value) { SetAfterCommitId(std::move(value)); return *this;}

    /**
     * <p>he full commit ID of the commit that was the tip of the source branch at the
     * time the comment was made. </p>
     */
    inline CommentsForPullRequest& WithAfterCommitId(const char* value) { SetAfterCommitId(value); return *this;}


    /**
     * <p>The full blob ID of the file on which you want to comment on the destination
     * commit.</p>
     */
    inline const Aws::String& GetBeforeBlobId() const{ return m_beforeBlobId; }

    /**
     * <p>The full blob ID of the file on which you want to comment on the destination
     * commit.</p>
     */
    inline bool BeforeBlobIdHasBeenSet() const { return m_beforeBlobIdHasBeenSet; }

    /**
     * <p>The full blob ID of the file on which you want to comment on the destination
     * commit.</p>
     */
    inline void SetBeforeBlobId(const Aws::String& value) { m_beforeBlobIdHasBeenSet = true; m_beforeBlobId = value; }

    /**
     * <p>The full blob ID of the file on which you want to comment on the destination
     * commit.</p>
     */
    inline void SetBeforeBlobId(Aws::String&& value) { m_beforeBlobIdHasBeenSet = true; m_beforeBlobId = std::move(value); }

    /**
     * <p>The full blob ID of the file on which you want to comment on the destination
     * commit.</p>
     */
    inline void SetBeforeBlobId(const char* value) { m_beforeBlobIdHasBeenSet = true; m_beforeBlobId.assign(value); }

    /**
     * <p>The full blob ID of the file on which you want to comment on the destination
     * commit.</p>
     */
    inline CommentsForPullRequest& WithBeforeBlobId(const Aws::String& value) { SetBeforeBlobId(value); return *this;}

    /**
     * <p>The full blob ID of the file on which you want to comment on the destination
     * commit.</p>
     */
    inline CommentsForPullRequest& WithBeforeBlobId(Aws::String&& value) { SetBeforeBlobId(std::move(value)); return *this;}

    /**
     * <p>The full blob ID of the file on which you want to comment on the destination
     * commit.</p>
     */
    inline CommentsForPullRequest& WithBeforeBlobId(const char* value) { SetBeforeBlobId(value); return *this;}


    /**
     * <p>The full blob ID of the file on which you want to comment on the source
     * commit.</p>
     */
    inline const Aws::String& GetAfterBlobId() const{ return m_afterBlobId; }

    /**
     * <p>The full blob ID of the file on which you want to comment on the source
     * commit.</p>
     */
    inline bool AfterBlobIdHasBeenSet() const { return m_afterBlobIdHasBeenSet; }

    /**
     * <p>The full blob ID of the file on which you want to comment on the source
     * commit.</p>
     */
    inline void SetAfterBlobId(const Aws::String& value) { m_afterBlobIdHasBeenSet = true; m_afterBlobId = value; }

    /**
     * <p>The full blob ID of the file on which you want to comment on the source
     * commit.</p>
     */
    inline void SetAfterBlobId(Aws::String&& value) { m_afterBlobIdHasBeenSet = true; m_afterBlobId = std::move(value); }

    /**
     * <p>The full blob ID of the file on which you want to comment on the source
     * commit.</p>
     */
    inline void SetAfterBlobId(const char* value) { m_afterBlobIdHasBeenSet = true; m_afterBlobId.assign(value); }

    /**
     * <p>The full blob ID of the file on which you want to comment on the source
     * commit.</p>
     */
    inline CommentsForPullRequest& WithAfterBlobId(const Aws::String& value) { SetAfterBlobId(value); return *this;}

    /**
     * <p>The full blob ID of the file on which you want to comment on the source
     * commit.</p>
     */
    inline CommentsForPullRequest& WithAfterBlobId(Aws::String&& value) { SetAfterBlobId(std::move(value)); return *this;}

    /**
     * <p>The full blob ID of the file on which you want to comment on the source
     * commit.</p>
     */
    inline CommentsForPullRequest& WithAfterBlobId(const char* value) { SetAfterBlobId(value); return *this;}


    /**
     * <p>Location information about the comment on the pull request, including the
     * file name, line number, and whether the version of the file where the comment
     * was made is 'BEFORE' (destination branch) or 'AFTER' (source branch).</p>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>Location information about the comment on the pull request, including the
     * file name, line number, and whether the version of the file where the comment
     * was made is 'BEFORE' (destination branch) or 'AFTER' (source branch).</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Location information about the comment on the pull request, including the
     * file name, line number, and whether the version of the file where the comment
     * was made is 'BEFORE' (destination branch) or 'AFTER' (source branch).</p>
     */
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Location information about the comment on the pull request, including the
     * file name, line number, and whether the version of the file where the comment
     * was made is 'BEFORE' (destination branch) or 'AFTER' (source branch).</p>
     */
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Location information about the comment on the pull request, including the
     * file name, line number, and whether the version of the file where the comment
     * was made is 'BEFORE' (destination branch) or 'AFTER' (source branch).</p>
     */
    inline CommentsForPullRequest& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>Location information about the comment on the pull request, including the
     * file name, line number, and whether the version of the file where the comment
     * was made is 'BEFORE' (destination branch) or 'AFTER' (source branch).</p>
     */
    inline CommentsForPullRequest& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>An array of comment objects. Each comment object contains information about a
     * comment on the pull request.</p>
     */
    inline const Aws::Vector<Comment>& GetComments() const{ return m_comments; }

    /**
     * <p>An array of comment objects. Each comment object contains information about a
     * comment on the pull request.</p>
     */
    inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }

    /**
     * <p>An array of comment objects. Each comment object contains information about a
     * comment on the pull request.</p>
     */
    inline void SetComments(const Aws::Vector<Comment>& value) { m_commentsHasBeenSet = true; m_comments = value; }

    /**
     * <p>An array of comment objects. Each comment object contains information about a
     * comment on the pull request.</p>
     */
    inline void SetComments(Aws::Vector<Comment>&& value) { m_commentsHasBeenSet = true; m_comments = std::move(value); }

    /**
     * <p>An array of comment objects. Each comment object contains information about a
     * comment on the pull request.</p>
     */
    inline CommentsForPullRequest& WithComments(const Aws::Vector<Comment>& value) { SetComments(value); return *this;}

    /**
     * <p>An array of comment objects. Each comment object contains information about a
     * comment on the pull request.</p>
     */
    inline CommentsForPullRequest& WithComments(Aws::Vector<Comment>&& value) { SetComments(std::move(value)); return *this;}

    /**
     * <p>An array of comment objects. Each comment object contains information about a
     * comment on the pull request.</p>
     */
    inline CommentsForPullRequest& AddComments(const Comment& value) { m_commentsHasBeenSet = true; m_comments.push_back(value); return *this; }

    /**
     * <p>An array of comment objects. Each comment object contains information about a
     * comment on the pull request.</p>
     */
    inline CommentsForPullRequest& AddComments(Comment&& value) { m_commentsHasBeenSet = true; m_comments.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_beforeCommitId;
    bool m_beforeCommitIdHasBeenSet;

    Aws::String m_afterCommitId;
    bool m_afterCommitIdHasBeenSet;

    Aws::String m_beforeBlobId;
    bool m_beforeBlobIdHasBeenSet;

    Aws::String m_afterBlobId;
    bool m_afterBlobIdHasBeenSet;

    Location m_location;
    bool m_locationHasBeenSet;

    Aws::Vector<Comment> m_comments;
    bool m_commentsHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
