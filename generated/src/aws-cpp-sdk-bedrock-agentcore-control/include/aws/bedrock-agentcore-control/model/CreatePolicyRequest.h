/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PolicyDefinition.h>
#include <aws/bedrock-agentcore-control/model/PolicyValidationMode.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class CreatePolicyRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreatePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePolicy"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The customer-assigned immutable name for the policy. Must be unique within
   * the account. This name is used for policy identification and cannot be changed
   * after creation.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreatePolicyRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Cedar policy statement that defines the access control rules. This
   * contains the actual policy logic written in Cedar policy language, specifying
   * effect (permit or forbid), principals, actions, resources, and conditions for
   * agent behavior control.</p>
   */
  inline const PolicyDefinition& GetDefinition() const { return m_definition; }
  inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
  template <typename DefinitionT = PolicyDefinition>
  void SetDefinition(DefinitionT&& value) {
    m_definitionHasBeenSet = true;
    m_definition = std::forward<DefinitionT>(value);
  }
  template <typename DefinitionT = PolicyDefinition>
  CreatePolicyRequest& WithDefinition(DefinitionT&& value) {
    SetDefinition(std::forward<DefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the policy's purpose and functionality
   * (1-4,096 characters). This helps policy administrators understand the policy's
   * intent, business rules, and operational scope. Use this field to document why
   * the policy exists, what business requirement it addresses, and any special
   * considerations for maintenance. Clear descriptions are essential for policy
   * governance, auditing, and troubleshooting.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreatePolicyRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validation mode for the policy creation. Determines how Cedar analyzer
   * validation results are handled during policy creation. FAIL_ON_ANY_FINDINGS
   * (default) runs the Cedar analyzer to validate the policy against the Cedar
   * schema and tool context, failing creation if the analyzer detects any validation
   * issues to ensure strict conformance. IGNORE_ALL_FINDINGS runs the Cedar analyzer
   * but allows policy creation even if validation issues are detected, useful for
   * testing or when the policy schema is evolving. Use FAIL_ON_ANY_FINDINGS for
   * production policies to ensure correctness, and IGNORE_ALL_FINDINGS only when you
   * understand and accept the analyzer findings.</p>
   */
  inline PolicyValidationMode GetValidationMode() const { return m_validationMode; }
  inline bool ValidationModeHasBeenSet() const { return m_validationModeHasBeenSet; }
  inline void SetValidationMode(PolicyValidationMode value) {
    m_validationModeHasBeenSet = true;
    m_validationMode = value;
  }
  inline CreatePolicyRequest& WithValidationMode(PolicyValidationMode value) {
    SetValidationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the policy engine which contains this policy. Policy
   * engines group related policies and provide the execution context for policy
   * evaluation.</p>
   */
  inline const Aws::String& GetPolicyEngineId() const { return m_policyEngineId; }
  inline bool PolicyEngineIdHasBeenSet() const { return m_policyEngineIdHasBeenSet; }
  template <typename PolicyEngineIdT = Aws::String>
  void SetPolicyEngineId(PolicyEngineIdT&& value) {
    m_policyEngineIdHasBeenSet = true;
    m_policyEngineId = std::forward<PolicyEngineIdT>(value);
  }
  template <typename PolicyEngineIdT = Aws::String>
  CreatePolicyRequest& WithPolicyEngineId(PolicyEngineIdT&& value) {
    SetPolicyEngineId(std::forward<PolicyEngineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure the idempotency of the request.
   * The AWS SDK automatically generates this token, so you don't need to provide it
   * in most cases. If you retry a request with the same client token, the service
   * returns the same response without creating a duplicate policy.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreatePolicyRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  PolicyDefinition m_definition;
  bool m_definitionHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  PolicyValidationMode m_validationMode{PolicyValidationMode::NOT_SET};
  bool m_validationModeHasBeenSet = false;

  Aws::String m_policyEngineId;
  bool m_policyEngineIdHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
