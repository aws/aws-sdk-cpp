/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

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
 * <p>Event storage configuration of an event bus, as returned on
 * reads.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/StorageConfigurationOutput">AWS
 * API Reference</a></p>
 */
class StorageConfigurationOutput {
 public:
  AWS_EVENTBRIDGEV2_API StorageConfigurationOutput() = default;
  AWS_EVENTBRIDGEV2_API StorageConfigurationOutput(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API StorageConfigurationOutput& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline int64_t GetRetentionPeriodInDays() const { return m_retentionPeriodInDays; }
  inline bool RetentionPeriodInDaysHasBeenSet() const { return m_retentionPeriodInDaysHasBeenSet; }
  inline void SetRetentionPeriodInDays(int64_t value) {
    m_retentionPeriodInDaysHasBeenSet = true;
    m_retentionPeriodInDays = value;
  }
  inline StorageConfigurationOutput& WithRetentionPeriodInDays(int64_t value) {
    SetRetentionPeriodInDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest point in time from which stored events are available. Events
   * older than this have expired from retention.</p>
   */
  inline const Aws::Utils::DateTime& GetRetentionWindowStartTime() const { return m_retentionWindowStartTime; }
  inline bool RetentionWindowStartTimeHasBeenSet() const { return m_retentionWindowStartTimeHasBeenSet; }
  template <typename RetentionWindowStartTimeT = Aws::Utils::DateTime>
  void SetRetentionWindowStartTime(RetentionWindowStartTimeT&& value) {
    m_retentionWindowStartTimeHasBeenSet = true;
    m_retentionWindowStartTime = std::forward<RetentionWindowStartTimeT>(value);
  }
  template <typename RetentionWindowStartTimeT = Aws::Utils::DateTime>
  StorageConfigurationOutput& WithRetentionWindowStartTime(RetentionWindowStartTimeT&& value) {
    SetRetentionWindowStartTime(std::forward<RetentionWindowStartTimeT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_retentionPeriodInDays{0};

  Aws::Utils::DateTime m_retentionWindowStartTime{};
  bool m_retentionPeriodInDaysHasBeenSet = false;
  bool m_retentionWindowStartTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
