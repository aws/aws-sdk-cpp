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
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class GetMergeOptionsRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API GetMergeOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMergeOptions"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository that contains the commits about which you want to
     * get merge options.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    GetMergeOptionsRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
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
    GetMergeOptionsRequest& WithSourceCommitSpecifier(SourceCommitSpecifierT&& value) { SetSourceCommitSpecifier(std::forward<SourceCommitSpecifierT>(value)); return *this;}
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
    GetMergeOptionsRequest& WithDestinationCommitSpecifier(DestinationCommitSpecifierT&& value) { SetDestinationCommitSpecifier(std::forward<DestinationCommitSpecifierT>(value)); return *this;}
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
    inline GetMergeOptionsRequest& WithConflictDetailLevel(ConflictDetailLevelTypeEnum value) { SetConflictDetailLevel(value); return *this;}
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
    inline GetMergeOptionsRequest& WithConflictResolutionStrategy(ConflictResolutionStrategyTypeEnum value) { SetConflictResolutionStrategy(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_sourceCommitSpecifier;
    bool m_sourceCommitSpecifierHasBeenSet = false;

    Aws::String m_destinationCommitSpecifier;
    bool m_destinationCommitSpecifierHasBeenSet = false;

    ConflictDetailLevelTypeEnum m_conflictDetailLevel{ConflictDetailLevelTypeEnum::NOT_SET};
    bool m_conflictDetailLevelHasBeenSet = false;

    ConflictResolutionStrategyTypeEnum m_conflictResolutionStrategy{ConflictResolutionStrategyTypeEnum::NOT_SET};
    bool m_conflictResolutionStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
