/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
 * <p>Represents the information identifying a generated policy asset from the
 * AI-powered policy generation process within the AgentCore Policy system. Each
 * asset contains a Cedar policy statement generated from natural language input,
 * along with associated metadata and analysis findings to help users evaluate and
 * select the most appropriate policy option.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PolicyGenerationDetails">AWS
 * API Reference</a></p>
 */
class PolicyGenerationDetails {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PolicyGenerationDetails() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PolicyGenerationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PolicyGenerationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  PolicyGenerationDetails& WithPolicyGenerationId(PolicyGenerationIdT&& value) {
    SetPolicyGenerationId(std::forward<PolicyGenerationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for this generated policy asset within the policy
   * generation request.</p>
   */
  inline const Aws::String& GetPolicyGenerationAssetId() const { return m_policyGenerationAssetId; }
  inline bool PolicyGenerationAssetIdHasBeenSet() const { return m_policyGenerationAssetIdHasBeenSet; }
  template <typename PolicyGenerationAssetIdT = Aws::String>
  void SetPolicyGenerationAssetId(PolicyGenerationAssetIdT&& value) {
    m_policyGenerationAssetIdHasBeenSet = true;
    m_policyGenerationAssetId = std::forward<PolicyGenerationAssetIdT>(value);
  }
  template <typename PolicyGenerationAssetIdT = Aws::String>
  PolicyGenerationDetails& WithPolicyGenerationAssetId(PolicyGenerationAssetIdT&& value) {
    SetPolicyGenerationAssetId(std::forward<PolicyGenerationAssetIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyGenerationId;

  Aws::String m_policyGenerationAssetId;
  bool m_policyGenerationIdHasBeenSet = false;
  bool m_policyGenerationAssetIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
