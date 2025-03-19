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
  class UpdatePullRequestApprovalRuleContentRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API UpdatePullRequestApprovalRuleContentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePullRequestApprovalRuleContent"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline const Aws::String& GetPullRequestId() const { return m_pullRequestId; }
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }
    template<typename PullRequestIdT = Aws::String>
    void SetPullRequestId(PullRequestIdT&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::forward<PullRequestIdT>(value); }
    template<typename PullRequestIdT = Aws::String>
    UpdatePullRequestApprovalRuleContentRequest& WithPullRequestId(PullRequestIdT&& value) { SetPullRequestId(std::forward<PullRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the approval rule you want to update.</p>
     */
    inline const Aws::String& GetApprovalRuleName() const { return m_approvalRuleName; }
    inline bool ApprovalRuleNameHasBeenSet() const { return m_approvalRuleNameHasBeenSet; }
    template<typename ApprovalRuleNameT = Aws::String>
    void SetApprovalRuleName(ApprovalRuleNameT&& value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName = std::forward<ApprovalRuleNameT>(value); }
    template<typename ApprovalRuleNameT = Aws::String>
    UpdatePullRequestApprovalRuleContentRequest& WithApprovalRuleName(ApprovalRuleNameT&& value) { SetApprovalRuleName(std::forward<ApprovalRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA-256 hash signature for the content of the approval rule. You can
     * retrieve this information by using <a>GetPullRequest</a>.</p>
     */
    inline const Aws::String& GetExistingRuleContentSha256() const { return m_existingRuleContentSha256; }
    inline bool ExistingRuleContentSha256HasBeenSet() const { return m_existingRuleContentSha256HasBeenSet; }
    template<typename ExistingRuleContentSha256T = Aws::String>
    void SetExistingRuleContentSha256(ExistingRuleContentSha256T&& value) { m_existingRuleContentSha256HasBeenSet = true; m_existingRuleContentSha256 = std::forward<ExistingRuleContentSha256T>(value); }
    template<typename ExistingRuleContentSha256T = Aws::String>
    UpdatePullRequestApprovalRuleContentRequest& WithExistingRuleContentSha256(ExistingRuleContentSha256T&& value) { SetExistingRuleContentSha256(std::forward<ExistingRuleContentSha256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated content for the approval rule.</p>  <p>When you update the
     * content of the approval rule, you can specify approvers in an approval pool in
     * one of two ways:</p> <ul> <li> <p> <b>CodeCommitApprovers</b>: This option only
     * requires an Amazon Web Services account and a resource. It can be used for both
     * IAM users and federated access users whose name matches the provided resource
     * name. This is a very powerful option that offers a great deal of flexibility.
     * For example, if you specify the Amazon Web Services account <i>123456789012</i>
     * and <i>Mary_Major</i>, all of the following are counted as approvals coming from
     * that user:</p> <ul> <li> <p>An IAM user in the account
     * (arn:aws:iam::<i>123456789012</i>:user/<i>Mary_Major</i>)</p> </li> <li> <p>A
     * federated user identified in IAM as Mary_Major
     * (arn:aws:sts::<i>123456789012</i>:federated-user/<i>Mary_Major</i>)</p> </li>
     * </ul> <p>This option does not recognize an active session of someone assuming
     * the role of CodeCommitReview with a role session name of <i>Mary_Major</i>
     * (arn:aws:sts::<i>123456789012</i>:assumed-role/CodeCommitReview/<i>Mary_Major</i>)
     * unless you include a wildcard (*Mary_Major).</p> </li> <li> <p> <b>Fully
     * qualified ARN</b>: This option allows you to specify the fully qualified Amazon
     * Resource Name (ARN) of the IAM user or role. </p> </li> </ul> <p>For more
     * information about IAM ARNs, wildcards, and formats, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> 
     */
    inline const Aws::String& GetNewRuleContent() const { return m_newRuleContent; }
    inline bool NewRuleContentHasBeenSet() const { return m_newRuleContentHasBeenSet; }
    template<typename NewRuleContentT = Aws::String>
    void SetNewRuleContent(NewRuleContentT&& value) { m_newRuleContentHasBeenSet = true; m_newRuleContent = std::forward<NewRuleContentT>(value); }
    template<typename NewRuleContentT = Aws::String>
    UpdatePullRequestApprovalRuleContentRequest& WithNewRuleContent(NewRuleContentT&& value) { SetNewRuleContent(std::forward<NewRuleContentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::String m_approvalRuleName;
    bool m_approvalRuleNameHasBeenSet = false;

    Aws::String m_existingRuleContentSha256;
    bool m_existingRuleContentSha256HasBeenSet = false;

    Aws::String m_newRuleContent;
    bool m_newRuleContentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
