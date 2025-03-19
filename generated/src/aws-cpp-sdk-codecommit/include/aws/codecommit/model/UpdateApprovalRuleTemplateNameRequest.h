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
    AWS_CODECOMMIT_API UpdateApprovalRuleTemplateNameRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApprovalRuleTemplateName"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The current name of the approval rule template.</p>
     */
    inline const Aws::String& GetOldApprovalRuleTemplateName() const { return m_oldApprovalRuleTemplateName; }
    inline bool OldApprovalRuleTemplateNameHasBeenSet() const { return m_oldApprovalRuleTemplateNameHasBeenSet; }
    template<typename OldApprovalRuleTemplateNameT = Aws::String>
    void SetOldApprovalRuleTemplateName(OldApprovalRuleTemplateNameT&& value) { m_oldApprovalRuleTemplateNameHasBeenSet = true; m_oldApprovalRuleTemplateName = std::forward<OldApprovalRuleTemplateNameT>(value); }
    template<typename OldApprovalRuleTemplateNameT = Aws::String>
    UpdateApprovalRuleTemplateNameRequest& WithOldApprovalRuleTemplateName(OldApprovalRuleTemplateNameT&& value) { SetOldApprovalRuleTemplateName(std::forward<OldApprovalRuleTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name you want to apply to the approval rule template.</p>
     */
    inline const Aws::String& GetNewApprovalRuleTemplateName() const { return m_newApprovalRuleTemplateName; }
    inline bool NewApprovalRuleTemplateNameHasBeenSet() const { return m_newApprovalRuleTemplateNameHasBeenSet; }
    template<typename NewApprovalRuleTemplateNameT = Aws::String>
    void SetNewApprovalRuleTemplateName(NewApprovalRuleTemplateNameT&& value) { m_newApprovalRuleTemplateNameHasBeenSet = true; m_newApprovalRuleTemplateName = std::forward<NewApprovalRuleTemplateNameT>(value); }
    template<typename NewApprovalRuleTemplateNameT = Aws::String>
    UpdateApprovalRuleTemplateNameRequest& WithNewApprovalRuleTemplateName(NewApprovalRuleTemplateNameT&& value) { SetNewApprovalRuleTemplateName(std::forward<NewApprovalRuleTemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_oldApprovalRuleTemplateName;
    bool m_oldApprovalRuleTemplateNameHasBeenSet = false;

    Aws::String m_newApprovalRuleTemplateName;
    bool m_newApprovalRuleTemplateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
