/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

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
 * <p>Contains information about how network activity deviates from normal
 * behavior.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/NetworkAnomaly">AWS
 * API Reference</a></p>
 */
class NetworkAnomaly {
 public:
  AWS_GUARDDUTY_API NetworkAnomaly() = default;
  AWS_GUARDDUTY_API NetworkAnomaly(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API NetworkAnomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The amount of data that is typical for the normal behavior.</p>
   */
  inline const Aws::String& GetBaselineBytes() const { return m_baselineBytes; }
  inline bool BaselineBytesHasBeenSet() const { return m_baselineBytesHasBeenSet; }
  template <typename BaselineBytesT = Aws::String>
  void SetBaselineBytes(BaselineBytesT&& value) {
    m_baselineBytesHasBeenSet = true;
    m_baselineBytes = std::forward<BaselineBytesT>(value);
  }
  template <typename BaselineBytesT = Aws::String>
  NetworkAnomaly& WithBaselineBytes(BaselineBytesT&& value) {
    SetBaselineBytes(std::forward<BaselineBytesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How much the activity deviates from normal behavior.</p>
   */
  inline const Aws::String& GetDeviation() const { return m_deviation; }
  inline bool DeviationHasBeenSet() const { return m_deviationHasBeenSet; }
  template <typename DeviationT = Aws::String>
  void SetDeviation(DeviationT&& value) {
    m_deviationHasBeenSet = true;
    m_deviation = std::forward<DeviationT>(value);
  }
  template <typename DeviationT = Aws::String>
  NetworkAnomaly& WithDeviation(DeviationT&& value) {
    SetDeviation(std::forward<DeviationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days of activity that the normal behavior is based on.</p>
   */
  inline int GetProfileAgeDays() const { return m_profileAgeDays; }
  inline bool ProfileAgeDaysHasBeenSet() const { return m_profileAgeDaysHasBeenSet; }
  inline void SetProfileAgeDays(int value) {
    m_profileAgeDaysHasBeenSet = true;
    m_profileAgeDays = value;
  }
  inline NetworkAnomaly& WithProfileAgeDays(int value) {
    SetProfileAgeDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The remote service that the activity involved.</p>
   */
  inline const Aws::String& GetRemoteService() const { return m_remoteService; }
  inline bool RemoteServiceHasBeenSet() const { return m_remoteServiceHasBeenSet; }
  template <typename RemoteServiceT = Aws::String>
  void SetRemoteService(RemoteServiceT&& value) {
    m_remoteServiceHasBeenSet = true;
    m_remoteService = std::forward<RemoteServiceT>(value);
  }
  template <typename RemoteServiceT = Aws::String>
  NetworkAnomaly& WithRemoteService(RemoteServiceT&& value) {
    SetRemoteService(std::forward<RemoteServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Region of the remote endpoint.</p>
   */
  inline const Aws::String& GetRemoteRegion() const { return m_remoteRegion; }
  inline bool RemoteRegionHasBeenSet() const { return m_remoteRegionHasBeenSet; }
  template <typename RemoteRegionT = Aws::String>
  void SetRemoteRegion(RemoteRegionT&& value) {
    m_remoteRegionHasBeenSet = true;
    m_remoteRegion = std::forward<RemoteRegionT>(value);
  }
  template <typename RemoteRegionT = Aws::String>
  NetworkAnomaly& WithRemoteRegion(RemoteRegionT&& value) {
    SetRemoteRegion(std::forward<RemoteRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration of the activity.</p>
   */
  inline const Aws::String& GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  template <typename DurationT = Aws::String>
  void SetDuration(DurationT&& value) {
    m_durationHasBeenSet = true;
    m_duration = std::forward<DurationT>(value);
  }
  template <typename DurationT = Aws::String>
  NetworkAnomaly& WithDuration(DurationT&& value) {
    SetDuration(std::forward<DurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ratio of connection attempts that were reset.</p>
   */
  inline const Aws::String& GetResetRatio() const { return m_resetRatio; }
  inline bool ResetRatioHasBeenSet() const { return m_resetRatioHasBeenSet; }
  template <typename ResetRatioT = Aws::String>
  void SetResetRatio(ResetRatioT&& value) {
    m_resetRatioHasBeenSet = true;
    m_resetRatio = std::forward<ResetRatioT>(value);
  }
  template <typename ResetRatioT = Aws::String>
  NetworkAnomaly& WithResetRatio(ResetRatioT&& value) {
    SetResetRatio(std::forward<ResetRatioT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of target hosts.</p>
   */
  inline long long GetTargetHostCount() const { return m_targetHostCount; }
  inline bool TargetHostCountHasBeenSet() const { return m_targetHostCountHasBeenSet; }
  inline void SetTargetHostCount(long long value) {
    m_targetHostCountHasBeenSet = true;
    m_targetHostCount = value;
  }
  inline NetworkAnomaly& WithTargetHostCount(long long value) {
    SetTargetHostCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_baselineBytes;

  Aws::String m_deviation;

  int m_profileAgeDays{0};

  Aws::String m_remoteService;

  Aws::String m_remoteRegion;

  Aws::String m_duration;

  Aws::String m_resetRatio;

  long long m_targetHostCount{0};
  bool m_baselineBytesHasBeenSet = false;
  bool m_deviationHasBeenSet = false;
  bool m_profileAgeDaysHasBeenSet = false;
  bool m_remoteServiceHasBeenSet = false;
  bool m_remoteRegionHasBeenSet = false;
  bool m_durationHasBeenSet = false;
  bool m_resetRatioHasBeenSet = false;
  bool m_targetHostCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
