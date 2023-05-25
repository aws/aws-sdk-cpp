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
   * <p>Returns information about an event for an approval rule.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ApprovalRuleEventMetadata">AWS
   * API Reference</a></p>
   */
  class ApprovalRuleEventMetadata
  {
  public:
    AWS_CODECOMMIT_API ApprovalRuleEventMetadata();
    AWS_CODECOMMIT_API ApprovalRuleEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ApprovalRuleEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleName() const{ return m_approvalRuleName; }

    /**
     * <p>The name of the approval rule.</p>
     */
    inline bool ApprovalRuleNameHasBeenSet() const { return m_approvalRuleNameHasBeenSet; }

    /**
     * <p>The name of the approval rule.</p>
     */
    inline void SetApprovalRuleName(const Aws::String& value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName = value; }

    /**
     * <p>The name of the approval rule.</p>
     */
    inline void SetApprovalRuleName(Aws::String&& value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName = std::move(value); }

    /**
     * <p>The name of the approval rule.</p>
     */
    inline void SetApprovalRuleName(const char* value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName.assign(value); }

    /**
     * <p>The name of the approval rule.</p>
     */
    inline ApprovalRuleEventMetadata& WithApprovalRuleName(const Aws::String& value) { SetApprovalRuleName(value); return *this;}

    /**
     * <p>The name of the approval rule.</p>
     */
    inline ApprovalRuleEventMetadata& WithApprovalRuleName(Aws::String&& value) { SetApprovalRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the approval rule.</p>
     */
    inline ApprovalRuleEventMetadata& WithApprovalRuleName(const char* value) { SetApprovalRuleName(value); return *this;}


    /**
     * <p>The system-generated ID of the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleId() const{ return m_approvalRuleId; }

    /**
     * <p>The system-generated ID of the approval rule.</p>
     */
    inline bool ApprovalRuleIdHasBeenSet() const { return m_approvalRuleIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the approval rule.</p>
     */
    inline void SetApprovalRuleId(const Aws::String& value) { m_approvalRuleIdHasBeenSet = true; m_approvalRuleId = value; }

    /**
     * <p>The system-generated ID of the approval rule.</p>
     */
    inline void SetApprovalRuleId(Aws::String&& value) { m_approvalRuleIdHasBeenSet = true; m_approvalRuleId = std::move(value); }

    /**
     * <p>The system-generated ID of the approval rule.</p>
     */
    inline void SetApprovalRuleId(const char* value) { m_approvalRuleIdHasBeenSet = true; m_approvalRuleId.assign(value); }

    /**
     * <p>The system-generated ID of the approval rule.</p>
     */
    inline ApprovalRuleEventMetadata& WithApprovalRuleId(const Aws::String& value) { SetApprovalRuleId(value); return *this;}

    /**
     * <p>The system-generated ID of the approval rule.</p>
     */
    inline ApprovalRuleEventMetadata& WithApprovalRuleId(Aws::String&& value) { SetApprovalRuleId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the approval rule.</p>
     */
    inline ApprovalRuleEventMetadata& WithApprovalRuleId(const char* value) { SetApprovalRuleId(value); return *this;}


    /**
     * <p>The content of the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleContent() const{ return m_approvalRuleContent; }

    /**
     * <p>The content of the approval rule.</p>
     */
    inline bool ApprovalRuleContentHasBeenSet() const { return m_approvalRuleContentHasBeenSet; }

    /**
     * <p>The content of the approval rule.</p>
     */
    inline void SetApprovalRuleContent(const Aws::String& value) { m_approvalRuleContentHasBeenSet = true; m_approvalRuleContent = value; }

    /**
     * <p>The content of the approval rule.</p>
     */
    inline void SetApprovalRuleContent(Aws::String&& value) { m_approvalRuleContentHasBeenSet = true; m_approvalRuleContent = std::move(value); }

    /**
     * <p>The content of the approval rule.</p>
     */
    inline void SetApprovalRuleContent(const char* value) { m_approvalRuleContentHasBeenSet = true; m_approvalRuleContent.assign(value); }

    /**
     * <p>The content of the approval rule.</p>
     */
    inline ApprovalRuleEventMetadata& WithApprovalRuleContent(const Aws::String& value) { SetApprovalRuleContent(value); return *this;}

    /**
     * <p>The content of the approval rule.</p>
     */
    inline ApprovalRuleEventMetadata& WithApprovalRuleContent(Aws::String&& value) { SetApprovalRuleContent(std::move(value)); return *this;}

    /**
     * <p>The content of the approval rule.</p>
     */
    inline ApprovalRuleEventMetadata& WithApprovalRuleContent(const char* value) { SetApprovalRuleContent(value); return *this;}

  private:

    Aws::String m_approvalRuleName;
    bool m_approvalRuleNameHasBeenSet = false;

    Aws::String m_approvalRuleId;
    bool m_approvalRuleIdHasBeenSet = false;

    Aws::String m_approvalRuleContent;
    bool m_approvalRuleContentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
