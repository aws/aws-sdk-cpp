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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class AWS_CODECOMMIT_API PullRequestSourceReferenceUpdatedEventMetadata
  {
  public:
    PullRequestSourceReferenceUpdatedEventMetadata();
    PullRequestSourceReferenceUpdatedEventMetadata(const Aws::Utils::Json::JsonValue& jsonValue);
    PullRequestSourceReferenceUpdatedEventMetadata& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the repository where the pull request was updated.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where the pull request was updated.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository where the pull request was updated.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where the pull request was updated.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where the pull request was updated.</p>
     */
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where the pull request was updated.</p>
     */
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where the pull request was updated.</p>
     */
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was updated.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const{ return m_beforeCommitId; }

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was updated.</p>
     */
    inline void SetBeforeCommitId(const Aws::String& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = value; }

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was updated.</p>
     */
    inline void SetBeforeCommitId(Aws::String&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::move(value); }

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was updated.</p>
     */
    inline void SetBeforeCommitId(const char* value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId.assign(value); }

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was updated.</p>
     */
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithBeforeCommitId(const Aws::String& value) { SetBeforeCommitId(value); return *this;}

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was updated.</p>
     */
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithBeforeCommitId(Aws::String&& value) { SetBeforeCommitId(std::move(value)); return *this;}

    /**
     * <p>The full commit ID of the commit in the destination branch that was the tip
     * of the branch at the time the pull request was updated.</p>
     */
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithBeforeCommitId(const char* value) { SetBeforeCommitId(value); return *this;}


    /**
     * <p>The full commit ID of the commit in the source branch that was the tip of the
     * branch at the time the pull request was updated.</p>
     */
    inline const Aws::String& GetAfterCommitId() const{ return m_afterCommitId; }

    /**
     * <p>The full commit ID of the commit in the source branch that was the tip of the
     * branch at the time the pull request was updated.</p>
     */
    inline void SetAfterCommitId(const Aws::String& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = value; }

    /**
     * <p>The full commit ID of the commit in the source branch that was the tip of the
     * branch at the time the pull request was updated.</p>
     */
    inline void SetAfterCommitId(Aws::String&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::move(value); }

    /**
     * <p>The full commit ID of the commit in the source branch that was the tip of the
     * branch at the time the pull request was updated.</p>
     */
    inline void SetAfterCommitId(const char* value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId.assign(value); }

    /**
     * <p>The full commit ID of the commit in the source branch that was the tip of the
     * branch at the time the pull request was updated.</p>
     */
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithAfterCommitId(const Aws::String& value) { SetAfterCommitId(value); return *this;}

    /**
     * <p>The full commit ID of the commit in the source branch that was the tip of the
     * branch at the time the pull request was updated.</p>
     */
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithAfterCommitId(Aws::String&& value) { SetAfterCommitId(std::move(value)); return *this;}

    /**
     * <p>The full commit ID of the commit in the source branch that was the tip of the
     * branch at the time the pull request was updated.</p>
     */
    inline PullRequestSourceReferenceUpdatedEventMetadata& WithAfterCommitId(const char* value) { SetAfterCommitId(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_beforeCommitId;
    bool m_beforeCommitIdHasBeenSet;

    Aws::String m_afterCommitId;
    bool m_afterCommitIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
