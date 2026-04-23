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
  class AWS_CODECOMMIT_API PullRequestMergedStateChangedEventMetadata
  {
  public:
    PullRequestMergedStateChangedEventMetadata();
    PullRequestMergedStateChangedEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    PullRequestMergedStateChangedEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline PullRequestMergedStateChangedEventMetadata& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline PullRequestMergedStateChangedEventMetadata& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline PullRequestMergedStateChangedEventMetadata& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The name of the branch that the pull request will be merged into.</p>
     */
    inline const Aws::String& GetDestinationReference() const{ return m_destinationReference; }

    /**
     * <p>The name of the branch that the pull request will be merged into.</p>
     */
    inline bool DestinationReferenceHasBeenSet() const { return m_destinationReferenceHasBeenSet; }

    /**
     * <p>The name of the branch that the pull request will be merged into.</p>
     */
    inline void SetDestinationReference(const Aws::String& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = value; }

    /**
     * <p>The name of the branch that the pull request will be merged into.</p>
     */
    inline void SetDestinationReference(Aws::String&& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = std::move(value); }

    /**
     * <p>The name of the branch that the pull request will be merged into.</p>
     */
    inline void SetDestinationReference(const char* value) { m_destinationReferenceHasBeenSet = true; m_destinationReference.assign(value); }

    /**
     * <p>The name of the branch that the pull request will be merged into.</p>
     */
    inline PullRequestMergedStateChangedEventMetadata& WithDestinationReference(const Aws::String& value) { SetDestinationReference(value); return *this;}

    /**
     * <p>The name of the branch that the pull request will be merged into.</p>
     */
    inline PullRequestMergedStateChangedEventMetadata& WithDestinationReference(Aws::String&& value) { SetDestinationReference(std::move(value)); return *this;}

    /**
     * <p>The name of the branch that the pull request will be merged into.</p>
     */
    inline PullRequestMergedStateChangedEventMetadata& WithDestinationReference(const char* value) { SetDestinationReference(value); return *this;}


    /**
     * <p>Information about the merge state change event.</p>
     */
    inline const MergeMetadata& GetMergeMetadata() const{ return m_mergeMetadata; }

    /**
     * <p>Information about the merge state change event.</p>
     */
    inline bool MergeMetadataHasBeenSet() const { return m_mergeMetadataHasBeenSet; }

    /**
     * <p>Information about the merge state change event.</p>
     */
    inline void SetMergeMetadata(const MergeMetadata& value) { m_mergeMetadataHasBeenSet = true; m_mergeMetadata = value; }

    /**
     * <p>Information about the merge state change event.</p>
     */
    inline void SetMergeMetadata(MergeMetadata&& value) { m_mergeMetadataHasBeenSet = true; m_mergeMetadata = std::move(value); }

    /**
     * <p>Information about the merge state change event.</p>
     */
    inline PullRequestMergedStateChangedEventMetadata& WithMergeMetadata(const MergeMetadata& value) { SetMergeMetadata(value); return *this;}

    /**
     * <p>Information about the merge state change event.</p>
     */
    inline PullRequestMergedStateChangedEventMetadata& WithMergeMetadata(MergeMetadata&& value) { SetMergeMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_destinationReference;
    bool m_destinationReferenceHasBeenSet;

    MergeMetadata m_mergeMetadata;
    bool m_mergeMetadataHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
