/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/protocol-mock/ProtocolMock_EXPORTS.h>
#include <aws/protocol-mock/model/Request.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ProtocolMock {
namespace Model {
class GetRequestsReceivedResult {
 public:
  AWS_PROTOCOLMOCK_API GetRequestsReceivedResult() = default;
  AWS_PROTOCOLMOCK_API GetRequestsReceivedResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PROTOCOLMOCK_API GetRequestsReceivedResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline int GetStatusCode() const { return m_statusCode; }
  inline void SetStatusCode(int value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = value;
  }
  inline GetRequestsReceivedResult& WithStatusCode(int value) {
    SetStatusCode(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Request>& GetRequests() const { return m_requests; }
  template <typename RequestsT = Aws::Vector<Request>>
  void SetRequests(RequestsT&& value) {
    m_requestsHasBeenSet = true;
    m_requests = std::forward<RequestsT>(value);
  }
  template <typename RequestsT = Aws::Vector<Request>>
  GetRequestsReceivedResult& WithRequests(RequestsT&& value) {
    SetRequests(std::forward<RequestsT>(value));
    return *this;
  }
  template <typename RequestsT = Request>
  GetRequestsReceivedResult& AddRequests(RequestsT&& value) {
    m_requestsHasBeenSet = true;
    m_requests.emplace_back(std::forward<RequestsT>(value));
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
  GetRequestsReceivedResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  int m_statusCode{0};
  bool m_statusCodeHasBeenSet = false;

  Aws::Vector<Request> m_requests;
  bool m_requestsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ProtocolMock
}  // namespace Aws
