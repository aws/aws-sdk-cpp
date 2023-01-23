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
  class DeleteApprovalRuleTemplateRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API DeleteApprovalRuleTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApprovalRuleTemplate"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the approval rule template to delete.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const{ return m_approvalRuleTemplateName; }

    /**
     * <p>The name of the approval rule template to delete.</p>
     */
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }

    /**
     * <p>The name of the approval rule template to delete.</p>
     */
    inline void SetApprovalRuleTemplateName(const Aws::String& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = value; }

    /**
     * <p>The name of the approval rule template to delete.</p>
     */
    inline void SetApprovalRuleTemplateName(Aws::String&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::move(value); }

    /**
     * <p>The name of the approval rule template to delete.</p>
     */
    inline void SetApprovalRuleTemplateName(const char* value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName.assign(value); }

    /**
     * <p>The name of the approval rule template to delete.</p>
     */
    inline DeleteApprovalRuleTemplateRequest& WithApprovalRuleTemplateName(const Aws::String& value) { SetApprovalRuleTemplateName(value); return *this;}

    /**
     * <p>The name of the approval rule template to delete.</p>
     */
    inline DeleteApprovalRuleTemplateRequest& WithApprovalRuleTemplateName(Aws::String&& value) { SetApprovalRuleTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the approval rule template to delete.</p>
     */
    inline DeleteApprovalRuleTemplateRequest& WithApprovalRuleTemplateName(const char* value) { SetApprovalRuleTemplateName(value); return *this;}

  private:

    Aws::String m_approvalRuleTemplateName;
    bool m_approvalRuleTemplateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
