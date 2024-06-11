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
    AWS_CODECOMMIT_API CreateUnreferencedMergeCommitRequest();

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
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline CreateUnreferencedMergeCommitRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit (for example, a branch name or a full commit ID).</p>
     */
    inline const Aws::String& GetSourceCommitSpecifier() const{ return m_sourceCommitSpecifier; }
    inline bool SourceCommitSpecifierHasBeenSet() const { return m_sourceCommitSpecifierHasBeenSet; }
    inline void SetSourceCommitSpecifier(const Aws::String& value) { m_sourceCommitSpecifierHasBeenSet = true; m_sourceCommitSpecifier = value; }
    inline void SetSourceCommitSpecifier(Aws::String&& value) { m_sourceCommitSpecifierHasBeenSet = true; m_sourceCommitSpecifier = std::move(value); }
    inline void SetSourceCommitSpecifier(const char* value) { m_sourceCommitSpecifierHasBeenSet = true; m_sourceCommitSpecifier.assign(value); }
    inline CreateUnreferencedMergeCommitRequest& WithSourceCommitSpecifier(const Aws::String& value) { SetSourceCommitSpecifier(value); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithSourceCommitSpecifier(Aws::String&& value) { SetSourceCommitSpecifier(std::move(value)); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithSourceCommitSpecifier(const char* value) { SetSourceCommitSpecifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit (for example, a branch name or a full commit ID).</p>
     */
    inline const Aws::String& GetDestinationCommitSpecifier() const{ return m_destinationCommitSpecifier; }
    inline bool DestinationCommitSpecifierHasBeenSet() const { return m_destinationCommitSpecifierHasBeenSet; }
    inline void SetDestinationCommitSpecifier(const Aws::String& value) { m_destinationCommitSpecifierHasBeenSet = true; m_destinationCommitSpecifier = value; }
    inline void SetDestinationCommitSpecifier(Aws::String&& value) { m_destinationCommitSpecifierHasBeenSet = true; m_destinationCommitSpecifier = std::move(value); }
    inline void SetDestinationCommitSpecifier(const char* value) { m_destinationCommitSpecifierHasBeenSet = true; m_destinationCommitSpecifier.assign(value); }
    inline CreateUnreferencedMergeCommitRequest& WithDestinationCommitSpecifier(const Aws::String& value) { SetDestinationCommitSpecifier(value); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithDestinationCommitSpecifier(Aws::String&& value) { SetDestinationCommitSpecifier(std::move(value)); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithDestinationCommitSpecifier(const char* value) { SetDestinationCommitSpecifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The merge option or strategy you want to use to merge the code.</p>
     */
    inline const MergeOptionTypeEnum& GetMergeOption() const{ return m_mergeOption; }
    inline bool MergeOptionHasBeenSet() const { return m_mergeOptionHasBeenSet; }
    inline void SetMergeOption(const MergeOptionTypeEnum& value) { m_mergeOptionHasBeenSet = true; m_mergeOption = value; }
    inline void SetMergeOption(MergeOptionTypeEnum&& value) { m_mergeOptionHasBeenSet = true; m_mergeOption = std::move(value); }
    inline CreateUnreferencedMergeCommitRequest& WithMergeOption(const MergeOptionTypeEnum& value) { SetMergeOption(value); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithMergeOption(MergeOptionTypeEnum&& value) { SetMergeOption(std::move(value)); return *this;}
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
    inline CreateUnreferencedMergeCommitRequest& WithConflictDetailLevel(const ConflictDetailLevelTypeEnum& value) { SetConflictDetailLevel(value); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithConflictDetailLevel(ConflictDetailLevelTypeEnum&& value) { SetConflictDetailLevel(std::move(value)); return *this;}
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
    inline CreateUnreferencedMergeCommitRequest& WithConflictResolutionStrategy(const ConflictResolutionStrategyTypeEnum& value) { SetConflictResolutionStrategy(value); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum&& value) { SetConflictResolutionStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the author who created the unreferenced commit. This information
     * is used as both the author and committer for the commit.</p>
     */
    inline const Aws::String& GetAuthorName() const{ return m_authorName; }
    inline bool AuthorNameHasBeenSet() const { return m_authorNameHasBeenSet; }
    inline void SetAuthorName(const Aws::String& value) { m_authorNameHasBeenSet = true; m_authorName = value; }
    inline void SetAuthorName(Aws::String&& value) { m_authorNameHasBeenSet = true; m_authorName = std::move(value); }
    inline void SetAuthorName(const char* value) { m_authorNameHasBeenSet = true; m_authorName.assign(value); }
    inline CreateUnreferencedMergeCommitRequest& WithAuthorName(const Aws::String& value) { SetAuthorName(value); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithAuthorName(Aws::String&& value) { SetAuthorName(std::move(value)); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithAuthorName(const char* value) { SetAuthorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address for the person who created the unreferenced commit.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline CreateUnreferencedMergeCommitRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit message for the unreferenced commit.</p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }
    inline CreateUnreferencedMergeCommitRequest& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the commit contains deletions, whether to keep a folder or folder
     * structure if the changes leave the folders empty. If this is specified as true,
     * a .gitkeep file is created for empty folders. The default is false.</p>
     */
    inline bool GetKeepEmptyFolders() const{ return m_keepEmptyFolders; }
    inline bool KeepEmptyFoldersHasBeenSet() const { return m_keepEmptyFoldersHasBeenSet; }
    inline void SetKeepEmptyFolders(bool value) { m_keepEmptyFoldersHasBeenSet = true; m_keepEmptyFolders = value; }
    inline CreateUnreferencedMergeCommitRequest& WithKeepEmptyFolders(bool value) { SetKeepEmptyFolders(value); return *this;}
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
    inline CreateUnreferencedMergeCommitRequest& WithConflictResolution(const ConflictResolution& value) { SetConflictResolution(value); return *this;}
    inline CreateUnreferencedMergeCommitRequest& WithConflictResolution(ConflictResolution&& value) { SetConflictResolution(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_sourceCommitSpecifier;
    bool m_sourceCommitSpecifierHasBeenSet = false;

    Aws::String m_destinationCommitSpecifier;
    bool m_destinationCommitSpecifierHasBeenSet = false;

    MergeOptionTypeEnum m_mergeOption;
    bool m_mergeOptionHasBeenSet = false;

    ConflictDetailLevelTypeEnum m_conflictDetailLevel;
    bool m_conflictDetailLevelHasBeenSet = false;

    ConflictResolutionStrategyTypeEnum m_conflictResolutionStrategy;
    bool m_conflictResolutionStrategyHasBeenSet = false;

    Aws::String m_authorName;
    bool m_authorNameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;

    bool m_keepEmptyFolders;
    bool m_keepEmptyFoldersHasBeenSet = false;

    ConflictResolution m_conflictResolution;
    bool m_conflictResolutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
