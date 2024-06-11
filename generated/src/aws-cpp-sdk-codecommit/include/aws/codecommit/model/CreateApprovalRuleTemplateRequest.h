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
    AWS_CODECOMMIT_API CreateApprovalRuleTemplateRequest();

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
    inline const Aws::String& GetApprovalRuleTemplateName() const{ return m_approvalRuleTemplateName; }
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }
    inline void SetApprovalRuleTemplateName(const Aws::String& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = value; }
    inline void SetApprovalRuleTemplateName(Aws::String&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::move(value); }
    inline void SetApprovalRuleTemplateName(const char* value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName.assign(value); }
    inline CreateApprovalRuleTemplateRequest& WithApprovalRuleTemplateName(const Aws::String& value) { SetApprovalRuleTemplateName(value); return *this;}
    inline CreateApprovalRuleTemplateRequest& WithApprovalRuleTemplateName(Aws::String&& value) { SetApprovalRuleTemplateName(std::move(value)); return *this;}
    inline CreateApprovalRuleTemplateRequest& WithApprovalRuleTemplateName(const char* value) { SetApprovalRuleTemplateName(value); return *this;}
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
    inline const Aws::String& GetApprovalRuleTemplateContent() const{ return m_approvalRuleTemplateContent; }
    inline bool ApprovalRuleTemplateContentHasBeenSet() const { return m_approvalRuleTemplateContentHasBeenSet; }
    inline void SetApprovalRuleTemplateContent(const Aws::String& value) { m_approvalRuleTemplateContentHasBeenSet = true; m_approvalRuleTemplateContent = value; }
    inline void SetApprovalRuleTemplateContent(Aws::String&& value) { m_approvalRuleTemplateContentHasBeenSet = true; m_approvalRuleTemplateContent = std::move(value); }
    inline void SetApprovalRuleTemplateContent(const char* value) { m_approvalRuleTemplateContentHasBeenSet = true; m_approvalRuleTemplateContent.assign(value); }
    inline CreateApprovalRuleTemplateRequest& WithApprovalRuleTemplateContent(const Aws::String& value) { SetApprovalRuleTemplateContent(value); return *this;}
    inline CreateApprovalRuleTemplateRequest& WithApprovalRuleTemplateContent(Aws::String&& value) { SetApprovalRuleTemplateContent(std::move(value)); return *this;}
    inline CreateApprovalRuleTemplateRequest& WithApprovalRuleTemplateContent(const char* value) { SetApprovalRuleTemplateContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the approval rule template. Consider providing a
     * description that explains what this template does and when it might be
     * appropriate to associate it with repositories.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateDescription() const{ return m_approvalRuleTemplateDescription; }
    inline bool ApprovalRuleTemplateDescriptionHasBeenSet() const { return m_approvalRuleTemplateDescriptionHasBeenSet; }
    inline void SetApprovalRuleTemplateDescription(const Aws::String& value) { m_approvalRuleTemplateDescriptionHasBeenSet = true; m_approvalRuleTemplateDescription = value; }
    inline void SetApprovalRuleTemplateDescription(Aws::String&& value) { m_approvalRuleTemplateDescriptionHasBeenSet = true; m_approvalRuleTemplateDescription = std::move(value); }
    inline void SetApprovalRuleTemplateDescription(const char* value) { m_approvalRuleTemplateDescriptionHasBeenSet = true; m_approvalRuleTemplateDescription.assign(value); }
    inline CreateApprovalRuleTemplateRequest& WithApprovalRuleTemplateDescription(const Aws::String& value) { SetApprovalRuleTemplateDescription(value); return *this;}
    inline CreateApprovalRuleTemplateRequest& WithApprovalRuleTemplateDescription(Aws::String&& value) { SetApprovalRuleTemplateDescription(std::move(value)); return *this;}
    inline CreateApprovalRuleTemplateRequest& WithApprovalRuleTemplateDescription(const char* value) { SetApprovalRuleTemplateDescription(value); return *this;}
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
