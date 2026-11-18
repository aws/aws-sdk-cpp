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
 * <p>An unexpected error occurred during the processing of the request. This error
 * is retryable; check the <code>Retry-After</code> header before you
 * retry.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/InternalServerException">AWS
 * API Reference</a></p>
 */
class InternalServerException {
 public:
  AWS_ABUSESIGNAL_API InternalServerException() = default;
  AWS_ABUSESIGNAL_API InternalServerException(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API InternalServerException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the error.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  InternalServerException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
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
  inline InternalServerException& WithRetryAfterSeconds(int value) {
    SetRetryAfterSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  int m_retryAfterSeconds{0};
  bool m_messageHasBeenSet = false;
  bool m_retryAfterSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
