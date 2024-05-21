/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/AcceptAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/PolicyCondition.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The structure containing traffic policy conditions and actions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/PolicyStatement">AWS
   * API Reference</a></p>
   */
  class PolicyStatement
  {
  public:
    AWS_MAILMANAGER_API PolicyStatement();
    AWS_MAILMANAGER_API PolicyStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API PolicyStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action that informs a traffic policy resource to either allow or block
     * the email if it matches a condition in the policy statement.</p>
     */
    inline const AcceptAction& GetAction() const{ return m_action; }

    /**
     * <p>The action that informs a traffic policy resource to either allow or block
     * the email if it matches a condition in the policy statement.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that informs a traffic policy resource to either allow or block
     * the email if it matches a condition in the policy statement.</p>
     */
    inline void SetAction(const AcceptAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that informs a traffic policy resource to either allow or block
     * the email if it matches a condition in the policy statement.</p>
     */
    inline void SetAction(AcceptAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that informs a traffic policy resource to either allow or block
     * the email if it matches a condition in the policy statement.</p>
     */
    inline PolicyStatement& WithAction(const AcceptAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action that informs a traffic policy resource to either allow or block
     * the email if it matches a condition in the policy statement.</p>
     */
    inline PolicyStatement& WithAction(AcceptAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The list of conditions to apply to incoming messages for filtering email
     * traffic.</p>
     */
    inline const Aws::Vector<PolicyCondition>& GetConditions() const{ return m_conditions; }

    /**
     * <p>The list of conditions to apply to incoming messages for filtering email
     * traffic.</p>
     */
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }

    /**
     * <p>The list of conditions to apply to incoming messages for filtering email
     * traffic.</p>
     */
    inline void SetConditions(const Aws::Vector<PolicyCondition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }

    /**
     * <p>The list of conditions to apply to incoming messages for filtering email
     * traffic.</p>
     */
    inline void SetConditions(Aws::Vector<PolicyCondition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }

    /**
     * <p>The list of conditions to apply to incoming messages for filtering email
     * traffic.</p>
     */
    inline PolicyStatement& WithConditions(const Aws::Vector<PolicyCondition>& value) { SetConditions(value); return *this;}

    /**
     * <p>The list of conditions to apply to incoming messages for filtering email
     * traffic.</p>
     */
    inline PolicyStatement& WithConditions(Aws::Vector<PolicyCondition>&& value) { SetConditions(std::move(value)); return *this;}

    /**
     * <p>The list of conditions to apply to incoming messages for filtering email
     * traffic.</p>
     */
    inline PolicyStatement& AddConditions(const PolicyCondition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }

    /**
     * <p>The list of conditions to apply to incoming messages for filtering email
     * traffic.</p>
     */
    inline PolicyStatement& AddConditions(PolicyCondition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }

  private:

    AcceptAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::Vector<PolicyCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
