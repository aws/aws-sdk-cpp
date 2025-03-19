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
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class DescribeMergeConflictsRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API DescribeMergeConflictsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMergeConflicts"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository where you want to get information about a merge
     * conflict.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    DescribeMergeConflictsRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
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
    DescribeMergeConflictsRequest& WithDestinationCommitSpecifier(DestinationCommitSpecifierT&& value) { SetDestinationCommitSpecifier(std::forward<DestinationCommitSpecifierT>(value)); return *this;}
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
    DescribeMergeConflictsRequest& WithSourceCommitSpecifier(SourceCommitSpecifierT&& value) { SetSourceCommitSpecifier(std::forward<SourceCommitSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The merge option or strategy you want to use to merge the code.</p>
     */
    inline MergeOptionTypeEnum GetMergeOption() const { return m_mergeOption; }
    inline bool MergeOptionHasBeenSet() const { return m_mergeOptionHasBeenSet; }
    inline void SetMergeOption(MergeOptionTypeEnum value) { m_mergeOptionHasBeenSet = true; m_mergeOption = value; }
    inline DescribeMergeConflictsRequest& WithMergeOption(MergeOptionTypeEnum value) { SetMergeOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of merge hunks to include in the output.</p>
     */
    inline int GetMaxMergeHunks() const { return m_maxMergeHunks; }
    inline bool MaxMergeHunksHasBeenSet() const { return m_maxMergeHunksHasBeenSet; }
    inline void SetMaxMergeHunks(int value) { m_maxMergeHunksHasBeenSet = true; m_maxMergeHunks = value; }
    inline DescribeMergeConflictsRequest& WithMaxMergeHunks(int value) { SetMaxMergeHunks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the target files used to describe the conflicts. </p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    DescribeMergeConflictsRequest& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
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
    inline DescribeMergeConflictsRequest& WithConflictDetailLevel(ConflictDetailLevelTypeEnum value) { SetConflictDetailLevel(value); return *this;}
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
    inline DescribeMergeConflictsRequest& WithConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum value) { SetConflictResolutionStrategy(value); return *this;}
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
    DescribeMergeConflictsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

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
