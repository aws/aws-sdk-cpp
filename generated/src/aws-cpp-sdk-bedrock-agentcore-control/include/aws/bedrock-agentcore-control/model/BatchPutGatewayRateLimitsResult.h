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
class BatchPutGatewayRateLimitsResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API BatchPutGatewayRateLimitsResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API BatchPutGatewayRateLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API BatchPutGatewayRateLimitsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The resulting set of rate limits after the batch operation.</p>
   */
  inline const Aws::Vector<GatewayRateLimitDetail>& GetRateLimits() const { return m_rateLimits; }
  template <typename RateLimitsT = Aws::Vector<GatewayRateLimitDetail>>
  void SetRateLimits(RateLimitsT&& value) {
    m_rateLimitsHasBeenSet = true;
    m_rateLimits = std::forward<RateLimitsT>(value);
  }
  template <typename RateLimitsT = Aws::Vector<GatewayRateLimitDetail>>
  BatchPutGatewayRateLimitsResult& WithRateLimits(RateLimitsT&& value) {
    SetRateLimits(std::forward<RateLimitsT>(value));
    return *this;
  }
  template <typename RateLimitsT = GatewayRateLimitDetail>
  BatchPutGatewayRateLimitsResult& AddRateLimits(RateLimitsT&& value) {
    m_rateLimitsHasBeenSet = true;
    m_rateLimits.emplace_back(std::forward<RateLimitsT>(value));
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
  BatchPutGatewayRateLimitsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<GatewayRateLimitDetail> m_rateLimits;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rateLimitsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
