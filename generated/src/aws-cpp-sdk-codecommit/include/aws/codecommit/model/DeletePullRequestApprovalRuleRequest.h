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
    AWS_CODECOMMIT_API DeletePullRequestApprovalRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePullRequestApprovalRule"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The system-generated ID of the pull request that contains the approval rule
     * you want to delete.</p>
     */
    inline const Aws::String& GetPullRequestId() const { return m_pullRequestId; }
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }
    template<typename PullRequestIdT = Aws::String>
    void SetPullRequestId(PullRequestIdT&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::forward<PullRequestIdT>(value); }
    template<typename PullRequestIdT = Aws::String>
    DeletePullRequestApprovalRuleRequest& WithPullRequestId(PullRequestIdT&& value) { SetPullRequestId(std::forward<PullRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the approval rule you want to delete.</p>
     */
    inline const Aws::String& GetApprovalRuleName() const { return m_approvalRuleName; }
    inline bool ApprovalRuleNameHasBeenSet() const { return m_approvalRuleNameHasBeenSet; }
    template<typename ApprovalRuleNameT = Aws::String>
    void SetApprovalRuleName(ApprovalRuleNameT&& value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName = std::forward<ApprovalRuleNameT>(value); }
    template<typename ApprovalRuleNameT = Aws::String>
    DeletePullRequestApprovalRuleRequest& WithApprovalRuleName(ApprovalRuleNameT&& value) { SetApprovalRuleName(std::forward<ApprovalRuleNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::String m_approvalRuleName;
    bool m_approvalRuleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
