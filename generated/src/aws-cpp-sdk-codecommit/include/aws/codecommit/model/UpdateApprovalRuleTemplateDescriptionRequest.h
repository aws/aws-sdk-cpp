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
  class UpdateApprovalRuleTemplateDescriptionRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API UpdateApprovalRuleTemplateDescriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApprovalRuleTemplateDescription"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the template for which you want to update the description.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const { return m_approvalRuleTemplateName; }
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }
    template<typename ApprovalRuleTemplateNameT = Aws::String>
    void SetApprovalRuleTemplateName(ApprovalRuleTemplateNameT&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::forward<ApprovalRuleTemplateNameT>(value); }
    template<typename ApprovalRuleTemplateNameT = Aws::String>
    UpdateApprovalRuleTemplateDescriptionRequest& WithApprovalRuleTemplateName(ApprovalRuleTemplateNameT&& value) { SetApprovalRuleTemplateName(std::forward<ApprovalRuleTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the approval rule template.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateDescription() const { return m_approvalRuleTemplateDescription; }
    inline bool ApprovalRuleTemplateDescriptionHasBeenSet() const { return m_approvalRuleTemplateDescriptionHasBeenSet; }
    template<typename ApprovalRuleTemplateDescriptionT = Aws::String>
    void SetApprovalRuleTemplateDescription(ApprovalRuleTemplateDescriptionT&& value) { m_approvalRuleTemplateDescriptionHasBeenSet = true; m_approvalRuleTemplateDescription = std::forward<ApprovalRuleTemplateDescriptionT>(value); }
    template<typename ApprovalRuleTemplateDescriptionT = Aws::String>
    UpdateApprovalRuleTemplateDescriptionRequest& WithApprovalRuleTemplateDescription(ApprovalRuleTemplateDescriptionT&& value) { SetApprovalRuleTemplateDescription(std::forward<ApprovalRuleTemplateDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_approvalRuleTemplateName;
    bool m_approvalRuleTemplateNameHasBeenSet = false;

    Aws::String m_approvalRuleTemplateDescription;
    bool m_approvalRuleTemplateDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
