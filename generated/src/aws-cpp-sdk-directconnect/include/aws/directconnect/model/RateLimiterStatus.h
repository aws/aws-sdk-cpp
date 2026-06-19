/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
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
  AWS_DIRECTCONNECT_API RateLimiterStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API RateLimiterStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of rate limiters allowed on the connection.</p>
   */
  inline int GetMaxAllowed() const { return m_maxAllowed; }
  inline bool MaxAllowedHasBeenSet() const { return m_maxAllowedHasBeenSet; }
  inline void SetMaxAllowed(int value) {
    m_maxAllowedHasBeenSet = true;
    m_maxAllowed = value;
  }
  inline RateLimiterStatus& WithMaxAllowed(int value) {
    SetMaxAllowed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of rate limiters currently in use on the connection.</p>
   */
  inline int GetInUse() const { return m_inUse; }
  inline bool InUseHasBeenSet() const { return m_inUseHasBeenSet; }
  inline void SetInUse(int value) {
    m_inUseHasBeenSet = true;
    m_inUse = value;
  }
  inline RateLimiterStatus& WithInUse(int value) {
    SetInUse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of rate limiters remaining (available) on the connection.</p>
   */
  inline int GetRemaining() const { return m_remaining; }
  inline bool RemainingHasBeenSet() const { return m_remainingHasBeenSet; }
  inline void SetRemaining(int value) {
    m_remainingHasBeenSet = true;
    m_remaining = value;
  }
  inline RateLimiterStatus& WithRemaining(int value) {
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
  int m_maxAllowed{0};

  int m_inUse{0};

  int m_remaining{0};

  Aws::String m_totalBandwidth;
  bool m_maxAllowedHasBeenSet = false;
  bool m_inUseHasBeenSet = false;
  bool m_remainingHasBeenSet = false;
  bool m_totalBandwidthHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
