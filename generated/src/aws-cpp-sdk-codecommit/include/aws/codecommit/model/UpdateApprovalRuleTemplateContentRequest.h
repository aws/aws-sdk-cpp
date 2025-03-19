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
  class UpdateApprovalRuleTemplateContentRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API UpdateApprovalRuleTemplateContentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApprovalRuleTemplateContent"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the approval rule template where you want to update the content
     * of the rule. </p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const { return m_approvalRuleTemplateName; }
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }
    template<typename ApprovalRuleTemplateNameT = Aws::String>
    void SetApprovalRuleTemplateName(ApprovalRuleTemplateNameT&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::forward<ApprovalRuleTemplateNameT>(value); }
    template<typename ApprovalRuleTemplateNameT = Aws::String>
    UpdateApprovalRuleTemplateContentRequest& WithApprovalRuleTemplateName(ApprovalRuleTemplateNameT&& value) { SetApprovalRuleTemplateName(std::forward<ApprovalRuleTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content that replaces the existing content of the rule. Content
     * statements must be complete. You cannot provide only the changes.</p>
     */
    inline const Aws::String& GetNewRuleContent() const { return m_newRuleContent; }
    inline bool NewRuleContentHasBeenSet() const { return m_newRuleContentHasBeenSet; }
    template<typename NewRuleContentT = Aws::String>
    void SetNewRuleContent(NewRuleContentT&& value) { m_newRuleContentHasBeenSet = true; m_newRuleContent = std::forward<NewRuleContentT>(value); }
    template<typename NewRuleContentT = Aws::String>
    UpdateApprovalRuleTemplateContentRequest& WithNewRuleContent(NewRuleContentT&& value) { SetNewRuleContent(std::forward<NewRuleContentT>(value)); return *this;}
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
    UpdateApprovalRuleTemplateContentRequest& WithExistingRuleContentSha256(ExistingRuleContentSha256T&& value) { SetExistingRuleContentSha256(std::forward<ExistingRuleContentSha256T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_approvalRuleTemplateName;
    bool m_approvalRuleTemplateNameHasBeenSet = false;

    Aws::String m_newRuleContent;
    bool m_newRuleContentHasBeenSet = false;

    Aws::String m_existingRuleContentSha256;
    bool m_existingRuleContentSha256HasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
