/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/GatewayRateLimitDetail.h>
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
class ListGatewayRateLimitsResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListGatewayRateLimitsResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListGatewayRateLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListGatewayRateLimitsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of rate limits for the gateway.</p>
   */
  inline const Aws::Vector<GatewayRateLimitDetail>& GetRateLimits() const { return m_rateLimits; }
  template <typename RateLimitsT = Aws::Vector<GatewayRateLimitDetail>>
  void SetRateLimits(RateLimitsT&& value) {
    m_rateLimitsHasBeenSet = true;
    m_rateLimits = std::forward<RateLimitsT>(value);
  }
  template <typename RateLimitsT = Aws::Vector<GatewayRateLimitDetail>>
  ListGatewayRateLimitsResult& WithRateLimits(RateLimitsT&& value) {
    SetRateLimits(std::forward<RateLimitsT>(value));
    return *this;
  }
  template <typename RateLimitsT = GatewayRateLimitDetail>
  ListGatewayRateLimitsResult& AddRateLimits(RateLimitsT&& value) {
    m_rateLimitsHasBeenSet = true;
    m_rateLimits.emplace_back(std::forward<RateLimitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results. If this value is absent, there are no
   * more results to retrieve.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListGatewayRateLimitsResult& WithNextToken(NextTokenT&& value) {
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
  ListGatewayRateLimitsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<GatewayRateLimitDetail> m_rateLimits;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rateLimitsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
