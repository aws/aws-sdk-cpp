/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/AcceptAction.h>
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
    AWS_MAILMANAGER_API PolicyStatement() = default;
    AWS_MAILMANAGER_API PolicyStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API PolicyStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of conditions to apply to incoming messages for filtering email
     * traffic.</p>
     */
    inline const Aws::Vector<PolicyCondition>& GetConditions() const { return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    template<typename ConditionsT = Aws::Vector<PolicyCondition>>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Aws::Vector<PolicyCondition>>
    PolicyStatement& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = PolicyCondition>
    PolicyStatement& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The action that informs a traffic policy resource to either allow or block
     * the email if it matches a condition in the policy statement.</p>
     */
    inline AcceptAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(AcceptAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline PolicyStatement& WithAction(AcceptAction value) { SetAction(value); return *this;}
    ///@}
  private:

    Aws::Vector<PolicyCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    AcceptAction m_action{AcceptAction::NOT_SET};
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
