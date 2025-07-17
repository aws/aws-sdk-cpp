/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/RuleCondition.h>
#include <aws/mailmanager/model/RuleAction.h>
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
   * <p>A rule contains conditions, "unless conditions" and actions. For each
   * envelope recipient of an email, if all conditions match and none of the "unless
   * conditions" match, then all of the actions are executed sequentially. If no
   * conditions are provided, the rule always applies and the actions are implicitly
   * executed. If only "unless conditions" are provided, the rule applies if the
   * email does not match the evaluation of the "unless conditions".</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/Rule">AWS
   * API Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_MAILMANAGER_API Rule() = default;
    AWS_MAILMANAGER_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user-friendly name of the rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Rule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditions of this rule. All conditions must match the email for the
     * actions to be executed. An empty list of conditions means that all emails match,
     * but are still subject to any "unless conditions"</p>
     */
    inline const Aws::Vector<RuleCondition>& GetConditions() const { return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    template<typename ConditionsT = Aws::Vector<RuleCondition>>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Aws::Vector<RuleCondition>>
    Rule& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = RuleCondition>
    Rule& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The "unless conditions" of this rule. None of the conditions can match the
     * email for the actions to be executed. If any of these conditions do match the
     * email, then the actions are not executed.</p>
     */
    inline const Aws::Vector<RuleCondition>& GetUnless() const { return m_unless; }
    inline bool UnlessHasBeenSet() const { return m_unlessHasBeenSet; }
    template<typename UnlessT = Aws::Vector<RuleCondition>>
    void SetUnless(UnlessT&& value) { m_unlessHasBeenSet = true; m_unless = std::forward<UnlessT>(value); }
    template<typename UnlessT = Aws::Vector<RuleCondition>>
    Rule& WithUnless(UnlessT&& value) { SetUnless(std::forward<UnlessT>(value)); return *this;}
    template<typename UnlessT = RuleCondition>
    Rule& AddUnless(UnlessT&& value) { m_unlessHasBeenSet = true; m_unless.emplace_back(std::forward<UnlessT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of actions to execute when the conditions match the incoming email,
     * and none of the "unless conditions" match.</p>
     */
    inline const Aws::Vector<RuleAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<RuleAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<RuleAction>>
    Rule& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = RuleAction>
    Rule& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<RuleCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    Aws::Vector<RuleCondition> m_unless;
    bool m_unlessHasBeenSet = false;

    Aws::Vector<RuleAction> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
