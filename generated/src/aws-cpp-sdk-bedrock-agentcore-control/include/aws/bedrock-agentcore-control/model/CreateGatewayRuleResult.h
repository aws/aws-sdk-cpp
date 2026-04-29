/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Action.h>
#include <aws/bedrock-agentcore-control/model/Condition.h>
#include <aws/bedrock-agentcore-control/model/GatewayRuleStatus.h>
#include <aws/bedrock-agentcore-control/model/SystemManagedBlock.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class CreateGatewayRuleResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateGatewayRuleResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CreateGatewayRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API CreateGatewayRuleResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the gateway rule.</p>
   */
  inline const Aws::String& GetRuleId() const { return m_ruleId; }
  template <typename RuleIdT = Aws::String>
  void SetRuleId(RuleIdT&& value) {
    m_ruleIdHasBeenSet = true;
    m_ruleId = std::forward<RuleIdT>(value);
  }
  template <typename RuleIdT = Aws::String>
  CreateGatewayRuleResult& WithRuleId(RuleIdT&& value) {
    SetRuleId(std::forward<RuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the gateway that the rule belongs to.</p>
   */
  inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
  template <typename GatewayArnT = Aws::String>
  void SetGatewayArn(GatewayArnT&& value) {
    m_gatewayArnHasBeenSet = true;
    m_gatewayArn = std::forward<GatewayArnT>(value);
  }
  template <typename GatewayArnT = Aws::String>
  CreateGatewayRuleResult& WithGatewayArn(GatewayArnT&& value) {
    SetGatewayArn(std::forward<GatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority of the rule. Rules are evaluated in order of priority, with
   * lower numbers evaluated first.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline CreateGatewayRuleResult& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The conditions that must be met for the rule to apply.</p>
   */
  inline const Aws::Vector<Condition>& GetConditions() const { return m_conditions; }
  template <typename ConditionsT = Aws::Vector<Condition>>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = Aws::Vector<Condition>>
  CreateGatewayRuleResult& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  template <typename ConditionsT = Condition>
  CreateGatewayRuleResult& AddConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions.emplace_back(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actions to take when the rule conditions are met.</p>
   */
  inline const Aws::Vector<Action>& GetActions() const { return m_actions; }
  template <typename ActionsT = Aws::Vector<Action>>
  void SetActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions = std::forward<ActionsT>(value);
  }
  template <typename ActionsT = Aws::Vector<Action>>
  CreateGatewayRuleResult& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  template <typename ActionsT = Action>
  CreateGatewayRuleResult& AddActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions.emplace_back(std::forward<ActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the gateway rule.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateGatewayRuleResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the rule was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateGatewayRuleResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the rule.</p>
   */
  inline GatewayRuleStatus GetStatus() const { return m_status; }
  inline void SetStatus(GatewayRuleStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateGatewayRuleResult& WithStatus(GatewayRuleStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>System-managed metadata for rules created by automated processes.</p>
   */
  inline const SystemManagedBlock& GetSystem() const { return m_system; }
  template <typename SystemT = SystemManagedBlock>
  void SetSystem(SystemT&& value) {
    m_systemHasBeenSet = true;
    m_system = std::forward<SystemT>(value);
  }
  template <typename SystemT = SystemManagedBlock>
  CreateGatewayRuleResult& WithSystem(SystemT&& value) {
    SetSystem(std::forward<SystemT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateGatewayRuleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_ruleId;

  Aws::String m_gatewayArn;

  int m_priority{0};

  Aws::Vector<Condition> m_conditions;

  Aws::Vector<Action> m_actions;

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  GatewayRuleStatus m_status{GatewayRuleStatus::NOT_SET};

  SystemManagedBlock m_system;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ruleIdHasBeenSet = false;
  bool m_gatewayArnHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_conditionsHasBeenSet = false;
  bool m_actionsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_systemHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
