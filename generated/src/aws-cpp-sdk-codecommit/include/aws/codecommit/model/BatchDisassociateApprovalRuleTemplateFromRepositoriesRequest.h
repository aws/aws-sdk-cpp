/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDisassociateApprovalRuleTemplateFromRepositories"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the template that you want to disassociate from one or more
     * repositories.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const { return m_approvalRuleTemplateName; }
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }
    template<typename ApprovalRuleTemplateNameT = Aws::String>
    void SetApprovalRuleTemplateName(ApprovalRuleTemplateNameT&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::forward<ApprovalRuleTemplateNameT>(value); }
    template<typename ApprovalRuleTemplateNameT = Aws::String>
    BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& WithApprovalRuleTemplateName(ApprovalRuleTemplateNameT&& value) { SetApprovalRuleTemplateName(std::forward<ApprovalRuleTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository names that you want to disassociate from the approval rule
     * template.</p>  <p>The length constraint limit is for each string in the
     * array. The array itself can be empty.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryNames() const { return m_repositoryNames; }
    inline bool RepositoryNamesHasBeenSet() const { return m_repositoryNamesHasBeenSet; }
    template<typename RepositoryNamesT = Aws::Vector<Aws::String>>
    void SetRepositoryNames(RepositoryNamesT&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = std::forward<RepositoryNamesT>(value); }
    template<typename RepositoryNamesT = Aws::Vector<Aws::String>>
    BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& WithRepositoryNames(RepositoryNamesT&& value) { SetRepositoryNames(std::forward<RepositoryNamesT>(value)); return *this;}
    template<typename RepositoryNamesT = Aws::String>
    BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& AddRepositoryNames(RepositoryNamesT&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.emplace_back(std::forward<RepositoryNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_approvalRuleTemplateName;
    bool m_approvalRuleTemplateNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_repositoryNames;
    bool m_repositoryNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
