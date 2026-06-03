/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/Route53HealthCheck.h>
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
namespace ARCRegionswitch {
namespace Model {
class ListRoute53HealthChecksResult {
 public:
  AWS_ARCREGIONSWITCH_API ListRoute53HealthChecksResult() = default;
  AWS_ARCREGIONSWITCH_API ListRoute53HealthChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ARCREGIONSWITCH_API ListRoute53HealthChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of the health checks requested.</p>
   */
  inline const Aws::Vector<Route53HealthCheck>& GetHealthChecks() const { return m_healthChecks; }
  template <typename HealthChecksT = Aws::Vector<Route53HealthCheck>>
  void SetHealthChecks(HealthChecksT&& value) {
    m_healthChecksHasBeenSet = true;
    m_healthChecks = std::forward<HealthChecksT>(value);
  }
  template <typename HealthChecksT = Aws::Vector<Route53HealthCheck>>
  ListRoute53HealthChecksResult& WithHealthChecks(HealthChecksT&& value) {
    SetHealthChecks(std::forward<HealthChecksT>(value));
    return *this;
  }
  template <typename HealthChecksT = Route53HealthCheck>
  ListRoute53HealthChecksResult& AddHealthChecks(HealthChecksT&& value) {
    m_healthChecksHasBeenSet = true;
    m_healthChecks.emplace_back(std::forward<HealthChecksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token. A response may contain no results while still including a
   * <code>nextToken</code>. Continue paginating until <code>nextToken</code> is null
   * to retrieve all results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRoute53HealthChecksResult& WithNextToken(NextTokenT&& value) {
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
  ListRoute53HealthChecksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Route53HealthCheck> m_healthChecks;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_healthChecksHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
