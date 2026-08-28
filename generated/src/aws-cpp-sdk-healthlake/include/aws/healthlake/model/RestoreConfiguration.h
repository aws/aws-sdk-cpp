/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/ContinuousBackupRestoreConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>Specifies the type and parameters for the restore operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/RestoreConfiguration">AWS
 * API Reference</a></p>
 */
class RestoreConfiguration {
 public:
  AWS_HEALTHLAKE_API RestoreConfiguration() = default;
  AWS_HEALTHLAKE_API RestoreConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API RestoreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for restoring from continuous backup to a specific point in
   * time.</p>
   */
  inline const ContinuousBackupRestoreConfiguration& GetContinuousBackupRestoreConfiguration() const {
    return m_continuousBackupRestoreConfiguration;
  }
  inline bool ContinuousBackupRestoreConfigurationHasBeenSet() const { return m_continuousBackupRestoreConfigurationHasBeenSet; }
  template <typename ContinuousBackupRestoreConfigurationT = ContinuousBackupRestoreConfiguration>
  void SetContinuousBackupRestoreConfiguration(ContinuousBackupRestoreConfigurationT&& value) {
    m_continuousBackupRestoreConfigurationHasBeenSet = true;
    m_continuousBackupRestoreConfiguration = std::forward<ContinuousBackupRestoreConfigurationT>(value);
  }
  template <typename ContinuousBackupRestoreConfigurationT = ContinuousBackupRestoreConfiguration>
  RestoreConfiguration& WithContinuousBackupRestoreConfiguration(ContinuousBackupRestoreConfigurationT&& value) {
    SetContinuousBackupRestoreConfiguration(std::forward<ContinuousBackupRestoreConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  ContinuousBackupRestoreConfiguration m_continuousBackupRestoreConfiguration;
  bool m_continuousBackupRestoreConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
