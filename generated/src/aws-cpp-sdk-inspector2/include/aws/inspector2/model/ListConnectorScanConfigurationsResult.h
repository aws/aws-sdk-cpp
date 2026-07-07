/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ConnectorScanConfigurationItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {
class ListConnectorScanConfigurationsResult {
 public:
  AWS_INSPECTOR2_API ListConnectorScanConfigurationsResult() = default;
  AWS_INSPECTOR2_API ListConnectorScanConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_INSPECTOR2_API ListConnectorScanConfigurationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of scan configuration items.</p>
   */
  inline const Aws::Vector<ConnectorScanConfigurationItem>& GetScanConfigurations() const { return m_scanConfigurations; }
  template <typename ScanConfigurationsT = Aws::Vector<ConnectorScanConfigurationItem>>
  void SetScanConfigurations(ScanConfigurationsT&& value) {
    m_scanConfigurationsHasBeenSet = true;
    m_scanConfigurations = std::forward<ScanConfigurationsT>(value);
  }
  template <typename ScanConfigurationsT = Aws::Vector<ConnectorScanConfigurationItem>>
  ListConnectorScanConfigurationsResult& WithScanConfigurations(ScanConfigurationsT&& value) {
    SetScanConfigurations(std::forward<ScanConfigurationsT>(value));
    return *this;
  }
  template <typename ScanConfigurationsT = ConnectorScanConfigurationItem>
  ListConnectorScanConfigurationsResult& AddScanConfigurations(ScanConfigurationsT&& value) {
    m_scanConfigurationsHasBeenSet = true;
    m_scanConfigurations.emplace_back(std::forward<ScanConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token. If this value is not null, there are additional results
   * available. Use this token in the <code>nextToken</code> parameter of a
   * subsequent request to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListConnectorScanConfigurationsResult& WithNextToken(NextTokenT&& value) {
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
  ListConnectorScanConfigurationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ConnectorScanConfigurationItem> m_scanConfigurations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_scanConfigurationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
