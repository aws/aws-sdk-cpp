/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/model/ContactInformation.h>
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
class GetContactInformationResult {
 public:
  AWS_ACCOUNT_API GetContactInformationResult() = default;
  AWS_ACCOUNT_API GetContactInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACCOUNT_API GetContactInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Contains the details of the primary contact information associated with an
   * Amazon Web Services account.</p>
   */
  inline const ContactInformation& GetContactInformation() const { return m_contactInformation; }
  template <typename ContactInformationT = ContactInformation>
  void SetContactInformation(ContactInformationT&& value) {
    m_contactInformationHasBeenSet = true;
    m_contactInformation = std::forward<ContactInformationT>(value);
  }
  template <typename ContactInformationT = ContactInformation>
  GetContactInformationResult& WithContactInformation(ContactInformationT&& value) {
    SetContactInformation(std::forward<ContactInformationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The verification status of the phone number in the primary contact
   * information associated with an Amazon Web Services account. Valid values:</p>
   * <ul> <li> <p> <code>PENDING</code> – A one-time passcode has been sent and is
   * waiting to be submitted.</p> </li> <li> <p> <code>VERIFIED</code> – The phone
   * number has been verified.</p> </li> <li> <p> <code>UNVERIFIED</code> – The phone
   * number has not been verified.</p> </li> <li> <p> <code>NOT_SUPPORTED</code> –
   * Phone number verification isn't available for this account.</p> </li> </ul>
   */
  inline PhoneNumberVerificationStatus GetVerificationStatus() const { return m_verificationStatus; }
  inline void SetVerificationStatus(PhoneNumberVerificationStatus value) {
    m_verificationStatusHasBeenSet = true;
    m_verificationStatus = value;
  }
  inline GetContactInformationResult& WithVerificationStatus(PhoneNumberVerificationStatus value) {
    SetVerificationStatus(value);
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
  GetContactInformationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ContactInformation m_contactInformation;

  PhoneNumberVerificationStatus m_verificationStatus{PhoneNumberVerificationStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_contactInformationHasBeenSet = false;
  bool m_verificationStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Account
}  // namespace Aws
