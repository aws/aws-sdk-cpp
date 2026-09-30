/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/ServiceQuotaWarningSummary.h>
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
class ListServiceQuotaWarningsResult {
 public:
  AWS_ARCREGIONSWITCH_API ListServiceQuotaWarningsResult() = default;
  AWS_ARCREGIONSWITCH_API ListServiceQuotaWarningsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ARCREGIONSWITCH_API ListServiceQuotaWarningsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The service quota warnings for the plans that you can access.</p>
   */
  inline const Aws::Vector<ServiceQuotaWarningSummary>& GetServiceQuotaWarningSummaries() const { return m_serviceQuotaWarningSummaries; }
  template <typename ServiceQuotaWarningSummariesT = Aws::Vector<ServiceQuotaWarningSummary>>
  void SetServiceQuotaWarningSummaries(ServiceQuotaWarningSummariesT&& value) {
    m_serviceQuotaWarningSummariesHasBeenSet = true;
    m_serviceQuotaWarningSummaries = std::forward<ServiceQuotaWarningSummariesT>(value);
  }
  template <typename ServiceQuotaWarningSummariesT = Aws::Vector<ServiceQuotaWarningSummary>>
  ListServiceQuotaWarningsResult& WithServiceQuotaWarningSummaries(ServiceQuotaWarningSummariesT&& value) {
    SetServiceQuotaWarningSummaries(std::forward<ServiceQuotaWarningSummariesT>(value));
    return *this;
  }
  template <typename ServiceQuotaWarningSummariesT = ServiceQuotaWarningSummary>
  ListServiceQuotaWarningsResult& AddServiceQuotaWarningSummaries(ServiceQuotaWarningSummariesT&& value) {
    m_serviceQuotaWarningSummariesHasBeenSet = true;
    m_serviceQuotaWarningSummaries.emplace_back(std::forward<ServiceQuotaWarningSummariesT>(value));
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
  ListServiceQuotaWarningsResult& WithNextToken(NextTokenT&& value) {
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
  ListServiceQuotaWarningsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ServiceQuotaWarningSummary> m_serviceQuotaWarningSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_serviceQuotaWarningSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
