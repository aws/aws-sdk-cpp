/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/ConflictDetailLevelTypeEnum.h>
#include <aws/codecommit/model/ConflictResolutionStrategyTypeEnum.h>
#include <aws/codecommit/model/ConflictResolution.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class MergePullRequestBySquashRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API MergePullRequestBySquashRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MergePullRequestBySquash"; }

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
    inline MergePullRequestBySquashRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}
    inline MergePullRequestBySquashRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}
    inline MergePullRequestBySquashRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline MergePullRequestBySquashRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline MergePullRequestBySquashRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline MergePullRequestBySquashRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the original or updated commit in the pull request
     * source branch. Pass this value if you want an exception thrown if the current
     * commit ID of the tip of the source branch does not match this commit ID.</p>
     */
    inline const Aws::String& GetSourceCommitId() const{ return m_sourceCommitId; }
    inline bool SourceCommitIdHasBeenSet() const { return m_sourceCommitIdHasBeenSet; }
    inline void SetSourceCommitId(const Aws::String& value) { m_sourceCommitIdHasBeenSet = true; m_sourceCommitId = value; }
    inline void SetSourceCommitId(Aws::String&& value) { m_sourceCommitIdHasBeenSet = true; m_sourceCommitId = std::move(value); }
    inline void SetSourceCommitId(const char* value) { m_sourceCommitIdHasBeenSet = true; m_sourceCommitId.assign(value); }
    inline MergePullRequestBySquashRequest& WithSourceCommitId(const Aws::String& value) { SetSourceCommitId(value); return *this;}
    inline MergePullRequestBySquashRequest& WithSourceCommitId(Aws::String&& value) { SetSourceCommitId(std::move(value)); return *this;}
    inline MergePullRequestBySquashRequest& WithSourceCommitId(const char* value) { SetSourceCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of conflict detail to use. If unspecified, the default FILE_LEVEL
     * is used, which returns a not-mergeable result if the same file has differences
     * in both branches. If LINE_LEVEL is specified, a conflict is considered not
     * mergeable if the same file in both branches has differences on the same
     * line.</p>
     */
    inline const ConflictDetailLevelTypeEnum& GetConflictDetailLevel() const{ return m_conflictDetailLevel; }
    inline bool ConflictDetailLevelHasBeenSet() const { return m_conflictDetailLevelHasBeenSet; }
    inline void SetConflictDetailLevel(const ConflictDetailLevelTypeEnum& value) { m_conflictDetailLevelHasBeenSet = true; m_conflictDetailLevel = value; }
    inline void SetConflictDetailLevel(ConflictDetailLevelTypeEnum&& value) { m_conflictDetailLevelHasBeenSet = true; m_conflictDetailLevel = std::move(value); }
    inline MergePullRequestBySquashRequest& WithConflictDetailLevel(const ConflictDetailLevelTypeEnum& value) { SetConflictDetailLevel(value); return *this;}
    inline MergePullRequestBySquashRequest& WithConflictDetailLevel(ConflictDetailLevelTypeEnum&& value) { SetConflictDetailLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which branch to use when resolving conflicts, or whether to attempt
     * automatically merging two versions of a file. The default is NONE, which
     * requires any conflicts to be resolved manually before the merge operation is
     * successful.</p>
     */
    inline const ConflictResolutionStrategyTypeEnum& GetConflictResolutionStrategy() const{ return m_conflictResolutionStrategy; }
    inline bool ConflictResolutionStrategyHasBeenSet() const { return m_conflictResolutionStrategyHasBeenSet; }
    inline void SetConflictResolutionStrategy(const ConflictResolutionStrategyTypeEnum& value) { m_conflictResolutionStrategyHasBeenSet = true; m_conflictResolutionStrategy = value; }
    inline void SetConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum&& value) { m_conflictResolutionStrategyHasBeenSet = true; m_conflictResolutionStrategy = std::move(value); }
    inline MergePullRequestBySquashRequest& WithConflictResolutionStrategy(const ConflictResolutionStrategyTypeEnum& value) { SetConflictResolutionStrategy(value); return *this;}
    inline MergePullRequestBySquashRequest& WithConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum&& value) { SetConflictResolutionStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit message to include in the commit information for the merge.</p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }
    inline MergePullRequestBySquashRequest& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}
    inline MergePullRequestBySquashRequest& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}
    inline MergePullRequestBySquashRequest& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the author who created the commit. This information is used as
     * both the author and committer for the commit.</p>
     */
    inline const Aws::String& GetAuthorName() const{ return m_authorName; }
    inline bool AuthorNameHasBeenSet() const { return m_authorNameHasBeenSet; }
    inline void SetAuthorName(const Aws::String& value) { m_authorNameHasBeenSet = true; m_authorName = value; }
    inline void SetAuthorName(Aws::String&& value) { m_authorNameHasBeenSet = true; m_authorName = std::move(value); }
    inline void SetAuthorName(const char* value) { m_authorNameHasBeenSet = true; m_authorName.assign(value); }
    inline MergePullRequestBySquashRequest& WithAuthorName(const Aws::String& value) { SetAuthorName(value); return *this;}
    inline MergePullRequestBySquashRequest& WithAuthorName(Aws::String&& value) { SetAuthorName(std::move(value)); return *this;}
    inline MergePullRequestBySquashRequest& WithAuthorName(const char* value) { SetAuthorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the person merging the branches. This information is
     * used in the commit information for the merge.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline MergePullRequestBySquashRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline MergePullRequestBySquashRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline MergePullRequestBySquashRequest& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the commit contains deletions, whether to keep a folder or folder
     * structure if the changes leave the folders empty. If true, a .gitkeep file is
     * created for empty folders. The default is false.</p>
     */
    inline bool GetKeepEmptyFolders() const{ return m_keepEmptyFolders; }
    inline bool KeepEmptyFoldersHasBeenSet() const { return m_keepEmptyFoldersHasBeenSet; }
    inline void SetKeepEmptyFolders(bool value) { m_keepEmptyFoldersHasBeenSet = true; m_keepEmptyFolders = value; }
    inline MergePullRequestBySquashRequest& WithKeepEmptyFolders(bool value) { SetKeepEmptyFolders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If AUTOMERGE is the conflict resolution strategy, a list of inputs to use
     * when resolving conflicts during a merge.</p>
     */
    inline const ConflictResolution& GetConflictResolution() const{ return m_conflictResolution; }
    inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }
    inline void SetConflictResolution(const ConflictResolution& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = value; }
    inline void SetConflictResolution(ConflictResolution&& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = std::move(value); }
    inline MergePullRequestBySquashRequest& WithConflictResolution(const ConflictResolution& value) { SetConflictResolution(value); return *this;}
    inline MergePullRequestBySquashRequest& WithConflictResolution(ConflictResolution&& value) { SetConflictResolution(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_sourceCommitId;
    bool m_sourceCommitIdHasBeenSet = false;

    ConflictDetailLevelTypeEnum m_conflictDetailLevel;
    bool m_conflictDetailLevelHasBeenSet = false;

    ConflictResolutionStrategyTypeEnum m_conflictResolutionStrategy;
    bool m_conflictResolutionStrategyHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;

    Aws::String m_authorName;
    bool m_authorNameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    bool m_keepEmptyFolders;
    bool m_keepEmptyFoldersHasBeenSet = false;

    ConflictResolution m_conflictResolution;
    bool m_conflictResolutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
