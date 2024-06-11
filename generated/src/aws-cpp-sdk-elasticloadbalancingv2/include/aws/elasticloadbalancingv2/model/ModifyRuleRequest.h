/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/RuleCondition.h>
#include <aws/elasticloadbalancingv2/model/Action.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class ModifyRuleRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ModifyRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyRule"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
    inline void SetRuleArn(const Aws::String& value) { m_ruleArnHasBeenSet = true; m_ruleArn = value; }
    inline void SetRuleArn(Aws::String&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::move(value); }
    inline void SetRuleArn(const char* value) { m_ruleArnHasBeenSet = true; m_ruleArn.assign(value); }
    inline ModifyRuleRequest& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}
    inline ModifyRuleRequest& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}
    inline ModifyRuleRequest& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditions.</p>
     */
    inline const Aws::Vector<RuleCondition>& GetConditions() const{ return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    inline void SetConditions(const Aws::Vector<RuleCondition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }
    inline void SetConditions(Aws::Vector<RuleCondition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }
    inline ModifyRuleRequest& WithConditions(const Aws::Vector<RuleCondition>& value) { SetConditions(value); return *this;}
    inline ModifyRuleRequest& WithConditions(Aws::Vector<RuleCondition>&& value) { SetConditions(std::move(value)); return *this;}
    inline ModifyRuleRequest& AddConditions(const RuleCondition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }
    inline ModifyRuleRequest& AddConditions(RuleCondition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline ModifyRuleRequest& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}
    inline ModifyRuleRequest& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}
    inline ModifyRuleRequest& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline ModifyRuleRequest& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet = false;

    Aws::Vector<RuleCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
