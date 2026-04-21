/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/Connector.h>

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
class CreateEnvironmentConnectorResult {
 public:
  AWS_EVS_API CreateEnvironmentConnectorResult() = default;
  AWS_EVS_API CreateEnvironmentConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EVS_API CreateEnvironmentConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A description of the created connector.</p>
   */
  inline const Connector& GetConnector() const { return m_connector; }
  template <typename ConnectorT = Connector>
  void SetConnector(ConnectorT&& value) {
    m_connectorHasBeenSet = true;
    m_connector = std::forward<ConnectorT>(value);
  }
  template <typename ConnectorT = Connector>
  CreateEnvironmentConnectorResult& WithConnector(ConnectorT&& value) {
    SetConnector(std::forward<ConnectorT>(value));
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
  CreateEnvironmentConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Connector m_connector;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_connectorHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
