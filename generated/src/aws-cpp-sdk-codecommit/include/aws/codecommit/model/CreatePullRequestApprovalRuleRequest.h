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
  class CreatePullRequestApprovalRuleRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API CreatePullRequestApprovalRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePullRequestApprovalRule"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The system-generated ID of the pull request for which you want to create the
     * approval rule.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The system-generated ID of the pull request for which you want to create the
     * approval rule.</p>
     */
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the pull request for which you want to create the
     * approval rule.</p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The system-generated ID of the pull request for which you want to create the
     * approval rule.</p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The system-generated ID of the pull request for which you want to create the
     * approval rule.</p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The system-generated ID of the pull request for which you want to create the
     * approval rule.</p>
     */
    inline CreatePullRequestApprovalRuleRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The system-generated ID of the pull request for which you want to create the
     * approval rule.</p>
     */
    inline CreatePullRequestApprovalRuleRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the pull request for which you want to create the
     * approval rule.</p>
     */
    inline CreatePullRequestApprovalRuleRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


    /**
     * <p>The name for the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleName() const{ return m_approvalRuleName; }

    /**
     * <p>The name for the approval rule.</p>
     */
    inline bool ApprovalRuleNameHasBeenSet() const { return m_approvalRuleNameHasBeenSet; }

    /**
     * <p>The name for the approval rule.</p>
     */
    inline void SetApprovalRuleName(const Aws::String& value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName = value; }

    /**
     * <p>The name for the approval rule.</p>
     */
    inline void SetApprovalRuleName(Aws::String&& value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName = std::move(value); }

    /**
     * <p>The name for the approval rule.</p>
     */
    inline void SetApprovalRuleName(const char* value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName.assign(value); }

    /**
     * <p>The name for the approval rule.</p>
     */
    inline CreatePullRequestApprovalRuleRequest& WithApprovalRuleName(const Aws::String& value) { SetApprovalRuleName(value); return *this;}

    /**
     * <p>The name for the approval rule.</p>
     */
    inline CreatePullRequestApprovalRuleRequest& WithApprovalRuleName(Aws::String&& value) { SetApprovalRuleName(std::move(value)); return *this;}

    /**
     * <p>The name for the approval rule.</p>
     */
    inline CreatePullRequestApprovalRuleRequest& WithApprovalRuleName(const char* value) { SetApprovalRuleName(value); return *this;}


    /**
     * <p>The content of the approval rule, including the number of approvals needed
     * and the structure of an approval pool defined for approvals, if any. For more
     * information about approval pools, see the AWS CodeCommit User Guide.</p> 
     * <p>When you create the content of the approval rule, you can specify approvers
     * in an approval pool in one of two ways:</p> <ul> <li> <p>
     * <b>CodeCommitApprovers</b>: This option only requires an AWS account and a
     * resource. It can be used for both IAM users and federated access users whose
     * name matches the provided resource name. This is a very powerful option that
     * offers a great deal of flexibility. For example, if you specify the AWS account
     * <i>123456789012</i> and <i>Mary_Major</i>, all of the following would be counted
     * as approvals coming from that user:</p> <ul> <li> <p>An IAM user in the account
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
    inline const Aws::String& GetApprovalRuleContent() const{ return m_approvalRuleContent; }

    /**
     * <p>The content of the approval rule, including the number of approvals needed
     * and the structure of an approval pool defined for approvals, if any. For more
     * information about approval pools, see the AWS CodeCommit User Guide.</p> 
     * <p>When you create the content of the approval rule, you can specify approvers
     * in an approval pool in one of two ways:</p> <ul> <li> <p>
     * <b>CodeCommitApprovers</b>: This option only requires an AWS account and a
     * resource. It can be used for both IAM users and federated access users whose
     * name matches the provided resource name. This is a very powerful option that
     * offers a great deal of flexibility. For example, if you specify the AWS account
     * <i>123456789012</i> and <i>Mary_Major</i>, all of the following would be counted
     * as approvals coming from that user:</p> <ul> <li> <p>An IAM user in the account
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
    inline bool ApprovalRuleContentHasBeenSet() const { return m_approvalRuleContentHasBeenSet; }

    /**
     * <p>The content of the approval rule, including the number of approvals needed
     * and the structure of an approval pool defined for approvals, if any. For more
     * information about approval pools, see the AWS CodeCommit User Guide.</p> 
     * <p>When you create the content of the approval rule, you can specify approvers
     * in an approval pool in one of two ways:</p> <ul> <li> <p>
     * <b>CodeCommitApprovers</b>: This option only requires an AWS account and a
     * resource. It can be used for both IAM users and federated access users whose
     * name matches the provided resource name. This is a very powerful option that
     * offers a great deal of flexibility. For example, if you specify the AWS account
     * <i>123456789012</i> and <i>Mary_Major</i>, all of the following would be counted
     * as approvals coming from that user:</p> <ul> <li> <p>An IAM user in the account
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
    inline void SetApprovalRuleContent(const Aws::String& value) { m_approvalRuleContentHasBeenSet = true; m_approvalRuleContent = value; }

    /**
     * <p>The content of the approval rule, including the number of approvals needed
     * and the structure of an approval pool defined for approvals, if any. For more
     * information about approval pools, see the AWS CodeCommit User Guide.</p> 
     * <p>When you create the content of the approval rule, you can specify approvers
     * in an approval pool in one of two ways:</p> <ul> <li> <p>
     * <b>CodeCommitApprovers</b>: This option only requires an AWS account and a
     * resource. It can be used for both IAM users and federated access users whose
     * name matches the provided resource name. This is a very powerful option that
     * offers a great deal of flexibility. For example, if you specify the AWS account
     * <i>123456789012</i> and <i>Mary_Major</i>, all of the following would be counted
     * as approvals coming from that user:</p> <ul> <li> <p>An IAM user in the account
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
    inline void SetApprovalRuleContent(Aws::String&& value) { m_approvalRuleContentHasBeenSet = true; m_approvalRuleContent = std::move(value); }

    /**
     * <p>The content of the approval rule, including the number of approvals needed
     * and the structure of an approval pool defined for approvals, if any. For more
     * information about approval pools, see the AWS CodeCommit User Guide.</p> 
     * <p>When you create the content of the approval rule, you can specify approvers
     * in an approval pool in one of two ways:</p> <ul> <li> <p>
     * <b>CodeCommitApprovers</b>: This option only requires an AWS account and a
     * resource. It can be used for both IAM users and federated access users whose
     * name matches the provided resource name. This is a very powerful option that
     * offers a great deal of flexibility. For example, if you specify the AWS account
     * <i>123456789012</i> and <i>Mary_Major</i>, all of the following would be counted
     * as approvals coming from that user:</p> <ul> <li> <p>An IAM user in the account
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
    inline void SetApprovalRuleContent(const char* value) { m_approvalRuleContentHasBeenSet = true; m_approvalRuleContent.assign(value); }

    /**
     * <p>The content of the approval rule, including the number of approvals needed
     * and the structure of an approval pool defined for approvals, if any. For more
     * information about approval pools, see the AWS CodeCommit User Guide.</p> 
     * <p>When you create the content of the approval rule, you can specify approvers
     * in an approval pool in one of two ways:</p> <ul> <li> <p>
     * <b>CodeCommitApprovers</b>: This option only requires an AWS account and a
     * resource. It can be used for both IAM users and federated access users whose
     * name matches the provided resource name. This is a very powerful option that
     * offers a great deal of flexibility. For example, if you specify the AWS account
     * <i>123456789012</i> and <i>Mary_Major</i>, all of the following would be counted
     * as approvals coming from that user:</p> <ul> <li> <p>An IAM user in the account
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
    inline CreatePullRequestApprovalRuleRequest& WithApprovalRuleContent(const Aws::String& value) { SetApprovalRuleContent(value); return *this;}

    /**
     * <p>The content of the approval rule, including the number of approvals needed
     * and the structure of an approval pool defined for approvals, if any. For more
     * information about approval pools, see the AWS CodeCommit User Guide.</p> 
     * <p>When you create the content of the approval rule, you can specify approvers
     * in an approval pool in one of two ways:</p> <ul> <li> <p>
     * <b>CodeCommitApprovers</b>: This option only requires an AWS account and a
     * resource. It can be used for both IAM users and federated access users whose
     * name matches the provided resource name. This is a very powerful option that
     * offers a great deal of flexibility. For example, if you specify the AWS account
     * <i>123456789012</i> and <i>Mary_Major</i>, all of the following would be counted
     * as approvals coming from that user:</p> <ul> <li> <p>An IAM user in the account
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
    inline CreatePullRequestApprovalRuleRequest& WithApprovalRuleContent(Aws::String&& value) { SetApprovalRuleContent(std::move(value)); return *this;}

    /**
     * <p>The content of the approval rule, including the number of approvals needed
     * and the structure of an approval pool defined for approvals, if any. For more
     * information about approval pools, see the AWS CodeCommit User Guide.</p> 
     * <p>When you create the content of the approval rule, you can specify approvers
     * in an approval pool in one of two ways:</p> <ul> <li> <p>
     * <b>CodeCommitApprovers</b>: This option only requires an AWS account and a
     * resource. It can be used for both IAM users and federated access users whose
     * name matches the provided resource name. This is a very powerful option that
     * offers a great deal of flexibility. For example, if you specify the AWS account
     * <i>123456789012</i> and <i>Mary_Major</i>, all of the following would be counted
     * as approvals coming from that user:</p> <ul> <li> <p>An IAM user in the account
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
    inline CreatePullRequestApprovalRuleRequest& WithApprovalRuleContent(const char* value) { SetApprovalRuleContent(value); return *this;}

  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::String m_approvalRuleName;
    bool m_approvalRuleNameHasBeenSet = false;

    Aws::String m_approvalRuleContent;
    bool m_approvalRuleContentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
