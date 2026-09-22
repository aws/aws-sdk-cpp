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
 * <p>Counts of contributors currently breaching each severity
 * threshold.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ContributorSummary">AWS
 * API Reference</a></p>
 */
class ContributorSummary {
 public:
  AWS_CLOUDWATCHOMNI_API ContributorSummary() = default;
  AWS_CLOUDWATCHOMNI_API ContributorSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API ContributorSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Number of contributors currently breaching the warning threshold.</p>
   */
  inline int64_t GetWarningCount() const { return m_warningCount; }
  inline bool WarningCountHasBeenSet() const { return m_warningCountHasBeenSet; }
  inline void SetWarningCount(int64_t value) {
    m_warningCountHasBeenSet = true;
    m_warningCount = value;
  }
  inline ContributorSummary& WithWarningCount(int64_t value) {
    SetWarningCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of contributors currently breaching the critical threshold.</p>
   */
  inline int64_t GetCriticalCount() const { return m_criticalCount; }
  inline bool CriticalCountHasBeenSet() const { return m_criticalCountHasBeenSet; }
  inline void SetCriticalCount(int64_t value) {
    m_criticalCountHasBeenSet = true;
    m_criticalCount = value;
  }
  inline ContributorSummary& WithCriticalCount(int64_t value) {
    SetCriticalCount(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_warningCount{0};

  int64_t m_criticalCount{0};
  bool m_warningCountHasBeenSet = false;
  bool m_criticalCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
