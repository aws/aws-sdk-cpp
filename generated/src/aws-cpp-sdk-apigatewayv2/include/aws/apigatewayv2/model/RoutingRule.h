/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/RoutingRuleAction.h>
#include <aws/apigatewayv2/model/RoutingRuleCondition.h>
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
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Represents a routing rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/RoutingRule">AWS
   * API Reference</a></p>
   */
  class RoutingRule
  {
  public:
    AWS_APIGATEWAYV2_API RoutingRule() = default;
    AWS_APIGATEWAYV2_API RoutingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API RoutingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The routing rule action.</p>
     */
    inline const Aws::Vector<RoutingRuleAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<RoutingRuleAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<RoutingRuleAction>>
    RoutingRule& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = RoutingRuleAction>
    RoutingRule& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The routing rule condition.</p>
     */
    inline const Aws::Vector<RoutingRuleCondition>& GetConditions() const { return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    template<typename ConditionsT = Aws::Vector<RoutingRuleCondition>>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Aws::Vector<RoutingRuleCondition>>
    RoutingRule& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = RoutingRuleCondition>
    RoutingRule& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The routing rule priority.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline RoutingRule& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing rule ARN.</p>
     */
    inline const Aws::String& GetRoutingRuleArn() const { return m_routingRuleArn; }
    inline bool RoutingRuleArnHasBeenSet() const { return m_routingRuleArnHasBeenSet; }
    template<typename RoutingRuleArnT = Aws::String>
    void SetRoutingRuleArn(RoutingRuleArnT&& value) { m_routingRuleArnHasBeenSet = true; m_routingRuleArn = std::forward<RoutingRuleArnT>(value); }
    template<typename RoutingRuleArnT = Aws::String>
    RoutingRule& WithRoutingRuleArn(RoutingRuleArnT&& value) { SetRoutingRuleArn(std::forward<RoutingRuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing rule ID.</p>
     */
    inline const Aws::String& GetRoutingRuleId() const { return m_routingRuleId; }
    inline bool RoutingRuleIdHasBeenSet() const { return m_routingRuleIdHasBeenSet; }
    template<typename RoutingRuleIdT = Aws::String>
    void SetRoutingRuleId(RoutingRuleIdT&& value) { m_routingRuleIdHasBeenSet = true; m_routingRuleId = std::forward<RoutingRuleIdT>(value); }
    template<typename RoutingRuleIdT = Aws::String>
    RoutingRule& WithRoutingRuleId(RoutingRuleIdT&& value) { SetRoutingRuleId(std::forward<RoutingRuleIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RoutingRuleAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<RoutingRuleCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::String m_routingRuleArn;
    bool m_routingRuleArnHasBeenSet = false;

    Aws::String m_routingRuleId;
    bool m_routingRuleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
