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
    AWS_CODECOMMIT_API OverridePullRequestApprovalRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "OverridePullRequestApprovalRules"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The system-generated ID of the pull request for which you want to override
     * all approval rule requirements. To get this information, use
     * <a>GetPullRequest</a>.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The system-generated ID of the pull request for which you want to override
     * all approval rule requirements. To get this information, use
     * <a>GetPullRequest</a>.</p>
     */
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the pull request for which you want to override
     * all approval rule requirements. To get this information, use
     * <a>GetPullRequest</a>.</p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The system-generated ID of the pull request for which you want to override
     * all approval rule requirements. To get this information, use
     * <a>GetPullRequest</a>.</p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The system-generated ID of the pull request for which you want to override
     * all approval rule requirements. To get this information, use
     * <a>GetPullRequest</a>.</p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The system-generated ID of the pull request for which you want to override
     * all approval rule requirements. To get this information, use
     * <a>GetPullRequest</a>.</p>
     */
    inline OverridePullRequestApprovalRulesRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The system-generated ID of the pull request for which you want to override
     * all approval rule requirements. To get this information, use
     * <a>GetPullRequest</a>.</p>
     */
    inline OverridePullRequestApprovalRulesRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the pull request for which you want to override
     * all approval rule requirements. To get this information, use
     * <a>GetPullRequest</a>.</p>
     */
    inline OverridePullRequestApprovalRulesRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


    /**
     * <p>The system-generated ID of the most recent revision of the pull request. You
     * cannot override approval rules for anything but the most recent revision of a
     * pull request. To get the revision ID, use GetPullRequest.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The system-generated ID of the most recent revision of the pull request. You
     * cannot override approval rules for anything but the most recent revision of a
     * pull request. To get the revision ID, use GetPullRequest.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the most recent revision of the pull request. You
     * cannot override approval rules for anything but the most recent revision of a
     * pull request. To get the revision ID, use GetPullRequest.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The system-generated ID of the most recent revision of the pull request. You
     * cannot override approval rules for anything but the most recent revision of a
     * pull request. To get the revision ID, use GetPullRequest.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The system-generated ID of the most recent revision of the pull request. You
     * cannot override approval rules for anything but the most recent revision of a
     * pull request. To get the revision ID, use GetPullRequest.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The system-generated ID of the most recent revision of the pull request. You
     * cannot override approval rules for anything but the most recent revision of a
     * pull request. To get the revision ID, use GetPullRequest.</p>
     */
    inline OverridePullRequestApprovalRulesRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The system-generated ID of the most recent revision of the pull request. You
     * cannot override approval rules for anything but the most recent revision of a
     * pull request. To get the revision ID, use GetPullRequest.</p>
     */
    inline OverridePullRequestApprovalRulesRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the most recent revision of the pull request. You
     * cannot override approval rules for anything but the most recent revision of a
     * pull request. To get the revision ID, use GetPullRequest.</p>
     */
    inline OverridePullRequestApprovalRulesRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>Whether you want to set aside approval rule requirements for the pull request
     * (OVERRIDE) or revoke a previous override and apply approval rule requirements
     * (REVOKE). REVOKE status is not stored.</p>
     */
    inline const OverrideStatus& GetOverrideStatus() const{ return m_overrideStatus; }

    /**
     * <p>Whether you want to set aside approval rule requirements for the pull request
     * (OVERRIDE) or revoke a previous override and apply approval rule requirements
     * (REVOKE). REVOKE status is not stored.</p>
     */
    inline bool OverrideStatusHasBeenSet() const { return m_overrideStatusHasBeenSet; }

    /**
     * <p>Whether you want to set aside approval rule requirements for the pull request
     * (OVERRIDE) or revoke a previous override and apply approval rule requirements
     * (REVOKE). REVOKE status is not stored.</p>
     */
    inline void SetOverrideStatus(const OverrideStatus& value) { m_overrideStatusHasBeenSet = true; m_overrideStatus = value; }

    /**
     * <p>Whether you want to set aside approval rule requirements for the pull request
     * (OVERRIDE) or revoke a previous override and apply approval rule requirements
     * (REVOKE). REVOKE status is not stored.</p>
     */
    inline void SetOverrideStatus(OverrideStatus&& value) { m_overrideStatusHasBeenSet = true; m_overrideStatus = std::move(value); }

    /**
     * <p>Whether you want to set aside approval rule requirements for the pull request
     * (OVERRIDE) or revoke a previous override and apply approval rule requirements
     * (REVOKE). REVOKE status is not stored.</p>
     */
    inline OverridePullRequestApprovalRulesRequest& WithOverrideStatus(const OverrideStatus& value) { SetOverrideStatus(value); return *this;}

    /**
     * <p>Whether you want to set aside approval rule requirements for the pull request
     * (OVERRIDE) or revoke a previous override and apply approval rule requirements
     * (REVOKE). REVOKE status is not stored.</p>
     */
    inline OverridePullRequestApprovalRulesRequest& WithOverrideStatus(OverrideStatus&& value) { SetOverrideStatus(std::move(value)); return *this;}

  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    OverrideStatus m_overrideStatus;
    bool m_overrideStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
