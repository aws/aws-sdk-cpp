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
    AWS_CODECOMMIT_API UpdateApprovalRuleTemplateContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApprovalRuleTemplateContent"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the approval rule template where you want to update the content
     * of the rule. </p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const{ return m_approvalRuleTemplateName; }

    /**
     * <p>The name of the approval rule template where you want to update the content
     * of the rule. </p>
     */
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }

    /**
     * <p>The name of the approval rule template where you want to update the content
     * of the rule. </p>
     */
    inline void SetApprovalRuleTemplateName(const Aws::String& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = value; }

    /**
     * <p>The name of the approval rule template where you want to update the content
     * of the rule. </p>
     */
    inline void SetApprovalRuleTemplateName(Aws::String&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::move(value); }

    /**
     * <p>The name of the approval rule template where you want to update the content
     * of the rule. </p>
     */
    inline void SetApprovalRuleTemplateName(const char* value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName.assign(value); }

    /**
     * <p>The name of the approval rule template where you want to update the content
     * of the rule. </p>
     */
    inline UpdateApprovalRuleTemplateContentRequest& WithApprovalRuleTemplateName(const Aws::String& value) { SetApprovalRuleTemplateName(value); return *this;}

    /**
     * <p>The name of the approval rule template where you want to update the content
     * of the rule. </p>
     */
    inline UpdateApprovalRuleTemplateContentRequest& WithApprovalRuleTemplateName(Aws::String&& value) { SetApprovalRuleTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the approval rule template where you want to update the content
     * of the rule. </p>
     */
    inline UpdateApprovalRuleTemplateContentRequest& WithApprovalRuleTemplateName(const char* value) { SetApprovalRuleTemplateName(value); return *this;}


    /**
     * <p>The content that replaces the existing content of the rule. Content
     * statements must be complete. You cannot provide only the changes.</p>
     */
    inline const Aws::String& GetNewRuleContent() const{ return m_newRuleContent; }

    /**
     * <p>The content that replaces the existing content of the rule. Content
     * statements must be complete. You cannot provide only the changes.</p>
     */
    inline bool NewRuleContentHasBeenSet() const { return m_newRuleContentHasBeenSet; }

    /**
     * <p>The content that replaces the existing content of the rule. Content
     * statements must be complete. You cannot provide only the changes.</p>
     */
    inline void SetNewRuleContent(const Aws::String& value) { m_newRuleContentHasBeenSet = true; m_newRuleContent = value; }

    /**
     * <p>The content that replaces the existing content of the rule. Content
     * statements must be complete. You cannot provide only the changes.</p>
     */
    inline void SetNewRuleContent(Aws::String&& value) { m_newRuleContentHasBeenSet = true; m_newRuleContent = std::move(value); }

    /**
     * <p>The content that replaces the existing content of the rule. Content
     * statements must be complete. You cannot provide only the changes.</p>
     */
    inline void SetNewRuleContent(const char* value) { m_newRuleContentHasBeenSet = true; m_newRuleContent.assign(value); }

    /**
     * <p>The content that replaces the existing content of the rule. Content
     * statements must be complete. You cannot provide only the changes.</p>
     */
    inline UpdateApprovalRuleTemplateContentRequest& WithNewRuleContent(const Aws::String& value) { SetNewRuleContent(value); return *this;}

    /**
     * <p>The content that replaces the existing content of the rule. Content
     * statements must be complete. You cannot provide only the changes.</p>
     */
    inline UpdateApprovalRuleTemplateContentRequest& WithNewRuleContent(Aws::String&& value) { SetNewRuleContent(std::move(value)); return *this;}

    /**
     * <p>The content that replaces the existing content of the rule. Content
     * statements must be complete. You cannot provide only the changes.</p>
     */
    inline UpdateApprovalRuleTemplateContentRequest& WithNewRuleContent(const char* value) { SetNewRuleContent(value); return *this;}


    /**
     * <p>The SHA-256 hash signature for the content of the approval rule. You can
     * retrieve this information by using <a>GetPullRequest</a>.</p>
     */
    inline const Aws::String& GetExistingRuleContentSha256() const{ return m_existingRuleContentSha256; }

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule. You can
     * retrieve this information by using <a>GetPullRequest</a>.</p>
     */
    inline bool ExistingRuleContentSha256HasBeenSet() const { return m_existingRuleContentSha256HasBeenSet; }

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule. You can
     * retrieve this information by using <a>GetPullRequest</a>.</p>
     */
    inline void SetExistingRuleContentSha256(const Aws::String& value) { m_existingRuleContentSha256HasBeenSet = true; m_existingRuleContentSha256 = value; }

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule. You can
     * retrieve this information by using <a>GetPullRequest</a>.</p>
     */
    inline void SetExistingRuleContentSha256(Aws::String&& value) { m_existingRuleContentSha256HasBeenSet = true; m_existingRuleContentSha256 = std::move(value); }

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule. You can
     * retrieve this information by using <a>GetPullRequest</a>.</p>
     */
    inline void SetExistingRuleContentSha256(const char* value) { m_existingRuleContentSha256HasBeenSet = true; m_existingRuleContentSha256.assign(value); }

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule. You can
     * retrieve this information by using <a>GetPullRequest</a>.</p>
     */
    inline UpdateApprovalRuleTemplateContentRequest& WithExistingRuleContentSha256(const Aws::String& value) { SetExistingRuleContentSha256(value); return *this;}

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule. You can
     * retrieve this information by using <a>GetPullRequest</a>.</p>
     */
    inline UpdateApprovalRuleTemplateContentRequest& WithExistingRuleContentSha256(Aws::String&& value) { SetExistingRuleContentSha256(std::move(value)); return *this;}

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule. You can
     * retrieve this information by using <a>GetPullRequest</a>.</p>
     */
    inline UpdateApprovalRuleTemplateContentRequest& WithExistingRuleContentSha256(const char* value) { SetExistingRuleContentSha256(value); return *this;}

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
