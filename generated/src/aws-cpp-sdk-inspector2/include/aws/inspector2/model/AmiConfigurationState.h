/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AmiConfigurationStatus.h>
#include <aws/inspector2/model/AmiScanDuration.h>
#include <aws/inspector2/model/AmiScanModeConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>The current state of the Amazon Machine Image (AMI) scan configuration for an
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AmiConfigurationState">AWS
 * API Reference</a></p>
 */
class AmiConfigurationState {
 public:
  AWS_INSPECTOR2_API AmiConfigurationState() = default;
  AWS_INSPECTOR2_API AmiConfigurationState(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API AmiConfigurationState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Restricts scanning to AMIs that were last launched within the specified
   * duration.</p>
   */
  inline AmiScanDuration GetLastLaunchedWithin() const { return m_lastLaunchedWithin; }
  inline bool LastLaunchedWithinHasBeenSet() const { return m_lastLaunchedWithinHasBeenSet; }
  inline void SetLastLaunchedWithin(AmiScanDuration value) {
    m_lastLaunchedWithinHasBeenSet = true;
    m_lastLaunchedWithin = value;
  }
  inline AmiConfigurationState& WithLastLaunchedWithin(AmiScanDuration value) {
    SetLastLaunchedWithin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Restricts scanning to AMIs that were created within the specified
   * duration.</p>
   */
  inline AmiScanDuration GetCreatedWithin() const { return m_createdWithin; }
  inline bool CreatedWithinHasBeenSet() const { return m_createdWithinHasBeenSet; }
  inline void SetCreatedWithin(AmiScanDuration value) {
    m_createdWithinHasBeenSet = true;
    m_createdWithin = value;
  }
  inline AmiConfigurationState& WithCreatedWithin(AmiScanDuration value) {
    SetCreatedWithin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scan mode configuration that determines which AMIs are scanned.</p>
   */
  inline const AmiScanModeConfiguration& GetScanModeConfiguration() const { return m_scanModeConfiguration; }
  inline bool ScanModeConfigurationHasBeenSet() const { return m_scanModeConfigurationHasBeenSet; }
  template <typename ScanModeConfigurationT = AmiScanModeConfiguration>
  void SetScanModeConfiguration(ScanModeConfigurationT&& value) {
    m_scanModeConfigurationHasBeenSet = true;
    m_scanModeConfiguration = std::forward<ScanModeConfigurationT>(value);
  }
  template <typename ScanModeConfigurationT = AmiScanModeConfiguration>
  AmiConfigurationState& WithScanModeConfiguration(ScanModeConfigurationT&& value) {
    SetScanModeConfiguration(std::forward<ScanModeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the AMI scan configuration.</p>
   */
  inline AmiConfigurationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AmiConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AmiConfigurationState& WithStatus(AmiConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the AMI scan configuration was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AmiConfigurationState& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  AmiScanDuration m_lastLaunchedWithin{AmiScanDuration::NOT_SET};

  AmiScanDuration m_createdWithin{AmiScanDuration::NOT_SET};

  AmiScanModeConfiguration m_scanModeConfiguration;

  AmiConfigurationStatus m_status{AmiConfigurationStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_lastLaunchedWithinHasBeenSet = false;
  bool m_createdWithinHasBeenSet = false;
  bool m_scanModeConfigurationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
