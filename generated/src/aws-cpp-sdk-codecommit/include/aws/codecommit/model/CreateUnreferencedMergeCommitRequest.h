/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/MergeOptionTypeEnum.h>
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
  class CreateUnreferencedMergeCommitRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API CreateUnreferencedMergeCommitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUnreferencedMergeCommit"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository where you want to create the unreferenced merge
     * commit.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    CreateUnreferencedMergeCommitRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit (for example, a branch name or a full commit ID).</p>
     */
    inline const Aws::String& GetSourceCommitSpecifier() const { return m_sourceCommitSpecifier; }
    inline bool SourceCommitSpecifierHasBeenSet() const { return m_sourceCommitSpecifierHasBeenSet; }
    template<typename SourceCommitSpecifierT = Aws::String>
    void SetSourceCommitSpecifier(SourceCommitSpecifierT&& value) { m_sourceCommitSpecifierHasBeenSet = true; m_sourceCommitSpecifier = std::forward<SourceCommitSpecifierT>(value); }
    template<typename SourceCommitSpecifierT = Aws::String>
    CreateUnreferencedMergeCommitRequest& WithSourceCommitSpecifier(SourceCommitSpecifierT&& value) { SetSourceCommitSpecifier(std::forward<SourceCommitSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit (for example, a branch name or a full commit ID).</p>
     */
    inline const Aws::String& GetDestinationCommitSpecifier() const { return m_destinationCommitSpecifier; }
    inline bool DestinationCommitSpecifierHasBeenSet() const { return m_destinationCommitSpecifierHasBeenSet; }
    template<typename DestinationCommitSpecifierT = Aws::String>
    void SetDestinationCommitSpecifier(DestinationCommitSpecifierT&& value) { m_destinationCommitSpecifierHasBeenSet = true; m_destinationCommitSpecifier = std::forward<DestinationCommitSpecifierT>(value); }
    template<typename DestinationCommitSpecifierT = Aws::String>
    CreateUnreferencedMergeCommitRequest& WithDestinationCommitSpecifier(DestinationCommitSpecifierT&& value) { SetDestinationCommitSpecifier(std::forward<DestinationCommitSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The merge option or strategy you want to use to merge the code.</p>
     */
    inline MergeOptionTypeEnum GetMergeOption() const { return m_mergeOption; }
    inline bool MergeOptionHasBeenSet() const { return m_mergeOptionHasBeenSet; }
    inline void SetMergeOption(MergeOptionTypeEnum value) { m_mergeOptionHasBeenSet = true; m_mergeOption = value; }
    inline CreateUnreferencedMergeCommitRequest& WithMergeOption(MergeOptionTypeEnum value) { SetMergeOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of conflict detail to use. If unspecified, the default FILE_LEVEL
     * is used, which returns a not-mergeable result if the same file has differences
     * in both branches. If LINE_LEVEL is specified, a conflict is considered not
     * mergeable if the same file in both branches has differences on the same
     * line.</p>
     */
    inline ConflictDetailLevelTypeEnum GetConflictDetailLevel() const { return m_conflictDetailLevel; }
    inline bool ConflictDetailLevelHasBeenSet() const { return m_conflictDetailLevelHasBeenSet; }
    inline void SetConflictDetailLevel(ConflictDetailLevelTypeEnum value) { m_conflictDetailLevelHasBeenSet = true; m_conflictDetailLevel = value; }
    inline CreateUnreferencedMergeCommitRequest& WithConflictDetailLevel(ConflictDetailLevelTypeEnum value) { SetConflictDetailLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which branch to use when resolving conflicts, or whether to attempt
     * automatically merging two versions of a file. The default is NONE, which
     * requires any conflicts to be resolved manually before the merge operation is
     * successful.</p>
     */
    inline ConflictResolutionStrategyTypeEnum GetConflictResolutionStrategy() const { return m_conflictResolutionStrategy; }
    inline bool ConflictResolutionStrategyHasBeenSet() const { return m_conflictResolutionStrategyHasBeenSet; }
    inline void SetConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum value) { m_conflictResolutionStrategyHasBeenSet = true; m_conflictResolutionStrategy = value; }
    inline CreateUnreferencedMergeCommitRequest& WithConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum value) { SetConflictResolutionStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the author who created the unreferenced commit. This information
     * is used as both the author and committer for the commit.</p>
     */
    inline const Aws::String& GetAuthorName() const { return m_authorName; }
    inline bool AuthorNameHasBeenSet() const { return m_authorNameHasBeenSet; }
    template<typename AuthorNameT = Aws::String>
    void SetAuthorName(AuthorNameT&& value) { m_authorNameHasBeenSet = true; m_authorName = std::forward<AuthorNameT>(value); }
    template<typename AuthorNameT = Aws::String>
    CreateUnreferencedMergeCommitRequest& WithAuthorName(AuthorNameT&& value) { SetAuthorName(std::forward<AuthorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address for the person who created the unreferenced commit.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    CreateUnreferencedMergeCommitRequest& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit message for the unreferenced commit.</p>
     */
    inline const Aws::String& GetCommitMessage() const { return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    template<typename CommitMessageT = Aws::String>
    void SetCommitMessage(CommitMessageT&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::forward<CommitMessageT>(value); }
    template<typename CommitMessageT = Aws::String>
    CreateUnreferencedMergeCommitRequest& WithCommitMessage(CommitMessageT&& value) { SetCommitMessage(std::forward<CommitMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the commit contains deletions, whether to keep a folder or folder
     * structure if the changes leave the folders empty. If this is specified as true,
     * a .gitkeep file is created for empty folders. The default is false.</p>
     */
    inline bool GetKeepEmptyFolders() const { return m_keepEmptyFolders; }
    inline bool KeepEmptyFoldersHasBeenSet() const { return m_keepEmptyFoldersHasBeenSet; }
    inline void SetKeepEmptyFolders(bool value) { m_keepEmptyFoldersHasBeenSet = true; m_keepEmptyFolders = value; }
    inline CreateUnreferencedMergeCommitRequest& WithKeepEmptyFolders(bool value) { SetKeepEmptyFolders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If AUTOMERGE is the conflict resolution strategy, a list of inputs to use
     * when resolving conflicts during a merge.</p>
     */
    inline const ConflictResolution& GetConflictResolution() const { return m_conflictResolution; }
    inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }
    template<typename ConflictResolutionT = ConflictResolution>
    void SetConflictResolution(ConflictResolutionT&& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = std::forward<ConflictResolutionT>(value); }
    template<typename ConflictResolutionT = ConflictResolution>
    CreateUnreferencedMergeCommitRequest& WithConflictResolution(ConflictResolutionT&& value) { SetConflictResolution(std::forward<ConflictResolutionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_sourceCommitSpecifier;
    bool m_sourceCommitSpecifierHasBeenSet = false;

    Aws::String m_destinationCommitSpecifier;
    bool m_destinationCommitSpecifierHasBeenSet = false;

    MergeOptionTypeEnum m_mergeOption{MergeOptionTypeEnum::NOT_SET};
    bool m_mergeOptionHasBeenSet = false;

    ConflictDetailLevelTypeEnum m_conflictDetailLevel{ConflictDetailLevelTypeEnum::NOT_SET};
    bool m_conflictDetailLevelHasBeenSet = false;

    ConflictResolutionStrategyTypeEnum m_conflictResolutionStrategy{ConflictResolutionStrategyTypeEnum::NOT_SET};
    bool m_conflictResolutionStrategyHasBeenSet = false;

    Aws::String m_authorName;
    bool m_authorNameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;

    bool m_keepEmptyFolders{false};
    bool m_keepEmptyFoldersHasBeenSet = false;

    ConflictResolution m_conflictResolution;
    bool m_conflictResolutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
