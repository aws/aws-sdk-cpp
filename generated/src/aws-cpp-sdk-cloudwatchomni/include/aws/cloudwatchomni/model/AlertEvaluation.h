/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Evaluation cadence. {@code intervalSeconds} must be one of {30, 60, 120, 300,
 * 600, 900, 1800, 3600}; {@code pendingDurationSeconds} and {@code
 * recoveryDurationSeconds} must be multiples of {@code intervalSeconds}. A
 * duration of 0 means fire/clear immediately with no delay.</p> <p>On UpdateAlert
 * a supplied evaluation block is replaced whole, not merged: an omitted {@code
 * pendingDurationSeconds} or {@code recoveryDurationSeconds} is cleared to unset
 * (no such duration), not preserved and not defaulted to 0. {@code
 * intervalSeconds} is required whenever the block is present. All enforced
 * server-side / by the front-door validator.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/AlertEvaluation">AWS
 * API Reference</a></p>
 */
class AlertEvaluation {
 public:
  AWS_CLOUDWATCHOMNI_API AlertEvaluation() = default;
  AWS_CLOUDWATCHOMNI_API AlertEvaluation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API AlertEvaluation& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The interval between evaluations, in seconds.</p>
   */
  inline int64_t GetIntervalSeconds() const { return m_intervalSeconds; }
  inline bool IntervalSecondsHasBeenSet() const { return m_intervalSecondsHasBeenSet; }
  inline void SetIntervalSeconds(int64_t value) {
    m_intervalSecondsHasBeenSet = true;
    m_intervalSeconds = value;
  }
  inline AlertEvaluation& WithIntervalSeconds(int64_t value) {
    SetIntervalSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration a breach must persist before the alert fires, in seconds.</p>
   */
  inline int64_t GetPendingDurationSeconds() const { return m_pendingDurationSeconds; }
  inline bool PendingDurationSecondsHasBeenSet() const { return m_pendingDurationSecondsHasBeenSet; }
  inline void SetPendingDurationSeconds(int64_t value) {
    m_pendingDurationSecondsHasBeenSet = true;
    m_pendingDurationSeconds = value;
  }
  inline AlertEvaluation& WithPendingDurationSeconds(int64_t value) {
    SetPendingDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration a recovery must persist before the alert clears, in seconds.</p>
   */
  inline int64_t GetRecoveryDurationSeconds() const { return m_recoveryDurationSeconds; }
  inline bool RecoveryDurationSecondsHasBeenSet() const { return m_recoveryDurationSecondsHasBeenSet; }
  inline void SetRecoveryDurationSeconds(int64_t value) {
    m_recoveryDurationSecondsHasBeenSet = true;
    m_recoveryDurationSeconds = value;
  }
  inline AlertEvaluation& WithRecoveryDurationSeconds(int64_t value) {
    SetRecoveryDurationSeconds(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_intervalSeconds{0};

  int64_t m_pendingDurationSeconds{0};

  int64_t m_recoveryDurationSeconds{0};
  bool m_intervalSecondsHasBeenSet = false;
  bool m_pendingDurationSecondsHasBeenSet = false;
  bool m_recoveryDurationSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
