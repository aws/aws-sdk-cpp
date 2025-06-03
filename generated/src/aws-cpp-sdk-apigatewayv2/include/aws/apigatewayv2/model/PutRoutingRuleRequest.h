/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/RoutingRuleAction.h>
#include <aws/apigatewayv2/model/RoutingRuleCondition.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class PutRoutingRuleRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API PutRoutingRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRoutingRule"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAYV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The routing rule action.</p>
     */
    inline const Aws::Vector<RoutingRuleAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<RoutingRuleAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<RoutingRuleAction>>
    PutRoutingRuleRequest& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = RoutingRuleAction>
    PutRoutingRuleRequest& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
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
    PutRoutingRuleRequest& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = RoutingRuleCondition>
    PutRoutingRuleRequest& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    PutRoutingRuleRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name ID.</p>
     */
    inline const Aws::String& GetDomainNameId() const { return m_domainNameId; }
    inline bool DomainNameIdHasBeenSet() const { return m_domainNameIdHasBeenSet; }
    template<typename DomainNameIdT = Aws::String>
    void SetDomainNameId(DomainNameIdT&& value) { m_domainNameIdHasBeenSet = true; m_domainNameId = std::forward<DomainNameIdT>(value); }
    template<typename DomainNameIdT = Aws::String>
    PutRoutingRuleRequest& WithDomainNameId(DomainNameIdT&& value) { SetDomainNameId(std::forward<DomainNameIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing rule priority.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline PutRoutingRuleRequest& WithPriority(int value) { SetPriority(value); return *this;}
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
    PutRoutingRuleRequest& WithRoutingRuleId(RoutingRuleIdT&& value) { SetRoutingRuleId(std::forward<RoutingRuleIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RoutingRuleAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<RoutingRuleCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_domainNameId;
    bool m_domainNameIdHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::String m_routingRuleId;
    bool m_routingRuleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
