/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/VerificationStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {
class ValidateNotifyCodeVerificationResult {
 public:
  AWS_ENDUSERMESSAGING_API ValidateNotifyCodeVerificationResult() = default;
  AWS_ENDUSERMESSAGING_API ValidateNotifyCodeVerificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ENDUSERMESSAGING_API ValidateNotifyCodeVerificationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The outcome of the validation attempt. VALID indicates that the submitted
   * passcode matched an active verification. INVALID indicates that the passcode did
   * not match, expired, or exceeded its attempt limit.</p>
   */
  inline VerificationStatus GetStatus() const { return m_status; }
  inline void SetStatus(VerificationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ValidateNotifyCodeVerificationResult& WithStatus(VerificationStatus value) {
    SetStatus(value);
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
  ValidateNotifyCodeVerificationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  VerificationStatus m_status{VerificationStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
