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
   * <p>Returns information about the change in the merge state for a pull request
   * event. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PullRequestMergedStateChangedEventMetadata">AWS
   * API Reference</a></p>
   */
  class PullRequestMergedStateChangedEventMetadata
  {
  public:
    AWS_CODECOMMIT_API PullRequestMergedStateChangedEventMetadata() = default;
    AWS_CODECOMMIT_API PullRequestMergedStateChangedEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API PullRequestMergedStateChangedEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    PullRequestMergedStateChangedEventMetadata& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch that the pull request is merged into.</p>
     */
    inline const Aws::String& GetDestinationReference() const { return m_destinationReference; }
    inline bool DestinationReferenceHasBeenSet() const { return m_destinationReferenceHasBeenSet; }
    template<typename DestinationReferenceT = Aws::String>
    void SetDestinationReference(DestinationReferenceT&& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = std::forward<DestinationReferenceT>(value); }
    template<typename DestinationReferenceT = Aws::String>
    PullRequestMergedStateChangedEventMetadata& WithDestinationReference(DestinationReferenceT&& value) { SetDestinationReference(std::forward<DestinationReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the merge state change event.</p>
     */
    inline const MergeMetadata& GetMergeMetadata() const { return m_mergeMetadata; }
    inline bool MergeMetadataHasBeenSet() const { return m_mergeMetadataHasBeenSet; }
    template<typename MergeMetadataT = MergeMetadata>
    void SetMergeMetadata(MergeMetadataT&& value) { m_mergeMetadataHasBeenSet = true; m_mergeMetadata = std::forward<MergeMetadataT>(value); }
    template<typename MergeMetadataT = MergeMetadata>
    PullRequestMergedStateChangedEventMetadata& WithMergeMetadata(MergeMetadataT&& value) { SetMergeMetadata(std::forward<MergeMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_destinationReference;
    bool m_destinationReferenceHasBeenSet = false;

    MergeMetadata m_mergeMetadata;
    bool m_mergeMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
