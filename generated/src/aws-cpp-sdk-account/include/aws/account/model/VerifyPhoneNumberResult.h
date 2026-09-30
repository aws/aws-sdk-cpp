/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/model/PhoneNumberVerificationStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Account {
namespace Model {
class VerifyPhoneNumberResult {
 public:
  AWS_ACCOUNT_API VerifyPhoneNumberResult() = default;
  AWS_ACCOUNT_API VerifyPhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACCOUNT_API VerifyPhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The verification status of the phone number in the primary contact
   * information after the submitted one-time passcode is evaluated. Valid
   * values:</p> <ul> <li> <p> <code>PENDING</code> – A one-time passcode has been
   * sent and is waiting to be submitted.</p> </li> <li> <p> <code>VERIFIED</code> –
   * The phone number has been verified.</p> </li> <li> <p> <code>UNVERIFIED</code> –
   * The phone number has not been verified.</p> </li> <li> <p>
   * <code>NOT_SUPPORTED</code> – Phone number verification isn't available for this
   * account.</p> </li> </ul>
   */
  inline PhoneNumberVerificationStatus GetStatus() const { return m_status; }
  inline void SetStatus(PhoneNumberVerificationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline VerifyPhoneNumberResult& WithStatus(PhoneNumberVerificationStatus value) {
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
  VerifyPhoneNumberResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  PhoneNumberVerificationStatus m_status{PhoneNumberVerificationStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Account
}  // namespace Aws
