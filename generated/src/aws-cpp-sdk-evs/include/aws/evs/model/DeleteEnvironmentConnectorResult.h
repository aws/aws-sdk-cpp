/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/Connector.h>
#include <aws/evs/model/EnvironmentSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EVS {
namespace Model {
class DeleteEnvironmentConnectorResult {
 public:
  AWS_EVS_API DeleteEnvironmentConnectorResult() = default;
  AWS_EVS_API DeleteEnvironmentConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EVS_API DeleteEnvironmentConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A description of the deleted connector.</p>
   */
  inline const Connector& GetConnector() const { return m_connector; }
  template <typename ConnectorT = Connector>
  void SetConnector(ConnectorT&& value) {
    m_connectorHasBeenSet = true;
    m_connector = std::forward<ConnectorT>(value);
  }
  template <typename ConnectorT = Connector>
  DeleteEnvironmentConnectorResult& WithConnector(ConnectorT&& value) {
    SetConnector(std::forward<ConnectorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the environment that the connector was deleted from.</p>
   */
  inline const EnvironmentSummary& GetEnvironmentSummary() const { return m_environmentSummary; }
  template <typename EnvironmentSummaryT = EnvironmentSummary>
  void SetEnvironmentSummary(EnvironmentSummaryT&& value) {
    m_environmentSummaryHasBeenSet = true;
    m_environmentSummary = std::forward<EnvironmentSummaryT>(value);
  }
  template <typename EnvironmentSummaryT = EnvironmentSummary>
  DeleteEnvironmentConnectorResult& WithEnvironmentSummary(EnvironmentSummaryT&& value) {
    SetEnvironmentSummary(std::forward<EnvironmentSummaryT>(value));
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
  DeleteEnvironmentConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Connector m_connector;

  EnvironmentSummary m_environmentSummary;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_connectorHasBeenSet = false;
  bool m_environmentSummaryHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
