/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PolicyEngineStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Represents a policy engine resource within the AgentCore Policy system.
 * Policy engines serve as containers for grouping related policies and provide the
 * execution context for policy evaluation and management. Each policy engine can
 * be associated with one Gateway (one engine per Gateway), where it intercepts all
 * agent tool calls and evaluates them against the contained policies before
 * allowing tools to execute. The policy engine maintains the Cedar schema
 * generated from the Gateway's tool manifest, ensuring that policies are validated
 * against the actual tools and parameters available. Policy engines support two
 * enforcement modes that can be configured when associating with a Gateway:
 * log-only mode for testing (evaluates decisions without blocking) and enforce
 * mode for production (actively allows or denies based on policy
 * evaluation).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PolicyEngine">AWS
 * API Reference</a></p>
 */
class PolicyEngine {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PolicyEngine() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PolicyEngine(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PolicyEngine& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the policy engine. This system-generated identifier
   * consists of the user name plus a 10-character generated suffix and serves as the
   * primary key for policy engine operations.</p>
   */
  inline const Aws::String& GetPolicyEngineId() const { return m_policyEngineId; }
  inline bool PolicyEngineIdHasBeenSet() const { return m_policyEngineIdHasBeenSet; }
  template <typename PolicyEngineIdT = Aws::String>
  void SetPolicyEngineId(PolicyEngineIdT&& value) {
    m_policyEngineIdHasBeenSet = true;
    m_policyEngineId = std::forward<PolicyEngineIdT>(value);
  }
  template <typename PolicyEngineIdT = Aws::String>
  PolicyEngine& WithPolicyEngineId(PolicyEngineIdT&& value) {
    SetPolicyEngineId(std::forward<PolicyEngineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer-assigned immutable name for the policy engine. This
   * human-readable identifier must be unique within the account and cannot exceed 48
   * characters.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PolicyEngine& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the policy engine's purpose and scope.
   * Limited to 4,096 characters, this helps administrators understand the policy
   * engine's role in the overall governance strategy.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PolicyEngine& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the policy engine was originally created. This is
   * automatically set by the service and used for auditing and lifecycle
   * management.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  PolicyEngine& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the policy engine was last modified. This tracks the most
   * recent changes to the policy engine configuration or metadata.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PolicyEngine& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the policy engine. This globally unique
   * identifier can be used for cross-service references and IAM policy
   * statements.</p>
   */
  inline const Aws::String& GetPolicyEngineArn() const { return m_policyEngineArn; }
  inline bool PolicyEngineArnHasBeenSet() const { return m_policyEngineArnHasBeenSet; }
  template <typename PolicyEngineArnT = Aws::String>
  void SetPolicyEngineArn(PolicyEngineArnT&& value) {
    m_policyEngineArnHasBeenSet = true;
    m_policyEngineArn = std::forward<PolicyEngineArnT>(value);
  }
  template <typename PolicyEngineArnT = Aws::String>
  PolicyEngine& WithPolicyEngineArn(PolicyEngineArnT&& value) {
    SetPolicyEngineArn(std::forward<PolicyEngineArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the policy engine.</p>
   */
  inline PolicyEngineStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PolicyEngineStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PolicyEngine& WithStatus(PolicyEngineStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the policy engine status. This provides details
   * about any failures or the current state of the policy engine lifecycle.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStatusReasons() const { return m_statusReasons; }
  inline bool StatusReasonsHasBeenSet() const { return m_statusReasonsHasBeenSet; }
  template <typename StatusReasonsT = Aws::Vector<Aws::String>>
  void SetStatusReasons(StatusReasonsT&& value) {
    m_statusReasonsHasBeenSet = true;
    m_statusReasons = std::forward<StatusReasonsT>(value);
  }
  template <typename StatusReasonsT = Aws::Vector<Aws::String>>
  PolicyEngine& WithStatusReasons(StatusReasonsT&& value) {
    SetStatusReasons(std::forward<StatusReasonsT>(value));
    return *this;
  }
  template <typename StatusReasonsT = Aws::String>
  PolicyEngine& AddStatusReasons(StatusReasonsT&& value) {
    m_statusReasonsHasBeenSet = true;
    m_statusReasons.emplace_back(std::forward<StatusReasonsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyEngineId;
  bool m_policyEngineIdHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  Aws::String m_policyEngineArn;
  bool m_policyEngineArnHasBeenSet = false;

  PolicyEngineStatus m_status{PolicyEngineStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Vector<Aws::String> m_statusReasons;
  bool m_statusReasonsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
