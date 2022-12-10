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
    AWS_CODECOMMIT_API ApprovalRuleTemplate();
    AWS_CODECOMMIT_API ApprovalRuleTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ApprovalRuleTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated ID of the approval rule template.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateId() const{ return m_approvalRuleTemplateId; }

    /**
     * <p>The system-generated ID of the approval rule template.</p>
     */
    inline bool ApprovalRuleTemplateIdHasBeenSet() const { return m_approvalRuleTemplateIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateId(const Aws::String& value) { m_approvalRuleTemplateIdHasBeenSet = true; m_approvalRuleTemplateId = value; }

    /**
     * <p>The system-generated ID of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateId(Aws::String&& value) { m_approvalRuleTemplateIdHasBeenSet = true; m_approvalRuleTemplateId = std::move(value); }

    /**
     * <p>The system-generated ID of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateId(const char* value) { m_approvalRuleTemplateIdHasBeenSet = true; m_approvalRuleTemplateId.assign(value); }

    /**
     * <p>The system-generated ID of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithApprovalRuleTemplateId(const Aws::String& value) { SetApprovalRuleTemplateId(value); return *this;}

    /**
     * <p>The system-generated ID of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithApprovalRuleTemplateId(Aws::String&& value) { SetApprovalRuleTemplateId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithApprovalRuleTemplateId(const char* value) { SetApprovalRuleTemplateId(value); return *this;}


    /**
     * <p>The name of the approval rule template.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const{ return m_approvalRuleTemplateName; }

    /**
     * <p>The name of the approval rule template.</p>
     */
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }

    /**
     * <p>The name of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateName(const Aws::String& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = value; }

    /**
     * <p>The name of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateName(Aws::String&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::move(value); }

    /**
     * <p>The name of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateName(const char* value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName.assign(value); }

    /**
     * <p>The name of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithApprovalRuleTemplateName(const Aws::String& value) { SetApprovalRuleTemplateName(value); return *this;}

    /**
     * <p>The name of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithApprovalRuleTemplateName(Aws::String&& value) { SetApprovalRuleTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithApprovalRuleTemplateName(const char* value) { SetApprovalRuleTemplateName(value); return *this;}


    /**
     * <p>The description of the approval rule template.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateDescription() const{ return m_approvalRuleTemplateDescription; }

    /**
     * <p>The description of the approval rule template.</p>
     */
    inline bool ApprovalRuleTemplateDescriptionHasBeenSet() const { return m_approvalRuleTemplateDescriptionHasBeenSet; }

    /**
     * <p>The description of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateDescription(const Aws::String& value) { m_approvalRuleTemplateDescriptionHasBeenSet = true; m_approvalRuleTemplateDescription = value; }

    /**
     * <p>The description of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateDescription(Aws::String&& value) { m_approvalRuleTemplateDescriptionHasBeenSet = true; m_approvalRuleTemplateDescription = std::move(value); }

    /**
     * <p>The description of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateDescription(const char* value) { m_approvalRuleTemplateDescriptionHasBeenSet = true; m_approvalRuleTemplateDescription.assign(value); }

    /**
     * <p>The description of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithApprovalRuleTemplateDescription(const Aws::String& value) { SetApprovalRuleTemplateDescription(value); return *this;}

    /**
     * <p>The description of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithApprovalRuleTemplateDescription(Aws::String&& value) { SetApprovalRuleTemplateDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithApprovalRuleTemplateDescription(const char* value) { SetApprovalRuleTemplateDescription(value); return *this;}


    /**
     * <p>The content of the approval rule template.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateContent() const{ return m_approvalRuleTemplateContent; }

    /**
     * <p>The content of the approval rule template.</p>
     */
    inline bool ApprovalRuleTemplateContentHasBeenSet() const { return m_approvalRuleTemplateContentHasBeenSet; }

    /**
     * <p>The content of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateContent(const Aws::String& value) { m_approvalRuleTemplateContentHasBeenSet = true; m_approvalRuleTemplateContent = value; }

    /**
     * <p>The content of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateContent(Aws::String&& value) { m_approvalRuleTemplateContentHasBeenSet = true; m_approvalRuleTemplateContent = std::move(value); }

    /**
     * <p>The content of the approval rule template.</p>
     */
    inline void SetApprovalRuleTemplateContent(const char* value) { m_approvalRuleTemplateContentHasBeenSet = true; m_approvalRuleTemplateContent.assign(value); }

    /**
     * <p>The content of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithApprovalRuleTemplateContent(const Aws::String& value) { SetApprovalRuleTemplateContent(value); return *this;}

    /**
     * <p>The content of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithApprovalRuleTemplateContent(Aws::String&& value) { SetApprovalRuleTemplateContent(std::move(value)); return *this;}

    /**
     * <p>The content of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithApprovalRuleTemplateContent(const char* value) { SetApprovalRuleTemplateContent(value); return *this;}


    /**
     * <p>The SHA-256 hash signature for the content of the approval rule template.</p>
     */
    inline const Aws::String& GetRuleContentSha256() const{ return m_ruleContentSha256; }

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule template.</p>
     */
    inline bool RuleContentSha256HasBeenSet() const { return m_ruleContentSha256HasBeenSet; }

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule template.</p>
     */
    inline void SetRuleContentSha256(const Aws::String& value) { m_ruleContentSha256HasBeenSet = true; m_ruleContentSha256 = value; }

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule template.</p>
     */
    inline void SetRuleContentSha256(Aws::String&& value) { m_ruleContentSha256HasBeenSet = true; m_ruleContentSha256 = std::move(value); }

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule template.</p>
     */
    inline void SetRuleContentSha256(const char* value) { m_ruleContentSha256HasBeenSet = true; m_ruleContentSha256.assign(value); }

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithRuleContentSha256(const Aws::String& value) { SetRuleContentSha256(value); return *this;}

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithRuleContentSha256(Aws::String&& value) { SetRuleContentSha256(std::move(value)); return *this;}

    /**
     * <p>The SHA-256 hash signature for the content of the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithRuleContentSha256(const char* value) { SetRuleContentSha256(value); return *this;}


    /**
     * <p>The date the approval rule template was most recently changed, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date the approval rule template was most recently changed, in timestamp
     * format.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date the approval rule template was most recently changed, in timestamp
     * format.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date the approval rule template was most recently changed, in timestamp
     * format.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date the approval rule template was most recently changed, in timestamp
     * format.</p>
     */
    inline ApprovalRuleTemplate& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date the approval rule template was most recently changed, in timestamp
     * format.</p>
     */
    inline ApprovalRuleTemplate& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The date the approval rule template was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the approval rule template was created, in timestamp format.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date the approval rule template was created, in timestamp format.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the approval rule template was created, in timestamp format.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the approval rule template was created, in timestamp format.</p>
     */
    inline ApprovalRuleTemplate& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the approval rule template was created, in timestamp format.</p>
     */
    inline ApprovalRuleTemplate& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who made the most recent changes
     * to the approval rule template.</p>
     */
    inline const Aws::String& GetLastModifiedUser() const{ return m_lastModifiedUser; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who made the most recent changes
     * to the approval rule template.</p>
     */
    inline bool LastModifiedUserHasBeenSet() const { return m_lastModifiedUserHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who made the most recent changes
     * to the approval rule template.</p>
     */
    inline void SetLastModifiedUser(const Aws::String& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who made the most recent changes
     * to the approval rule template.</p>
     */
    inline void SetLastModifiedUser(Aws::String&& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who made the most recent changes
     * to the approval rule template.</p>
     */
    inline void SetLastModifiedUser(const char* value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who made the most recent changes
     * to the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithLastModifiedUser(const Aws::String& value) { SetLastModifiedUser(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who made the most recent changes
     * to the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithLastModifiedUser(Aws::String&& value) { SetLastModifiedUser(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who made the most recent changes
     * to the approval rule template.</p>
     */
    inline ApprovalRuleTemplate& WithLastModifiedUser(const char* value) { SetLastModifiedUser(value); return *this;}

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

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_lastModifiedUser;
    bool m_lastModifiedUserHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
