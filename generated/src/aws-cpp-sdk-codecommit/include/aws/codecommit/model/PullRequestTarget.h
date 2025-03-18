/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/MergeMetadata.h>
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
   * <p>Returns information about a pull request target.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PullRequestTarget">AWS
   * API Reference</a></p>
   */
  class PullRequestTarget
  {
  public:
    AWS_CODECOMMIT_API PullRequestTarget() = default;
    AWS_CODECOMMIT_API PullRequestTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API PullRequestTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the repository that contains the pull request source and
     * destination branches.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    PullRequestTarget& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline const Aws::String& GetSourceReference() const { return m_sourceReference; }
    inline bool SourceReferenceHasBeenSet() const { return m_sourceReferenceHasBeenSet; }
    template<typename SourceReferenceT = Aws::String>
    void SetSourceReference(SourceReferenceT&& value) { m_sourceReferenceHasBeenSet = true; m_sourceReference = std::forward<SourceReferenceT>(value); }
    template<typename SourceReferenceT = Aws::String>
    PullRequestTarget& WithSourceReference(SourceReferenceT&& value) { SetSourceReference(std::forward<SourceReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch of the repository where the pull request changes are merged. Also
     * known as the destination branch. </p>
     */
    inline const Aws::String& GetDestinationReference() const { return m_destinationReference; }
    inline bool DestinationReferenceHasBeenSet() const { return m_destinationReferenceHasBeenSet; }
    template<typename DestinationReferenceT = Aws::String>
    void SetDestinationReference(DestinationReferenceT&& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = std::forward<DestinationReferenceT>(value); }
    template<typename DestinationReferenceT = Aws::String>
    PullRequestTarget& WithDestinationReference(DestinationReferenceT&& value) { SetDestinationReference(std::forward<DestinationReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID that is the tip of the destination branch. This is the
     * commit where the pull request was or will be merged.</p>
     */
    inline const Aws::String& GetDestinationCommit() const { return m_destinationCommit; }
    inline bool DestinationCommitHasBeenSet() const { return m_destinationCommitHasBeenSet; }
    template<typename DestinationCommitT = Aws::String>
    void SetDestinationCommit(DestinationCommitT&& value) { m_destinationCommitHasBeenSet = true; m_destinationCommit = std::forward<DestinationCommitT>(value); }
    template<typename DestinationCommitT = Aws::String>
    PullRequestTarget& WithDestinationCommit(DestinationCommitT&& value) { SetDestinationCommit(std::forward<DestinationCommitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the tip of the source branch used to create the pull
     * request. If the pull request branch is updated by a push while the pull request
     * is open, the commit ID changes to reflect the new tip of the branch.</p>
     */
    inline const Aws::String& GetSourceCommit() const { return m_sourceCommit; }
    inline bool SourceCommitHasBeenSet() const { return m_sourceCommitHasBeenSet; }
    template<typename SourceCommitT = Aws::String>
    void SetSourceCommit(SourceCommitT&& value) { m_sourceCommitHasBeenSet = true; m_sourceCommit = std::forward<SourceCommitT>(value); }
    template<typename SourceCommitT = Aws::String>
    PullRequestTarget& WithSourceCommit(SourceCommitT&& value) { SetSourceCommit(std::forward<SourceCommitT>(value)); return *this;}
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
    PullRequestTarget& WithMergeBase(MergeBaseT&& value) { SetMergeBase(std::forward<MergeBaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns metadata about the state of the merge, including whether the merge
     * has been made.</p>
     */
    inline const MergeMetadata& GetMergeMetadata() const { return m_mergeMetadata; }
    inline bool MergeMetadataHasBeenSet() const { return m_mergeMetadataHasBeenSet; }
    template<typename MergeMetadataT = MergeMetadata>
    void SetMergeMetadata(MergeMetadataT&& value) { m_mergeMetadataHasBeenSet = true; m_mergeMetadata = std::forward<MergeMetadataT>(value); }
    template<typename MergeMetadataT = MergeMetadata>
    PullRequestTarget& WithMergeMetadata(MergeMetadataT&& value) { SetMergeMetadata(std::forward<MergeMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_sourceReference;
    bool m_sourceReferenceHasBeenSet = false;

    Aws::String m_destinationReference;
    bool m_destinationReferenceHasBeenSet = false;

    Aws::String m_destinationCommit;
    bool m_destinationCommitHasBeenSet = false;

    Aws::String m_sourceCommit;
    bool m_sourceCommitHasBeenSet = false;

    Aws::String m_mergeBase;
    bool m_mergeBaseHasBeenSet = false;

    MergeMetadata m_mergeMetadata;
    bool m_mergeMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
