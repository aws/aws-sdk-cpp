/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PolicyGenerationStatus.h>
#include <aws/bedrock-agentcore-control/model/Resource.h>
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
 * <p>Represents a policy generation request within the AgentCore Policy system.
 * Tracks the AI-powered conversion of natural language descriptions into Cedar
 * policy statements, enabling users to author policies by describing authorization
 * requirements in plain English. The generation process analyzes the natural
 * language input along with the Gateway's tool context and Cedar schema to produce
 * one or more validated policy options. Each generation request tracks the status
 * of the conversion process and maintains findings about the generated policies,
 * including validation results and potential issues. Generated policy assets
 * remain available for one week after successful generation, allowing time to
 * review and create policies from the generated options.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PolicyGeneration">AWS
 * API Reference</a></p>
 */
class PolicyGeneration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PolicyGeneration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PolicyGeneration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PolicyGeneration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the policy engine associated with this generation
   * request.</p>
   */
  inline const Aws::String& GetPolicyEngineId() const { return m_policyEngineId; }
  inline bool PolicyEngineIdHasBeenSet() const { return m_policyEngineIdHasBeenSet; }
  template <typename PolicyEngineIdT = Aws::String>
  void SetPolicyEngineId(PolicyEngineIdT&& value) {
    m_policyEngineIdHasBeenSet = true;
    m_policyEngineId = std::forward<PolicyEngineIdT>(value);
  }
  template <typename PolicyEngineIdT = Aws::String>
  PolicyGeneration& WithPolicyEngineId(PolicyEngineIdT&& value) {
    SetPolicyEngineId(std::forward<PolicyEngineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for this policy generation request.</p>
   */
  inline const Aws::String& GetPolicyGenerationId() const { return m_policyGenerationId; }
  inline bool PolicyGenerationIdHasBeenSet() const { return m_policyGenerationIdHasBeenSet; }
  template <typename PolicyGenerationIdT = Aws::String>
  void SetPolicyGenerationId(PolicyGenerationIdT&& value) {
    m_policyGenerationIdHasBeenSet = true;
    m_policyGenerationId = std::forward<PolicyGenerationIdT>(value);
  }
  template <typename PolicyGenerationIdT = Aws::String>
  PolicyGeneration& WithPolicyGenerationId(PolicyGenerationIdT&& value) {
    SetPolicyGenerationId(std::forward<PolicyGenerationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer-assigned name for this policy generation request.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PolicyGeneration& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of this policy generation request.</p>
   */
  inline const Aws::String& GetPolicyGenerationArn() const { return m_policyGenerationArn; }
  inline bool PolicyGenerationArnHasBeenSet() const { return m_policyGenerationArnHasBeenSet; }
  template <typename PolicyGenerationArnT = Aws::String>
  void SetPolicyGenerationArn(PolicyGenerationArnT&& value) {
    m_policyGenerationArnHasBeenSet = true;
    m_policyGenerationArn = std::forward<PolicyGenerationArnT>(value);
  }
  template <typename PolicyGenerationArnT = Aws::String>
  PolicyGeneration& WithPolicyGenerationArn(PolicyGenerationArnT&& value) {
    SetPolicyGenerationArn(std::forward<PolicyGenerationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource information associated with this policy generation.</p>
   */
  inline const Resource& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Resource>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Resource>
  PolicyGeneration& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this policy generation request was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  PolicyGeneration& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this policy generation was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PolicyGeneration& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of this policy generation request.</p>
   */
  inline PolicyGenerationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PolicyGenerationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PolicyGeneration& WithStatus(PolicyGenerationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the generation status.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStatusReasons() const { return m_statusReasons; }
  inline bool StatusReasonsHasBeenSet() const { return m_statusReasonsHasBeenSet; }
  template <typename StatusReasonsT = Aws::Vector<Aws::String>>
  void SetStatusReasons(StatusReasonsT&& value) {
    m_statusReasonsHasBeenSet = true;
    m_statusReasons = std::forward<StatusReasonsT>(value);
  }
  template <typename StatusReasonsT = Aws::Vector<Aws::String>>
  PolicyGeneration& WithStatusReasons(StatusReasonsT&& value) {
    SetStatusReasons(std::forward<StatusReasonsT>(value));
    return *this;
  }
  template <typename StatusReasonsT = Aws::String>
  PolicyGeneration& AddStatusReasons(StatusReasonsT&& value) {
    m_statusReasonsHasBeenSet = true;
    m_statusReasons.emplace_back(std::forward<StatusReasonsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Findings and insights from this policy generation process.</p>
   */
  inline const Aws::String& GetFindings() const { return m_findings; }
  inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
  template <typename FindingsT = Aws::String>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = Aws::String>
  PolicyGeneration& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyEngineId;

  Aws::String m_policyGenerationId;

  Aws::String m_name;

  Aws::String m_policyGenerationArn;

  Resource m_resource;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  PolicyGenerationStatus m_status{PolicyGenerationStatus::NOT_SET};

  Aws::Vector<Aws::String> m_statusReasons;

  Aws::String m_findings;
  bool m_policyEngineIdHasBeenSet = false;
  bool m_policyGenerationIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_policyGenerationArnHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonsHasBeenSet = false;
  bool m_findingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
