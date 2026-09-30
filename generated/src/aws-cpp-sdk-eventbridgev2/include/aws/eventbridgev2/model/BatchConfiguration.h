/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Batching configuration for a subscriber.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/BatchConfiguration">AWS
 * API Reference</a></p>
 */
class BatchConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API BatchConfiguration() = default;
  AWS_EVENTBRIDGEV2_API BatchConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API BatchConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The maximum number of events to include in a single batch delivered to the
   * target. The service delivers up to this many events per batch; fewer may be
   * delivered when the batch window elapses or the target's per-batch limit is
   * smaller. This is a maximum, not a guaranteed count. Valid range is 1-500
   * (default: 10, or the target API's per-batch maximum). The resolved value applied
   * by the service is returned on read.</p>
   */
  inline int64_t GetMaxBatchSize() const { return m_maxBatchSize; }
  inline bool MaxBatchSizeHasBeenSet() const { return m_maxBatchSizeHasBeenSet; }
  inline void SetMaxBatchSize(int64_t value) {
    m_maxBatchSizeHasBeenSet = true;
    m_maxBatchSize = value;
  }
  inline BatchConfiguration& WithMaxBatchSize(int64_t value) {
    SetMaxBatchSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time in seconds to wait for a batch to fill before delivering it
   * to the target. This is a maximum; a batch may be delivered sooner if it reaches
   * MaxBatchSize or another delivery condition is met. Valid range is 0-300
   * (default: 0, meaning no wait). The resolved value applied by the service is
   * always returned on read.</p>
   */
  inline int64_t GetMaxBatchWindowInSeconds() const { return m_maxBatchWindowInSeconds; }
  inline bool MaxBatchWindowInSecondsHasBeenSet() const { return m_maxBatchWindowInSecondsHasBeenSet; }
  inline void SetMaxBatchWindowInSeconds(int64_t value) {
    m_maxBatchWindowInSecondsHasBeenSet = true;
    m_maxBatchWindowInSeconds = value;
  }
  inline BatchConfiguration& WithMaxBatchWindowInSeconds(int64_t value) {
    SetMaxBatchWindowInSeconds(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_maxBatchSize{0};

  int64_t m_maxBatchWindowInSeconds{0};
  bool m_maxBatchSizeHasBeenSet = false;
  bool m_maxBatchWindowInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
