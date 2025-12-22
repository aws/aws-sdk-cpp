/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class GetPolicyGenerationRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetPolicyGenerationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetPolicyGeneration"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the policy generation request to be retrieved. This
   * must be a valid generation ID from a previous <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore-control/latest/APIReference/API_StartPolicyGeneration.html">StartPolicyGeneration</a>
   * call.</p>
   */
  inline const Aws::String& GetPolicyGenerationId() const { return m_policyGenerationId; }
  inline bool PolicyGenerationIdHasBeenSet() const { return m_policyGenerationIdHasBeenSet; }
  template <typename PolicyGenerationIdT = Aws::String>
  void SetPolicyGenerationId(PolicyGenerationIdT&& value) {
    m_policyGenerationIdHasBeenSet = true;
    m_policyGenerationId = std::forward<PolicyGenerationIdT>(value);
  }
  template <typename PolicyGenerationIdT = Aws::String>
  GetPolicyGenerationRequest& WithPolicyGenerationId(PolicyGenerationIdT&& value) {
    SetPolicyGenerationId(std::forward<PolicyGenerationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the policy engine associated with the policy generation
   * request. This provides the context for the generation operation and schema
   * validation.</p>
   */
  inline const Aws::String& GetPolicyEngineId() const { return m_policyEngineId; }
  inline bool PolicyEngineIdHasBeenSet() const { return m_policyEngineIdHasBeenSet; }
  template <typename PolicyEngineIdT = Aws::String>
  void SetPolicyEngineId(PolicyEngineIdT&& value) {
    m_policyEngineIdHasBeenSet = true;
    m_policyEngineId = std::forward<PolicyEngineIdT>(value);
  }
  template <typename PolicyEngineIdT = Aws::String>
  GetPolicyGenerationRequest& WithPolicyEngineId(PolicyEngineIdT&& value) {
    SetPolicyEngineId(std::forward<PolicyEngineIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyGenerationId;

  Aws::String m_policyEngineId;
  bool m_policyGenerationIdHasBeenSet = false;
  bool m_policyEngineIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
