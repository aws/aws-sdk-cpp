/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Metadata about the pull request that is used when comparing the pull request
   * source with its destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PullRequestCreatedEventMetadata">AWS
   * API Reference</a></p>
   */
  class PullRequestCreatedEventMetadata
  {
  public:
    AWS_CODECOMMIT_API PullRequestCreatedEventMetadata() = default;
    AWS_CODECOMMIT_API PullRequestCreatedEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API PullRequestCreatedEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    PullRequestCreatedEventMetadata& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID on the source branch used when the pull request was
     * created.</p>
     */
    inline const Aws::String& GetSourceCommitId() const { return m_sourceCommitId; }
    inline bool SourceCommitIdHasBeenSet() const { return m_sourceCommitIdHasBeenSet; }
    template<typename SourceCommitIdT = Aws::String>
    void SetSourceCommitId(SourceCommitIdT&& value) { m_sourceCommitIdHasBeenSet = true; m_sourceCommitId = std::forward<SourceCommitIdT>(value); }
    template<typename SourceCommitIdT = Aws::String>
    PullRequestCreatedEventMetadata& WithSourceCommitId(SourceCommitIdT&& value) { SetSourceCommitId(std::forward<SourceCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the tip of the branch specified as the destination branch
     * when the pull request was created.</p>
     */
    inline const Aws::String& GetDestinationCommitId() const { return m_destinationCommitId; }
    inline bool DestinationCommitIdHasBeenSet() const { return m_destinationCommitIdHasBeenSet; }
    template<typename DestinationCommitIdT = Aws::String>
    void SetDestinationCommitId(DestinationCommitIdT&& value) { m_destinationCommitIdHasBeenSet = true; m_destinationCommitId = std::forward<DestinationCommitIdT>(value); }
    template<typename DestinationCommitIdT = Aws::String>
    PullRequestCreatedEventMetadata& WithDestinationCommitId(DestinationCommitIdT&& value) { SetDestinationCommitId(std::forward<DestinationCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the most recent commit that the source branch and the
     * destination branch have in common.</p>
     */
    inline const Aws::String& GetMergeBase() const { return m_mergeBase; }
    inline bool MergeBaseHasBeenSet() const { return m_mergeBaseHasBeenSet; }
    template<typename MergeBaseT = Aws::String>
    void SetMergeBase(MergeBaseT&& value) { m_mergeBaseHasBeenSet = true; m_mergeBase = std::forward<MergeBaseT>(value); }
    template<typename MergeBaseT = Aws::String>
    PullRequestCreatedEventMetadata& WithMergeBase(MergeBaseT&& value) { SetMergeBase(std::forward<MergeBaseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_sourceCommitId;
    bool m_sourceCommitIdHasBeenSet = false;

    Aws::String m_destinationCommitId;
    bool m_destinationCommitIdHasBeenSet = false;

    Aws::String m_mergeBase;
    bool m_mergeBaseHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
