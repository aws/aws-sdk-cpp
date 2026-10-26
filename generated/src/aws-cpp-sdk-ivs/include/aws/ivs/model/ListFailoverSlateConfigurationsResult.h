/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/FailoverSlateConfigurationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IVS {
namespace Model {
class ListFailoverSlateConfigurationsResult {
 public:
  AWS_IVS_API ListFailoverSlateConfigurationsResult() = default;
  AWS_IVS_API ListFailoverSlateConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IVS_API ListFailoverSlateConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of the matching failover slate configurations.</p>
   */
  inline const Aws::Vector<FailoverSlateConfigurationSummary>& GetFailoverSlateConfigurations() const {
    return m_failoverSlateConfigurations;
  }
  template <typename FailoverSlateConfigurationsT = Aws::Vector<FailoverSlateConfigurationSummary>>
  void SetFailoverSlateConfigurations(FailoverSlateConfigurationsT&& value) {
    m_failoverSlateConfigurationsHasBeenSet = true;
    m_failoverSlateConfigurations = std::forward<FailoverSlateConfigurationsT>(value);
  }
  template <typename FailoverSlateConfigurationsT = Aws::Vector<FailoverSlateConfigurationSummary>>
  ListFailoverSlateConfigurationsResult& WithFailoverSlateConfigurations(FailoverSlateConfigurationsT&& value) {
    SetFailoverSlateConfigurations(std::forward<FailoverSlateConfigurationsT>(value));
    return *this;
  }
  template <typename FailoverSlateConfigurationsT = FailoverSlateConfigurationSummary>
  ListFailoverSlateConfigurationsResult& AddFailoverSlateConfigurations(FailoverSlateConfigurationsT&& value) {
    m_failoverSlateConfigurationsHasBeenSet = true;
    m_failoverSlateConfigurations.emplace_back(std::forward<FailoverSlateConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If there are more failover slate configurations than <code>maxResults</code>,
   * use <code>nextToken</code> in the request to get the next set.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFailoverSlateConfigurationsResult& WithNextToken(NextTokenT&& value) {
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
  ListFailoverSlateConfigurationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FailoverSlateConfigurationSummary> m_failoverSlateConfigurations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_failoverSlateConfigurationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
