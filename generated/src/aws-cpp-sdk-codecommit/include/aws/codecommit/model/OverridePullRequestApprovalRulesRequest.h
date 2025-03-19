/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/OverrideStatus.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class OverridePullRequestApprovalRulesRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API OverridePullRequestApprovalRulesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "OverridePullRequestApprovalRules"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The system-generated ID of the pull request for which you want to override
     * all approval rule requirements. To get this information, use
     * <a>GetPullRequest</a>.</p>
     */
    inline const Aws::String& GetPullRequestId() const { return m_pullRequestId; }
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }
    template<typename PullRequestIdT = Aws::String>
    void SetPullRequestId(PullRequestIdT&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::forward<PullRequestIdT>(value); }
    template<typename PullRequestIdT = Aws::String>
    OverridePullRequestApprovalRulesRequest& WithPullRequestId(PullRequestIdT&& value) { SetPullRequestId(std::forward<PullRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated ID of the most recent revision of the pull request. You
     * cannot override approval rules for anything but the most recent revision of a
     * pull request. To get the revision ID, use GetPullRequest.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    OverridePullRequestApprovalRulesRequest& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to set aside approval rule requirements for the pull request
     * (OVERRIDE) or revoke a previous override and apply approval rule requirements
     * (REVOKE). REVOKE status is not stored.</p>
     */
    inline OverrideStatus GetOverrideStatus() const { return m_overrideStatus; }
    inline bool OverrideStatusHasBeenSet() const { return m_overrideStatusHasBeenSet; }
    inline void SetOverrideStatus(OverrideStatus value) { m_overrideStatusHasBeenSet = true; m_overrideStatus = value; }
    inline OverridePullRequestApprovalRulesRequest& WithOverrideStatus(OverrideStatus value) { SetOverrideStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    OverrideStatus m_overrideStatus{OverrideStatus::NOT_SET};
    bool m_overrideStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
