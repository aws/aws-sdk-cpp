/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/GatewayRuleDetail.h>
#include <aws/core/http/HttpResponse.h>
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
class ListGatewayRulesResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListGatewayRulesResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListGatewayRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListGatewayRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of gateway rules.</p>
   */
  inline const Aws::Vector<GatewayRuleDetail>& GetGatewayRules() const { return m_gatewayRules; }
  template <typename GatewayRulesT = Aws::Vector<GatewayRuleDetail>>
  void SetGatewayRules(GatewayRulesT&& value) {
    m_gatewayRulesHasBeenSet = true;
    m_gatewayRules = std::forward<GatewayRulesT>(value);
  }
  template <typename GatewayRulesT = Aws::Vector<GatewayRuleDetail>>
  ListGatewayRulesResult& WithGatewayRules(GatewayRulesT&& value) {
    SetGatewayRules(std::forward<GatewayRulesT>(value));
    return *this;
  }
  template <typename GatewayRulesT = GatewayRuleDetail>
  ListGatewayRulesResult& AddGatewayRules(GatewayRulesT&& value) {
    m_gatewayRulesHasBeenSet = true;
    m_gatewayRules.emplace_back(std::forward<GatewayRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use in a subsequent request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListGatewayRulesResult& WithNextToken(NextTokenT&& value) {
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
  ListGatewayRulesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<GatewayRuleDetail> m_gatewayRules;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_gatewayRulesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
