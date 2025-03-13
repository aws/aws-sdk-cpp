/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Returns information about an approval rule template.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ApprovalRuleTemplate">AWS
   * API Reference</a></p>
   */
  class ApprovalRuleTemplate
  {
  public:
    AWS_CODECOMMIT_API ApprovalRuleTemplate() = default;
    AWS_CODECOMMIT_API ApprovalRuleTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ApprovalRuleTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated ID of the approval rule template.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateId() const { return m_approvalRuleTemplateId; }
    inline bool ApprovalRuleTemplateIdHasBeenSet() const { return m_approvalRuleTemplateIdHasBeenSet; }
    template<typename ApprovalRuleTemplateIdT = Aws::String>
    void SetApprovalRuleTemplateId(ApprovalRuleTemplateIdT&& value) { m_approvalRuleTemplateIdHasBeenSet = true; m_approvalRuleTemplateId = std::forward<ApprovalRuleTemplateIdT>(value); }
    template<typename ApprovalRuleTemplateIdT = Aws::String>
    ApprovalRuleTemplate& WithApprovalRuleTemplateId(ApprovalRuleTemplateIdT&& value) { SetApprovalRuleTemplateId(std::forward<ApprovalRuleTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the approval rule template.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const { return m_approvalRuleTemplateName; }
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }
    template<typename ApprovalRuleTemplateNameT = Aws::String>
    void SetApprovalRuleTemplateName(ApprovalRuleTemplateNameT&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::forward<ApprovalRuleTemplateNameT>(value); }
    template<typename ApprovalRuleTemplateNameT = Aws::String>
    ApprovalRuleTemplate& WithApprovalRuleTemplateName(ApprovalRuleTemplateNameT&& value) { SetApprovalRuleTemplateName(std::forward<ApprovalRuleTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the approval rule template.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateDescription() const { return m_approvalRuleTemplateDescription; }
    inline bool ApprovalRuleTemplateDescriptionHasBeenSet() const { return m_approvalRuleTemplateDescriptionHasBeenSet; }
    template<typename ApprovalRuleTemplateDescriptionT = Aws::String>
    void SetApprovalRuleTemplateDescription(ApprovalRuleTemplateDescriptionT&& value) { m_approvalRuleTemplateDescriptionHasBeenSet = true; m_approvalRuleTemplateDescription = std::forward<ApprovalRuleTemplateDescriptionT>(value); }
    template<typename ApprovalRuleTemplateDescriptionT = Aws::String>
    ApprovalRuleTemplate& WithApprovalRuleTemplateDescription(ApprovalRuleTemplateDescriptionT&& value) { SetApprovalRuleTemplateDescription(std::forward<ApprovalRuleTemplateDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the approval rule template.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateContent() const { return m_approvalRuleTemplateContent; }
    inline bool ApprovalRuleTemplateContentHasBeenSet() const { return m_approvalRuleTemplateContentHasBeenSet; }
    template<typename ApprovalRuleTemplateContentT = Aws::String>
    void SetApprovalRuleTemplateContent(ApprovalRuleTemplateContentT&& value) { m_approvalRuleTemplateContentHasBeenSet = true; m_approvalRuleTemplateContent = std::forward<ApprovalRuleTemplateContentT>(value); }
    template<typename ApprovalRuleTemplateContentT = Aws::String>
    ApprovalRuleTemplate& WithApprovalRuleTemplateContent(ApprovalRuleTemplateContentT&& value) { SetApprovalRuleTemplateContent(std::forward<ApprovalRuleTemplateContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA-256 hash signature for the content of the approval rule template.</p>
     */
    inline const Aws::String& GetRuleContentSha256() const { return m_ruleContentSha256; }
    inline bool RuleContentSha256HasBeenSet() const { return m_ruleContentSha256HasBeenSet; }
    template<typename RuleContentSha256T = Aws::String>
    void SetRuleContentSha256(RuleContentSha256T&& value) { m_ruleContentSha256HasBeenSet = true; m_ruleContentSha256 = std::forward<RuleContentSha256T>(value); }
    template<typename RuleContentSha256T = Aws::String>
    ApprovalRuleTemplate& WithRuleContentSha256(RuleContentSha256T&& value) { SetRuleContentSha256(std::forward<RuleContentSha256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the approval rule template was most recently changed, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    ApprovalRuleTemplate& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the approval rule template was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    ApprovalRuleTemplate& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who made the most recent changes
     * to the approval rule template.</p>
     */
    inline const Aws::String& GetLastModifiedUser() const { return m_lastModifiedUser; }
    inline bool LastModifiedUserHasBeenSet() const { return m_lastModifiedUserHasBeenSet; }
    template<typename LastModifiedUserT = Aws::String>
    void SetLastModifiedUser(LastModifiedUserT&& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = std::forward<LastModifiedUserT>(value); }
    template<typename LastModifiedUserT = Aws::String>
    ApprovalRuleTemplate& WithLastModifiedUser(LastModifiedUserT&& value) { SetLastModifiedUser(std::forward<LastModifiedUserT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_approvalRuleTemplateId;
    bool m_approvalRuleTemplateIdHasBeenSet = false;

    Aws::String m_approvalRuleTemplateName;
    bool m_approvalRuleTemplateNameHasBeenSet = false;

    Aws::String m_approvalRuleTemplateDescription;
    bool m_approvalRuleTemplateDescriptionHasBeenSet = false;

    Aws::String m_approvalRuleTemplateContent;
    bool m_approvalRuleTemplateContentHasBeenSet = false;

    Aws::String m_ruleContentSha256;
    bool m_ruleContentSha256HasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::String m_lastModifiedUser;
    bool m_lastModifiedUserHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
