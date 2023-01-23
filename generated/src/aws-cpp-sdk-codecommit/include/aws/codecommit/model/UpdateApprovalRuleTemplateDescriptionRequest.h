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
    AWS_CODECOMMIT_API UpdateApprovalRuleTemplateDescriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApprovalRuleTemplateDescription"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the template for which you want to update the description.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const{ return m_approvalRuleTemplateName; }

    /**
     * <p>The name of the template for which you want to update the description.</p>
     */
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }

    /**
     * <p>The name of the template for which you want to update the description.</p>
     */
    inline void SetApprovalRuleTemplateName(const Aws::String& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = value; }

    /**
     * <p>The name of the template for which you want to update the description.</p>
     */
    inline void SetApprovalRuleTemplateName(Aws::String&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::move(value); }

    /**
     * <p>The name of the template for which you want to update the description.</p>
     */
    inline void SetApprovalRuleTemplateName(const char* value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName.assign(value); }

    /**
     * <p>The name of the template for which you want to update the description.</p>
     */
    inline UpdateApprovalRuleTemplateDescriptionRequest& WithApprovalRuleTemplateName(const Aws::String& value) { SetApprovalRuleTemplateName(value); return *this;}

    /**
     * <p>The name of the template for which you want to update the description.</p>
     */
    inline UpdateApprovalRuleTemplateDescriptionRequest& WithApprovalRuleTemplateName(Aws::String&& value) { SetApprovalRuleTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the template for which you want to update the description.</p>
     */
    inline UpdateApprovalRuleTemplateDescriptionRequest& WithApprovalRuleTemplateName(const char* value) { SetApprovalRuleTemplateName(value); return *this;}


    /**
     * <p>The updated description of the approval rule template.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateDescription() const{ return m_approvalRuleTemplateDescription; }

    /**
     * <p>The updated description of the approval rule template.</p>
     */
    inline bool ApprovalRuleTemplateDescriptionHasBeenSet() const { return m_approvalRuleTemplateDescriptionHasBeenSet; }

    /**
     * <p>The updated description of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateDescription(const Aws::String& value) { m_approvalRuleTemplateDescriptionHasBeenSet = true; m_approvalRuleTemplateDescription = value; }

    /**
     * <p>The updated description of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateDescription(Aws::String&& value) { m_approvalRuleTemplateDescriptionHasBeenSet = true; m_approvalRuleTemplateDescription = std::move(value); }

    /**
     * <p>The updated description of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateDescription(const char* value) { m_approvalRuleTemplateDescriptionHasBeenSet = true; m_approvalRuleTemplateDescription.assign(value); }

    /**
     * <p>The updated description of the approval rule template.</p>
     */
    inline UpdateApprovalRuleTemplateDescriptionRequest& WithApprovalRuleTemplateDescription(const Aws::String& value) { SetApprovalRuleTemplateDescription(value); return *this;}

    /**
     * <p>The updated description of the approval rule template.</p>
     */
    inline UpdateApprovalRuleTemplateDescriptionRequest& WithApprovalRuleTemplateDescription(Aws::String&& value) { SetApprovalRuleTemplateDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description of the approval rule template.</p>
     */
    inline UpdateApprovalRuleTemplateDescriptionRequest& WithApprovalRuleTemplateDescription(const char* value) { SetApprovalRuleTemplateDescription(value); return *this;}

  private:

    Aws::String m_approvalRuleTemplateName;
    bool m_approvalRuleTemplateNameHasBeenSet = false;

    Aws::String m_approvalRuleTemplateDescription;
    bool m_approvalRuleTemplateDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
