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
 * <p>Structured detail about the current evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/AlertStateData">AWS
 * API Reference</a></p>
 */
class AlertStateData {
 public:
  AWS_CLOUDWATCHOMNI_API AlertStateData() = default;
  AWS_CLOUDWATCHOMNI_API AlertStateData(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API AlertStateData& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>For COUNT_OF_RESULTS alerts, the row count that breached; null for
   * FIELD_VALUE (multi-contributor) alerts.</p>
   */
  inline double GetThresholdBreached() const { return m_thresholdBreached; }
  inline bool ThresholdBreachedHasBeenSet() const { return m_thresholdBreachedHasBeenSet; }
  inline void SetThresholdBreached(double value) {
    m_thresholdBreachedHasBeenSet = true;
    m_thresholdBreached = value;
  }
  inline AlertStateData& WithThresholdBreached(double value) {
    SetThresholdBreached(value);
    return *this;
  }
  ///@}
 private:
  double m_thresholdBreached{0.0};
  bool m_thresholdBreachedHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
