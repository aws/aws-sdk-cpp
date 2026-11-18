/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AbuseSignal {
namespace Model {

/**
 * <p>The request was denied due to request throttling. This error is retryable;
 * retry with exponential backoff.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/ThrottlingException">AWS
 * API Reference</a></p>
 */
class ThrottlingException {
 public:
  AWS_ABUSESIGNAL_API ThrottlingException() = default;
  AWS_ABUSESIGNAL_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the throttling error.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ThrottlingException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code for the Amazon Web Services service that is associated with the
   * quota that was exceeded.</p>
   */
  inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
  inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
  template <typename ServiceCodeT = Aws::String>
  void SetServiceCode(ServiceCodeT&& value) {
    m_serviceCodeHasBeenSet = true;
    m_serviceCode = std::forward<ServiceCodeT>(value);
  }
  template <typename ServiceCodeT = Aws::String>
  ThrottlingException& WithServiceCode(ServiceCodeT&& value) {
    SetServiceCode(std::forward<ServiceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code for the service quota that was exceeded.</p>
   */
  inline const Aws::String& GetQuotaCode() const { return m_quotaCode; }
  inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
  template <typename QuotaCodeT = Aws::String>
  void SetQuotaCode(QuotaCodeT&& value) {
    m_quotaCodeHasBeenSet = true;
    m_quotaCode = std::forward<QuotaCodeT>(value);
  }
  template <typename QuotaCodeT = Aws::String>
  ThrottlingException& WithQuotaCode(QuotaCodeT&& value) {
    SetQuotaCode(std::forward<QuotaCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds to wait before you retry the request. The service also
   * returns this value in the <code>Retry-After</code> HTTP header.</p>
   */
  inline int GetRetryAfterSeconds() const { return m_retryAfterSeconds; }
  inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }
  inline void SetRetryAfterSeconds(int value) {
    m_retryAfterSecondsHasBeenSet = true;
    m_retryAfterSeconds = value;
  }
  inline ThrottlingException& WithRetryAfterSeconds(int value) {
    SetRetryAfterSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_serviceCode;

  Aws::String m_quotaCode;

  int m_retryAfterSeconds{0};
  bool m_messageHasBeenSet = false;
  bool m_serviceCodeHasBeenSet = false;
  bool m_quotaCodeHasBeenSet = false;
  bool m_retryAfterSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
