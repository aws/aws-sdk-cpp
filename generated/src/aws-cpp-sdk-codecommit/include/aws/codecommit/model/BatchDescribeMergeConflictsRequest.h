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
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsRequest() = default;

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
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    BatchDescribeMergeConflictsRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
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
    BatchDescribeMergeConflictsRequest& WithDestinationCommitSpecifier(DestinationCommitSpecifierT&& value) { SetDestinationCommitSpecifier(std::forward<DestinationCommitSpecifierT>(value)); return *this;}
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
    BatchDescribeMergeConflictsRequest& WithSourceCommitSpecifier(SourceCommitSpecifierT&& value) { SetSourceCommitSpecifier(std::forward<SourceCommitSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The merge option or strategy you want to use to merge the code.</p>
     */
    inline MergeOptionTypeEnum GetMergeOption() const { return m_mergeOption; }
    inline bool MergeOptionHasBeenSet() const { return m_mergeOptionHasBeenSet; }
    inline void SetMergeOption(MergeOptionTypeEnum value) { m_mergeOptionHasBeenSet = true; m_mergeOption = value; }
    inline BatchDescribeMergeConflictsRequest& WithMergeOption(MergeOptionTypeEnum value) { SetMergeOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of merge hunks to include in the output.</p>
     */
    inline int GetMaxMergeHunks() const { return m_maxMergeHunks; }
    inline bool MaxMergeHunksHasBeenSet() const { return m_maxMergeHunksHasBeenSet; }
    inline void SetMaxMergeHunks(int value) { m_maxMergeHunksHasBeenSet = true; m_maxMergeHunks = value; }
    inline BatchDescribeMergeConflictsRequest& WithMaxMergeHunks(int value) { SetMaxMergeHunks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of files to include in the output.</p>
     */
    inline int GetMaxConflictFiles() const { return m_maxConflictFiles; }
    inline bool MaxConflictFilesHasBeenSet() const { return m_maxConflictFilesHasBeenSet; }
    inline void SetMaxConflictFiles(int value) { m_maxConflictFilesHasBeenSet = true; m_maxConflictFiles = value; }
    inline BatchDescribeMergeConflictsRequest& WithMaxConflictFiles(int value) { SetMaxConflictFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the target files used to describe the conflicts. If not
     * specified, the default is all conflict files.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilePaths() const { return m_filePaths; }
    inline bool FilePathsHasBeenSet() const { return m_filePathsHasBeenSet; }
    template<typename FilePathsT = Aws::Vector<Aws::String>>
    void SetFilePaths(FilePathsT&& value) { m_filePathsHasBeenSet = true; m_filePaths = std::forward<FilePathsT>(value); }
    template<typename FilePathsT = Aws::Vector<Aws::String>>
    BatchDescribeMergeConflictsRequest& WithFilePaths(FilePathsT&& value) { SetFilePaths(std::forward<FilePathsT>(value)); return *this;}
    template<typename FilePathsT = Aws::String>
    BatchDescribeMergeConflictsRequest& AddFilePaths(FilePathsT&& value) { m_filePathsHasBeenSet = true; m_filePaths.emplace_back(std::forward<FilePathsT>(value)); return *this; }
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
    inline BatchDescribeMergeConflictsRequest& WithConflictDetailLevel(ConflictDetailLevelTypeEnum value) { SetConflictDetailLevel(value); return *this;}
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
    inline BatchDescribeMergeConflictsRequest& WithConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum value) { SetConflictResolutionStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    BatchDescribeMergeConflictsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_destinationCommitSpecifier;
    bool m_destinationCommitSpecifierHasBeenSet = false;

    Aws::String m_sourceCommitSpecifier;
    bool m_sourceCommitSpecifierHasBeenSet = false;

    MergeOptionTypeEnum m_mergeOption{MergeOptionTypeEnum::NOT_SET};
    bool m_mergeOptionHasBeenSet = false;

    int m_maxMergeHunks{0};
    bool m_maxMergeHunksHasBeenSet = false;

    int m_maxConflictFiles{0};
    bool m_maxConflictFilesHasBeenSet = false;

    Aws::Vector<Aws::String> m_filePaths;
    bool m_filePathsHasBeenSet = false;

    ConflictDetailLevelTypeEnum m_conflictDetailLevel{ConflictDetailLevelTypeEnum::NOT_SET};
    bool m_conflictDetailLevelHasBeenSet = false;

    ConflictResolutionStrategyTypeEnum m_conflictResolutionStrategy{ConflictResolutionStrategyTypeEnum::NOT_SET};
    bool m_conflictResolutionStrategyHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
