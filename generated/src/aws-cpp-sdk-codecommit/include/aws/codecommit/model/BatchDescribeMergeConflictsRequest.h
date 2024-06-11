/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/MergeOptionTypeEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/ConflictDetailLevelTypeEnum.h>
#include <aws/codecommit/model/ConflictResolutionStrategyTypeEnum.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class BatchDescribeMergeConflictsRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDescribeMergeConflicts"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository that contains the merge conflicts you want to
     * review.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline BatchDescribeMergeConflictsRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline BatchDescribeMergeConflictsRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
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
    inline BatchDescribeMergeConflictsRequest& WithDestinationCommitSpecifier(const Aws::String& value) { SetDestinationCommitSpecifier(value); return *this;}
    inline BatchDescribeMergeConflictsRequest& WithDestinationCommitSpecifier(Aws::String&& value) { SetDestinationCommitSpecifier(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsRequest& WithDestinationCommitSpecifier(const char* value) { SetDestinationCommitSpecifier(value); return *this;}
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
    inline BatchDescribeMergeConflictsRequest& WithSourceCommitSpecifier(const Aws::String& value) { SetSourceCommitSpecifier(value); return *this;}
    inline BatchDescribeMergeConflictsRequest& WithSourceCommitSpecifier(Aws::String&& value) { SetSourceCommitSpecifier(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsRequest& WithSourceCommitSpecifier(const char* value) { SetSourceCommitSpecifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The merge option or strategy you want to use to merge the code.</p>
     */
    inline const MergeOptionTypeEnum& GetMergeOption() const{ return m_mergeOption; }
    inline bool MergeOptionHasBeenSet() const { return m_mergeOptionHasBeenSet; }
    inline void SetMergeOption(const MergeOptionTypeEnum& value) { m_mergeOptionHasBeenSet = true; m_mergeOption = value; }
    inline void SetMergeOption(MergeOptionTypeEnum&& value) { m_mergeOptionHasBeenSet = true; m_mergeOption = std::move(value); }
    inline BatchDescribeMergeConflictsRequest& WithMergeOption(const MergeOptionTypeEnum& value) { SetMergeOption(value); return *this;}
    inline BatchDescribeMergeConflictsRequest& WithMergeOption(MergeOptionTypeEnum&& value) { SetMergeOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of merge hunks to include in the output.</p>
     */
    inline int GetMaxMergeHunks() const{ return m_maxMergeHunks; }
    inline bool MaxMergeHunksHasBeenSet() const { return m_maxMergeHunksHasBeenSet; }
    inline void SetMaxMergeHunks(int value) { m_maxMergeHunksHasBeenSet = true; m_maxMergeHunks = value; }
    inline BatchDescribeMergeConflictsRequest& WithMaxMergeHunks(int value) { SetMaxMergeHunks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of files to include in the output.</p>
     */
    inline int GetMaxConflictFiles() const{ return m_maxConflictFiles; }
    inline bool MaxConflictFilesHasBeenSet() const { return m_maxConflictFilesHasBeenSet; }
    inline void SetMaxConflictFiles(int value) { m_maxConflictFilesHasBeenSet = true; m_maxConflictFiles = value; }
    inline BatchDescribeMergeConflictsRequest& WithMaxConflictFiles(int value) { SetMaxConflictFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the target files used to describe the conflicts. If not
     * specified, the default is all conflict files.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilePaths() const{ return m_filePaths; }
    inline bool FilePathsHasBeenSet() const { return m_filePathsHasBeenSet; }
    inline void SetFilePaths(const Aws::Vector<Aws::String>& value) { m_filePathsHasBeenSet = true; m_filePaths = value; }
    inline void SetFilePaths(Aws::Vector<Aws::String>&& value) { m_filePathsHasBeenSet = true; m_filePaths = std::move(value); }
    inline BatchDescribeMergeConflictsRequest& WithFilePaths(const Aws::Vector<Aws::String>& value) { SetFilePaths(value); return *this;}
    inline BatchDescribeMergeConflictsRequest& WithFilePaths(Aws::Vector<Aws::String>&& value) { SetFilePaths(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsRequest& AddFilePaths(const Aws::String& value) { m_filePathsHasBeenSet = true; m_filePaths.push_back(value); return *this; }
    inline BatchDescribeMergeConflictsRequest& AddFilePaths(Aws::String&& value) { m_filePathsHasBeenSet = true; m_filePaths.push_back(std::move(value)); return *this; }
    inline BatchDescribeMergeConflictsRequest& AddFilePaths(const char* value) { m_filePathsHasBeenSet = true; m_filePaths.push_back(value); return *this; }
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
    inline BatchDescribeMergeConflictsRequest& WithConflictDetailLevel(const ConflictDetailLevelTypeEnum& value) { SetConflictDetailLevel(value); return *this;}
    inline BatchDescribeMergeConflictsRequest& WithConflictDetailLevel(ConflictDetailLevelTypeEnum&& value) { SetConflictDetailLevel(std::move(value)); return *this;}
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
    inline BatchDescribeMergeConflictsRequest& WithConflictResolutionStrategy(const ConflictResolutionStrategyTypeEnum& value) { SetConflictResolutionStrategy(value); return *this;}
    inline BatchDescribeMergeConflictsRequest& WithConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum&& value) { SetConflictResolutionStrategy(std::move(value)); return *this;}
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
    inline BatchDescribeMergeConflictsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline BatchDescribeMergeConflictsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_destinationCommitSpecifier;
    bool m_destinationCommitSpecifierHasBeenSet = false;

    Aws::String m_sourceCommitSpecifier;
    bool m_sourceCommitSpecifierHasBeenSet = false;

    MergeOptionTypeEnum m_mergeOption;
    bool m_mergeOptionHasBeenSet = false;

    int m_maxMergeHunks;
    bool m_maxMergeHunksHasBeenSet = false;

    int m_maxConflictFiles;
    bool m_maxConflictFilesHasBeenSet = false;

    Aws::Vector<Aws::String> m_filePaths;
    bool m_filePathsHasBeenSet = false;

    ConflictDetailLevelTypeEnum m_conflictDetailLevel;
    bool m_conflictDetailLevelHasBeenSet = false;

    ConflictResolutionStrategyTypeEnum m_conflictResolutionStrategy;
    bool m_conflictResolutionStrategyHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
