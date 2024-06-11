/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/RuleAction.h>
#include <aws/mailmanager/model/RuleCondition.h>
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
    AWS_MAILMANAGER_API Rule();
    AWS_MAILMANAGER_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of actions to execute when the conditions match the incoming email,
     * and none of the "unless conditions" match.</p>
     */
    inline const Aws::Vector<RuleAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<RuleAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<RuleAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline Rule& WithActions(const Aws::Vector<RuleAction>& value) { SetActions(value); return *this;}
    inline Rule& WithActions(Aws::Vector<RuleAction>&& value) { SetActions(std::move(value)); return *this;}
    inline Rule& AddActions(const RuleAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline Rule& AddActions(RuleAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The conditions of this rule. All conditions must match the email for the
     * actions to be executed. An empty list of conditions means that all emails match,
     * but are still subject to any "unless conditions"</p>
     */
    inline const Aws::Vector<RuleCondition>& GetConditions() const{ return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    inline void SetConditions(const Aws::Vector<RuleCondition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }
    inline void SetConditions(Aws::Vector<RuleCondition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }
    inline Rule& WithConditions(const Aws::Vector<RuleCondition>& value) { SetConditions(value); return *this;}
    inline Rule& WithConditions(Aws::Vector<RuleCondition>&& value) { SetConditions(std::move(value)); return *this;}
    inline Rule& AddConditions(const RuleCondition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }
    inline Rule& AddConditions(RuleCondition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Rule& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Rule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Rule& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The "unless conditions" of this rule. None of the conditions can match the
     * email for the actions to be executed. If any of these conditions do match the
     * email, then the actions are not executed.</p>
     */
    inline const Aws::Vector<RuleCondition>& GetUnless() const{ return m_unless; }
    inline bool UnlessHasBeenSet() const { return m_unlessHasBeenSet; }
    inline void SetUnless(const Aws::Vector<RuleCondition>& value) { m_unlessHasBeenSet = true; m_unless = value; }
    inline void SetUnless(Aws::Vector<RuleCondition>&& value) { m_unlessHasBeenSet = true; m_unless = std::move(value); }
    inline Rule& WithUnless(const Aws::Vector<RuleCondition>& value) { SetUnless(value); return *this;}
    inline Rule& WithUnless(Aws::Vector<RuleCondition>&& value) { SetUnless(std::move(value)); return *this;}
    inline Rule& AddUnless(const RuleCondition& value) { m_unlessHasBeenSet = true; m_unless.push_back(value); return *this; }
    inline Rule& AddUnless(RuleCondition&& value) { m_unlessHasBeenSet = true; m_unless.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RuleAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<RuleCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<RuleCondition> m_unless;
    bool m_unlessHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
