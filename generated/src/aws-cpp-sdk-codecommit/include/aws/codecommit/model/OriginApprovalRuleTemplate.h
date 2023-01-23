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
    AWS_CODECOMMIT_API OriginApprovalRuleTemplate();
    AWS_CODECOMMIT_API OriginApprovalRuleTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API OriginApprovalRuleTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the template that created the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateId() const{ return m_approvalRuleTemplateId; }

    /**
     * <p>The ID of the template that created the approval rule.</p>
     */
    inline bool ApprovalRuleTemplateIdHasBeenSet() const { return m_approvalRuleTemplateIdHasBeenSet; }

    /**
     * <p>The ID of the template that created the approval rule.</p>
     */
    inline void SetApprovalRuleTemplateId(const Aws::String& value) { m_approvalRuleTemplateIdHasBeenSet = true; m_approvalRuleTemplateId = value; }

    /**
     * <p>The ID of the template that created the approval rule.</p>
     */
    inline void SetApprovalRuleTemplateId(Aws::String&& value) { m_approvalRuleTemplateIdHasBeenSet = true; m_approvalRuleTemplateId = std::move(value); }

    /**
     * <p>The ID of the template that created the approval rule.</p>
     */
    inline void SetApprovalRuleTemplateId(const char* value) { m_approvalRuleTemplateIdHasBeenSet = true; m_approvalRuleTemplateId.assign(value); }

    /**
     * <p>The ID of the template that created the approval rule.</p>
     */
    inline OriginApprovalRuleTemplate& WithApprovalRuleTemplateId(const Aws::String& value) { SetApprovalRuleTemplateId(value); return *this;}

    /**
     * <p>The ID of the template that created the approval rule.</p>
     */
    inline OriginApprovalRuleTemplate& WithApprovalRuleTemplateId(Aws::String&& value) { SetApprovalRuleTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the template that created the approval rule.</p>
     */
    inline OriginApprovalRuleTemplate& WithApprovalRuleTemplateId(const char* value) { SetApprovalRuleTemplateId(value); return *this;}


    /**
     * <p>The name of the template that created the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const{ return m_approvalRuleTemplateName; }

    /**
     * <p>The name of the template that created the approval rule.</p>
     */
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }

    /**
     * <p>The name of the template that created the approval rule.</p>
     */
    inline void SetApprovalRuleTemplateName(const Aws::String& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = value; }

    /**
     * <p>The name of the template that created the approval rule.</p>
     */
    inline void SetApprovalRuleTemplateName(Aws::String&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::move(value); }

    /**
     * <p>The name of the template that created the approval rule.</p>
     */
    inline void SetApprovalRuleTemplateName(const char* value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName.assign(value); }

    /**
     * <p>The name of the template that created the approval rule.</p>
     */
    inline OriginApprovalRuleTemplate& WithApprovalRuleTemplateName(const Aws::String& value) { SetApprovalRuleTemplateName(value); return *this;}

    /**
     * <p>The name of the template that created the approval rule.</p>
     */
    inline OriginApprovalRuleTemplate& WithApprovalRuleTemplateName(Aws::String&& value) { SetApprovalRuleTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the template that created the approval rule.</p>
     */
    inline OriginApprovalRuleTemplate& WithApprovalRuleTemplateName(const char* value) { SetApprovalRuleTemplateName(value); return *this;}

  private:

    Aws::String m_approvalRuleTemplateId;
    bool m_approvalRuleTemplateIdHasBeenSet = false;

    Aws::String m_approvalRuleTemplateName;
    bool m_approvalRuleTemplateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
