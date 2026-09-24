/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/RetryStrategy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Retry policy for a subscriber.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/RetryPolicy">AWS
 * API Reference</a></p>
 */
class RetryPolicy {
 public:
  AWS_EVENTBRIDGEV2_API RetryPolicy() = default;
  AWS_EVENTBRIDGEV2_API RetryPolicy(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API RetryPolicy& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Maximum number of retry attempts (0-185, default: 5).</p>
   */
  inline int64_t GetMaxRetryAttempts() const { return m_maxRetryAttempts; }
  inline bool MaxRetryAttemptsHasBeenSet() const { return m_maxRetryAttemptsHasBeenSet; }
  inline void SetMaxRetryAttempts(int64_t value) {
    m_maxRetryAttemptsHasBeenSet = true;
    m_maxRetryAttempts = value;
  }
  inline RetryPolicy& WithMaxRetryAttempts(int64_t value) {
    SetMaxRetryAttempts(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum age of an event in seconds before it is discarded (60-86400, default:
   * 300).</p>
   */
  inline int64_t GetMaxEventAgeInSeconds() const { return m_maxEventAgeInSeconds; }
  inline bool MaxEventAgeInSecondsHasBeenSet() const { return m_maxEventAgeInSecondsHasBeenSet; }
  inline void SetMaxEventAgeInSeconds(int64_t value) {
    m_maxEventAgeInSecondsHasBeenSet = true;
    m_maxEventAgeInSeconds = value;
  }
  inline RetryPolicy& WithMaxEventAgeInSeconds(int64_t value) {
    SetMaxEventAgeInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Strategy for determining which exceptions are retried. Default: ALL.</p>
   */
  inline RetryStrategy GetRetryStrategy() const { return m_retryStrategy; }
  inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }
  inline void SetRetryStrategy(RetryStrategy value) {
    m_retryStrategyHasBeenSet = true;
    m_retryStrategy = value;
  }
  inline RetryPolicy& WithRetryStrategy(RetryStrategy value) {
    SetRetryStrategy(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_maxRetryAttempts{0};

  int64_t m_maxEventAgeInSeconds{0};

  RetryStrategy m_retryStrategy{RetryStrategy::NOT_SET};
  bool m_maxRetryAttemptsHasBeenSet = false;
  bool m_maxEventAgeInSecondsHasBeenSet = false;
  bool m_retryStrategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
