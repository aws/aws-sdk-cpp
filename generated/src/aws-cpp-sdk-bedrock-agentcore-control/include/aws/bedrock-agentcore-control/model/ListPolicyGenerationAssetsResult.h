/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PolicyGenerationAsset.h>
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
class ListPolicyGenerationAssetsResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListPolicyGenerationAssetsResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListPolicyGenerationAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListPolicyGenerationAssetsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of generated policy assets including Cedar policies and related
   * artifacts from the AI-powered policy generation process. Each asset represents a
   * different policy option or variation generated from the original natural
   * language input.</p>
   */
  inline const Aws::Vector<PolicyGenerationAsset>& GetPolicyGenerationAssets() const { return m_policyGenerationAssets; }
  template <typename PolicyGenerationAssetsT = Aws::Vector<PolicyGenerationAsset>>
  void SetPolicyGenerationAssets(PolicyGenerationAssetsT&& value) {
    m_policyGenerationAssetsHasBeenSet = true;
    m_policyGenerationAssets = std::forward<PolicyGenerationAssetsT>(value);
  }
  template <typename PolicyGenerationAssetsT = Aws::Vector<PolicyGenerationAsset>>
  ListPolicyGenerationAssetsResult& WithPolicyGenerationAssets(PolicyGenerationAssetsT&& value) {
    SetPolicyGenerationAssets(std::forward<PolicyGenerationAssetsT>(value));
    return *this;
  }
  template <typename PolicyGenerationAssetsT = PolicyGenerationAsset>
  ListPolicyGenerationAssetsResult& AddPolicyGenerationAssets(PolicyGenerationAssetsT&& value) {
    m_policyGenerationAssetsHasBeenSet = true;
    m_policyGenerationAssets.emplace_back(std::forward<PolicyGenerationAssetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token that can be used in subsequent <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore-control/latest/APIReference/API_ListPolicyGenerationAssets.html">ListPolicyGenerationAssets</a>
   * calls to retrieve additional assets. This token is only present when there are
   * more generated policy assets available beyond the current response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPolicyGenerationAssetsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListPolicyGenerationAssetsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PolicyGenerationAsset> m_policyGenerationAssets;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_policyGenerationAssetsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
