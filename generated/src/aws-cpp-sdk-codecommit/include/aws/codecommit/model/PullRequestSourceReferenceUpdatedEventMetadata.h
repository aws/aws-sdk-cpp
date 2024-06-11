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
   * <p>Information about an update to the source branch of a pull
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PullRequestSourceReferenceUpdatedEventMetadata">AWS
   * API Reference</a></p>
   */
  class PullRequestSourceReferenceUpdatedEventMetadata
  {
  public:
    AWS_CODECOMMIT_API PullRequestSourceReferenceUpdatedEventMetadata();
    AWS_CODECOMMIT_API PullRequestSourceReferenceUpdatedEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API PullRequestSourceReferenceUpdatedEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the repository where the pull request was updated.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was updated.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const{ return m_beforeCommitId; }
    inline bool BeforeCommitIdHasBeenSet() const { return m_beforeCommitIdHasBeenSet; }
    inline void SetBeforeCommitId(const Aws::String& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = value; }
    inline void SetBeforeCommitId(Aws::String&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::move(value); }
    inline void SetBeforeCommitId(const char* value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId.assign(value); }
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithBeforeCommitId(const Aws::String& value) { SetBeforeCommitId(value); return *this;}
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithBeforeCommitId(Aws::String&& value) { SetBeforeCommitId(std::move(value)); return *this;}
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithBeforeCommitId(const char* value) { SetBeforeCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit in the source branch that was the tip of the
     * branch at the time the pull request was updated.</p>
     */
    inline const Aws::String& GetAfterCommitId() const{ return m_afterCommitId; }
    inline bool AfterCommitIdHasBeenSet() const { return m_afterCommitIdHasBeenSet; }
    inline void SetAfterCommitId(const Aws::String& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = value; }
    inline void SetAfterCommitId(Aws::String&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::move(value); }
    inline void SetAfterCommitId(const char* value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId.assign(value); }
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithAfterCommitId(const Aws::String& value) { SetAfterCommitId(value); return *this;}
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithAfterCommitId(Aws::String&& value) { SetAfterCommitId(std::move(value)); return *this;}
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithAfterCommitId(const char* value) { SetAfterCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the most recent commit that the source branch and the
     * destination branch have in common.</p>
     */
    inline const Aws::String& GetMergeBase() const{ return m_mergeBase; }
    inline bool MergeBaseHasBeenSet() const { return m_mergeBaseHasBeenSet; }
    inline void SetMergeBase(const Aws::String& value) { m_mergeBaseHasBeenSet = true; m_mergeBase = value; }
    inline void SetMergeBase(Aws::String&& value) { m_mergeBaseHasBeenSet = true; m_mergeBase = std::move(value); }
    inline void SetMergeBase(const char* value) { m_mergeBaseHasBeenSet = true; m_mergeBase.assign(value); }
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithMergeBase(const Aws::String& value) { SetMergeBase(value); return *this;}
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithMergeBase(Aws::String&& value) { SetMergeBase(std::move(value)); return *this;}
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithMergeBase(const char* value) { SetMergeBase(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_beforeCommitId;
    bool m_beforeCommitIdHasBeenSet = false;

    Aws::String m_afterCommitId;
    bool m_afterCommitIdHasBeenSet = false;

    Aws::String m_mergeBase;
    bool m_mergeBaseHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
