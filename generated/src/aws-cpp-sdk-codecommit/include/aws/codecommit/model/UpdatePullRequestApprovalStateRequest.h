/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/ApprovalState.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class UpdatePullRequestApprovalStateRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API UpdatePullRequestApprovalStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePullRequestApprovalState"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline UpdatePullRequestApprovalStateRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline UpdatePullRequestApprovalStateRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline UpdatePullRequestApprovalStateRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


    /**
     * <p>The system-generated ID of the revision.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The system-generated ID of the revision.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the revision.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The system-generated ID of the revision.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The system-generated ID of the revision.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The system-generated ID of the revision.</p>
     */
    inline UpdatePullRequestApprovalStateRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The system-generated ID of the revision.</p>
     */
    inline UpdatePullRequestApprovalStateRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the revision.</p>
     */
    inline UpdatePullRequestApprovalStateRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The approval state to associate with the user on the pull request.</p>
     */
    inline const ApprovalState& GetApprovalState() const{ return m_approvalState; }

    /**
     * <p>The approval state to associate with the user on the pull request.</p>
     */
    inline bool ApprovalStateHasBeenSet() const { return m_approvalStateHasBeenSet; }

    /**
     * <p>The approval state to associate with the user on the pull request.</p>
     */
    inline void SetApprovalState(const ApprovalState& value) { m_approvalStateHasBeenSet = true; m_approvalState = value; }

    /**
     * <p>The approval state to associate with the user on the pull request.</p>
     */
    inline void SetApprovalState(ApprovalState&& value) { m_approvalStateHasBeenSet = true; m_approvalState = std::move(value); }

    /**
     * <p>The approval state to associate with the user on the pull request.</p>
     */
    inline UpdatePullRequestApprovalStateRequest& WithApprovalState(const ApprovalState& value) { SetApprovalState(value); return *this;}

    /**
     * <p>The approval state to associate with the user on the pull request.</p>
     */
    inline UpdatePullRequestApprovalStateRequest& WithApprovalState(ApprovalState&& value) { SetApprovalState(std::move(value)); return *this;}

  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    ApprovalState m_approvalState;
    bool m_approvalStateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
