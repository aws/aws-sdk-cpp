/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/Connection.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Interconnect {
namespace Model {
class GetConnectionResult {
 public:
  AWS_INTERCONNECT_API GetConnectionResult() = default;
  AWS_INTERCONNECT_API GetConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_INTERCONNECT_API GetConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The existing <a>Connection</a> resource.</p>
   */
  inline const Connection& GetConnection() const { return m_connection; }
  template <typename ConnectionT = Connection>
  void SetConnection(ConnectionT&& value) {
    m_connectionHasBeenSet = true;
    m_connection = std::forward<ConnectionT>(value);
  }
  template <typename ConnectionT = Connection>
  GetConnectionResult& WithConnection(ConnectionT&& value) {
    SetConnection(std::forward<ConnectionT>(value));
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
  GetConnectionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Connection m_connection;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_connectionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
