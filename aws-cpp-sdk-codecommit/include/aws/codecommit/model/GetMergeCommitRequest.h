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
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class AWS_CODECOMMIT_API GetMergeCommitRequest : public CodeCommitRequest
  {
  public:
    GetMergeCommitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMergeCommit"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository that contains the merge commit about which you
     * want to get information.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that contains the merge commit about which you
     * want to get information.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that contains the merge commit about which you
     * want to get information.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that contains the merge commit about which you
     * want to get information.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that contains the merge commit about which you
     * want to get information.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that contains the merge commit about which you
     * want to get information.</p>
     */
    inline GetMergeCommitRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that contains the merge commit about which you
     * want to get information.</p>
     */
    inline GetMergeCommitRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the merge commit about which you
     * want to get information.</p>
     */
    inline GetMergeCommitRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


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
    inline GetMergeCommitRequest& WithSourceCommitSpecifier(const Aws::String& value) { SetSourceCommitSpecifier(value); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline GetMergeCommitRequest& WithSourceCommitSpecifier(Aws::String&& value) { SetSourceCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline GetMergeCommitRequest& WithSourceCommitSpecifier(const char* value) { SetSourceCommitSpecifier(value); return *this;}


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
    inline GetMergeCommitRequest& WithDestinationCommitSpecifier(const Aws::String& value) { SetDestinationCommitSpecifier(value); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline GetMergeCommitRequest& WithDestinationCommitSpecifier(Aws::String&& value) { SetDestinationCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline GetMergeCommitRequest& WithDestinationCommitSpecifier(const char* value) { SetDestinationCommitSpecifier(value); return *this;}


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
    inline GetMergeCommitRequest& WithConflictDetailLevel(const ConflictDetailLevelTypeEnum& value) { SetConflictDetailLevel(value); return *this;}

    /**
     * <p>The level of conflict detail to use. If unspecified, the default FILE_LEVEL
     * is used, which will return a not mergeable result if the same file has
     * differences in both branches. If LINE_LEVEL is specified, a conflict will be
     * considered not mergeable if the same file in both branches has differences on
     * the same line.</p>
     */
    inline GetMergeCommitRequest& WithConflictDetailLevel(ConflictDetailLevelTypeEnum&& value) { SetConflictDetailLevel(std::move(value)); return *this;}


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
    inline GetMergeCommitRequest& WithConflictResolutionStrategy(const ConflictResolutionStrategyTypeEnum& value) { SetConflictResolutionStrategy(value); return *this;}

    /**
     * <p>Specifies which branch to use when resolving conflicts, or whether to attempt
     * automatically merging two versions of a file. The default is NONE, which
     * requires any conflicts to be resolved manually before the merge operation will
     * be successful.</p>
     */
    inline GetMergeCommitRequest& WithConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum&& value) { SetConflictResolutionStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_sourceCommitSpecifier;
    bool m_sourceCommitSpecifierHasBeenSet;

    Aws::String m_destinationCommitSpecifier;
    bool m_destinationCommitSpecifierHasBeenSet;

    ConflictDetailLevelTypeEnum m_conflictDetailLevel;
    bool m_conflictDetailLevelHasBeenSet;

    ConflictResolutionStrategyTypeEnum m_conflictResolutionStrategy;
    bool m_conflictResolutionStrategyHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
