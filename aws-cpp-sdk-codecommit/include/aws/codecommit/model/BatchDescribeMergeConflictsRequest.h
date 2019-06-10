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
  class AWS_CODECOMMIT_API BatchDescribeMergeConflictsRequest : public CodeCommitRequest
  {
  public:
    BatchDescribeMergeConflictsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDescribeMergeConflicts"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository that contains the merge conflicts you want to
     * review.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that contains the merge conflicts you want to
     * review.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that contains the merge conflicts you want to
     * review.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that contains the merge conflicts you want to
     * review.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that contains the merge conflicts you want to
     * review.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that contains the merge conflicts you want to
     * review.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that contains the merge conflicts you want to
     * review.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the merge conflicts you want to
     * review.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


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
    inline BatchDescribeMergeConflictsRequest& WithDestinationCommitSpecifier(const Aws::String& value) { SetDestinationCommitSpecifier(value); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithDestinationCommitSpecifier(Aws::String&& value) { SetDestinationCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithDestinationCommitSpecifier(const char* value) { SetDestinationCommitSpecifier(value); return *this;}


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
    inline BatchDescribeMergeConflictsRequest& WithSourceCommitSpecifier(const Aws::String& value) { SetSourceCommitSpecifier(value); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithSourceCommitSpecifier(Aws::String&& value) { SetSourceCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithSourceCommitSpecifier(const char* value) { SetSourceCommitSpecifier(value); return *this;}


    /**
     * <p>The merge option or strategy you want to use to merge the code.</p>
     */
    inline const MergeOptionTypeEnum& GetMergeOption() const{ return m_mergeOption; }

    /**
     * <p>The merge option or strategy you want to use to merge the code.</p>
     */
    inline bool MergeOptionHasBeenSet() const { return m_mergeOptionHasBeenSet; }

    /**
     * <p>The merge option or strategy you want to use to merge the code.</p>
     */
    inline void SetMergeOption(const MergeOptionTypeEnum& value) { m_mergeOptionHasBeenSet = true; m_mergeOption = value; }

    /**
     * <p>The merge option or strategy you want to use to merge the code.</p>
     */
    inline void SetMergeOption(MergeOptionTypeEnum&& value) { m_mergeOptionHasBeenSet = true; m_mergeOption = std::move(value); }

    /**
     * <p>The merge option or strategy you want to use to merge the code.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithMergeOption(const MergeOptionTypeEnum& value) { SetMergeOption(value); return *this;}

    /**
     * <p>The merge option or strategy you want to use to merge the code.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithMergeOption(MergeOptionTypeEnum&& value) { SetMergeOption(std::move(value)); return *this;}


    /**
     * <p>The maximum number of merge hunks to include in the output.</p>
     */
    inline int GetMaxMergeHunks() const{ return m_maxMergeHunks; }

    /**
     * <p>The maximum number of merge hunks to include in the output.</p>
     */
    inline bool MaxMergeHunksHasBeenSet() const { return m_maxMergeHunksHasBeenSet; }

    /**
     * <p>The maximum number of merge hunks to include in the output.</p>
     */
    inline void SetMaxMergeHunks(int value) { m_maxMergeHunksHasBeenSet = true; m_maxMergeHunks = value; }

    /**
     * <p>The maximum number of merge hunks to include in the output.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithMaxMergeHunks(int value) { SetMaxMergeHunks(value); return *this;}


    /**
     * <p>The maximum number of files to include in the output.</p>
     */
    inline int GetMaxConflictFiles() const{ return m_maxConflictFiles; }

    /**
     * <p>The maximum number of files to include in the output.</p>
     */
    inline bool MaxConflictFilesHasBeenSet() const { return m_maxConflictFilesHasBeenSet; }

    /**
     * <p>The maximum number of files to include in the output.</p>
     */
    inline void SetMaxConflictFiles(int value) { m_maxConflictFilesHasBeenSet = true; m_maxConflictFiles = value; }

    /**
     * <p>The maximum number of files to include in the output.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithMaxConflictFiles(int value) { SetMaxConflictFiles(value); return *this;}


    /**
     * <p>The path of the target files used to describe the conflicts. If not
     * specified, the default is all conflict files.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilePaths() const{ return m_filePaths; }

    /**
     * <p>The path of the target files used to describe the conflicts. If not
     * specified, the default is all conflict files.</p>
     */
    inline bool FilePathsHasBeenSet() const { return m_filePathsHasBeenSet; }

    /**
     * <p>The path of the target files used to describe the conflicts. If not
     * specified, the default is all conflict files.</p>
     */
    inline void SetFilePaths(const Aws::Vector<Aws::String>& value) { m_filePathsHasBeenSet = true; m_filePaths = value; }

    /**
     * <p>The path of the target files used to describe the conflicts. If not
     * specified, the default is all conflict files.</p>
     */
    inline void SetFilePaths(Aws::Vector<Aws::String>&& value) { m_filePathsHasBeenSet = true; m_filePaths = std::move(value); }

    /**
     * <p>The path of the target files used to describe the conflicts. If not
     * specified, the default is all conflict files.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithFilePaths(const Aws::Vector<Aws::String>& value) { SetFilePaths(value); return *this;}

    /**
     * <p>The path of the target files used to describe the conflicts. If not
     * specified, the default is all conflict files.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithFilePaths(Aws::Vector<Aws::String>&& value) { SetFilePaths(std::move(value)); return *this;}

    /**
     * <p>The path of the target files used to describe the conflicts. If not
     * specified, the default is all conflict files.</p>
     */
    inline BatchDescribeMergeConflictsRequest& AddFilePaths(const Aws::String& value) { m_filePathsHasBeenSet = true; m_filePaths.push_back(value); return *this; }

    /**
     * <p>The path of the target files used to describe the conflicts. If not
     * specified, the default is all conflict files.</p>
     */
    inline BatchDescribeMergeConflictsRequest& AddFilePaths(Aws::String&& value) { m_filePathsHasBeenSet = true; m_filePaths.push_back(std::move(value)); return *this; }

    /**
     * <p>The path of the target files used to describe the conflicts. If not
     * specified, the default is all conflict files.</p>
     */
    inline BatchDescribeMergeConflictsRequest& AddFilePaths(const char* value) { m_filePathsHasBeenSet = true; m_filePaths.push_back(value); return *this; }


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
    inline BatchDescribeMergeConflictsRequest& WithConflictDetailLevel(const ConflictDetailLevelTypeEnum& value) { SetConflictDetailLevel(value); return *this;}

    /**
     * <p>The level of conflict detail to use. If unspecified, the default FILE_LEVEL
     * is used, which will return a not mergeable result if the same file has
     * differences in both branches. If LINE_LEVEL is specified, a conflict will be
     * considered not mergeable if the same file in both branches has differences on
     * the same line.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithConflictDetailLevel(ConflictDetailLevelTypeEnum&& value) { SetConflictDetailLevel(std::move(value)); return *this;}


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
    inline BatchDescribeMergeConflictsRequest& WithConflictResolutionStrategy(const ConflictResolutionStrategyTypeEnum& value) { SetConflictResolutionStrategy(value); return *this;}

    /**
     * <p>Specifies which branch to use when resolving conflicts, or whether to attempt
     * automatically merging two versions of a file. The default is NONE, which
     * requires any conflicts to be resolved manually before the merge operation will
     * be successful.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum&& value) { SetConflictResolutionStrategy(std::move(value)); return *this;}


    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline BatchDescribeMergeConflictsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_destinationCommitSpecifier;
    bool m_destinationCommitSpecifierHasBeenSet;

    Aws::String m_sourceCommitSpecifier;
    bool m_sourceCommitSpecifierHasBeenSet;

    MergeOptionTypeEnum m_mergeOption;
    bool m_mergeOptionHasBeenSet;

    int m_maxMergeHunks;
    bool m_maxMergeHunksHasBeenSet;

    int m_maxConflictFiles;
    bool m_maxConflictFilesHasBeenSet;

    Aws::Vector<Aws::String> m_filePaths;
    bool m_filePathsHasBeenSet;

    ConflictDetailLevelTypeEnum m_conflictDetailLevel;
    bool m_conflictDetailLevelHasBeenSet;

    ConflictResolutionStrategyTypeEnum m_conflictResolutionStrategy;
    bool m_conflictResolutionStrategyHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
