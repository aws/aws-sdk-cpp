/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains counts that describe network activity, such as the number of
 * requests or connection attempts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/NetworkCounts">AWS
 * API Reference</a></p>
 */
class NetworkCounts {
 public:
  AWS_GUARDDUTY_API NetworkCounts() = default;
  AWS_GUARDDUTY_API NetworkCounts(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API NetworkCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of requests.</p>
   */
  inline long long GetRequestCount() const { return m_requestCount; }
  inline bool RequestCountHasBeenSet() const { return m_requestCountHasBeenSet; }
  inline void SetRequestCount(long long value) {
    m_requestCountHasBeenSet = true;
    m_requestCount = value;
  }
  inline NetworkCounts& WithRequestCount(long long value) {
    SetRequestCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of connection attempts.</p>
   */
  inline long long GetTotalAttempts() const { return m_totalAttempts; }
  inline bool TotalAttemptsHasBeenSet() const { return m_totalAttemptsHasBeenSet; }
  inline void SetTotalAttempts(long long value) {
    m_totalAttemptsHasBeenSet = true;
    m_totalAttempts = value;
  }
  inline NetworkCounts& WithTotalAttempts(long long value) {
    SetTotalAttempts(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of connection attempts that were suspicious.</p>
   */
  inline long long GetSuspiciousAttempts() const { return m_suspiciousAttempts; }
  inline bool SuspiciousAttemptsHasBeenSet() const { return m_suspiciousAttemptsHasBeenSet; }
  inline void SetSuspiciousAttempts(long long value) {
    m_suspiciousAttemptsHasBeenSet = true;
    m_suspiciousAttempts = value;
  }
  inline NetworkCounts& WithSuspiciousAttempts(long long value) {
    SetSuspiciousAttempts(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of connection attempts that were reset.</p>
   */
  inline long long GetResetAttempts() const { return m_resetAttempts; }
  inline bool ResetAttemptsHasBeenSet() const { return m_resetAttemptsHasBeenSet; }
  inline void SetResetAttempts(long long value) {
    m_resetAttemptsHasBeenSet = true;
    m_resetAttempts = value;
  }
  inline NetworkCounts& WithResetAttempts(long long value) {
    SetResetAttempts(value);
    return *this;
  }
  ///@}
 private:
  long long m_requestCount{0};

  long long m_totalAttempts{0};

  long long m_suspiciousAttempts{0};

  long long m_resetAttempts{0};
  bool m_requestCountHasBeenSet = false;
  bool m_totalAttemptsHasBeenSet = false;
  bool m_suspiciousAttemptsHasBeenSet = false;
  bool m_resetAttemptsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
