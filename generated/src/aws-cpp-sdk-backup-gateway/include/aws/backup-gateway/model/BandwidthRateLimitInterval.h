/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace BackupGateway {
namespace Model {

/**
 * <p>Describes a bandwidth rate limit interval for a gateway. A bandwidth rate
 * limit schedule consists of one or more bandwidth rate limit intervals. A
 * bandwidth rate limit interval defines a period of time on one or more days of
 * the week, during which bandwidth rate limits are specified for uploading,
 * downloading, or both.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/BandwidthRateLimitInterval">AWS
 * API Reference</a></p>
 */
class BandwidthRateLimitInterval {
 public:
  AWS_BACKUPGATEWAY_API BandwidthRateLimitInterval() = default;
  AWS_BACKUPGATEWAY_API BandwidthRateLimitInterval(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_BACKUPGATEWAY_API BandwidthRateLimitInterval& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_BACKUPGATEWAY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The average upload rate limit component of the bandwidth rate limit interval,
   * in bits per second. This field does not appear in the response if the upload
   * rate limit is not set.</p>
   */
  inline long long GetAverageUploadRateLimitInBitsPerSec() const { return m_averageUploadRateLimitInBitsPerSec; }
  inline bool AverageUploadRateLimitInBitsPerSecHasBeenSet() const { return m_averageUploadRateLimitInBitsPerSecHasBeenSet; }
  inline void SetAverageUploadRateLimitInBitsPerSec(long long value) {
    m_averageUploadRateLimitInBitsPerSecHasBeenSet = true;
    m_averageUploadRateLimitInBitsPerSec = value;
  }
  inline BandwidthRateLimitInterval& WithAverageUploadRateLimitInBitsPerSec(long long value) {
    SetAverageUploadRateLimitInBitsPerSec(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hour of the day to start the bandwidth rate limit interval.</p>
   */
  inline int64_t GetStartHourOfDay() const { return m_startHourOfDay; }
  inline bool StartHourOfDayHasBeenSet() const { return m_startHourOfDayHasBeenSet; }
  inline void SetStartHourOfDay(int64_t value) {
    m_startHourOfDayHasBeenSet = true;
    m_startHourOfDay = value;
  }
  inline BandwidthRateLimitInterval& WithStartHourOfDay(int64_t value) {
    SetStartHourOfDay(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hour of the day to end the bandwidth rate limit interval.</p>
   */
  inline int64_t GetEndHourOfDay() const { return m_endHourOfDay; }
  inline bool EndHourOfDayHasBeenSet() const { return m_endHourOfDayHasBeenSet; }
  inline void SetEndHourOfDay(int64_t value) {
    m_endHourOfDayHasBeenSet = true;
    m_endHourOfDay = value;
  }
  inline BandwidthRateLimitInterval& WithEndHourOfDay(int64_t value) {
    SetEndHourOfDay(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minute of the hour to start the bandwidth rate limit interval. The
   * interval begins at the start of that minute. To begin an interval exactly at the
   * start of the hour, use the value <code>0</code>.</p>
   */
  inline int64_t GetStartMinuteOfHour() const { return m_startMinuteOfHour; }
  inline bool StartMinuteOfHourHasBeenSet() const { return m_startMinuteOfHourHasBeenSet; }
  inline void SetStartMinuteOfHour(int64_t value) {
    m_startMinuteOfHourHasBeenSet = true;
    m_startMinuteOfHour = value;
  }
  inline BandwidthRateLimitInterval& WithStartMinuteOfHour(int64_t value) {
    SetStartMinuteOfHour(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minute of the hour to end the bandwidth rate limit interval.</p>
   *  <p>The bandwidth rate limit interval ends at the end of the minute.
   * To end an interval at the end of an hour, use the value <code>59</code>.</p>
   *
   */
  inline int64_t GetEndMinuteOfHour() const { return m_endMinuteOfHour; }
  inline bool EndMinuteOfHourHasBeenSet() const { return m_endMinuteOfHourHasBeenSet; }
  inline void SetEndMinuteOfHour(int64_t value) {
    m_endMinuteOfHourHasBeenSet = true;
    m_endMinuteOfHour = value;
  }
  inline BandwidthRateLimitInterval& WithEndMinuteOfHour(int64_t value) {
    SetEndMinuteOfHour(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The days of the week component of the bandwidth rate limit interval,
   * represented as ordinal numbers from 0 to 6, where 0 represents Sunday and 6
   * represents Saturday.</p>
   */
  inline const Aws::Vector<int64_t>& GetDaysOfWeek() const { return m_daysOfWeek; }
  inline bool DaysOfWeekHasBeenSet() const { return m_daysOfWeekHasBeenSet; }
  template <typename DaysOfWeekT = Aws::Vector<int64_t>>
  void SetDaysOfWeek(DaysOfWeekT&& value) {
    m_daysOfWeekHasBeenSet = true;
    m_daysOfWeek = std::forward<DaysOfWeekT>(value);
  }
  template <typename DaysOfWeekT = Aws::Vector<int64_t>>
  BandwidthRateLimitInterval& WithDaysOfWeek(DaysOfWeekT&& value) {
    SetDaysOfWeek(std::forward<DaysOfWeekT>(value));
    return *this;
  }
  inline BandwidthRateLimitInterval& AddDaysOfWeek(int64_t value) {
    m_daysOfWeekHasBeenSet = true;
    m_daysOfWeek.push_back(value);
    return *this;
  }
  ///@}
 private:
  long long m_averageUploadRateLimitInBitsPerSec{0};

  int64_t m_startHourOfDay{0};

  int64_t m_endHourOfDay{0};

  int64_t m_startMinuteOfHour{0};

  int64_t m_endMinuteOfHour{0};

  Aws::Vector<int64_t> m_daysOfWeek;
  bool m_averageUploadRateLimitInBitsPerSecHasBeenSet = false;
  bool m_startHourOfDayHasBeenSet = false;
  bool m_endHourOfDayHasBeenSet = false;
  bool m_startMinuteOfHourHasBeenSet = false;
  bool m_endMinuteOfHourHasBeenSet = false;
  bool m_daysOfWeekHasBeenSet = false;
};

}  // namespace Model
}  // namespace BackupGateway
}  // namespace Aws
