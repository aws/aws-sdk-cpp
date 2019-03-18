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
   * <p>Returns information about a pull request target.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PullRequestTarget">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API PullRequestTarget
  {
  public:
    PullRequestTarget();
    PullRequestTarget(Aws::Utils::Json::JsonView jsonValue);
    PullRequestTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the repository that contains the pull request source and
     * destination branches.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that contains the pull request source and
     * destination branches.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that contains the pull request source and
     * destination branches.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that contains the pull request source and
     * destination branches.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that contains the pull request source and
     * destination branches.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that contains the pull request source and
     * destination branches.</p>
     */
    inline PullRequestTarget& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that contains the pull request source and
     * destination branches.</p>
     */
    inline PullRequestTarget& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the pull request source and
     * destination branches.</p>
     */
    inline PullRequestTarget& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline const Aws::String& GetSourceReference() const{ return m_sourceReference; }

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline bool SourceReferenceHasBeenSet() const { return m_sourceReferenceHasBeenSet; }

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline void SetSourceReference(const Aws::String& value) { m_sourceReferenceHasBeenSet = true; m_sourceReference = value; }

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline void SetSourceReference(Aws::String&& value) { m_sourceReferenceHasBeenSet = true; m_sourceReference = std::move(value); }

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline void SetSourceReference(const char* value) { m_sourceReferenceHasBeenSet = true; m_sourceReference.assign(value); }

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline PullRequestTarget& WithSourceReference(const Aws::String& value) { SetSourceReference(value); return *this;}

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline PullRequestTarget& WithSourceReference(Aws::String&& value) { SetSourceReference(std::move(value)); return *this;}

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline PullRequestTarget& WithSourceReference(const char* value) { SetSourceReference(value); return *this;}


    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch. </p>
     */
    inline const Aws::String& GetDestinationReference() const{ return m_destinationReference; }

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch. </p>
     */
    inline bool DestinationReferenceHasBeenSet() const { return m_destinationReferenceHasBeenSet; }

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch. </p>
     */
    inline void SetDestinationReference(const Aws::String& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = value; }

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch. </p>
     */
    inline void SetDestinationReference(Aws::String&& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = std::move(value); }

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch. </p>
     */
    inline void SetDestinationReference(const char* value) { m_destinationReferenceHasBeenSet = true; m_destinationReference.assign(value); }

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch. </p>
     */
    inline PullRequestTarget& WithDestinationReference(const Aws::String& value) { SetDestinationReference(value); return *this;}

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch. </p>
     */
    inline PullRequestTarget& WithDestinationReference(Aws::String&& value) { SetDestinationReference(std::move(value)); return *this;}

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch. </p>
     */
    inline PullRequestTarget& WithDestinationReference(const char* value) { SetDestinationReference(value); return *this;}


    /**
     * <p>The full commit ID that is the tip of the destination branch. This is the
     * commit where the pull request was or will be merged.</p>
     */
    inline const Aws::String& GetDestinationCommit() const{ return m_destinationCommit; }

    /**
     * <p>The full commit ID that is the tip of the destination branch. This is the
     * commit where the pull request was or will be merged.</p>
     */
    inline bool DestinationCommitHasBeenSet() const { return m_destinationCommitHasBeenSet; }

    /**
     * <p>The full commit ID that is the tip of the destination branch. This is the
     * commit where the pull request was or will be merged.</p>
     */
    inline void SetDestinationCommit(const Aws::String& value) { m_destinationCommitHasBeenSet = true; m_destinationCommit = value; }

    /**
     * <p>The full commit ID that is the tip of the destination branch. This is the
     * commit where the pull request was or will be merged.</p>
     */
    inline void SetDestinationCommit(Aws::String&& value) { m_destinationCommitHasBeenSet = true; m_destinationCommit = std::move(value); }

    /**
     * <p>The full commit ID that is the tip of the destination branch. This is the
     * commit where the pull request was or will be merged.</p>
     */
    inline void SetDestinationCommit(const char* value) { m_destinationCommitHasBeenSet = true; m_destinationCommit.assign(value); }

    /**
     * <p>The full commit ID that is the tip of the destination branch. This is the
     * commit where the pull request was or will be merged.</p>
     */
    inline PullRequestTarget& WithDestinationCommit(const Aws::String& value) { SetDestinationCommit(value); return *this;}

    /**
     * <p>The full commit ID that is the tip of the destination branch. This is the
     * commit where the pull request was or will be merged.</p>
     */
    inline PullRequestTarget& WithDestinationCommit(Aws::String&& value) { SetDestinationCommit(std::move(value)); return *this;}

    /**
     * <p>The full commit ID that is the tip of the destination branch. This is the
     * commit where the pull request was or will be merged.</p>
     */
    inline PullRequestTarget& WithDestinationCommit(const char* value) { SetDestinationCommit(value); return *this;}


    /**
     * <p>The full commit ID of the tip of the source branch used to create the pull
     * request. If the pull request branch is updated by a push while the pull request
     * is open, the commit ID will change to reflect the new tip of the branch.</p>
     */
    inline const Aws::String& GetSourceCommit() const{ return m_sourceCommit; }

    /**
     * <p>The full commit ID of the tip of the source branch used to create the pull
     * request. If the pull request branch is updated by a push while the pull request
     * is open, the commit ID will change to reflect the new tip of the branch.</p>
     */
    inline bool SourceCommitHasBeenSet() const { return m_sourceCommitHasBeenSet; }

    /**
     * <p>The full commit ID of the tip of the source branch used to create the pull
     * request. If the pull request branch is updated by a push while the pull request
     * is open, the commit ID will change to reflect the new tip of the branch.</p>
     */
    inline void SetSourceCommit(const Aws::String& value) { m_sourceCommitHasBeenSet = true; m_sourceCommit = value; }

    /**
     * <p>The full commit ID of the tip of the source branch used to create the pull
     * request. If the pull request branch is updated by a push while the pull request
     * is open, the commit ID will change to reflect the new tip of the branch.</p>
     */
    inline void SetSourceCommit(Aws::String&& value) { m_sourceCommitHasBeenSet = true; m_sourceCommit = std::move(value); }

    /**
     * <p>The full commit ID of the tip of the source branch used to create the pull
     * request. If the pull request branch is updated by a push while the pull request
     * is open, the commit ID will change to reflect the new tip of the branch.</p>
     */
    inline void SetSourceCommit(const char* value) { m_sourceCommitHasBeenSet = true; m_sourceCommit.assign(value); }

    /**
     * <p>The full commit ID of the tip of the source branch used to create the pull
     * request. If the pull request branch is updated by a push while the pull request
     * is open, the commit ID will change to reflect the new tip of the branch.</p>
     */
    inline PullRequestTarget& WithSourceCommit(const Aws::String& value) { SetSourceCommit(value); return *this;}

    /**
     * <p>The full commit ID of the tip of the source branch used to create the pull
     * request. If the pull request branch is updated by a push while the pull request
     * is open, the commit ID will change to reflect the new tip of the branch.</p>
     */
    inline PullRequestTarget& WithSourceCommit(Aws::String&& value) { SetSourceCommit(std::move(value)); return *this;}

    /**
     * <p>The full commit ID of the tip of the source branch used to create the pull
     * request. If the pull request branch is updated by a push while the pull request
     * is open, the commit ID will change to reflect the new tip of the branch.</p>
     */
    inline PullRequestTarget& WithSourceCommit(const char* value) { SetSourceCommit(value); return *this;}


    /**
     * <p>The commit ID of the most recent commit that the source branch and the
     * destination branch have in common.</p>
     */
    inline const Aws::String& GetMergeBase() const{ return m_mergeBase; }

    /**
     * <p>The commit ID of the most recent commit that the source branch and the
     * destination branch have in common.</p>
     */
    inline bool MergeBaseHasBeenSet() const { return m_mergeBaseHasBeenSet; }

    /**
     * <p>The commit ID of the most recent commit that the source branch and the
     * destination branch have in common.</p>
     */
    inline void SetMergeBase(const Aws::String& value) { m_mergeBaseHasBeenSet = true; m_mergeBase = value; }

    /**
     * <p>The commit ID of the most recent commit that the source branch and the
     * destination branch have in common.</p>
     */
    inline void SetMergeBase(Aws::String&& value) { m_mergeBaseHasBeenSet = true; m_mergeBase = std::move(value); }

    /**
     * <p>The commit ID of the most recent commit that the source branch and the
     * destination branch have in common.</p>
     */
    inline void SetMergeBase(const char* value) { m_mergeBaseHasBeenSet = true; m_mergeBase.assign(value); }

    /**
     * <p>The commit ID of the most recent commit that the source branch and the
     * destination branch have in common.</p>
     */
    inline PullRequestTarget& WithMergeBase(const Aws::String& value) { SetMergeBase(value); return *this;}

    /**
     * <p>The commit ID of the most recent commit that the source branch and the
     * destination branch have in common.</p>
     */
    inline PullRequestTarget& WithMergeBase(Aws::String&& value) { SetMergeBase(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the most recent commit that the source branch and the
     * destination branch have in common.</p>
     */
    inline PullRequestTarget& WithMergeBase(const char* value) { SetMergeBase(value); return *this;}


    /**
     * <p>Returns metadata about the state of the merge, including whether the merge
     * has been made.</p>
     */
    inline const MergeMetadata& GetMergeMetadata() const{ return m_mergeMetadata; }

    /**
     * <p>Returns metadata about the state of the merge, including whether the merge
     * has been made.</p>
     */
    inline bool MergeMetadataHasBeenSet() const { return m_mergeMetadataHasBeenSet; }

    /**
     * <p>Returns metadata about the state of the merge, including whether the merge
     * has been made.</p>
     */
    inline void SetMergeMetadata(const MergeMetadata& value) { m_mergeMetadataHasBeenSet = true; m_mergeMetadata = value; }

    /**
     * <p>Returns metadata about the state of the merge, including whether the merge
     * has been made.</p>
     */
    inline void SetMergeMetadata(MergeMetadata&& value) { m_mergeMetadataHasBeenSet = true; m_mergeMetadata = std::move(value); }

    /**
     * <p>Returns metadata about the state of the merge, including whether the merge
     * has been made.</p>
     */
    inline PullRequestTarget& WithMergeMetadata(const MergeMetadata& value) { SetMergeMetadata(value); return *this;}

    /**
     * <p>Returns metadata about the state of the merge, including whether the merge
     * has been made.</p>
     */
    inline PullRequestTarget& WithMergeMetadata(MergeMetadata&& value) { SetMergeMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_sourceReference;
    bool m_sourceReferenceHasBeenSet;

    Aws::String m_destinationReference;
    bool m_destinationReferenceHasBeenSet;

    Aws::String m_destinationCommit;
    bool m_destinationCommitHasBeenSet;

    Aws::String m_sourceCommit;
    bool m_sourceCommitHasBeenSet;

    Aws::String m_mergeBase;
    bool m_mergeBaseHasBeenSet;

    MergeMetadata m_mergeMetadata;
    bool m_mergeMetadataHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
