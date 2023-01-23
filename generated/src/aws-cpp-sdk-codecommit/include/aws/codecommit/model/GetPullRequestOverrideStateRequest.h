/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetPullRequestOverrideStateRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API GetPullRequestOverrideStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPullRequestOverrideState"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the pull request for which you want to get information about
     * whether approval rules have been set aside (overridden).</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The ID of the pull request for which you want to get information about
     * whether approval rules have been set aside (overridden).</p>
     */
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }

    /**
     * <p>The ID of the pull request for which you want to get information about
     * whether approval rules have been set aside (overridden).</p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The ID of the pull request for which you want to get information about
     * whether approval rules have been set aside (overridden).</p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The ID of the pull request for which you want to get information about
     * whether approval rules have been set aside (overridden).</p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The ID of the pull request for which you want to get information about
     * whether approval rules have been set aside (overridden).</p>
     */
    inline GetPullRequestOverrideStateRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The ID of the pull request for which you want to get information about
     * whether approval rules have been set aside (overridden).</p>
     */
    inline GetPullRequestOverrideStateRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pull request for which you want to get information about
     * whether approval rules have been set aside (overridden).</p>
     */
    inline GetPullRequestOverrideStateRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


    /**
     * <p>The system-generated ID of the revision for the pull request. To retrieve the
     * most recent revision ID, use <a>GetPullRequest</a>.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The system-generated ID of the revision for the pull request. To retrieve the
     * most recent revision ID, use <a>GetPullRequest</a>.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the revision for the pull request. To retrieve the
     * most recent revision ID, use <a>GetPullRequest</a>.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The system-generated ID of the revision for the pull request. To retrieve the
     * most recent revision ID, use <a>GetPullRequest</a>.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The system-generated ID of the revision for the pull request. To retrieve the
     * most recent revision ID, use <a>GetPullRequest</a>.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The system-generated ID of the revision for the pull request. To retrieve the
     * most recent revision ID, use <a>GetPullRequest</a>.</p>
     */
    inline GetPullRequestOverrideStateRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The system-generated ID of the revision for the pull request. To retrieve the
     * most recent revision ID, use <a>GetPullRequest</a>.</p>
     */
    inline GetPullRequestOverrideStateRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the revision for the pull request. To retrieve the
     * most recent revision ID, use <a>GetPullRequest</a>.</p>
     */
    inline GetPullRequestOverrideStateRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
