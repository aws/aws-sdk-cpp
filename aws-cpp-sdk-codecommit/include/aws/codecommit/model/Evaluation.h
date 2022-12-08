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
    AWS_CODECOMMIT_API Evaluation();
    AWS_CODECOMMIT_API Evaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Evaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the state of the pull request is approved.</p>
     */
    inline bool GetApproved() const{ return m_approved; }

    /**
     * <p>Whether the state of the pull request is approved.</p>
     */
    inline bool ApprovedHasBeenSet() const { return m_approvedHasBeenSet; }

    /**
     * <p>Whether the state of the pull request is approved.</p>
     */
    inline void SetApproved(bool value) { m_approvedHasBeenSet = true; m_approved = value; }

    /**
     * <p>Whether the state of the pull request is approved.</p>
     */
    inline Evaluation& WithApproved(bool value) { SetApproved(value); return *this;}


    /**
     * <p>Whether the approval rule requirements for the pull request have been
     * overridden and no longer need to be met.</p>
     */
    inline bool GetOverridden() const{ return m_overridden; }

    /**
     * <p>Whether the approval rule requirements for the pull request have been
     * overridden and no longer need to be met.</p>
     */
    inline bool OverriddenHasBeenSet() const { return m_overriddenHasBeenSet; }

    /**
     * <p>Whether the approval rule requirements for the pull request have been
     * overridden and no longer need to be met.</p>
     */
    inline void SetOverridden(bool value) { m_overriddenHasBeenSet = true; m_overridden = value; }

    /**
     * <p>Whether the approval rule requirements for the pull request have been
     * overridden and no longer need to be met.</p>
     */
    inline Evaluation& WithOverridden(bool value) { SetOverridden(value); return *this;}


    /**
     * <p>The names of the approval rules that have had their conditions met.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovalRulesSatisfied() const{ return m_approvalRulesSatisfied; }

    /**
     * <p>The names of the approval rules that have had their conditions met.</p>
     */
    inline bool ApprovalRulesSatisfiedHasBeenSet() const { return m_approvalRulesSatisfiedHasBeenSet; }

    /**
     * <p>The names of the approval rules that have had their conditions met.</p>
     */
    inline void SetApprovalRulesSatisfied(const Aws::Vector<Aws::String>& value) { m_approvalRulesSatisfiedHasBeenSet = true; m_approvalRulesSatisfied = value; }

    /**
     * <p>The names of the approval rules that have had their conditions met.</p>
     */
    inline void SetApprovalRulesSatisfied(Aws::Vector<Aws::String>&& value) { m_approvalRulesSatisfiedHasBeenSet = true; m_approvalRulesSatisfied = std::move(value); }

    /**
     * <p>The names of the approval rules that have had their conditions met.</p>
     */
    inline Evaluation& WithApprovalRulesSatisfied(const Aws::Vector<Aws::String>& value) { SetApprovalRulesSatisfied(value); return *this;}

    /**
     * <p>The names of the approval rules that have had their conditions met.</p>
     */
    inline Evaluation& WithApprovalRulesSatisfied(Aws::Vector<Aws::String>&& value) { SetApprovalRulesSatisfied(std::move(value)); return *this;}

    /**
     * <p>The names of the approval rules that have had their conditions met.</p>
     */
    inline Evaluation& AddApprovalRulesSatisfied(const Aws::String& value) { m_approvalRulesSatisfiedHasBeenSet = true; m_approvalRulesSatisfied.push_back(value); return *this; }

    /**
     * <p>The names of the approval rules that have had their conditions met.</p>
     */
    inline Evaluation& AddApprovalRulesSatisfied(Aws::String&& value) { m_approvalRulesSatisfiedHasBeenSet = true; m_approvalRulesSatisfied.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the approval rules that have had their conditions met.</p>
     */
    inline Evaluation& AddApprovalRulesSatisfied(const char* value) { m_approvalRulesSatisfiedHasBeenSet = true; m_approvalRulesSatisfied.push_back(value); return *this; }


    /**
     * <p>The names of the approval rules that have not had their conditions met.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovalRulesNotSatisfied() const{ return m_approvalRulesNotSatisfied; }

    /**
     * <p>The names of the approval rules that have not had their conditions met.</p>
     */
    inline bool ApprovalRulesNotSatisfiedHasBeenSet() const { return m_approvalRulesNotSatisfiedHasBeenSet; }

    /**
     * <p>The names of the approval rules that have not had their conditions met.</p>
     */
    inline void SetApprovalRulesNotSatisfied(const Aws::Vector<Aws::String>& value) { m_approvalRulesNotSatisfiedHasBeenSet = true; m_approvalRulesNotSatisfied = value; }

    /**
     * <p>The names of the approval rules that have not had their conditions met.</p>
     */
    inline void SetApprovalRulesNotSatisfied(Aws::Vector<Aws::String>&& value) { m_approvalRulesNotSatisfiedHasBeenSet = true; m_approvalRulesNotSatisfied = std::move(value); }

    /**
     * <p>The names of the approval rules that have not had their conditions met.</p>
     */
    inline Evaluation& WithApprovalRulesNotSatisfied(const Aws::Vector<Aws::String>& value) { SetApprovalRulesNotSatisfied(value); return *this;}

    /**
     * <p>The names of the approval rules that have not had their conditions met.</p>
     */
    inline Evaluation& WithApprovalRulesNotSatisfied(Aws::Vector<Aws::String>&& value) { SetApprovalRulesNotSatisfied(std::move(value)); return *this;}

    /**
     * <p>The names of the approval rules that have not had their conditions met.</p>
     */
    inline Evaluation& AddApprovalRulesNotSatisfied(const Aws::String& value) { m_approvalRulesNotSatisfiedHasBeenSet = true; m_approvalRulesNotSatisfied.push_back(value); return *this; }

    /**
     * <p>The names of the approval rules that have not had their conditions met.</p>
     */
    inline Evaluation& AddApprovalRulesNotSatisfied(Aws::String&& value) { m_approvalRulesNotSatisfiedHasBeenSet = true; m_approvalRulesNotSatisfied.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the approval rules that have not had their conditions met.</p>
     */
    inline Evaluation& AddApprovalRulesNotSatisfied(const char* value) { m_approvalRulesNotSatisfiedHasBeenSet = true; m_approvalRulesNotSatisfied.push_back(value); return *this; }

  private:

    bool m_approved;
    bool m_approvedHasBeenSet = false;

    bool m_overridden;
    bool m_overriddenHasBeenSet = false;

    Aws::Vector<Aws::String> m_approvalRulesSatisfied;
    bool m_approvalRulesSatisfiedHasBeenSet = false;

    Aws::Vector<Aws::String> m_approvalRulesNotSatisfied;
    bool m_approvalRulesNotSatisfiedHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
