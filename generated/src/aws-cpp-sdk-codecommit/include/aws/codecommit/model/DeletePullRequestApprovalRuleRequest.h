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
  class DeletePullRequestApprovalRuleRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API DeletePullRequestApprovalRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePullRequestApprovalRule"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The system-generated ID of the pull request that contains the approval rule
     * you want to delete.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The system-generated ID of the pull request that contains the approval rule
     * you want to delete.</p>
     */
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the pull request that contains the approval rule
     * you want to delete.</p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The system-generated ID of the pull request that contains the approval rule
     * you want to delete.</p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The system-generated ID of the pull request that contains the approval rule
     * you want to delete.</p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The system-generated ID of the pull request that contains the approval rule
     * you want to delete.</p>
     */
    inline DeletePullRequestApprovalRuleRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The system-generated ID of the pull request that contains the approval rule
     * you want to delete.</p>
     */
    inline DeletePullRequestApprovalRuleRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the pull request that contains the approval rule
     * you want to delete.</p>
     */
    inline DeletePullRequestApprovalRuleRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


    /**
     * <p>The name of the approval rule you want to delete.</p>
     */
    inline const Aws::String& GetApprovalRuleName() const{ return m_approvalRuleName; }

    /**
     * <p>The name of the approval rule you want to delete.</p>
     */
    inline bool ApprovalRuleNameHasBeenSet() const { return m_approvalRuleNameHasBeenSet; }

    /**
     * <p>The name of the approval rule you want to delete.</p>
     */
    inline void SetApprovalRuleName(const Aws::String& value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName = value; }

    /**
     * <p>The name of the approval rule you want to delete.</p>
     */
    inline void SetApprovalRuleName(Aws::String&& value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName = std::move(value); }

    /**
     * <p>The name of the approval rule you want to delete.</p>
     */
    inline void SetApprovalRuleName(const char* value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName.assign(value); }

    /**
     * <p>The name of the approval rule you want to delete.</p>
     */
    inline DeletePullRequestApprovalRuleRequest& WithApprovalRuleName(const Aws::String& value) { SetApprovalRuleName(value); return *this;}

    /**
     * <p>The name of the approval rule you want to delete.</p>
     */
    inline DeletePullRequestApprovalRuleRequest& WithApprovalRuleName(Aws::String&& value) { SetApprovalRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the approval rule you want to delete.</p>
     */
    inline DeletePullRequestApprovalRuleRequest& WithApprovalRuleName(const char* value) { SetApprovalRuleName(value); return *this;}

  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::String m_approvalRuleName;
    bool m_approvalRuleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
