/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace DirectConnect {
namespace Model {

/**
 * <p>Contains information about the rate limiter status for a connection,
 * including the maximum number of rate limiters allowed, the number currently in
 * use, and the remaining capacity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/RateLimiterStatus">AWS
 * API Reference</a></p>
 */
class RateLimiterStatus {
 public:
  AWS_DIRECTCONNECT_API RateLimiterStatus() = default;
  AWS_DIRECTCONNECT_API RateLimiterStatus(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DIRECTCONNECT_API RateLimiterStatus& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DIRECTCONNECT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The maximum number of rate limiters allowed on the connection.</p>
   */
  inline int64_t GetMaxAllowed() const { return m_maxAllowed; }
  inline bool MaxAllowedHasBeenSet() const { return m_maxAllowedHasBeenSet; }
  inline void SetMaxAllowed(int64_t value) {
    m_maxAllowedHasBeenSet = true;
    m_maxAllowed = value;
  }
  inline RateLimiterStatus& WithMaxAllowed(int64_t value) {
    SetMaxAllowed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of rate limiters currently in use on the connection.</p>
   */
  inline int64_t GetInUse() const { return m_inUse; }
  inline bool InUseHasBeenSet() const { return m_inUseHasBeenSet; }
  inline void SetInUse(int64_t value) {
    m_inUseHasBeenSet = true;
    m_inUse = value;
  }
  inline RateLimiterStatus& WithInUse(int64_t value) {
    SetInUse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of rate limiters remaining (available) on the connection.</p>
   */
  inline int64_t GetRemaining() const { return m_remaining; }
  inline bool RemainingHasBeenSet() const { return m_remainingHasBeenSet; }
  inline void SetRemaining(int64_t value) {
    m_remainingHasBeenSet = true;
    m_remaining = value;
  }
  inline RateLimiterStatus& WithRemaining(int64_t value) {
    SetRemaining(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total bandwidth allocated across all rate limiters on the connection.</p>
   */
  inline const Aws::String& GetTotalBandwidth() const { return m_totalBandwidth; }
  inline bool TotalBandwidthHasBeenSet() const { return m_totalBandwidthHasBeenSet; }
  template <typename TotalBandwidthT = Aws::String>
  void SetTotalBandwidth(TotalBandwidthT&& value) {
    m_totalBandwidthHasBeenSet = true;
    m_totalBandwidth = std::forward<TotalBandwidthT>(value);
  }
  template <typename TotalBandwidthT = Aws::String>
  RateLimiterStatus& WithTotalBandwidth(TotalBandwidthT&& value) {
    SetTotalBandwidth(std::forward<TotalBandwidthT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_maxAllowed{0};

  int64_t m_inUse{0};

  int64_t m_remaining{0};

  Aws::String m_totalBandwidth;
  bool m_maxAllowedHasBeenSet = false;
  bool m_inUseHasBeenSet = false;
  bool m_remainingHasBeenSet = false;
  bool m_totalBandwidthHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
