/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about the template that created the approval rule for a
   * pull request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/OriginApprovalRuleTemplate">AWS
   * API Reference</a></p>
   */
  class OriginApprovalRuleTemplate
  {
  public:
    AWS_CODECOMMIT_API OriginApprovalRuleTemplate() = default;
    AWS_CODECOMMIT_API OriginApprovalRuleTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API OriginApprovalRuleTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the template that created the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateId() const { return m_approvalRuleTemplateId; }
    inline bool ApprovalRuleTemplateIdHasBeenSet() const { return m_approvalRuleTemplateIdHasBeenSet; }
    template<typename ApprovalRuleTemplateIdT = Aws::String>
    void SetApprovalRuleTemplateId(ApprovalRuleTemplateIdT&& value) { m_approvalRuleTemplateIdHasBeenSet = true; m_approvalRuleTemplateId = std::forward<ApprovalRuleTemplateIdT>(value); }
    template<typename ApprovalRuleTemplateIdT = Aws::String>
    OriginApprovalRuleTemplate& WithApprovalRuleTemplateId(ApprovalRuleTemplateIdT&& value) { SetApprovalRuleTemplateId(std::forward<ApprovalRuleTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the template that created the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const { return m_approvalRuleTemplateName; }
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }
    template<typename ApprovalRuleTemplateNameT = Aws::String>
    void SetApprovalRuleTemplateName(ApprovalRuleTemplateNameT&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::forward<ApprovalRuleTemplateNameT>(value); }
    template<typename ApprovalRuleTemplateNameT = Aws::String>
    OriginApprovalRuleTemplate& WithApprovalRuleTemplateName(ApprovalRuleTemplateNameT&& value) { SetApprovalRuleTemplateName(std::forward<ApprovalRuleTemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_approvalRuleTemplateId;
    bool m_approvalRuleTemplateIdHasBeenSet = false;

    Aws::String m_approvalRuleTemplateName;
    bool m_approvalRuleTemplateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
