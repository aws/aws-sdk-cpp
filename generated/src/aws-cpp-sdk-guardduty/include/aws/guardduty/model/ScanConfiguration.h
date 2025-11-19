/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/IncrementalScanDetails.h>
#include <aws/guardduty/model/ScanConfigurationRecoveryPoint.h>
#include <aws/guardduty/model/TriggerDetails.h>

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
 * <p>Contains information about the configuration used for the malware
 * scan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanConfiguration">AWS
 * API Reference</a></p>
 */
class ScanConfiguration {
 public:
  AWS_GUARDDUTY_API ScanConfiguration() = default;
  AWS_GUARDDUTY_API ScanConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ScanConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the IAM role that should contain the required
   * permissions for the scan.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  ScanConfiguration& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the entity that triggered the malware scan.</p>
   */
  inline const TriggerDetails& GetTriggerDetails() const { return m_triggerDetails; }
  inline bool TriggerDetailsHasBeenSet() const { return m_triggerDetailsHasBeenSet; }
  template <typename TriggerDetailsT = TriggerDetails>
  void SetTriggerDetails(TriggerDetailsT&& value) {
    m_triggerDetailsHasBeenSet = true;
    m_triggerDetails = std::forward<TriggerDetailsT>(value);
  }
  template <typename TriggerDetailsT = TriggerDetails>
  ScanConfiguration& WithTriggerDetails(TriggerDetailsT&& value) {
    SetTriggerDetails(std::forward<TriggerDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the incremental scan configuration, if applicable.</p>
   */
  inline const IncrementalScanDetails& GetIncrementalScanDetails() const { return m_incrementalScanDetails; }
  inline bool IncrementalScanDetailsHasBeenSet() const { return m_incrementalScanDetailsHasBeenSet; }
  template <typename IncrementalScanDetailsT = IncrementalScanDetails>
  void SetIncrementalScanDetails(IncrementalScanDetailsT&& value) {
    m_incrementalScanDetailsHasBeenSet = true;
    m_incrementalScanDetails = std::forward<IncrementalScanDetailsT>(value);
  }
  template <typename IncrementalScanDetailsT = IncrementalScanDetails>
  ScanConfiguration& WithIncrementalScanDetails(IncrementalScanDetailsT&& value) {
    SetIncrementalScanDetails(std::forward<IncrementalScanDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the recovery point configuration used for the scan, if
   * applicable.</p>
   */
  inline const ScanConfigurationRecoveryPoint& GetRecoveryPoint() const { return m_recoveryPoint; }
  inline bool RecoveryPointHasBeenSet() const { return m_recoveryPointHasBeenSet; }
  template <typename RecoveryPointT = ScanConfigurationRecoveryPoint>
  void SetRecoveryPoint(RecoveryPointT&& value) {
    m_recoveryPointHasBeenSet = true;
    m_recoveryPoint = std::forward<RecoveryPointT>(value);
  }
  template <typename RecoveryPointT = ScanConfigurationRecoveryPoint>
  ScanConfiguration& WithRecoveryPoint(RecoveryPointT&& value) {
    SetRecoveryPoint(std::forward<RecoveryPointT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_role;
  bool m_roleHasBeenSet = false;

  TriggerDetails m_triggerDetails;
  bool m_triggerDetailsHasBeenSet = false;

  IncrementalScanDetails m_incrementalScanDetails;
  bool m_incrementalScanDetailsHasBeenSet = false;

  ScanConfigurationRecoveryPoint m_recoveryPoint;
  bool m_recoveryPointHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
