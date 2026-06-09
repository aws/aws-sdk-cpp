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
 * <p>Represents a metadata-only summary of a policy generation resource. This
 * structure contains resource identifiers, status, timestamps, and findings
 * without customer-encrypted fields such as status reasons. Policy generation
 * summaries are returned by operations that do not require access to the
 * customer's KMS key.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PolicyGenerationSummary">AWS
 * API Reference</a></p>
 */
class PolicyGenerationSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PolicyGenerationSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PolicyGenerationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PolicyGenerationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  PolicyGenerationSummary& WithPolicyEngineId(PolicyEngineIdT&& value) {
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
  PolicyGenerationSummary& WithPolicyGenerationId(PolicyGenerationIdT&& value) {
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
  PolicyGenerationSummary& WithName(NameT&& value) {
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
  PolicyGenerationSummary& WithPolicyGenerationArn(PolicyGenerationArnT&& value) {
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
  PolicyGenerationSummary& WithResource(ResourceT&& value) {
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
  PolicyGenerationSummary& WithCreatedAt(CreatedAtT&& value) {
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
  PolicyGenerationSummary& WithUpdatedAt(UpdatedAtT&& value) {
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
  inline PolicyGenerationSummary& WithStatus(PolicyGenerationStatus value) {
    SetStatus(value);
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
  PolicyGenerationSummary& WithFindings(FindingsT&& value) {
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

  Aws::String m_findings;
  bool m_policyEngineIdHasBeenSet = false;
  bool m_policyGenerationIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_policyGenerationArnHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_findingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
