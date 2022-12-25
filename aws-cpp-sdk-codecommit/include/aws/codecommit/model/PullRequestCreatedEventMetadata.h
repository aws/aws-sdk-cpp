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
    AWS_CODECOMMIT_API PullRequestCreatedEventMetadata();
    AWS_CODECOMMIT_API PullRequestCreatedEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API PullRequestCreatedEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline PullRequestCreatedEventMetadata& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline PullRequestCreatedEventMetadata& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline PullRequestCreatedEventMetadata& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The commit ID on the source branch used when the pull request was
     * created.</p>
     */
    inline const Aws::String& GetSourceCommitId() const{ return m_sourceCommitId; }

    /**
     * <p>The commit ID on the source branch used when the pull request was
     * created.</p>
     */
    inline bool SourceCommitIdHasBeenSet() const { return m_sourceCommitIdHasBeenSet; }

    /**
     * <p>The commit ID on the source branch used when the pull request was
     * created.</p>
     */
    inline void SetSourceCommitId(const Aws::String& value) { m_sourceCommitIdHasBeenSet = true; m_sourceCommitId = value; }

    /**
     * <p>The commit ID on the source branch used when the pull request was
     * created.</p>
     */
    inline void SetSourceCommitId(Aws::String&& value) { m_sourceCommitIdHasBeenSet = true; m_sourceCommitId = std::move(value); }

    /**
     * <p>The commit ID on the source branch used when the pull request was
     * created.</p>
     */
    inline void SetSourceCommitId(const char* value) { m_sourceCommitIdHasBeenSet = true; m_sourceCommitId.assign(value); }

    /**
     * <p>The commit ID on the source branch used when the pull request was
     * created.</p>
     */
    inline PullRequestCreatedEventMetadata& WithSourceCommitId(const Aws::String& value) { SetSourceCommitId(value); return *this;}

    /**
     * <p>The commit ID on the source branch used when the pull request was
     * created.</p>
     */
    inline PullRequestCreatedEventMetadata& WithSourceCommitId(Aws::String&& value) { SetSourceCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID on the source branch used when the pull request was
     * created.</p>
     */
    inline PullRequestCreatedEventMetadata& WithSourceCommitId(const char* value) { SetSourceCommitId(value); return *this;}


    /**
     * <p>The commit ID of the tip of the branch specified as the destination branch
     * when the pull request was created.</p>
     */
    inline const Aws::String& GetDestinationCommitId() const{ return m_destinationCommitId; }

    /**
     * <p>The commit ID of the tip of the branch specified as the destination branch
     * when the pull request was created.</p>
     */
    inline bool DestinationCommitIdHasBeenSet() const { return m_destinationCommitIdHasBeenSet; }

    /**
     * <p>The commit ID of the tip of the branch specified as the destination branch
     * when the pull request was created.</p>
     */
    inline void SetDestinationCommitId(const Aws::String& value) { m_destinationCommitIdHasBeenSet = true; m_destinationCommitId = value; }

    /**
     * <p>The commit ID of the tip of the branch specified as the destination branch
     * when the pull request was created.</p>
     */
    inline void SetDestinationCommitId(Aws::String&& value) { m_destinationCommitIdHasBeenSet = true; m_destinationCommitId = std::move(value); }

    /**
     * <p>The commit ID of the tip of the branch specified as the destination branch
     * when the pull request was created.</p>
     */
    inline void SetDestinationCommitId(const char* value) { m_destinationCommitIdHasBeenSet = true; m_destinationCommitId.assign(value); }

    /**
     * <p>The commit ID of the tip of the branch specified as the destination branch
     * when the pull request was created.</p>
     */
    inline PullRequestCreatedEventMetadata& WithDestinationCommitId(const Aws::String& value) { SetDestinationCommitId(value); return *this;}

    /**
     * <p>The commit ID of the tip of the branch specified as the destination branch
     * when the pull request was created.</p>
     */
    inline PullRequestCreatedEventMetadata& WithDestinationCommitId(Aws::String&& value) { SetDestinationCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the tip of the branch specified as the destination branch
     * when the pull request was created.</p>
     */
    inline PullRequestCreatedEventMetadata& WithDestinationCommitId(const char* value) { SetDestinationCommitId(value); return *this;}


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
    inline PullRequestCreatedEventMetadata& WithMergeBase(const Aws::String& value) { SetMergeBase(value); return *this;}

    /**
     * <p>The commit ID of the most recent commit that the source branch and the
     * destination branch have in common.</p>
     */
    inline PullRequestCreatedEventMetadata& WithMergeBase(Aws::String&& value) { SetMergeBase(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the most recent commit that the source branch and the
     * destination branch have in common.</p>
     */
    inline PullRequestCreatedEventMetadata& WithMergeBase(const char* value) { SetMergeBase(value); return *this;}

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
