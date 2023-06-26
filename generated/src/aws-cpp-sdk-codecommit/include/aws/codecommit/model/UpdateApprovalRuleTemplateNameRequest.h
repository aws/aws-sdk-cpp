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
  class UpdateApprovalRuleTemplateNameRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API UpdateApprovalRuleTemplateNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApprovalRuleTemplateName"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The current name of the approval rule template.</p>
     */
    inline const Aws::String& GetOldApprovalRuleTemplateName() const{ return m_oldApprovalRuleTemplateName; }

    /**
     * <p>The current name of the approval rule template.</p>
     */
    inline bool OldApprovalRuleTemplateNameHasBeenSet() const { return m_oldApprovalRuleTemplateNameHasBeenSet; }

    /**
     * <p>The current name of the approval rule template.</p>
     */
    inline void SetOldApprovalRuleTemplateName(const Aws::String& value) { m_oldApprovalRuleTemplateNameHasBeenSet = true; m_oldApprovalRuleTemplateName = value; }

    /**
     * <p>The current name of the approval rule template.</p>
     */
    inline void SetOldApprovalRuleTemplateName(Aws::String&& value) { m_oldApprovalRuleTemplateNameHasBeenSet = true; m_oldApprovalRuleTemplateName = std::move(value); }

    /**
     * <p>The current name of the approval rule template.</p>
     */
    inline void SetOldApprovalRuleTemplateName(const char* value) { m_oldApprovalRuleTemplateNameHasBeenSet = true; m_oldApprovalRuleTemplateName.assign(value); }

    /**
     * <p>The current name of the approval rule template.</p>
     */
    inline UpdateApprovalRuleTemplateNameRequest& WithOldApprovalRuleTemplateName(const Aws::String& value) { SetOldApprovalRuleTemplateName(value); return *this;}

    /**
     * <p>The current name of the approval rule template.</p>
     */
    inline UpdateApprovalRuleTemplateNameRequest& WithOldApprovalRuleTemplateName(Aws::String&& value) { SetOldApprovalRuleTemplateName(std::move(value)); return *this;}

    /**
     * <p>The current name of the approval rule template.</p>
     */
    inline UpdateApprovalRuleTemplateNameRequest& WithOldApprovalRuleTemplateName(const char* value) { SetOldApprovalRuleTemplateName(value); return *this;}


    /**
     * <p>The new name you want to apply to the approval rule template.</p>
     */
    inline const Aws::String& GetNewApprovalRuleTemplateName() const{ return m_newApprovalRuleTemplateName; }

    /**
     * <p>The new name you want to apply to the approval rule template.</p>
     */
    inline bool NewApprovalRuleTemplateNameHasBeenSet() const { return m_newApprovalRuleTemplateNameHasBeenSet; }

    /**
     * <p>The new name you want to apply to the approval rule template.</p>
     */
    inline void SetNewApprovalRuleTemplateName(const Aws::String& value) { m_newApprovalRuleTemplateNameHasBeenSet = true; m_newApprovalRuleTemplateName = value; }

    /**
     * <p>The new name you want to apply to the approval rule template.</p>
     */
    inline void SetNewApprovalRuleTemplateName(Aws::String&& value) { m_newApprovalRuleTemplateNameHasBeenSet = true; m_newApprovalRuleTemplateName = std::move(value); }

    /**
     * <p>The new name you want to apply to the approval rule template.</p>
     */
    inline void SetNewApprovalRuleTemplateName(const char* value) { m_newApprovalRuleTemplateNameHasBeenSet = true; m_newApprovalRuleTemplateName.assign(value); }

    /**
     * <p>The new name you want to apply to the approval rule template.</p>
     */
    inline UpdateApprovalRuleTemplateNameRequest& WithNewApprovalRuleTemplateName(const Aws::String& value) { SetNewApprovalRuleTemplateName(value); return *this;}

    /**
     * <p>The new name you want to apply to the approval rule template.</p>
     */
    inline UpdateApprovalRuleTemplateNameRequest& WithNewApprovalRuleTemplateName(Aws::String&& value) { SetNewApprovalRuleTemplateName(std::move(value)); return *this;}

    /**
     * <p>The new name you want to apply to the approval rule template.</p>
     */
    inline UpdateApprovalRuleTemplateNameRequest& WithNewApprovalRuleTemplateName(const char* value) { SetNewApprovalRuleTemplateName(value); return *this;}

  private:

    Aws::String m_oldApprovalRuleTemplateName;
    bool m_oldApprovalRuleTemplateNameHasBeenSet = false;

    Aws::String m_newApprovalRuleTemplateName;
    bool m_newApprovalRuleTemplateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
