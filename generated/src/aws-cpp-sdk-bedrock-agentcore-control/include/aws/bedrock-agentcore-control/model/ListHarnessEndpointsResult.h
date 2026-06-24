/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessEndpoint.h>
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
class ListHarnessEndpointsResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListHarnessEndpointsResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListHarnessEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListHarnessEndpointsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of harness endpoints.</p>
   */
  inline const Aws::Vector<HarnessEndpoint>& GetEndpoints() const { return m_endpoints; }
  template <typename EndpointsT = Aws::Vector<HarnessEndpoint>>
  void SetEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints = std::forward<EndpointsT>(value);
  }
  template <typename EndpointsT = Aws::Vector<HarnessEndpoint>>
  ListHarnessEndpointsResult& WithEndpoints(EndpointsT&& value) {
    SetEndpoints(std::forward<EndpointsT>(value));
    return *this;
  }
  template <typename EndpointsT = HarnessEndpoint>
  ListHarnessEndpointsResult& AddEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints.emplace_back(std::forward<EndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListHarnessEndpointsResult& WithNextToken(NextTokenT&& value) {
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
  ListHarnessEndpointsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<HarnessEndpoint> m_endpoints;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_endpointsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
