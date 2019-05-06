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
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class AWS_CODECOMMIT_API MergePullRequestByFastForwardRequest : public CodeCommitRequest
  {
  public:
    MergePullRequestByFastForwardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MergePullRequestByFastForward"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline MergePullRequestByFastForwardRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline MergePullRequestByFastForwardRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline MergePullRequestByFastForwardRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


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
    inline MergePullRequestByFastForwardRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline MergePullRequestByFastForwardRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where the pull request was created.</p>
     */
    inline MergePullRequestByFastForwardRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The full commit ID of the original or updated commit in the pull request
     * source branch. Pass this value if you want an exception thrown if the current
     * commit ID of the tip of the source branch does not match this commit ID.</p>
     */
    inline const Aws::String& GetSourceCommitId() const{ return m_sourceCommitId; }

    /**
     * <p>The full commit ID of the original or updated commit in the pull request
     * source branch. Pass this value if you want an exception thrown if the current
     * commit ID of the tip of the source branch does not match this commit ID.</p>
     */
    inline bool SourceCommitIdHasBeenSet() const { return m_sourceCommitIdHasBeenSet; }

    /**
     * <p>The full commit ID of the original or updated commit in the pull request
     * source branch. Pass this value if you want an exception thrown if the current
     * commit ID of the tip of the source branch does not match this commit ID.</p>
     */
    inline void SetSourceCommitId(const Aws::String& value) { m_sourceCommitIdHasBeenSet = true; m_sourceCommitId = value; }

    /**
     * <p>The full commit ID of the original or updated commit in the pull request
     * source branch. Pass this value if you want an exception thrown if the current
     * commit ID of the tip of the source branch does not match this commit ID.</p>
     */
    inline void SetSourceCommitId(Aws::String&& value) { m_sourceCommitIdHasBeenSet = true; m_sourceCommitId = std::move(value); }

    /**
     * <p>The full commit ID of the original or updated commit in the pull request
     * source branch. Pass this value if you want an exception thrown if the current
     * commit ID of the tip of the source branch does not match this commit ID.</p>
     */
    inline void SetSourceCommitId(const char* value) { m_sourceCommitIdHasBeenSet = true; m_sourceCommitId.assign(value); }

    /**
     * <p>The full commit ID of the original or updated commit in the pull request
     * source branch. Pass this value if you want an exception thrown if the current
     * commit ID of the tip of the source branch does not match this commit ID.</p>
     */
    inline MergePullRequestByFastForwardRequest& WithSourceCommitId(const Aws::String& value) { SetSourceCommitId(value); return *this;}

    /**
     * <p>The full commit ID of the original or updated commit in the pull request
     * source branch. Pass this value if you want an exception thrown if the current
     * commit ID of the tip of the source branch does not match this commit ID.</p>
     */
    inline MergePullRequestByFastForwardRequest& WithSourceCommitId(Aws::String&& value) { SetSourceCommitId(std::move(value)); return *this;}

    /**
     * <p>The full commit ID of the original or updated commit in the pull request
     * source branch. Pass this value if you want an exception thrown if the current
     * commit ID of the tip of the source branch does not match this commit ID.</p>
     */
    inline MergePullRequestByFastForwardRequest& WithSourceCommitId(const char* value) { SetSourceCommitId(value); return *this;}

  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_sourceCommitId;
    bool m_sourceCommitIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
