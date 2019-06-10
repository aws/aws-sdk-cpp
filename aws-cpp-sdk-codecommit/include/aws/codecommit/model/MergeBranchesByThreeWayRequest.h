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
  class AWS_CODECOMMIT_API MergeBranchesByThreeWayRequest : public CodeCommitRequest
  {
  public:
    MergeBranchesByThreeWayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MergeBranchesByThreeWay"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline const Aws::String& GetSourceCommitSpecifier() const{ return m_sourceCommitSpecifier; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline bool SourceCommitSpecifierHasBeenSet() const { return m_sourceCommitSpecifierHasBeenSet; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline void SetSourceCommitSpecifier(const Aws::String& value) { m_sourceCommitSpecifierHasBeenSet = true; m_sourceCommitSpecifier = value; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline void SetSourceCommitSpecifier(Aws::String&& value) { m_sourceCommitSpecifierHasBeenSet = true; m_sourceCommitSpecifier = std::move(value); }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline void SetSourceCommitSpecifier(const char* value) { m_sourceCommitSpecifierHasBeenSet = true; m_sourceCommitSpecifier.assign(value); }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithSourceCommitSpecifier(const Aws::String& value) { SetSourceCommitSpecifier(value); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithSourceCommitSpecifier(Aws::String&& value) { SetSourceCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithSourceCommitSpecifier(const char* value) { SetSourceCommitSpecifier(value); return *this;}


    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline const Aws::String& GetDestinationCommitSpecifier() const{ return m_destinationCommitSpecifier; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline bool DestinationCommitSpecifierHasBeenSet() const { return m_destinationCommitSpecifierHasBeenSet; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline void SetDestinationCommitSpecifier(const Aws::String& value) { m_destinationCommitSpecifierHasBeenSet = true; m_destinationCommitSpecifier = value; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline void SetDestinationCommitSpecifier(Aws::String&& value) { m_destinationCommitSpecifierHasBeenSet = true; m_destinationCommitSpecifier = std::move(value); }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline void SetDestinationCommitSpecifier(const char* value) { m_destinationCommitSpecifierHasBeenSet = true; m_destinationCommitSpecifier.assign(value); }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithDestinationCommitSpecifier(const Aws::String& value) { SetDestinationCommitSpecifier(value); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithDestinationCommitSpecifier(Aws::String&& value) { SetDestinationCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithDestinationCommitSpecifier(const char* value) { SetDestinationCommitSpecifier(value); return *this;}


    /**
     * <p>The branch where the merge will be applied. </p>
     */
    inline const Aws::String& GetTargetBranch() const{ return m_targetBranch; }

    /**
     * <p>The branch where the merge will be applied. </p>
     */
    inline bool TargetBranchHasBeenSet() const { return m_targetBranchHasBeenSet; }

    /**
     * <p>The branch where the merge will be applied. </p>
     */
    inline void SetTargetBranch(const Aws::String& value) { m_targetBranchHasBeenSet = true; m_targetBranch = value; }

    /**
     * <p>The branch where the merge will be applied. </p>
     */
    inline void SetTargetBranch(Aws::String&& value) { m_targetBranchHasBeenSet = true; m_targetBranch = std::move(value); }

    /**
     * <p>The branch where the merge will be applied. </p>
     */
    inline void SetTargetBranch(const char* value) { m_targetBranchHasBeenSet = true; m_targetBranch.assign(value); }

    /**
     * <p>The branch where the merge will be applied. </p>
     */
    inline MergeBranchesByThreeWayRequest& WithTargetBranch(const Aws::String& value) { SetTargetBranch(value); return *this;}

    /**
     * <p>The branch where the merge will be applied. </p>
     */
    inline MergeBranchesByThreeWayRequest& WithTargetBranch(Aws::String&& value) { SetTargetBranch(std::move(value)); return *this;}

    /**
     * <p>The branch where the merge will be applied. </p>
     */
    inline MergeBranchesByThreeWayRequest& WithTargetBranch(const char* value) { SetTargetBranch(value); return *this;}


    /**
     * <p>The level of conflict detail to use. If unspecified, the default FILE_LEVEL
     * is used, which will return a not mergeable result if the same file has
     * differences in both branches. If LINE_LEVEL is specified, a conflict will be
     * considered not mergeable if the same file in both branches has differences on
     * the same line.</p>
     */
    inline const ConflictDetailLevelTypeEnum& GetConflictDetailLevel() const{ return m_conflictDetailLevel; }

    /**
     * <p>The level of conflict detail to use. If unspecified, the default FILE_LEVEL
     * is used, which will return a not mergeable result if the same file has
     * differences in both branches. If LINE_LEVEL is specified, a conflict will be
     * considered not mergeable if the same file in both branches has differences on
     * the same line.</p>
     */
    inline bool ConflictDetailLevelHasBeenSet() const { return m_conflictDetailLevelHasBeenSet; }

    /**
     * <p>The level of conflict detail to use. If unspecified, the default FILE_LEVEL
     * is used, which will return a not mergeable result if the same file has
     * differences in both branches. If LINE_LEVEL is specified, a conflict will be
     * considered not mergeable if the same file in both branches has differences on
     * the same line.</p>
     */
    inline void SetConflictDetailLevel(const ConflictDetailLevelTypeEnum& value) { m_conflictDetailLevelHasBeenSet = true; m_conflictDetailLevel = value; }

    /**
     * <p>The level of conflict detail to use. If unspecified, the default FILE_LEVEL
     * is used, which will return a not mergeable result if the same file has
     * differences in both branches. If LINE_LEVEL is specified, a conflict will be
     * considered not mergeable if the same file in both branches has differences on
     * the same line.</p>
     */
    inline void SetConflictDetailLevel(ConflictDetailLevelTypeEnum&& value) { m_conflictDetailLevelHasBeenSet = true; m_conflictDetailLevel = std::move(value); }

    /**
     * <p>The level of conflict detail to use. If unspecified, the default FILE_LEVEL
     * is used, which will return a not mergeable result if the same file has
     * differences in both branches. If LINE_LEVEL is specified, a conflict will be
     * considered not mergeable if the same file in both branches has differences on
     * the same line.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithConflictDetailLevel(const ConflictDetailLevelTypeEnum& value) { SetConflictDetailLevel(value); return *this;}

    /**
     * <p>The level of conflict detail to use. If unspecified, the default FILE_LEVEL
     * is used, which will return a not mergeable result if the same file has
     * differences in both branches. If LINE_LEVEL is specified, a conflict will be
     * considered not mergeable if the same file in both branches has differences on
     * the same line.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithConflictDetailLevel(ConflictDetailLevelTypeEnum&& value) { SetConflictDetailLevel(std::move(value)); return *this;}


    /**
     * <p>Specifies which branch to use when resolving conflicts, or whether to attempt
     * automatically merging two versions of a file. The default is NONE, which
     * requires any conflicts to be resolved manually before the merge operation will
     * be successful.</p>
     */
    inline const ConflictResolutionStrategyTypeEnum& GetConflictResolutionStrategy() const{ return m_conflictResolutionStrategy; }

    /**
     * <p>Specifies which branch to use when resolving conflicts, or whether to attempt
     * automatically merging two versions of a file. The default is NONE, which
     * requires any conflicts to be resolved manually before the merge operation will
     * be successful.</p>
     */
    inline bool ConflictResolutionStrategyHasBeenSet() const { return m_conflictResolutionStrategyHasBeenSet; }

    /**
     * <p>Specifies which branch to use when resolving conflicts, or whether to attempt
     * automatically merging two versions of a file. The default is NONE, which
     * requires any conflicts to be resolved manually before the merge operation will
     * be successful.</p>
     */
    inline void SetConflictResolutionStrategy(const ConflictResolutionStrategyTypeEnum& value) { m_conflictResolutionStrategyHasBeenSet = true; m_conflictResolutionStrategy = value; }

    /**
     * <p>Specifies which branch to use when resolving conflicts, or whether to attempt
     * automatically merging two versions of a file. The default is NONE, which
     * requires any conflicts to be resolved manually before the merge operation will
     * be successful.</p>
     */
    inline void SetConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum&& value) { m_conflictResolutionStrategyHasBeenSet = true; m_conflictResolutionStrategy = std::move(value); }

    /**
     * <p>Specifies which branch to use when resolving conflicts, or whether to attempt
     * automatically merging two versions of a file. The default is NONE, which
     * requires any conflicts to be resolved manually before the merge operation will
     * be successful.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithConflictResolutionStrategy(const ConflictResolutionStrategyTypeEnum& value) { SetConflictResolutionStrategy(value); return *this;}

    /**
     * <p>Specifies which branch to use when resolving conflicts, or whether to attempt
     * automatically merging two versions of a file. The default is NONE, which
     * requires any conflicts to be resolved manually before the merge operation will
     * be successful.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum&& value) { SetConflictResolutionStrategy(std::move(value)); return *this;}


    /**
     * <p>The name of the author who created the commit. This information will be used
     * as both the author and committer for the commit.</p>
     */
    inline const Aws::String& GetAuthorName() const{ return m_authorName; }

    /**
     * <p>The name of the author who created the commit. This information will be used
     * as both the author and committer for the commit.</p>
     */
    inline bool AuthorNameHasBeenSet() const { return m_authorNameHasBeenSet; }

    /**
     * <p>The name of the author who created the commit. This information will be used
     * as both the author and committer for the commit.</p>
     */
    inline void SetAuthorName(const Aws::String& value) { m_authorNameHasBeenSet = true; m_authorName = value; }

    /**
     * <p>The name of the author who created the commit. This information will be used
     * as both the author and committer for the commit.</p>
     */
    inline void SetAuthorName(Aws::String&& value) { m_authorNameHasBeenSet = true; m_authorName = std::move(value); }

    /**
     * <p>The name of the author who created the commit. This information will be used
     * as both the author and committer for the commit.</p>
     */
    inline void SetAuthorName(const char* value) { m_authorNameHasBeenSet = true; m_authorName.assign(value); }

    /**
     * <p>The name of the author who created the commit. This information will be used
     * as both the author and committer for the commit.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithAuthorName(const Aws::String& value) { SetAuthorName(value); return *this;}

    /**
     * <p>The name of the author who created the commit. This information will be used
     * as both the author and committer for the commit.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithAuthorName(Aws::String&& value) { SetAuthorName(std::move(value)); return *this;}

    /**
     * <p>The name of the author who created the commit. This information will be used
     * as both the author and committer for the commit.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithAuthorName(const char* value) { SetAuthorName(value); return *this;}


    /**
     * <p>The email address of the person merging the branches. This information will
     * be used in the commit information for the merge.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address of the person merging the branches. This information will
     * be used in the commit information for the merge.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address of the person merging the branches. This information will
     * be used in the commit information for the merge.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address of the person merging the branches. This information will
     * be used in the commit information for the merge.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address of the person merging the branches. This information will
     * be used in the commit information for the merge.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address of the person merging the branches. This information will
     * be used in the commit information for the merge.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address of the person merging the branches. This information will
     * be used in the commit information for the merge.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address of the person merging the branches. This information will
     * be used in the commit information for the merge.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The commit message to include in the commit information for the merge.</p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }

    /**
     * <p>The commit message to include in the commit information for the merge.</p>
     */
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }

    /**
     * <p>The commit message to include in the commit information for the merge.</p>
     */
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }

    /**
     * <p>The commit message to include in the commit information for the merge.</p>
     */
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }

    /**
     * <p>The commit message to include in the commit information for the merge.</p>
     */
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }

    /**
     * <p>The commit message to include in the commit information for the merge.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}

    /**
     * <p>The commit message to include in the commit information for the merge.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}

    /**
     * <p>The commit message to include in the commit information for the merge.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}


    /**
     * <p>If the commit contains deletions, whether to keep a folder or folder
     * structure if the changes leave the folders empty. If this is specified as true,
     * a .gitkeep file will be created for empty folders. The default is false.</p>
     */
    inline bool GetKeepEmptyFolders() const{ return m_keepEmptyFolders; }

    /**
     * <p>If the commit contains deletions, whether to keep a folder or folder
     * structure if the changes leave the folders empty. If this is specified as true,
     * a .gitkeep file will be created for empty folders. The default is false.</p>
     */
    inline bool KeepEmptyFoldersHasBeenSet() const { return m_keepEmptyFoldersHasBeenSet; }

    /**
     * <p>If the commit contains deletions, whether to keep a folder or folder
     * structure if the changes leave the folders empty. If this is specified as true,
     * a .gitkeep file will be created for empty folders. The default is false.</p>
     */
    inline void SetKeepEmptyFolders(bool value) { m_keepEmptyFoldersHasBeenSet = true; m_keepEmptyFolders = value; }

    /**
     * <p>If the commit contains deletions, whether to keep a folder or folder
     * structure if the changes leave the folders empty. If this is specified as true,
     * a .gitkeep file will be created for empty folders. The default is false.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithKeepEmptyFolders(bool value) { SetKeepEmptyFolders(value); return *this;}


    /**
     * <p>A list of inputs to use when resolving conflicts during a merge if AUTOMERGE
     * is chosen as the conflict resolution strategy.</p>
     */
    inline const ConflictResolution& GetConflictResolution() const{ return m_conflictResolution; }

    /**
     * <p>A list of inputs to use when resolving conflicts during a merge if AUTOMERGE
     * is chosen as the conflict resolution strategy.</p>
     */
    inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }

    /**
     * <p>A list of inputs to use when resolving conflicts during a merge if AUTOMERGE
     * is chosen as the conflict resolution strategy.</p>
     */
    inline void SetConflictResolution(const ConflictResolution& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = value; }

    /**
     * <p>A list of inputs to use when resolving conflicts during a merge if AUTOMERGE
     * is chosen as the conflict resolution strategy.</p>
     */
    inline void SetConflictResolution(ConflictResolution&& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = std::move(value); }

    /**
     * <p>A list of inputs to use when resolving conflicts during a merge if AUTOMERGE
     * is chosen as the conflict resolution strategy.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithConflictResolution(const ConflictResolution& value) { SetConflictResolution(value); return *this;}

    /**
     * <p>A list of inputs to use when resolving conflicts during a merge if AUTOMERGE
     * is chosen as the conflict resolution strategy.</p>
     */
    inline MergeBranchesByThreeWayRequest& WithConflictResolution(ConflictResolution&& value) { SetConflictResolution(std::move(value)); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_sourceCommitSpecifier;
    bool m_sourceCommitSpecifierHasBeenSet;

    Aws::String m_destinationCommitSpecifier;
    bool m_destinationCommitSpecifierHasBeenSet;

    Aws::String m_targetBranch;
    bool m_targetBranchHasBeenSet;

    ConflictDetailLevelTypeEnum m_conflictDetailLevel;
    bool m_conflictDetailLevelHasBeenSet;

    ConflictResolutionStrategyTypeEnum m_conflictResolutionStrategy;
    bool m_conflictResolutionStrategyHasBeenSet;

    Aws::String m_authorName;
    bool m_authorNameHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet;

    bool m_keepEmptyFolders;
    bool m_keepEmptyFoldersHasBeenSet;

    ConflictResolution m_conflictResolution;
    bool m_conflictResolutionHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
