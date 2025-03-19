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
    AWS_CODECOMMIT_API ApprovalRuleEventMetadata() = default;
    AWS_CODECOMMIT_API ApprovalRuleEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ApprovalRuleEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleName() const { return m_approvalRuleName; }
    inline bool ApprovalRuleNameHasBeenSet() const { return m_approvalRuleNameHasBeenSet; }
    template<typename ApprovalRuleNameT = Aws::String>
    void SetApprovalRuleName(ApprovalRuleNameT&& value) { m_approvalRuleNameHasBeenSet = true; m_approvalRuleName = std::forward<ApprovalRuleNameT>(value); }
    template<typename ApprovalRuleNameT = Aws::String>
    ApprovalRuleEventMetadata& WithApprovalRuleName(ApprovalRuleNameT&& value) { SetApprovalRuleName(std::forward<ApprovalRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated ID of the approval rule.</p>
     */
    inline const Aws::String& GetApprovalRuleId() const { return m_approvalRuleId; }
    inline bool ApprovalRuleIdHasBeenSet() const { return m_approvalRuleIdHasBeenSet; }
    template<typename ApprovalRuleIdT = Aws::String>
    void SetApprovalRuleId(ApprovalRuleIdT&& value) { m_approvalRuleIdHasBeenSet = true; m_approvalRuleId = std::forward<ApprovalRuleIdT>(value); }
    template<typename ApprovalRuleIdT = Aws::String>
    ApprovalRuleEventMetadata& WithApprovalRuleId(ApprovalRuleIdT&& value) { SetApprovalRuleId(std::forward<ApprovalRuleIdT>(value)); return *this;}
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
    ApprovalRuleEventMetadata& WithApprovalRuleContent(ApprovalRuleContentT&& value) { SetApprovalRuleContent(std::forward<ApprovalRuleContentT>(value)); return *this;}
    ///@}
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
