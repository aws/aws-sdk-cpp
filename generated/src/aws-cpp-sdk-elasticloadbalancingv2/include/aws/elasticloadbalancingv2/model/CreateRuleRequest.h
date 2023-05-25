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
#include <aws/elasticloadbalancingv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class CreateRuleRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API CreateRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRule"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const char* value) { m_listenerArnHasBeenSet = true; m_listenerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline CreateRuleRequest& WithListenerArn(const Aws::String& value) { SetListenerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline CreateRuleRequest& WithListenerArn(Aws::String&& value) { SetListenerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline CreateRuleRequest& WithListenerArn(const char* value) { SetListenerArn(value); return *this;}


    /**
     * <p>The conditions.</p>
     */
    inline const Aws::Vector<RuleCondition>& GetConditions() const{ return m_conditions; }

    /**
     * <p>The conditions.</p>
     */
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }

    /**
     * <p>The conditions.</p>
     */
    inline void SetConditions(const Aws::Vector<RuleCondition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }

    /**
     * <p>The conditions.</p>
     */
    inline void SetConditions(Aws::Vector<RuleCondition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }

    /**
     * <p>The conditions.</p>
     */
    inline CreateRuleRequest& WithConditions(const Aws::Vector<RuleCondition>& value) { SetConditions(value); return *this;}

    /**
     * <p>The conditions.</p>
     */
    inline CreateRuleRequest& WithConditions(Aws::Vector<RuleCondition>&& value) { SetConditions(std::move(value)); return *this;}

    /**
     * <p>The conditions.</p>
     */
    inline CreateRuleRequest& AddConditions(const RuleCondition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }

    /**
     * <p>The conditions.</p>
     */
    inline CreateRuleRequest& AddConditions(RuleCondition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }


    /**
     * <p>The rule priority. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The rule priority. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The rule priority. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The rule priority. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline CreateRuleRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The actions.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions.</p>
     */
    inline CreateRuleRequest& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions.</p>
     */
    inline CreateRuleRequest& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions.</p>
     */
    inline CreateRuleRequest& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions.</p>
     */
    inline CreateRuleRequest& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags to assign to the rule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the rule.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the rule.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the rule.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the rule.</p>
     */
    inline CreateRuleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the rule.</p>
     */
    inline CreateRuleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the rule.</p>
     */
    inline CreateRuleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the rule.</p>
     */
    inline CreateRuleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet = false;

    Aws::Vector<RuleCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
