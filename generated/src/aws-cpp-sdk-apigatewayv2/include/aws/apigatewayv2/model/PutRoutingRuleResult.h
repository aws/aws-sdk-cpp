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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{
  class PutRoutingRuleResult
  {
  public:
    AWS_APIGATEWAYV2_API PutRoutingRuleResult() = default;
    AWS_APIGATEWAYV2_API PutRoutingRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API PutRoutingRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The routing rule action.</p>
     */
    inline const Aws::Vector<RoutingRuleAction>& GetActions() const { return m_actions; }
    template<typename ActionsT = Aws::Vector<RoutingRuleAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<RoutingRuleAction>>
    PutRoutingRuleResult& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = RoutingRuleAction>
    PutRoutingRuleResult& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The conditions of the routing rule.</p>
     */
    inline const Aws::Vector<RoutingRuleCondition>& GetConditions() const { return m_conditions; }
    template<typename ConditionsT = Aws::Vector<RoutingRuleCondition>>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Aws::Vector<RoutingRuleCondition>>
    PutRoutingRuleResult& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = RoutingRuleCondition>
    PutRoutingRuleResult& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The routing rule priority.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline PutRoutingRuleResult& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing rule ARN.</p>
     */
    inline const Aws::String& GetRoutingRuleArn() const { return m_routingRuleArn; }
    template<typename RoutingRuleArnT = Aws::String>
    void SetRoutingRuleArn(RoutingRuleArnT&& value) { m_routingRuleArnHasBeenSet = true; m_routingRuleArn = std::forward<RoutingRuleArnT>(value); }
    template<typename RoutingRuleArnT = Aws::String>
    PutRoutingRuleResult& WithRoutingRuleArn(RoutingRuleArnT&& value) { SetRoutingRuleArn(std::forward<RoutingRuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing rule ID.</p>
     */
    inline const Aws::String& GetRoutingRuleId() const { return m_routingRuleId; }
    template<typename RoutingRuleIdT = Aws::String>
    void SetRoutingRuleId(RoutingRuleIdT&& value) { m_routingRuleIdHasBeenSet = true; m_routingRuleId = std::forward<RoutingRuleIdT>(value); }
    template<typename RoutingRuleIdT = Aws::String>
    PutRoutingRuleResult& WithRoutingRuleId(RoutingRuleIdT&& value) { SetRoutingRuleId(std::forward<RoutingRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutRoutingRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
