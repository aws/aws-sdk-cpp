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
    AWS_CODECOMMIT_API PullRequestMergedStateChangedEventMetadata();
    AWS_CODECOMMIT_API PullRequestMergedStateChangedEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API PullRequestMergedStateChangedEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline PullRequestMergedStateChangedEventMetadata& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline PullRequestMergedStateChangedEventMetadata& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline PullRequestMergedStateChangedEventMetadata& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch that the pull request is merged into.</p>
     */
    inline const Aws::String& GetDestinationReference() const{ return m_destinationReference; }
    inline bool DestinationReferenceHasBeenSet() const { return m_destinationReferenceHasBeenSet; }
    inline void SetDestinationReference(const Aws::String& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = value; }
    inline void SetDestinationReference(Aws::String&& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = std::move(value); }
    inline void SetDestinationReference(const char* value) { m_destinationReferenceHasBeenSet = true; m_destinationReference.assign(value); }
    inline PullRequestMergedStateChangedEventMetadata& WithDestinationReference(const Aws::String& value) { SetDestinationReference(value); return *this;}
    inline PullRequestMergedStateChangedEventMetadata& WithDestinationReference(Aws::String&& value) { SetDestinationReference(std::move(value)); return *this;}
    inline PullRequestMergedStateChangedEventMetadata& WithDestinationReference(const char* value) { SetDestinationReference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the merge state change event.</p>
     */
    inline const MergeMetadata& GetMergeMetadata() const{ return m_mergeMetadata; }
    inline bool MergeMetadataHasBeenSet() const { return m_mergeMetadataHasBeenSet; }
    inline void SetMergeMetadata(const MergeMetadata& value) { m_mergeMetadataHasBeenSet = true; m_mergeMetadata = value; }
    inline void SetMergeMetadata(MergeMetadata&& value) { m_mergeMetadataHasBeenSet = true; m_mergeMetadata = std::move(value); }
    inline PullRequestMergedStateChangedEventMetadata& WithMergeMetadata(const MergeMetadata& value) { SetMergeMetadata(value); return *this;}
    inline PullRequestMergedStateChangedEventMetadata& WithMergeMetadata(MergeMetadata&& value) { SetMergeMetadata(std::move(value)); return *this;}
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
