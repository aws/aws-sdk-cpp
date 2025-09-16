/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {
class ResponseCodeRequiredResult {
 public:
  AWS_RESTJSONPROTOCOL_API ResponseCodeRequiredResult() = default;
  AWS_RESTJSONPROTOCOL_API ResponseCodeRequiredResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API ResponseCodeRequiredResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline int GetResponseCode() const { return m_responseCode; }
  inline void SetResponseCode(int value) {
    m_responseCodeHasBeenSet = true;
    m_responseCode = value;
  }
  inline ResponseCodeRequiredResult& WithResponseCode(int value) {
    SetResponseCode(value);
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
  ResponseCodeRequiredResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  int m_responseCode{0};
  bool m_responseCodeHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
