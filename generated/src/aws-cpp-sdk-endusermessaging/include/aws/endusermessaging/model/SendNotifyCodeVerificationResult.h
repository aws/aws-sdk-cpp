/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

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
class SendNotifyCodeVerificationResult {
 public:
  AWS_ENDUSERMESSAGING_API SendNotifyCodeVerificationResult() = default;
  AWS_ENDUSERMESSAGING_API SendNotifyCodeVerificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ENDUSERMESSAGING_API SendNotifyCodeVerificationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The service-generated identifier for the verification.</p>
   */
  inline const Aws::String& GetVerificationId() const { return m_verificationId; }
  template <typename VerificationIdT = Aws::String>
  void SetVerificationId(VerificationIdT&& value) {
    m_verificationIdHasBeenSet = true;
    m_verificationId = std::forward<VerificationIdT>(value);
  }
  template <typename VerificationIdT = Aws::String>
  SendNotifyCodeVerificationResult& WithVerificationId(VerificationIdT&& value) {
    SetVerificationId(std::forward<VerificationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service-generated identifier for the message that delivers the one-time
   * passcode.</p>
   */
  inline const Aws::String& GetMessageId() const { return m_messageId; }
  template <typename MessageIdT = Aws::String>
  void SetMessageId(MessageIdT&& value) {
    m_messageIdHasBeenSet = true;
    m_messageId = std::forward<MessageIdT>(value);
  }
  template <typename MessageIdT = Aws::String>
  SendNotifyCodeVerificationResult& WithMessageId(MessageIdT&& value) {
    SetMessageId(std::forward<MessageIdT>(value));
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
  SendNotifyCodeVerificationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_verificationId;

  Aws::String m_messageId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_verificationIdHasBeenSet = false;
  bool m_messageIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
