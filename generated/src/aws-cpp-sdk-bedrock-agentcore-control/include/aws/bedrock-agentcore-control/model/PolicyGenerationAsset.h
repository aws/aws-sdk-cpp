/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Finding.h>
#include <aws/bedrock-agentcore-control/model/PolicyDefinition.h>
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
 * <p>Represents a generated policy asset from the AI-powered policy generation
 * process within the AgentCore Policy system. Each asset contains a Cedar policy
 * statement generated from natural language input, along with associated metadata
 * and analysis findings to help users evaluate and select the most appropriate
 * policy option.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PolicyGenerationAsset">AWS
 * API Reference</a></p>
 */
class PolicyGenerationAsset {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PolicyGenerationAsset() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PolicyGenerationAsset(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PolicyGenerationAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for this generated policy asset within the policy
   * generation request. This ID can be used to reference specific generated policy
   * options when creating actual policies from the generation results.</p>
   */
  inline const Aws::String& GetPolicyGenerationAssetId() const { return m_policyGenerationAssetId; }
  inline bool PolicyGenerationAssetIdHasBeenSet() const { return m_policyGenerationAssetIdHasBeenSet; }
  template <typename PolicyGenerationAssetIdT = Aws::String>
  void SetPolicyGenerationAssetId(PolicyGenerationAssetIdT&& value) {
    m_policyGenerationAssetIdHasBeenSet = true;
    m_policyGenerationAssetId = std::forward<PolicyGenerationAssetIdT>(value);
  }
  template <typename PolicyGenerationAssetIdT = Aws::String>
  PolicyGenerationAsset& WithPolicyGenerationAssetId(PolicyGenerationAssetIdT&& value) {
    SetPolicyGenerationAssetId(std::forward<PolicyGenerationAssetIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const PolicyDefinition& GetDefinition() const { return m_definition; }
  inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
  template <typename DefinitionT = PolicyDefinition>
  void SetDefinition(DefinitionT&& value) {
    m_definitionHasBeenSet = true;
    m_definition = std::forward<DefinitionT>(value);
  }
  template <typename DefinitionT = PolicyDefinition>
  PolicyGenerationAsset& WithDefinition(DefinitionT&& value) {
    SetDefinition(std::forward<DefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The portion of the original natural language input that this generated policy
   * asset addresses. This helps users understand which part of their policy
   * description was translated into this specific Cedar policy statement, enabling
   * better policy selection and refinement. When a single natural language input
   * describes multiple authorization requirements, the generation process creates
   * separate policy assets for each requirement, with each asset's rawTextFragment
   * showing which requirement it addresses. Use this mapping to verify that all
   * parts of your natural language input were correctly translated into Cedar
   * policies.</p>
   */
  inline const Aws::String& GetRawTextFragment() const { return m_rawTextFragment; }
  inline bool RawTextFragmentHasBeenSet() const { return m_rawTextFragmentHasBeenSet; }
  template <typename RawTextFragmentT = Aws::String>
  void SetRawTextFragment(RawTextFragmentT&& value) {
    m_rawTextFragmentHasBeenSet = true;
    m_rawTextFragment = std::forward<RawTextFragmentT>(value);
  }
  template <typename RawTextFragmentT = Aws::String>
  PolicyGenerationAsset& WithRawTextFragment(RawTextFragmentT&& value) {
    SetRawTextFragment(std::forward<RawTextFragmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Analysis findings and insights related to this specific generated policy
   * asset. These findings may include validation results, potential issues, or
   * recommendations for improvement to help users evaluate the quality and
   * appropriateness of the generated policy.</p>
   */
  inline const Aws::Vector<Finding>& GetFindings() const { return m_findings; }
  inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
  template <typename FindingsT = Aws::Vector<Finding>>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = Aws::Vector<Finding>>
  PolicyGenerationAsset& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
    return *this;
  }
  template <typename FindingsT = Finding>
  PolicyGenerationAsset& AddFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings.emplace_back(std::forward<FindingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyGenerationAssetId;

  PolicyDefinition m_definition;

  Aws::String m_rawTextFragment;

  Aws::Vector<Finding> m_findings;
  bool m_policyGenerationAssetIdHasBeenSet = false;
  bool m_definitionHasBeenSet = false;
  bool m_rawTextFragmentHasBeenSet = false;
  bool m_findingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
