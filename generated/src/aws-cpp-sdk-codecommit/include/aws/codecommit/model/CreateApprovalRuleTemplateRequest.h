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
  class CreateApprovalRuleTemplateRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API CreateApprovalRuleTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApprovalRuleTemplate"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the approval rule template. Provide descriptive names, because
     * this name is applied to the approval rules created automatically in associated
     * repositories.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const { return m_approvalRuleTemplateName; }
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }
    template<typename ApprovalRuleTemplateNameT = Aws::String>
    void SetApprovalRuleTemplateName(ApprovalRuleTemplateNameT&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::forward<ApprovalRuleTemplateNameT>(value); }
    template<typename ApprovalRuleTemplateNameT = Aws::String>
    CreateApprovalRuleTemplateRequest& WithApprovalRuleTemplateName(ApprovalRuleTemplateNameT&& value) { SetApprovalRuleTemplateName(std::forward<ApprovalRuleTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the approval rule that is created on pull requests in
     * associated repositories. If you specify one or more destination references
     * (branches), approval rules are created in an associated repository only if their
     * destination references (branches) match those specified in the template.</p>
     *  <p>When you create the content of the approval rule template, you can
     * specify approvers in an approval pool in one of two ways:</p> <ul> <li> <p>
     * <b>CodeCommitApprovers</b>: This option only requires an Amazon Web Services
     * account and a resource. It can be used for both IAM users and federated access
     * users whose name matches the provided resource name. This is a very powerful
     * option that offers a great deal of flexibility. For example, if you specify the
     * Amazon Web Services account <i>123456789012</i> and <i>Mary_Major</i>, all of
     * the following are counted as approvals coming from that user:</p> <ul> <li>
     * <p>An IAM user in the account
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
    inline const Aws::String& GetApprovalRuleTemplateContent() const { return m_approvalRuleTemplateContent; }
    inline bool ApprovalRuleTemplateContentHasBeenSet() const { return m_approvalRuleTemplateContentHasBeenSet; }
    template<typename ApprovalRuleTemplateContentT = Aws::String>
    void SetApprovalRuleTemplateContent(ApprovalRuleTemplateContentT&& value) { m_approvalRuleTemplateContentHasBeenSet = true; m_approvalRuleTemplateContent = std::forward<ApprovalRuleTemplateContentT>(value); }
    template<typename ApprovalRuleTemplateContentT = Aws::String>
    CreateApprovalRuleTemplateRequest& WithApprovalRuleTemplateContent(ApprovalRuleTemplateContentT&& value) { SetApprovalRuleTemplateContent(std::forward<ApprovalRuleTemplateContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the approval rule template. Consider providing a
     * description that explains what this template does and when it might be
     * appropriate to associate it with repositories.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateDescription() const { return m_approvalRuleTemplateDescription; }
    inline bool ApprovalRuleTemplateDescriptionHasBeenSet() const { return m_approvalRuleTemplateDescriptionHasBeenSet; }
    template<typename ApprovalRuleTemplateDescriptionT = Aws::String>
    void SetApprovalRuleTemplateDescription(ApprovalRuleTemplateDescriptionT&& value) { m_approvalRuleTemplateDescriptionHasBeenSet = true; m_approvalRuleTemplateDescription = std::forward<ApprovalRuleTemplateDescriptionT>(value); }
    template<typename ApprovalRuleTemplateDescriptionT = Aws::String>
    CreateApprovalRuleTemplateRequest& WithApprovalRuleTemplateDescription(ApprovalRuleTemplateDescriptionT&& value) { SetApprovalRuleTemplateDescription(std::forward<ApprovalRuleTemplateDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_approvalRuleTemplateName;
    bool m_approvalRuleTemplateNameHasBeenSet = false;

    Aws::String m_approvalRuleTemplateContent;
    bool m_approvalRuleTemplateContentHasBeenSet = false;

    Aws::String m_approvalRuleTemplateDescription;
    bool m_approvalRuleTemplateDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
