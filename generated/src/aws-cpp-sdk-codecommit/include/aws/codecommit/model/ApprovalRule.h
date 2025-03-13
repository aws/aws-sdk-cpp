/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codecommit/model/OriginApprovalRuleTemplate.h>
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
   * <p>Returns information about an approval rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ApprovalRule">AWS
   * API Reference</a></p>
   */
  class ApprovalRule
  {
  public:
    AWS_CODECOMMIT_API ApprovalRule() = default;
    AWS_CODECOMMIT_API ApprovalRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ApprovalRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated ID of the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleId() const { return m_approvalRuleId; }
    inline bool ApprovalRuleIdHasBeenSet() const { return m_approvalRuleIdHasBeenSet; }
    template<typename ApprovalRuleIdT = Aws::String>
    void SetApprovalRuleId(ApprovalRuleIdT&& value) { m_approvalRuleIdHasBeenSet = true; m_approvalRuleId = std::forward<ApprovalRuleIdT>(value); }
    template<typename ApprovalRuleIdT = Aws::String>
    ApprovalRule& WithApprovalRuleId(ApprovalRuleIdT&& value) { SetApprovalRuleId(std::forward<ApprovalRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleName() const { return m_approvalRuleName; }
    inline bool ApprovalRuleNameHasBeenSet() const { return m_approvalRuleNameHasBeenSet; }
    template<typename ApprovalRuleNameT = Aws::String>
    void SetApprovalRuleName(ApprovalRuleNameT&& value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName = std::forward<ApprovalRuleNameT>(value); }
    template<typename ApprovalRuleNameT = Aws::String>
    ApprovalRule& WithApprovalRuleName(ApprovalRuleNameT&& value) { SetApprovalRuleName(std::forward<ApprovalRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleContent() const { return m_approvalRuleContent; }
    inline bool ApprovalRuleContentHasBeenSet() const { return m_approvalRuleContentHasBeenSet; }
    template<typename ApprovalRuleContentT = Aws::String>
    void SetApprovalRuleContent(ApprovalRuleContentT&& value) { m_approvalRuleContentHasBeenSet = true; m_approvalRuleContent = std::forward<ApprovalRuleContentT>(value); }
    template<typename ApprovalRuleContentT = Aws::String>
    ApprovalRule& WithApprovalRuleContent(ApprovalRuleContentT&& value) { SetApprovalRuleContent(std::forward<ApprovalRuleContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA-256 hash signature for the content of the approval rule.</p>
     */
    inline const Aws::String& GetRuleContentSha256() const { return m_ruleContentSha256; }
    inline bool RuleContentSha256HasBeenSet() const { return m_ruleContentSha256HasBeenSet; }
    template<typename RuleContentSha256T = Aws::String>
    void SetRuleContentSha256(RuleContentSha256T&& value) { m_ruleContentSha256HasBeenSet = true; m_ruleContentSha256 = std::forward<RuleContentSha256T>(value); }
    template<typename RuleContentSha256T = Aws::String>
    ApprovalRule& WithRuleContentSha256(RuleContentSha256T&& value) { SetRuleContentSha256(std::forward<RuleContentSha256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the approval rule was most recently changed, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    ApprovalRule& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the approval rule was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    ApprovalRule& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who made the most recent changes
     * to the approval rule.</p>
     */
    inline const Aws::String& GetLastModifiedUser() const { return m_lastModifiedUser; }
    inline bool LastModifiedUserHasBeenSet() const { return m_lastModifiedUserHasBeenSet; }
    template<typename LastModifiedUserT = Aws::String>
    void SetLastModifiedUser(LastModifiedUserT&& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = std::forward<LastModifiedUserT>(value); }
    template<typename LastModifiedUserT = Aws::String>
    ApprovalRule& WithLastModifiedUser(LastModifiedUserT&& value) { SetLastModifiedUser(std::forward<LastModifiedUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval rule template used to create the rule.</p>
     */
    inline const OriginApprovalRuleTemplate& GetOriginApprovalRuleTemplate() const { return m_originApprovalRuleTemplate; }
    inline bool OriginApprovalRuleTemplateHasBeenSet() const { return m_originApprovalRuleTemplateHasBeenSet; }
    template<typename OriginApprovalRuleTemplateT = OriginApprovalRuleTemplate>
    void SetOriginApprovalRuleTemplate(OriginApprovalRuleTemplateT&& value) { m_originApprovalRuleTemplateHasBeenSet = true; m_originApprovalRuleTemplate = std::forward<OriginApprovalRuleTemplateT>(value); }
    template<typename OriginApprovalRuleTemplateT = OriginApprovalRuleTemplate>
    ApprovalRule& WithOriginApprovalRuleTemplate(OriginApprovalRuleTemplateT&& value) { SetOriginApprovalRuleTemplate(std::forward<OriginApprovalRuleTemplateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_approvalRuleId;
    bool m_approvalRuleIdHasBeenSet = false;

    Aws::String m_approvalRuleName;
    bool m_approvalRuleNameHasBeenSet = false;

    Aws::String m_approvalRuleContent;
    bool m_approvalRuleContentHasBeenSet = false;

    Aws::String m_ruleContentSha256;
    bool m_ruleContentSha256HasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::String m_lastModifiedUser;
    bool m_lastModifiedUserHasBeenSet = false;

    OriginApprovalRuleTemplate m_originApprovalRuleTemplate;
    bool m_originApprovalRuleTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
