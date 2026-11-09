/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
 * <p>The configuration that controls how Amazon Machine Images (AMIs) are scanned
 * for an account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AmiConfiguration">AWS
 * API Reference</a></p>
 */
class AmiConfiguration {
 public:
  AWS_INSPECTOR2_API AmiConfiguration() = default;
  AWS_INSPECTOR2_API AmiConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API AmiConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline AmiConfiguration& WithLastLaunchedWithin(AmiScanDuration value) {
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
  inline AmiConfiguration& WithCreatedWithin(AmiScanDuration value) {
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
  AmiConfiguration& WithScanModeConfiguration(ScanModeConfigurationT&& value) {
    SetScanModeConfiguration(std::forward<ScanModeConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  AmiScanDuration m_lastLaunchedWithin{AmiScanDuration::NOT_SET};

  AmiScanDuration m_createdWithin{AmiScanDuration::NOT_SET};

  AmiScanModeConfiguration m_scanModeConfiguration;
  bool m_lastLaunchedWithinHasBeenSet = false;
  bool m_createdWithinHasBeenSet = false;
  bool m_scanModeConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
