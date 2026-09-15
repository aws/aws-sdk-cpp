/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/BillingMode.h>
#include <aws/directconnect/model/Connection.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DirectConnect {
namespace Model {
class UpdateConnectionsBillingModeResult {
 public:
  AWS_DIRECTCONNECT_API UpdateConnectionsBillingModeResult() = default;
  AWS_DIRECTCONNECT_API UpdateConnectionsBillingModeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DIRECTCONNECT_API UpdateConnectionsBillingModeResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The billing mode applied to the connections.</p>
   */
  inline BillingMode GetBillingMode() const { return m_billingMode; }
  inline void SetBillingMode(BillingMode value) {
    m_billingModeHasBeenSet = true;
    m_billingMode = value;
  }
  inline UpdateConnectionsBillingModeResult& WithBillingMode(BillingMode value) {
    SetBillingMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connections with the updated billing mode.</p>
   */
  inline const Aws::Vector<Connection>& GetConnections() const { return m_connections; }
  template <typename ConnectionsT = Aws::Vector<Connection>>
  void SetConnections(ConnectionsT&& value) {
    m_connectionsHasBeenSet = true;
    m_connections = std::forward<ConnectionsT>(value);
  }
  template <typename ConnectionsT = Aws::Vector<Connection>>
  UpdateConnectionsBillingModeResult& WithConnections(ConnectionsT&& value) {
    SetConnections(std::forward<ConnectionsT>(value));
    return *this;
  }
  template <typename ConnectionsT = Connection>
  UpdateConnectionsBillingModeResult& AddConnections(ConnectionsT&& value) {
    m_connectionsHasBeenSet = true;
    m_connections.emplace_back(std::forward<ConnectionsT>(value));
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
  UpdateConnectionsBillingModeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  BillingMode m_billingMode{BillingMode::NOT_SET};

  Aws::Vector<Connection> m_connections;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_billingModeHasBeenSet = false;
  bool m_connectionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
