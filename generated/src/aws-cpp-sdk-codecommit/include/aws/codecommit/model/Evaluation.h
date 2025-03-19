/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Returns information about the approval rules applied to a pull request and
   * whether conditions have been met.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/Evaluation">AWS
   * API Reference</a></p>
   */
  class Evaluation
  {
  public:
    AWS_CODECOMMIT_API Evaluation() = default;
    AWS_CODECOMMIT_API Evaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Evaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the state of the pull request is approved.</p>
     */
    inline bool GetApproved() const { return m_approved; }
    inline bool ApprovedHasBeenSet() const { return m_approvedHasBeenSet; }
    inline void SetApproved(bool value) { m_approvedHasBeenSet = true; m_approved = value; }
    inline Evaluation& WithApproved(bool value) { SetApproved(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the approval rule requirements for the pull request have been
     * overridden and no longer need to be met.</p>
     */
    inline bool GetOverridden() const { return m_overridden; }
    inline bool OverriddenHasBeenSet() const { return m_overriddenHasBeenSet; }
    inline void SetOverridden(bool value) { m_overriddenHasBeenSet = true; m_overridden = value; }
    inline Evaluation& WithOverridden(bool value) { SetOverridden(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the approval rules that have had their conditions met.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovalRulesSatisfied() const { return m_approvalRulesSatisfied; }
    inline bool ApprovalRulesSatisfiedHasBeenSet() const { return m_approvalRulesSatisfiedHasBeenSet; }
    template<typename ApprovalRulesSatisfiedT = Aws::Vector<Aws::String>>
    void SetApprovalRulesSatisfied(ApprovalRulesSatisfiedT&& value) { m_approvalRulesSatisfiedHasBeenSet = true; m_approvalRulesSatisfied = std::forward<ApprovalRulesSatisfiedT>(value); }
    template<typename ApprovalRulesSatisfiedT = Aws::Vector<Aws::String>>
    Evaluation& WithApprovalRulesSatisfied(ApprovalRulesSatisfiedT&& value) { SetApprovalRulesSatisfied(std::forward<ApprovalRulesSatisfiedT>(value)); return *this;}
    template<typename ApprovalRulesSatisfiedT = Aws::String>
    Evaluation& AddApprovalRulesSatisfied(ApprovalRulesSatisfiedT&& value) { m_approvalRulesSatisfiedHasBeenSet = true; m_approvalRulesSatisfied.emplace_back(std::forward<ApprovalRulesSatisfiedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the approval rules that have not had their conditions met.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovalRulesNotSatisfied() const { return m_approvalRulesNotSatisfied; }
    inline bool ApprovalRulesNotSatisfiedHasBeenSet() const { return m_approvalRulesNotSatisfiedHasBeenSet; }
    template<typename ApprovalRulesNotSatisfiedT = Aws::Vector<Aws::String>>
    void SetApprovalRulesNotSatisfied(ApprovalRulesNotSatisfiedT&& value) { m_approvalRulesNotSatisfiedHasBeenSet = true; m_approvalRulesNotSatisfied = std::forward<ApprovalRulesNotSatisfiedT>(value); }
    template<typename ApprovalRulesNotSatisfiedT = Aws::Vector<Aws::String>>
    Evaluation& WithApprovalRulesNotSatisfied(ApprovalRulesNotSatisfiedT&& value) { SetApprovalRulesNotSatisfied(std::forward<ApprovalRulesNotSatisfiedT>(value)); return *this;}
    template<typename ApprovalRulesNotSatisfiedT = Aws::String>
    Evaluation& AddApprovalRulesNotSatisfied(ApprovalRulesNotSatisfiedT&& value) { m_approvalRulesNotSatisfiedHasBeenSet = true; m_approvalRulesNotSatisfied.emplace_back(std::forward<ApprovalRulesNotSatisfiedT>(value)); return *this; }
    ///@}
  private:

    bool m_approved{false};
    bool m_approvedHasBeenSet = false;

    bool m_overridden{false};
    bool m_overriddenHasBeenSet = false;

    Aws::Vector<Aws::String> m_approvalRulesSatisfied;
    bool m_approvalRulesSatisfiedHasBeenSet = false;

    Aws::Vector<Aws::String> m_approvalRulesNotSatisfied;
    bool m_approvalRulesNotSatisfiedHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
