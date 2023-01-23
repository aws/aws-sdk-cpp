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
  class DisassociateApprovalRuleTemplateFromRepositoryRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API DisassociateApprovalRuleTemplateFromRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateApprovalRuleTemplateFromRepository"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the approval rule template to disassociate from a specified
     * repository.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const{ return m_approvalRuleTemplateName; }

    /**
     * <p>The name of the approval rule template to disassociate from a specified
     * repository.</p>
     */
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }

    /**
     * <p>The name of the approval rule template to disassociate from a specified
     * repository.</p>
     */
    inline void SetApprovalRuleTemplateName(const Aws::String& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = value; }

    /**
     * <p>The name of the approval rule template to disassociate from a specified
     * repository.</p>
     */
    inline void SetApprovalRuleTemplateName(Aws::String&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::move(value); }

    /**
     * <p>The name of the approval rule template to disassociate from a specified
     * repository.</p>
     */
    inline void SetApprovalRuleTemplateName(const char* value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName.assign(value); }

    /**
     * <p>The name of the approval rule template to disassociate from a specified
     * repository.</p>
     */
    inline DisassociateApprovalRuleTemplateFromRepositoryRequest& WithApprovalRuleTemplateName(const Aws::String& value) { SetApprovalRuleTemplateName(value); return *this;}

    /**
     * <p>The name of the approval rule template to disassociate from a specified
     * repository.</p>
     */
    inline DisassociateApprovalRuleTemplateFromRepositoryRequest& WithApprovalRuleTemplateName(Aws::String&& value) { SetApprovalRuleTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the approval rule template to disassociate from a specified
     * repository.</p>
     */
    inline DisassociateApprovalRuleTemplateFromRepositoryRequest& WithApprovalRuleTemplateName(const char* value) { SetApprovalRuleTemplateName(value); return *this;}


    /**
     * <p>The name of the repository you want to disassociate from the template.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository you want to disassociate from the template.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository you want to disassociate from the template.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository you want to disassociate from the template.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository you want to disassociate from the template.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository you want to disassociate from the template.</p>
     */
    inline DisassociateApprovalRuleTemplateFromRepositoryRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository you want to disassociate from the template.</p>
     */
    inline DisassociateApprovalRuleTemplateFromRepositoryRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository you want to disassociate from the template.</p>
     */
    inline DisassociateApprovalRuleTemplateFromRepositoryRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}

  private:

    Aws::String m_approvalRuleTemplateName;
    bool m_approvalRuleTemplateNameHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
