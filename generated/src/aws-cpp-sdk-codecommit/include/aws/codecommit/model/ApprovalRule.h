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
    AWS_CODECOMMIT_API ApprovalRule();
    AWS_CODECOMMIT_API ApprovalRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ApprovalRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated ID of the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleId() const{ return m_approvalRuleId; }
    inline bool ApprovalRuleIdHasBeenSet() const { return m_approvalRuleIdHasBeenSet; }
    inline void SetApprovalRuleId(const Aws::String& value) { m_approvalRuleIdHasBeenSet = true; m_approvalRuleId = value; }
    inline void SetApprovalRuleId(Aws::String&& value) { m_approvalRuleIdHasBeenSet = true; m_approvalRuleId = std::move(value); }
    inline void SetApprovalRuleId(const char* value) { m_approvalRuleIdHasBeenSet = true; m_approvalRuleId.assign(value); }
    inline ApprovalRule& WithApprovalRuleId(const Aws::String& value) { SetApprovalRuleId(value); return *this;}
    inline ApprovalRule& WithApprovalRuleId(Aws::String&& value) { SetApprovalRuleId(std::move(value)); return *this;}
    inline ApprovalRule& WithApprovalRuleId(const char* value) { SetApprovalRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleName() const{ return m_approvalRuleName; }
    inline bool ApprovalRuleNameHasBeenSet() const { return m_approvalRuleNameHasBeenSet; }
    inline void SetApprovalRuleName(const Aws::String& value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName = value; }
    inline void SetApprovalRuleName(Aws::String&& value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName = std::move(value); }
    inline void SetApprovalRuleName(const char* value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName.assign(value); }
    inline ApprovalRule& WithApprovalRuleName(const Aws::String& value) { SetApprovalRuleName(value); return *this;}
    inline ApprovalRule& WithApprovalRuleName(Aws::String&& value) { SetApprovalRuleName(std::move(value)); return *this;}
    inline ApprovalRule& WithApprovalRuleName(const char* value) { SetApprovalRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleContent() const{ return m_approvalRuleContent; }
    inline bool ApprovalRuleContentHasBeenSet() const { return m_approvalRuleContentHasBeenSet; }
    inline void SetApprovalRuleContent(const Aws::String& value) { m_approvalRuleContentHasBeenSet = true; m_approvalRuleContent = value; }
    inline void SetApprovalRuleContent(Aws::String&& value) { m_approvalRuleContentHasBeenSet = true; m_approvalRuleContent = std::move(value); }
    inline void SetApprovalRuleContent(const char* value) { m_approvalRuleContentHasBeenSet = true; m_approvalRuleContent.assign(value); }
    inline ApprovalRule& WithApprovalRuleContent(const Aws::String& value) { SetApprovalRuleContent(value); return *this;}
    inline ApprovalRule& WithApprovalRuleContent(Aws::String&& value) { SetApprovalRuleContent(std::move(value)); return *this;}
    inline ApprovalRule& WithApprovalRuleContent(const char* value) { SetApprovalRuleContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA-256 hash signature for the content of the approval rule.</p>
     */
    inline const Aws::String& GetRuleContentSha256() const{ return m_ruleContentSha256; }
    inline bool RuleContentSha256HasBeenSet() const { return m_ruleContentSha256HasBeenSet; }
    inline void SetRuleContentSha256(const Aws::String& value) { m_ruleContentSha256HasBeenSet = true; m_ruleContentSha256 = value; }
    inline void SetRuleContentSha256(Aws::String&& value) { m_ruleContentSha256HasBeenSet = true; m_ruleContentSha256 = std::move(value); }
    inline void SetRuleContentSha256(const char* value) { m_ruleContentSha256HasBeenSet = true; m_ruleContentSha256.assign(value); }
    inline ApprovalRule& WithRuleContentSha256(const Aws::String& value) { SetRuleContentSha256(value); return *this;}
    inline ApprovalRule& WithRuleContentSha256(Aws::String&& value) { SetRuleContentSha256(std::move(value)); return *this;}
    inline ApprovalRule& WithRuleContentSha256(const char* value) { SetRuleContentSha256(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the approval rule was most recently changed, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline ApprovalRule& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline ApprovalRule& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the approval rule was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline ApprovalRule& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline ApprovalRule& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who made the most recent changes
     * to the approval rule.</p>
     */
    inline const Aws::String& GetLastModifiedUser() const{ return m_lastModifiedUser; }
    inline bool LastModifiedUserHasBeenSet() const { return m_lastModifiedUserHasBeenSet; }
    inline void SetLastModifiedUser(const Aws::String& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = value; }
    inline void SetLastModifiedUser(Aws::String&& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = std::move(value); }
    inline void SetLastModifiedUser(const char* value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser.assign(value); }
    inline ApprovalRule& WithLastModifiedUser(const Aws::String& value) { SetLastModifiedUser(value); return *this;}
    inline ApprovalRule& WithLastModifiedUser(Aws::String&& value) { SetLastModifiedUser(std::move(value)); return *this;}
    inline ApprovalRule& WithLastModifiedUser(const char* value) { SetLastModifiedUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval rule template used to create the rule.</p>
     */
    inline const OriginApprovalRuleTemplate& GetOriginApprovalRuleTemplate() const{ return m_originApprovalRuleTemplate; }
    inline bool OriginApprovalRuleTemplateHasBeenSet() const { return m_originApprovalRuleTemplateHasBeenSet; }
    inline void SetOriginApprovalRuleTemplate(const OriginApprovalRuleTemplate& value) { m_originApprovalRuleTemplateHasBeenSet = true; m_originApprovalRuleTemplate = value; }
    inline void SetOriginApprovalRuleTemplate(OriginApprovalRuleTemplate&& value) { m_originApprovalRuleTemplateHasBeenSet = true; m_originApprovalRuleTemplate = std::move(value); }
    inline ApprovalRule& WithOriginApprovalRuleTemplate(const OriginApprovalRuleTemplate& value) { SetOriginApprovalRuleTemplate(value); return *this;}
    inline ApprovalRule& WithOriginApprovalRuleTemplate(OriginApprovalRuleTemplate&& value) { SetOriginApprovalRuleTemplate(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_lastModifiedUser;
    bool m_lastModifiedUserHasBeenSet = false;

    OriginApprovalRuleTemplate m_originApprovalRuleTemplate;
    bool m_originApprovalRuleTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
