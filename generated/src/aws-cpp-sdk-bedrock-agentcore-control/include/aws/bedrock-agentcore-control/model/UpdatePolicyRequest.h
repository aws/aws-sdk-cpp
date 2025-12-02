/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PolicyDefinition.h>
#include <aws/bedrock-agentcore-control/model/PolicyValidationMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class UpdatePolicyRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdatePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePolicy"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the policy engine that manages the policy to be updated.
   * This ensures the policy is updated within the correct policy engine context.</p>
   */
  inline const Aws::String& GetPolicyEngineId() const { return m_policyEngineId; }
  inline bool PolicyEngineIdHasBeenSet() const { return m_policyEngineIdHasBeenSet; }
  template <typename PolicyEngineIdT = Aws::String>
  void SetPolicyEngineId(PolicyEngineIdT&& value) {
    m_policyEngineIdHasBeenSet = true;
    m_policyEngineId = std::forward<PolicyEngineIdT>(value);
  }
  template <typename PolicyEngineIdT = Aws::String>
  UpdatePolicyRequest& WithPolicyEngineId(PolicyEngineIdT&& value) {
    SetPolicyEngineId(std::forward<PolicyEngineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the policy to be updated. This must be a valid
   * policy ID that exists within the specified policy engine.</p>
   */
  inline const Aws::String& GetPolicyId() const { return m_policyId; }
  inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
  template <typename PolicyIdT = Aws::String>
  void SetPolicyId(PolicyIdT&& value) {
    m_policyIdHasBeenSet = true;
    m_policyId = std::forward<PolicyIdT>(value);
  }
  template <typename PolicyIdT = Aws::String>
  UpdatePolicyRequest& WithPolicyId(PolicyIdT&& value) {
    SetPolicyId(std::forward<PolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new human-readable description for the policy. This optional field allows
   * updating the policy's documentation while keeping the same policy logic.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdatePolicyRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new Cedar policy statement that defines the access control rules. This
   * replaces the existing policy definition with new logic while maintaining the
   * policy's identity.</p>
   */
  inline const PolicyDefinition& GetDefinition() const { return m_definition; }
  inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
  template <typename DefinitionT = PolicyDefinition>
  void SetDefinition(DefinitionT&& value) {
    m_definitionHasBeenSet = true;
    m_definition = std::forward<DefinitionT>(value);
  }
  template <typename DefinitionT = PolicyDefinition>
  UpdatePolicyRequest& WithDefinition(DefinitionT&& value) {
    SetDefinition(std::forward<DefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validation mode for the policy update. Determines how Cedar analyzer
   * validation results are handled during policy updates. FAIL_ON_ANY_FINDINGS runs
   * the Cedar analyzer and fails the update if validation issues are detected,
   * ensuring the policy conforms to the Cedar schema and tool context.
   * IGNORE_ALL_FINDINGS runs the Cedar analyzer but allows updates despite
   * validation warnings. Use FAIL_ON_ANY_FINDINGS to ensure policy correctness
   * during updates, especially when modifying policy logic or conditions.</p>
   */
  inline PolicyValidationMode GetValidationMode() const { return m_validationMode; }
  inline bool ValidationModeHasBeenSet() const { return m_validationModeHasBeenSet; }
  inline void SetValidationMode(PolicyValidationMode value) {
    m_validationModeHasBeenSet = true;
    m_validationMode = value;
  }
  inline UpdatePolicyRequest& WithValidationMode(PolicyValidationMode value) {
    SetValidationMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyEngineId;
  bool m_policyEngineIdHasBeenSet = false;

  Aws::String m_policyId;
  bool m_policyIdHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  PolicyDefinition m_definition;
  bool m_definitionHasBeenSet = false;

  PolicyValidationMode m_validationMode{PolicyValidationMode::NOT_SET};
  bool m_validationModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
